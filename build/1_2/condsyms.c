/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY49527 TY49527;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY49525 TY49525;
typedef struct TY49545 TY49545;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY48011 TY48011;
typedef struct TY48005 TY48005;
typedef struct TNimObject TNimObject;
typedef struct TY49549 TY49549;
typedef struct TY41532 TY41532;
typedef struct TY49523 TY49523;
typedef struct TY49537 TY49537;
typedef struct TY46008 TY46008;
typedef struct TY49541 TY49541;
typedef struct TY10402 TY10402;
typedef struct TY7804 TY7804;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY53079 TY53079;
typedef struct TY45448 TY45448;
typedef struct TY45036 TY45036;
typedef struct TY49547 TY49547;
typedef struct TY49517 TY49517;
typedef struct TY37013 TY37013;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY49527 {
TNimType* m_type;
NI Counter;
TY49525* Data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY48005 {
  TNimObject Sup;
NI Id;
};
struct TY41532 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY49537 {
NU8 K;
NU8 S;
NU8 Flags;
TY49549* T;
TY46008* R;
NI A;
};
struct TY49545 {
  TY48005 Sup;
NU8 Kind;
NU8 Magic;
TY49549* Typ;
TY48011* Name;
TY41532 Info;
TY49545* Owner;
NU32 Flags;
TY49527 Tab;
TY49523* Ast;
NU32 Options;
NI Position;
NI Offset;
TY49537 Loc;
TY49541* Annex;
};
struct TY10402 {
NI Refcount;
TNimType* Typ;
};
typedef N_STDCALL_PTR(void, TY7816) (TY7804* L_7818);
struct TY10418 {
NI Len;
NI Cap;
TY10402** D;
};
struct TY10414 {
NI Counter;
NI Max;
TY10410* Head;
TY10410** Data;
};
struct TY7804 {
void* Debuginfo;
NI32 Lockcount;
NI32 Recursioncount;
NI Owningthread;
NI Locksemaphore;
NI32 Reserved;
};
struct TY10788 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10790 {
TY10418 Zct;
TY10418 Decstack;
TY10414 Cycleroots;
TY10418 Tempstack;
TY7804 Cyclerootslock;
TY7804 Zctlock;
TY10788 Stat;
};
typedef N_STDCALL_PTR(void, TY7820) (TY7804* L_7822);
struct TY53079 {
NI H;
};
struct TY48011 {
  TY48005 Sup;
NimStringDesc* S;
TY48011* Next;
NI H;
};
struct TY45448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY45448 TY45461[12];
typedef NimStringDesc* TY45457[2];
struct TY45036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY45036 TY45054[21];
struct TY49549 {
  TY48005 Sup;
NU8 Kind;
TY49547* Sons;
TY49523* N;
NU8 Flags;
NU8 Callconv;
TY49545* Owner;
TY49545* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY49537 Loc;
};
struct TY49523 {
TY49549* Typ;
NimStringDesc* Comment;
TY41532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY49545* Sym;
} S4;
struct {TY48011* Ident;
} S5;
struct {TY49517* Sons;
} S6;
} KindU;
};
struct TY46008 {
  TNimObject Sup;
TY46008* Left;
TY46008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY37013 {
  TNimObject Sup;
TY37013* Prev;
TY37013* Next;
};
struct TY49541 {
  TY37013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY46008* Name;
TY49523* Path;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY49525 {
  TGenericSeq Sup;
  TY49545* data[SEQ_DECL_SIZE];
};
struct TY49547 {
  TGenericSeq Sup;
  TY49549* data[SEQ_DECL_SIZE];
};
struct TY49517 {
  TGenericSeq Sup;
  TY49523* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Definesymbol_57006)(NimStringDesc* Symbol_57008);
N_NIMCALL(TY48011*, Getident_48016)(NimStringDesc* Identifier_48018);
N_NIMCALL(TY49545*, Strtableget_53069)(TY49527* T_53071, TY48011* Name_53072);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
N_NIMCALL(void, objectInit)(void* Dest_18062, TNimType* Typ_18063);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619);
static N_INLINE(TY10402*, Usrtocell_10836)(void* Usr_10838);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11458)(TY10402* C_11460);
N_NOINLINE(void, Addzct_10825)(TY10418* S_10828, TY10402* C_10829);
N_NIMCALL(void, Strtableadd_53064)(TY49527* T_53067, TY49545* N_53068);
N_NIMCALL(void, Undefsymbol_57009)(NimStringDesc* Symbol_57011);
N_NIMCALL(NIM_BOOL, Isdefined_57012)(TY48011* Symbol_57014);
N_NIMCALL(void, Listsymbols_57015)(void);
N_NIMCALL(TY49545*, Inittabiter_53081)(TY53079* Ti_53084, TY49527* Tab_53085);
N_NIMCALL(void, Messageout_41550)(NimStringDesc* S_41552);
N_NIMCALL(TY49545*, Nextiter_53086)(TY53079* Ti_53089, TY49527* Tab_53090);
N_NIMCALL(NI, Countdefinedsymbols_57017)(void);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, Initdefines_57002)(void);
N_NIMCALL(void, Initstrtable_49744)(TY49527* X_49747);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_17803);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* S_22546);
N_NIMCALL(void, Deinitdefines_57004)(void);
STRING_LITERAL(TMP57104, "-- List of currently defined symbols --", 39);
STRING_LITERAL(TMP57105, "-- End of list --", 17);
STRING_LITERAL(TMP57152, "nimrod", 6);
STRING_LITERAL(TMP57153, "x86", 3);
STRING_LITERAL(TMP57154, "itanium", 7);
STRING_LITERAL(TMP57155, "x8664", 5);
STRING_LITERAL(TMP57156, "msdos", 5);
STRING_LITERAL(TMP57157, "mswindows", 9);
STRING_LITERAL(TMP57158, "win32", 5);
STRING_LITERAL(TMP57159, "unix", 4);
STRING_LITERAL(TMP57160, "posix", 5);
STRING_LITERAL(TMP57161, "sunos", 5);
STRING_LITERAL(TMP57162, "bsd", 3);
STRING_LITERAL(TMP57163, "macintosh", 9);
STRING_LITERAL(TMP57164, "cpu", 3);
extern NIM_CONST TY45461 Cpu_45460;
extern NIM_CONST TY45457 Endiantostr_45456;
extern NIM_CONST TY45054 Os_45053;
TY49527 Gsymbols_57001;
extern TNimType* NTI49527; /* TStrTable */
extern TNimType* NTI49521; /* PSym */
extern TNimType* NTI49545; /* TSym */
extern TY7816 Dl_7815;
extern TY10790 Gch_10810;
extern TY7820 Dl_7819;
extern NU8 Targetcpu_45560;
extern NU8 Targetos_45562;
static N_INLINE(TY10402*, Usrtocell_10836)(void* Usr_10838) {
TY10402* Result_10839;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "usrToCell";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_10839 = 0;
F.line = 100;F.filename = "gc.nim";
Result_10839 = ((TY10402*) ((NI64)((NU64)(((NI) (Usr_10838))) - (NU64)(((NI) (((NI)sizeof(TY10402))))))));
framePtr = framePtr->prev;
return Result_10839;
}
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7208;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "atomicInc";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/systhread.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_7208 = 0;
F.line = 29;F.filename = "systhread.nim";
Result_7208 = __sync_add_and_fetch(Memloc_3004, X_3005);
framePtr = framePtr->prev;
return Result_7208;
}
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010) {
NI Result_7406;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "atomicDec";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/systhread.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_7406 = 0;
F.line = 37;F.filename = "systhread.nim";
Result_7406 = __sync_sub_and_fetch(Memloc_3009, X_3010);
framePtr = framePtr->prev;
return Result_7406;
}
static N_INLINE(void, Rtladdzct_11458)(TY10402* C_11460) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "rtlAddZCT";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 211;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA2;
F.line = 211;F.filename = "gc.nim";
Dl_7815(&Gch_10810.Zctlock);
LA2: ;
F.line = 212;F.filename = "gc.nim";
Addzct_10825(&Gch_10810.Zct, C_11460);
F.line = 213;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 213;F.filename = "gc.nim";
Dl_7819(&Gch_10810.Zctlock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619) {
TY10402* C_11620;
NI LOC4;
TY10402* C_11622;
NI LOC9;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "asgnRefNoCycle";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 244;F.filename = "gc.nim";
if (!!((Src_11619 == NIM_NIL))) goto LA2;
C_11620 = 0;
F.line = 245;F.filename = "gc.nim";
C_11620 = Usrtocell_10836(Src_11619);
F.line = 246;F.filename = "gc.nim";
LOC4 = Atomicinc_3001(&(*C_11620).Refcount, 8);
LA2: ;
F.line = 247;F.filename = "gc.nim";
if (!!(((*Dest_11618) == NIM_NIL))) goto LA6;
C_11622 = 0;
F.line = 248;F.filename = "gc.nim";
C_11622 = Usrtocell_10836((*Dest_11618));
F.line = 249;F.filename = "gc.nim";
LOC9 = Atomicdec_3006(&(*C_11622).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11458(C_11622);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_11618) = Src_11619;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Definesymbol_57006)(NimStringDesc* Symbol_57008) {
TY48011* I_57022;
TY49545* Sym_57023;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "DefineSymbol";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_57022 = 0;
F.line = 27;F.filename = "condsyms.nim";
I_57022 = Getident_48016(Symbol_57008);
Sym_57023 = 0;
F.line = 28;F.filename = "condsyms.nim";
Sym_57023 = Strtableget_53069(&Gsymbols_57001, I_57022);
F.line = 29;F.filename = "condsyms.nim";
if (!(Sym_57023 == NIM_NIL)) goto LA2;
F.line = 30;F.filename = "condsyms.nim";
Sym_57023 = (TY49545*) newObj(NTI49521, sizeof(TY49545));
objectInit(Sym_57023, NTI49545);
F.line = 31;F.filename = "condsyms.nim";
(*Sym_57023).Kind = ((NU8) 1);
F.line = 32;F.filename = "condsyms.nim";
asgnRefNoCycle((void**) &(*Sym_57023).Name, I_57022);
F.line = 33;F.filename = "condsyms.nim";
Strtableadd_53064(&Gsymbols_57001, Sym_57023);
LA2: ;
F.line = 34;F.filename = "condsyms.nim";
(*Sym_57023).Position = 1;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Undefsymbol_57009)(NimStringDesc* Symbol_57011) {
TY49545* Sym_57054;
TY48011* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "UndefSymbol";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Sym_57054 = 0;
F.line = 37;F.filename = "condsyms.nim";
LOC1 = 0;
LOC1 = Getident_48016(Symbol_57011);
Sym_57054 = Strtableget_53069(&Gsymbols_57001, LOC1);
F.line = 38;F.filename = "condsyms.nim";
if (!!((Sym_57054 == NIM_NIL))) goto LA3;
F.line = 38;F.filename = "condsyms.nim";
(*Sym_57054).Position = 0;
LA3: ;
framePtr = framePtr->prev;
}
N_NIMCALL(NIM_BOOL, Isdefined_57012)(TY48011* Symbol_57014) {
NIM_BOOL Result_57069;
TY49545* Sym_57070;
NIM_BOOL LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "isDefined";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_57069 = 0;
Sym_57070 = 0;
F.line = 41;F.filename = "condsyms.nim";
Sym_57070 = Strtableget_53069(&Gsymbols_57001, Symbol_57014);
F.line = 42;F.filename = "condsyms.nim";
LOC1 = !((Sym_57070 == NIM_NIL));
if (!(LOC1)) goto LA2;
LOC1 = ((*Sym_57070).Position == 1);
LA2: ;
Result_57069 = LOC1;
framePtr = framePtr->prev;
return Result_57069;
}
N_NIMCALL(void, Listsymbols_57015)(void) {
TY53079 It_57086;
TY49545* S_57088;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ListSymbols";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&It_57086, 0, sizeof(It_57086));
S_57088 = 0;
F.line = 46;F.filename = "condsyms.nim";
S_57088 = Inittabiter_53081(&It_57086, &Gsymbols_57001);
F.line = 47;F.filename = "condsyms.nim";
Messageout_41550(((NimStringDesc*) &TMP57104));
F.line = 48;F.filename = "condsyms.nim";
while (1) {
if (!!((S_57088 == NIM_NIL))) goto LA1;
F.line = 49;F.filename = "condsyms.nim";
if (!((*S_57088).Position == 1)) goto LA3;
F.line = 49;F.filename = "condsyms.nim";
Messageout_41550((*(*S_57088).Name).S);
LA3: ;
F.line = 50;F.filename = "condsyms.nim";
S_57088 = Nextiter_53086(&It_57086, &Gsymbols_57001);
} LA1: ;
F.line = 51;F.filename = "condsyms.nim";
Messageout_41550(((NimStringDesc*) &TMP57105));
framePtr = framePtr->prev;
}
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604) {
NI Result_5605;
NIM_BOOL LOC2;
Result_5605 = 0;
Result_5605 = (NI64)((NU64)(A_5603) + (NU64)(B_5604));
LOC2 = (0 <= (NI64)(Result_5605 ^ A_5603));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_5605 ^ B_5604));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5605;
}
N_NIMCALL(NI, Countdefinedsymbols_57017)(void) {
NI Result_57108;
TY53079 It_57109;
TY49545* S_57111;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "countDefinedSymbols";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_57108 = 0;
memset((void*)&It_57109, 0, sizeof(It_57109));
S_57111 = 0;
F.line = 55;F.filename = "condsyms.nim";
S_57111 = Inittabiter_53081(&It_57109, &Gsymbols_57001);
F.line = 56;F.filename = "condsyms.nim";
Result_57108 = 0;
F.line = 57;F.filename = "condsyms.nim";
while (1) {
if (!!((S_57111 == NIM_NIL))) goto LA1;
F.line = 58;F.filename = "condsyms.nim";
if (!((*S_57111).Position == 1)) goto LA3;
F.line = 58;F.filename = "condsyms.nim";
Result_57108 = addInt(Result_57108, 1);
LA3: ;
F.line = 59;F.filename = "condsyms.nim";
S_57111 = Nextiter_53086(&It_57109, &Gsymbols_57001);
} LA1: ;
framePtr = framePtr->prev;
return Result_57108;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendString";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 150;F.filename = "sysstr.nim";
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((NI32) ((NI64)((NI64)((*Src_17193).Sup.len + 1) * 1))));
F.line = 151;F.filename = "sysstr.nim";
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Initdefines_57002)(void) {
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "InitDefines";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 62;F.filename = "condsyms.nim";
Initstrtable_49744(&Gsymbols_57001);
F.line = 63;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57152));
F.line = 66;F.filename = "condsyms.nim";
switch (Targetcpu_45560) {
case ((NU8) 1):
F.line = 67;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57153));
break;
case ((NU8) 7):
F.line = 68;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57154));
break;
case ((NU8) 8):
F.line = 69;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57155));
break;
default:
break;
}
F.line = 72;F.filename = "condsyms.nim";
switch (Targetos_45562) {
case ((NU8) 1):
F.line = 74;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57156));
break;
case ((NU8) 2):
F.line = 76;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57157));
F.line = 77;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57158));
break;
case ((NU8) 4):
case ((NU8) 5):
case ((NU8) 6):
case ((NU8) 8):
case ((NU8) 13):
case ((NU8) 14):
case ((NU8) 16):
case ((NU8) 12):
F.line = 80;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57159));
F.line = 81;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57160));
break;
case ((NU8) 7):
F.line = 83;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57161));
F.line = 84;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57159));
F.line = 85;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57160));
break;
case ((NU8) 9):
case ((NU8) 10):
case ((NU8) 11):
F.line = 87;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57159));
F.line = 88;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57162));
F.line = 89;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57160));
break;
case ((NU8) 18):
F.line = 91;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57163));
break;
case ((NU8) 19):
F.line = 93;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57163));
F.line = 94;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57159));
F.line = 95;F.filename = "condsyms.nim";
Definesymbol_57006(((NimStringDesc*) &TMP57160));
break;
default:
break;
}
F.line = 98;F.filename = "condsyms.nim";
LOC1 = 0;
if (Targetcpu_45560 < 1 || Targetcpu_45560 > 12) raiseIndexError();
LOC2 = 0;
LOC2 = nimIntToStr(Cpu_45460[(Targetcpu_45560)-1].Bit);
LOC1 = rawNewString(LOC2->Sup.len + 3);
appendString(LOC1, ((NimStringDesc*) &TMP57164));
appendString(LOC1, LOC2);
Definesymbol_57006(LOC1);
F.line = 99;F.filename = "condsyms.nim";
if (Targetcpu_45560 < 1 || Targetcpu_45560 > 12) raiseIndexError();
LOC3 = 0;
LOC3 = nsuNormalize(Endiantostr_45456[(Cpu_45460[(Targetcpu_45560)-1].Endian)-0]);
Definesymbol_57006(LOC3);
F.line = 100;F.filename = "condsyms.nim";
if (Targetcpu_45560 < 1 || Targetcpu_45560 > 12) raiseIndexError();
Definesymbol_57006(Cpu_45460[(Targetcpu_45560)-1].Name);
F.line = 101;F.filename = "condsyms.nim";
if (Targetos_45562 < 1 || Targetos_45562 > 21) raiseIndexError();
Definesymbol_57006(Os_45053[(Targetos_45562)-1].Name);
framePtr = framePtr->prev;
}
N_NIMCALL(void, Deinitdefines_57004)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "DeinitDefines";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}
N_NOINLINE(void, condsymsInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "condsyms";
F.prev = framePtr;
F.filename = "rod/condsyms.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Gsymbols_57001.m_type = NTI49527;
framePtr = framePtr->prev;
}

