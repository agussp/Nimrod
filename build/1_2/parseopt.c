/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY189404 TY189404;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY189404 {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 TY20402[32];
N_NIMCALL(void, Initoptparser_189415)(NimStringDesc* Cmdline_189417, TY189404* Result);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11626, void* Src_11627);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(NI, nosparamCount)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_24283)(NimStringDesc* S_24285);
N_NIMCALL(NimStringDesc*, nosparamStr)(NI I_35426);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, Init_189454)(NimStringDesc* Cmdline_189456, TY189404* Result);
N_NIMCALL(NI, Parseword_189612)(NimStringDesc* S_189614, NI I_189615, NimStringDesc** W_189617, TY20402 Delim_189619);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(void, Handleshortoption_189698)(TY189404* P_189701);
N_NIMCALL(void, nponext)(TY189404* P_189796);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_17225, NI Newlen_17226);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY189404* P_189930);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* S_22981, NIM_BOOL Leading_22982, NIM_BOOL Trailing_22983);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1752, NI First_1753, NI Last_1754);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NIMCALL(NimStringDesc*, Getrestofcommandline_189934)(TY189404* P_189936);
STRING_LITERAL(TMP189611, "", 0);
static NIM_CONST TY20402 TMP189792 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;static NIM_CONST TY20402 TMP189927 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;extern TNimType* NTI189404; /* TOptParser */
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
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendChar";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 154;F.filename = "sysstr.nim";
(*Dest_17209).data[((*Dest_17209).Sup.len)-0] = C_17210;
F.line = 155;F.filename = "sysstr.nim";
(*Dest_17209).data[((NI64)((*Dest_17209).Sup.len + 1))-0] = 0;
F.line = 156;F.filename = "sysstr.nim";
(*Dest_17209).Sup.len += 1;
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
N_NIMCALL(void, Initoptparser_189415)(NimStringDesc* Cmdline_189417, TY189404* Result) {
NI I_189441;
NI HEX3Atmp_189602;
NI Res_189604;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "initOptParser";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/parseopt.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)Result, 0, sizeof((*Result)));
(*Result).Sup.m_type = NTI189404;
F.line = 44;F.filename = "parseopt.nim";
(*Result).Pos = 0;
F.line = 45;F.filename = "parseopt.nim";
(*Result).Inshortstate = NIM_FALSE;
F.line = 46;F.filename = "parseopt.nim";
if (!!(((Cmdline_189417) && (Cmdline_189417)->Sup.len == 0))) goto LA2;
F.line = 47;F.filename = "parseopt.nim";
unsureAsgnRef((void**) &(*Result).Cmd, copyString(Cmdline_189417));
goto LA1;
LA2: ;
F.line = 49;F.filename = "parseopt.nim";
unsureAsgnRef((void**) &(*Result).Cmd, copyString(((NimStringDesc*) &TMP189611)));
I_189441 = 0;
HEX3Atmp_189602 = 0;
F.line = 50;F.filename = "parseopt.nim";
HEX3Atmp_189602 = nosparamCount();
Res_189604 = 0;
F.line = 1011;F.filename = "system.nim";
Res_189604 = 1;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_189604 <= HEX3Atmp_189602)) goto LA4;
F.line = 1011;F.filename = "system.nim";
I_189441 = Res_189604;
F.line = 51;F.filename = "parseopt.nim";
LOC5 = 0;
LOC6 = 0;
LOC6 = nosparamStr(I_189441);
LOC7 = 0;
LOC7 = Quoteifcontainswhite_24283(LOC6);
LOC5 = rawNewString((*Result).Cmd->Sup.len + LOC7->Sup.len + 1);
appendString(LOC5, (*Result).Cmd);
appendString(LOC5, LOC7);
appendChar(LOC5, 32);
unsureAsgnRef((void**) &(*Result).Cmd, LOC5);
F.line = 1014;F.filename = "system.nim";
Res_189604 = addInt(Res_189604, 1);
} LA4: ;
LA1: ;
F.line = 52;F.filename = "parseopt.nim";
(*Result).Kind = ((NU8) 0);
F.line = 53;F.filename = "parseopt.nim";
unsureAsgnRef((void**) &(*Result).Key, copyString(((NimStringDesc*) &TMP189611)));
F.line = 54;F.filename = "parseopt.nim";
unsureAsgnRef((void**) &(*Result).Val, copyString(((NimStringDesc*) &TMP189611)));
framePtr = framePtr->prev;
}
N_NIMCALL(void, Init_189454)(NimStringDesc* Cmdline_189456, TY189404* Result) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "init";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/parseopt.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)Result, 0, sizeof((*Result)));
(*Result).Sup.m_type = NTI189404;
F.line = 58;F.filename = "parseopt.nim";
Initoptparser_189415(Cmdline_189456, Result);
framePtr = framePtr->prev;
}
N_NIMCALL(NI, Parseword_189612)(NimStringDesc* S_189614, NI I_189615, NimStringDesc** W_189617, TY20402 Delim_189619) {
NI Result_189620;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parseWord";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/parseopt.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_189620 = 0;
F.line = 62;F.filename = "parseopt.nim";
Result_189620 = I_189615;
F.line = 63;F.filename = "parseopt.nim";
if ((NU)(Result_189620) > (NU)(S_189614->Sup.len)) raiseIndexError();
if (!((NU8)(S_189614->data[Result_189620]) == (NU8)(34))) goto LA2;
F.line = 64;F.filename = "parseopt.nim";
Result_189620 = addInt(Result_189620, 1);
F.line = 65;F.filename = "parseopt.nim";
while (1) {
if ((NU)(Result_189620) > (NU)(S_189614->Sup.len)) raiseIndexError();
if (!!((((NU8)(S_189614->data[Result_189620])) == ((NU8)(0)) || ((NU8)(S_189614->data[Result_189620])) == ((NU8)(34))))) goto LA4;
F.line = 66;F.filename = "parseopt.nim";
if ((NU)(Result_189620) > (NU)(S_189614->Sup.len)) raiseIndexError();
(*W_189617) = addChar((*W_189617), S_189614->data[Result_189620]);
F.line = 67;F.filename = "parseopt.nim";
Result_189620 = addInt(Result_189620, 1);
} LA4: ;
F.line = 68;F.filename = "parseopt.nim";
if ((NU)(Result_189620) > (NU)(S_189614->Sup.len)) raiseIndexError();
if (!((NU8)(S_189614->data[Result_189620]) == (NU8)(34))) goto LA6;
F.line = 68;F.filename = "parseopt.nim";
Result_189620 = addInt(Result_189620, 1);
LA6: ;
goto LA1;
LA2: ;
F.line = 70;F.filename = "parseopt.nim";
while (1) {
if ((NU)(Result_189620) > (NU)(S_189614->Sup.len)) raiseIndexError();
if (!!(((Delim_189619[((NU8)(S_189614->data[Result_189620]))/8] &(1<<(((NU8)(S_189614->data[Result_189620]))%8)))!=0))) goto LA8;
F.line = 71;F.filename = "parseopt.nim";
if ((NU)(Result_189620) > (NU)(S_189614->Sup.len)) raiseIndexError();
(*W_189617) = addChar((*W_189617), S_189614->data[Result_189620]);
F.line = 72;F.filename = "parseopt.nim";
Result_189620 = addInt(Result_189620, 1);
} LA8: ;
LA1: ;
framePtr = framePtr->prev;
return Result_189620;
}
N_NIMCALL(void, Handleshortoption_189698)(TY189404* P_189701) {
NI I_189702;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "handleShortOption";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/parseopt.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_189702 = 0;
F.line = 75;F.filename = "parseopt.nim";
I_189702 = (*P_189701).Pos;
F.line = 76;F.filename = "parseopt.nim";
(*P_189701).Kind = ((NU8) 3);
F.line = 77;F.filename = "parseopt.nim";
if ((NU)(I_189702) > (NU)((*P_189701).Cmd->Sup.len)) raiseIndexError();
(*P_189701).Key = addChar((*P_189701).Key, (*P_189701).Cmd->data[I_189702]);
F.line = 78;F.filename = "parseopt.nim";
I_189702 = addInt(I_189702, 1);
F.line = 79;F.filename = "parseopt.nim";
(*P_189701).Inshortstate = NIM_TRUE;
F.line = 80;F.filename = "parseopt.nim";
while (1) {
if ((NU)(I_189702) > (NU)((*P_189701).Cmd->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_189701).Cmd->data[I_189702])) == ((NU8)(9)) || ((NU8)((*P_189701).Cmd->data[I_189702])) == ((NU8)(32)))) goto LA1;
F.line = 81;F.filename = "parseopt.nim";
I_189702 = addInt(I_189702, 1);
F.line = 82;F.filename = "parseopt.nim";
(*P_189701).Inshortstate = NIM_FALSE;
} LA1: ;
F.line = 83;F.filename = "parseopt.nim";
if ((NU)(I_189702) > (NU)((*P_189701).Cmd->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_189701).Cmd->data[I_189702])) == ((NU8)(58)) || ((NU8)((*P_189701).Cmd->data[I_189702])) == ((NU8)(61)))) goto LA3;
F.line = 84;F.filename = "parseopt.nim";
I_189702 = addInt(I_189702, 1);
F.line = 85;F.filename = "parseopt.nim";
(*P_189701).Inshortstate = NIM_FALSE;
F.line = 86;F.filename = "parseopt.nim";
while (1) {
if ((NU)(I_189702) > (NU)((*P_189701).Cmd->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_189701).Cmd->data[I_189702])) == ((NU8)(9)) || ((NU8)((*P_189701).Cmd->data[I_189702])) == ((NU8)(32)))) goto LA5;
F.line = 86;F.filename = "parseopt.nim";
I_189702 = addInt(I_189702, 1);
} LA5: ;
F.line = 87;F.filename = "parseopt.nim";
I_189702 = Parseword_189612((*P_189701).Cmd, I_189702, &(*P_189701).Val, TMP189792);
LA3: ;
F.line = 88;F.filename = "parseopt.nim";
if ((NU)(I_189702) > (NU)((*P_189701).Cmd->Sup.len)) raiseIndexError();
if (!((NU8)((*P_189701).Cmd->data[I_189702]) == (NU8)(0))) goto LA7;
F.line = 88;F.filename = "parseopt.nim";
(*P_189701).Inshortstate = NIM_FALSE;
LA7: ;
F.line = 89;F.filename = "parseopt.nim";
(*P_189701).Pos = I_189702;
framePtr = framePtr->prev;
}
N_NIMCALL(void, nponext)(TY189404* P_189796) {
NI I_189797;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "next";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/parseopt.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_189797 = 0;
F.line = 95;F.filename = "parseopt.nim";
I_189797 = (*P_189796).Pos;
F.line = 96;F.filename = "parseopt.nim";
while (1) {
if ((NU)(I_189797) > (NU)((*P_189796).Cmd->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_189796).Cmd->data[I_189797])) == ((NU8)(9)) || ((NU8)((*P_189796).Cmd->data[I_189797])) == ((NU8)(32)))) goto LA1;
F.line = 96;F.filename = "parseopt.nim";
I_189797 = addInt(I_189797, 1);
} LA1: ;
F.line = 97;F.filename = "parseopt.nim";
(*P_189796).Pos = I_189797;
F.line = 98;F.filename = "parseopt.nim";
(*P_189796).Key = setLengthStr((*P_189796).Key, 0);
F.line = 99;F.filename = "parseopt.nim";
(*P_189796).Val = setLengthStr((*P_189796).Val, 0);
F.line = 100;F.filename = "parseopt.nim";
if (!(*P_189796).Inshortstate) goto LA3;
F.line = 101;F.filename = "parseopt.nim";
Handleshortoption_189698(P_189796);
F.line = 102;F.filename = "parseopt.nim";
goto BeforeRet;
LA3: ;
F.line = 103;F.filename = "parseopt.nim";
if ((NU)(I_189797) > (NU)((*P_189796).Cmd->Sup.len)) raiseIndexError();
switch (((NU8)((*P_189796).Cmd->data[I_189797]))) {
case 0:
F.line = 105;F.filename = "parseopt.nim";
(*P_189796).Kind = ((NU8) 0);
break;
case 45:
F.line = 107;F.filename = "parseopt.nim";
I_189797 = addInt(I_189797, 1);
F.line = 108;F.filename = "parseopt.nim";
if ((NU)(I_189797) > (NU)((*P_189796).Cmd->Sup.len)) raiseIndexError();
if (!((NU8)((*P_189796).Cmd->data[I_189797]) == (NU8)(45))) goto LA6;
F.line = 109;F.filename = "parseopt.nim";
(*P_189796).Kind = ((NU8) 2);
F.line = 110;F.filename = "parseopt.nim";
I_189797 = addInt(I_189797, 1);
F.line = 111;F.filename = "parseopt.nim";
I_189797 = Parseword_189612((*P_189796).Cmd, I_189797, &(*P_189796).Key, TMP189927);
F.line = 112;F.filename = "parseopt.nim";
while (1) {
if ((NU)(I_189797) > (NU)((*P_189796).Cmd->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_189796).Cmd->data[I_189797])) == ((NU8)(9)) || ((NU8)((*P_189796).Cmd->data[I_189797])) == ((NU8)(32)))) goto LA8;
F.line = 112;F.filename = "parseopt.nim";
I_189797 = addInt(I_189797, 1);
} LA8: ;
F.line = 113;F.filename = "parseopt.nim";
if ((NU)(I_189797) > (NU)((*P_189796).Cmd->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_189796).Cmd->data[I_189797])) == ((NU8)(58)) || ((NU8)((*P_189796).Cmd->data[I_189797])) == ((NU8)(61)))) goto LA10;
F.line = 114;F.filename = "parseopt.nim";
I_189797 = addInt(I_189797, 1);
F.line = 115;F.filename = "parseopt.nim";
while (1) {
if ((NU)(I_189797) > (NU)((*P_189796).Cmd->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_189796).Cmd->data[I_189797])) == ((NU8)(9)) || ((NU8)((*P_189796).Cmd->data[I_189797])) == ((NU8)(32)))) goto LA12;
F.line = 115;F.filename = "parseopt.nim";
I_189797 = addInt(I_189797, 1);
} LA12: ;
F.line = 116;F.filename = "parseopt.nim";
(*P_189796).Pos = Parseword_189612((*P_189796).Cmd, I_189797, &(*P_189796).Val, TMP189792);
goto LA9;
LA10: ;
F.line = 118;F.filename = "parseopt.nim";
(*P_189796).Pos = I_189797;
LA9: ;
goto LA5;
LA6: ;
F.line = 120;F.filename = "parseopt.nim";
(*P_189796).Pos = I_189797;
F.line = 121;F.filename = "parseopt.nim";
Handleshortoption_189698(P_189796);
LA5: ;
break;
default:
F.line = 123;F.filename = "parseopt.nim";
(*P_189796).Kind = ((NU8) 1);
F.line = 124;F.filename = "parseopt.nim";
(*P_189796).Pos = Parseword_189612((*P_189796).Cmd, I_189797, &(*P_189796).Key, TMP189792);
break;
}
BeforeRet: ;
framePtr = framePtr->prev;
}
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804) {
NI Result_5805;
NIM_BOOL LOC2;
Result_5805 = 0;
Result_5805 = (NI64)((NU64)(A_5803) - (NU64)(B_5804));
LOC2 = (0 <= (NI64)(Result_5805 ^ A_5803));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_5805 ^ (NI64)((NU64) ~(B_5804))));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5805;
}
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY189404* P_189930) {
NimStringDesc* Result_189931;
NimStringDesc* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "cmdLineRest";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/parseopt.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_189931 = 0;
F.line = 129;F.filename = "parseopt.nim";
LOC1 = 0;
LOC1 = copyStrLast((*P_189930).Cmd, (*P_189930).Pos, subInt((*P_189930).Cmd->Sup.len, 1));
Result_189931 = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
framePtr = framePtr->prev;
return Result_189931;
}
N_NIMCALL(NimStringDesc*, Getrestofcommandline_189934)(TY189404* P_189936) {
NimStringDesc* Result_189937;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getRestOfCommandLine";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/parseopt.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_189937 = 0;
F.line = 133;F.filename = "parseopt.nim";
Result_189937 = npocmdLineRest(P_189936);
framePtr = framePtr->prev;
return Result_189937;
}
N_NOINLINE(void, parseoptInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parseopt";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/parseopt.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

