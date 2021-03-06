#
#
#           The Nimrod Compiler
#        (c) Copyright 2012 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

# This module implements lookup helpers.

import 
  intsets, ast, astalgo, idents, semdata, types, msgs, options, rodread, 
  renderer, wordrecg, idgen

proc considerAcc*(n: PNode): PIdent = 
  case n.kind
  of nkIdent: result = n.ident
  of nkSym: result = n.sym.name
  of nkAccQuoted:
    case n.len
    of 0: GlobalError(n.info, errIdentifierExpected, renderTree(n))
    of 1: result = considerAcc(n.sons[0])
    else:
      var id = ""
      for i in 0.. <n.len:
        let x = n.sons[i]
        case x.kind
        of nkIdent: id.add(x.ident.s)
        of nkSym: id.add(x.sym.name.s)
        else: GlobalError(n.info, errIdentifierExpected, renderTree(n))
      result = getIdent(id)
  else:
    GlobalError(n.info, errIdentifierExpected, renderTree(n))
 
proc errorSym*(c: PContext, n: PNode): PSym =
  ## creates an error symbol to avoid cascading errors (for IDE support)
  var m = n
  # ensure that 'considerAcc' can't fail:
  if m.kind == nkDotExpr: m = m.sons[1]
  let ident = if m.kind in {nkIdent, nkSym, nkAccQuoted}: 
      considerAcc(m)
    else:
      getIdent("err:" & renderTree(m))
  result = newSym(skError, ident, getCurrOwner(), n.info)
  result.typ = errorType(c)
  incl(result.flags, sfDiscardable)
  # pretend it's imported from some unknown module to prevent cascading errors:
  SymTabAddAt(c.tab, result, ast.ImportTablePos)

type 
  TOverloadIterMode* = enum 
    oimDone, oimNoQualifier, oimSelfModule, oimOtherModule, oimSymChoice,
    oimSymChoiceLocalLookup
  TOverloadIter*{.final.} = object 
    stackPtr*: int
    it*: TIdentIter
    m*: PSym
    mode*: TOverloadIterMode
    inSymChoice: TIntSet

proc getSymRepr*(s: PSym): string = 
  case s.kind
  of skProc, skMethod, skConverter, skIterator: result = getProcHeader(s)
  else: result = s.name.s
  
proc CloseScope*(tab: var TSymTab) = 
  # check if all symbols have been used and defined:
  if tab.tos > len(tab.stack): 
    InternalError("CloseScope")
    return
  var it: TTabIter
  var s = InitTabIter(it, tab.stack[tab.tos-1])
  var missingImpls = 0
  while s != nil:
    if sfForward in s.flags:
      # too many 'implementation of X' errors are annoying
      # and slow 'suggest' down:
      if missingImpls == 0:
        LocalError(s.info, errImplOfXexpected, getSymRepr(s))
      inc missingImpls
    elif {sfUsed, sfExported} * s.flags == {} and optHints in s.options: 
      # BUGFIX: check options in s!
      if s.kind notin {skForVar, skParam, skMethod, skUnknown, skGenericParam}:
        Message(s.info, hintXDeclaredButNotUsed, getSymRepr(s))
    s = NextIter(it, tab.stack[tab.tos-1])
  astalgo.rawCloseScope(tab)

proc WrongRedefinition*(info: TLineInfo, s: string) =
  if gCmd != cmdInteractive:
    localError(info, errAttemptToRedefine, s)

proc AddSym*(t: var TStrTable, n: PSym) = 
  if StrTableIncl(t, n): WrongRedefinition(n.info, n.name.s)
  
proc addDecl*(c: PContext, sym: PSym) = 
  if SymTabAddUnique(c.tab, sym) == Failure: 
    WrongRedefinition(sym.info, sym.Name.s)

proc addPrelimDecl*(c: PContext, sym: PSym) =
  discard SymTabAddUnique(c.tab, sym)

proc addDeclAt*(c: PContext, sym: PSym, at: Natural) = 
  if SymTabAddUniqueAt(c.tab, sym, at) == Failure: 
    WrongRedefinition(sym.info, sym.Name.s)

proc AddInterfaceDeclAux(c: PContext, sym: PSym) = 
  if sfExported in sym.flags:
    # add to interface:
    if c.module != nil: StrTableAdd(c.module.tab, sym)
    else: InternalError(sym.info, "AddInterfaceDeclAux")

proc addInterfaceDeclAt*(c: PContext, sym: PSym, at: Natural) = 
  addDeclAt(c, sym, at)
  AddInterfaceDeclAux(c, sym)
  
proc addOverloadableSymAt*(c: PContext, fn: PSym, at: Natural) = 
  if fn.kind notin OverloadableSyms: 
    InternalError(fn.info, "addOverloadableSymAt")
    return
  var check = StrTableGet(c.tab.stack[at], fn.name)
  if check != nil and check.Kind notin OverloadableSyms: 
    WrongRedefinition(fn.info, fn.Name.s)
  else:
    SymTabAddAt(c.tab, fn, at)
  
proc addInterfaceDecl*(c: PContext, sym: PSym) = 
  # it adds the symbol to the interface if appropriate
  addDecl(c, sym)
  AddInterfaceDeclAux(c, sym)

proc addInterfaceOverloadableSymAt*(c: PContext, sym: PSym, at: int) = 
  # it adds the symbol to the interface if appropriate
  addOverloadableSymAt(c, sym, at)
  AddInterfaceDeclAux(c, sym)

proc lookUp*(c: PContext, n: PNode): PSym = 
  # Looks up a symbol. Generates an error in case of nil.
  case n.kind
  of nkIdent:
    result = SymtabGet(c.Tab, n.ident)
    if result == nil: 
      LocalError(n.info, errUndeclaredIdentifier, n.ident.s)
      result = errorSym(c, n)
  of nkSym:
    result = n.sym
  of nkAccQuoted:
    var ident = considerAcc(n)
    result = SymtabGet(c.Tab, ident)
    if result == nil:
      LocalError(n.info, errUndeclaredIdentifier, ident.s)
      result = errorSym(c, n)
  else:
    InternalError(n.info, "lookUp")
    return
  if Contains(c.AmbiguousSymbols, result.id): 
    LocalError(n.info, errUseQualifier, result.name.s)
  if result.kind == skStub: loadStub(result)
  
type 
  TLookupFlag* = enum 
    checkAmbiguity, checkUndeclared

proc QualifiedLookUp*(c: PContext, n: PNode, flags = {checkUndeclared}): PSym = 
  case n.kind
  of nkIdent, nkAccQuoted:
    var ident = considerAcc(n)
    result = SymtabGet(c.Tab, ident)
    if result == nil and checkUndeclared in flags: 
      LocalError(n.info, errUndeclaredIdentifier, ident.s)
      result = errorSym(c, n)
    elif checkAmbiguity in flags and result != nil and 
        Contains(c.AmbiguousSymbols, result.id): 
      LocalError(n.info, errUseQualifier, ident.s)
  of nkSym:
    result = n.sym
    if checkAmbiguity in flags and Contains(c.AmbiguousSymbols, result.id): 
      LocalError(n.info, errUseQualifier, n.sym.name.s)
  of nkDotExpr: 
    result = nil
    var m = qualifiedLookUp(c, n.sons[0], flags*{checkUndeclared})
    if (m != nil) and (m.kind == skModule): 
      var ident: PIdent = nil
      if n.sons[1].kind == nkIdent: 
        ident = n.sons[1].ident
      elif n.sons[1].kind == nkAccQuoted: 
        ident = considerAcc(n.sons[1])
      if ident != nil: 
        if m == c.module: 
          result = StrTableGet(c.tab.stack[ModuleTablePos], ident)
        else: 
          result = StrTableGet(m.tab, ident)
        if result == nil and checkUndeclared in flags: 
          LocalError(n.sons[1].info, errUndeclaredIdentifier, ident.s)
          result = errorSym(c, n.sons[1])
      elif checkUndeclared in flags:
        LocalError(n.sons[1].info, errIdentifierExpected, 
                   renderTree(n.sons[1]))
        result = errorSym(c, n.sons[1])
  else:
    result = nil
  if result != nil and result.kind == skStub: loadStub(result)
  
proc InitOverloadIter*(o: var TOverloadIter, c: PContext, n: PNode): PSym =
  case n.kind
  of nkIdent, nkAccQuoted:
    var ident = considerAcc(n)
    o.stackPtr = c.tab.tos
    o.mode = oimNoQualifier
    while result == nil:
      dec(o.stackPtr)
      if o.stackPtr < 0: break
      result = InitIdentIter(o.it, c.tab.stack[o.stackPtr], ident)
  of nkSym:
    result = n.sym
    o.mode = oimDone
  of nkDotExpr: 
    o.mode = oimOtherModule
    o.m = qualifiedLookUp(c, n.sons[0])
    if o.m != nil and o.m.kind == skModule:
      var ident: PIdent = nil
      if n.sons[1].kind == nkIdent: 
        ident = n.sons[1].ident
      elif n.sons[1].kind == nkAccQuoted:
        ident = considerAcc(n.sons[1])
      if ident != nil: 
        if o.m == c.module: 
          # a module may access its private members:
          result = InitIdentIter(o.it, c.tab.stack[ModuleTablePos], ident)
          o.mode = oimSelfModule
        else: 
          result = InitIdentIter(o.it, o.m.tab, ident)
      else: 
        LocalError(n.sons[1].info, errIdentifierExpected, 
                   renderTree(n.sons[1]))
        result = errorSym(c, n.sons[1])
  of nkClosedSymChoice, nkOpenSymChoice:
    o.mode = oimSymChoice
    result = n.sons[0].sym
    o.stackPtr = 1
    o.inSymChoice = initIntSet()
    Incl(o.inSymChoice, result.id)
  else: nil
  if result != nil and result.kind == skStub: loadStub(result)

proc lastOverloadScope*(o: TOverloadIter): int =
  case o.mode
  of oimNoQualifier: result = o.stackPtr
  of oimSelfModule:  result = ModuleTablePos
  of oimOtherModule: result = ImportTablePos
  else: result = -1
  
proc nextOverloadIter*(o: var TOverloadIter, c: PContext, n: PNode): PSym = 
  case o.mode
  of oimDone: 
    result = nil
  of oimNoQualifier: 
    if o.stackPtr >= 0: 
      result = nextIdentIter(o.it, c.tab.stack[o.stackPtr])
      while result == nil: 
        dec(o.stackPtr)
        if o.stackPtr < 0: break 
        result = InitIdentIter(o.it, c.tab.stack[o.stackPtr], o.it.name) 
        # BUGFIX: o.it.name <-> n.ident
    else: 
      result = nil
  of oimSelfModule: 
    result = nextIdentIter(o.it, c.tab.stack[ModuleTablePos])
  of oimOtherModule: 
    result = nextIdentIter(o.it, o.m.tab)
  of oimSymChoice: 
    if o.stackPtr < sonsLen(n): 
      result = n.sons[o.stackPtr].sym
      Incl(o.inSymChoice, result.id)
      inc(o.stackPtr)
    elif n.kind == nkOpenSymChoice:
      # try 'local' symbols too for Koenig's lookup:
      o.mode = oimSymChoiceLocalLookup
      o.stackPtr = c.tab.tos-1
      result = FirstIdentExcluding(o.it, c.tab.stack[o.stackPtr], 
                                   n.sons[0].sym.name, o.inSymChoice)
      while result == nil:
        dec(o.stackPtr)
        if o.stackPtr < 0: break 
        result = FirstIdentExcluding(o.it, c.tab.stack[o.stackPtr], 
                                     n.sons[0].sym.name, o.inSymChoice)
  of oimSymChoiceLocalLookup:
    result = nextIdentExcluding(o.it, c.tab.stack[o.stackPtr], o.inSymChoice)
    while result == nil:
      dec(o.stackPtr)
      if o.stackPtr < 0: break 
      result = FirstIdentExcluding(o.it, c.tab.stack[o.stackPtr], 
                                   n.sons[0].sym.name, o.inSymChoice)
  
  if result != nil and result.kind == skStub: loadStub(result)
  
