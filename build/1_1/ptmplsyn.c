/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY84009 TY84009;
typedef struct TY68013 TY68013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY41532 TY41532;
typedef struct TY49523 TY49523;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY49549 TY49549;
typedef struct TY49545 TY49545;
typedef struct TY48011 TY48011;
typedef struct TY49517 TY49517;
typedef struct TY48005 TY48005;
typedef struct TY49547 TY49547;
typedef struct TY49537 TY49537;
typedef struct TY46008 TY46008;
typedef struct TY49527 TY49527;
typedef struct TY49525 TY49525;
typedef struct TY49541 TY49541;
typedef struct TY37013 TY37013;
typedef NU8 TY20402[32];
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY41532 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY84009 {
TY68013* Inp;
NU8 State;
TY41532 Info;
NI Indent;
NI Par;
NimStringDesc* X;
TY68013* Outp;
NIM_CHAR Subschar;
NIM_CHAR Nimdirective;
NimStringDesc* Emit;
NimStringDesc* Conc;
NimStringDesc* Tostr;
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
struct TY68013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY48005 {
  TNimObject Sup;
NI Id;
};
struct TY49537 {
NU8 K;
NU8 S;
NU8 Flags;
TY49549* T;
TY46008* R;
NI A;
};
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
struct TY49527 {
TNimType* m_type;
NI Counter;
TY49525* Data;
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
struct TY48011 {
  TY48005 Sup;
NimStringDesc* S;
TY48011* Next;
NI H;
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
struct TY49517 {
  TGenericSeq Sup;
  TY49523* data[SEQ_DECL_SIZE];
};
struct TY49547 {
  TGenericSeq Sup;
  TY49549* data[SEQ_DECL_SIZE];
};
struct TY49525 {
  TGenericSeq Sup;
  TY49545* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Newline_84026)(TY84009* P_84029);
N_NIMCALL(void, Llstreamwrite_68054)(TY68013* S_68056, NimStringDesc* Data_68057);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI Count_23750, NIM_CHAR C_23751);
N_NIMCALL(void, Parseline_84033)(TY84009* P_84036);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NU8, Whichkeyword_66468)(NimStringDesc* Id_66470);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
static N_INLINE(NI, chckRange)(NI I_4610, NI A_4611, NI B_4612);
N_NOINLINE(void, raiseRangeError)(NI64 Val_5218);
N_NIMCALL(void, Limessage_41562)(TY41532 Info_41564, NU8 Msg_41565, NimStringDesc* Arg_41566);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_23450, NI Len_23451);
N_NIMCALL(void, Llstreamwrite_68058)(TY68013* S_68060, NIM_CHAR Data_68061);
N_NIMCALL(TY68013*, Filtertmpl_84001)(TY68013* Stdin_84003, NimStringDesc* Filename_84004, TY49523* Call_84005);
N_NIMCALL(TY41532, Newlineinfo_41574)(NimStringDesc* Filename_41576, NI Line_41577, NI Col_41578);
N_NIMCALL(TY68013*, Llstreamopen_68025)(NimStringDesc* Data_68027);
N_NIMCALL(NIM_CHAR, Chararg_83014)(TY49523* N_83016, NimStringDesc* Name_83017, NI Pos_83018, NIM_CHAR Default_83019);
N_NIMCALL(NimStringDesc*, Strarg_83020)(TY49523* N_83022, NimStringDesc* Name_83023, NI Pos_83024, NimStringDesc* Default_83025);
N_NIMCALL(NIM_BOOL, Llstreamatend_68071)(TY68013* S_68073);
N_NIMCALL(NimStringDesc*, Llstreamreadline_68048)(TY68013* S_68050);
N_NIMCALL(void, Llstreamclose_68040)(TY68013* S_68042);
NIM_CONST TY20402 Patternchars_84024 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP84032, "\015\012", 2);
STRING_LITERAL(TMP84346, "", 0);
STRING_LITERAL(TMP84347, "end", 3);
STRING_LITERAL(TMP84348, "#end", 4);
STRING_LITERAL(TMP84349, "\"", 1);
STRING_LITERAL(TMP84350, "(\"", 2);
STRING_LITERAL(TMP84351, "\\x", 2);
STRING_LITERAL(TMP84352, "\\\\", 2);
STRING_LITERAL(TMP84353, "\\\'", 2);
STRING_LITERAL(TMP84354, "\\\"", 2);
STRING_LITERAL(TMP84355, "}", 1);
STRING_LITERAL(TMP84356, "$", 1);
STRING_LITERAL(TMP84357, "\\n\"", 3);
STRING_LITERAL(TMP84368, "subschar", 8);
STRING_LITERAL(TMP84369, "metachar", 8);
STRING_LITERAL(TMP84370, "emit", 4);
STRING_LITERAL(TMP84371, "result.add", 10);
STRING_LITERAL(TMP84372, "conc", 4);
STRING_LITERAL(TMP84373, " & ", 3);
STRING_LITERAL(TMP84374, "tostring", 8);
N_NIMCALL(void, Newline_84026)(TY84009* P_84029) {
NimStringDesc* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newLine";
F.prev = framePtr;
F.filename = "rod/ptmplsyn.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 38;F.filename = "ptmplsyn.nim";
LOC1 = 0;
LOC1 = nsuRepeatChar((*P_84029).Par, 41);
Llstreamwrite_68054((*P_84029).Outp, LOC1);
F.line = 39;F.filename = "ptmplsyn.nim";
(*P_84029).Par = 0;
F.line = 40;F.filename = "ptmplsyn.nim";
if (!(((NI16) 1) < (*P_84029).Info.Line)) goto LA3;
F.line = 40;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84029).Outp, ((NimStringDesc*) &TMP84032));
LA3: ;
framePtr = framePtr->prev;
}
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604) {
NI Result_5605;
NIM_BOOL LOC2;
Result_5605 = 0;
Result_5605 = (NI32)((NU32)(A_5603) + (NU32)(B_5604));
LOC2 = (0 <= (NI32)(Result_5605 ^ A_5603));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI32)(Result_5605 ^ B_5604));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5605;
}
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804) {
NI Result_5805;
NIM_BOOL LOC2;
Result_5805 = 0;
Result_5805 = (NI32)((NU32)(A_5803) - (NU32)(B_5804));
LOC2 = (0 <= (NI32)(Result_5805 ^ A_5803));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI32)(Result_5805 ^ (NI32)((NU32) ~(B_5804))));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5805;
}
static N_INLINE(NI, chckRange)(NI I_4610, NI A_4611, NI B_4612) {
NI Result_5316;
NIM_BOOL LOC2;
Result_5316 = 0;
LOC2 = (A_4611 <= I_4610);
if (!(LOC2)) goto LA3;
LOC2 = (I_4610 <= B_4612);
LA3: ;
if (!LOC2) goto LA4;
Result_5316 = I_4610;
goto BeforeRet;
goto LA1;
LA4: ;
raiseRangeError(((NI64) (I_4610)));
LA1: ;
BeforeRet: ;
return Result_5316;
}
N_NIMCALL(void, Parseline_84033)(TY84009* P_84036) {
NI D_84037;
NI J_84038;
NI Curly_84039;
NimStringDesc* Keyw_84040;
NIM_BOOL LOC3;
NU8 LOC11;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
NimStringDesc* LOC17;
NimStringDesc* LOC18;
NimStringDesc* LOC19;
NimStringDesc* LOC20;
NimStringDesc* LOC21;
NimStringDesc* LOC22;
NimStringDesc* LOC23;
NimStringDesc* LOC25;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parseLine";
F.prev = framePtr;
F.filename = "rod/ptmplsyn.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
D_84037 = 0;
J_84038 = 0;
Curly_84039 = 0;
Keyw_84040 = 0;
F.line = 46;F.filename = "ptmplsyn.nim";
J_84038 = 0;
F.line = 47;F.filename = "ptmplsyn.nim";
while (1) {
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
if (!((NU8)((*P_84036).X->data[J_84038]) == (NU8)(32))) goto LA1;
F.line = 47;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
} LA1: ;
F.line = 48;F.filename = "ptmplsyn.nim";
if ((NU)(0) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
LOC3 = ((NU8)((*P_84036).X->data[0]) == (NU8)((*P_84036).Nimdirective));
if (!(LOC3)) goto LA4;
if ((NU)(1) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
LOC3 = ((NU8)((*P_84036).X->data[1]) == (NU8)(33));
LA4: ;
if (!LOC3) goto LA5;
F.line = 49;F.filename = "ptmplsyn.nim";
Newline_84026(P_84036);
goto LA2;
LA5: ;
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
if (!((NU8)((*P_84036).X->data[J_84038]) == (NU8)((*P_84036).Nimdirective))) goto LA7;
F.line = 51;F.filename = "ptmplsyn.nim";
Newline_84026(P_84036);
F.line = 52;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
F.line = 53;F.filename = "ptmplsyn.nim";
while (1) {
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
if (!((NU8)((*P_84036).X->data[J_84038]) == (NU8)(32))) goto LA9;
F.line = 53;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
} LA9: ;
F.line = 54;F.filename = "ptmplsyn.nim";
D_84037 = J_84038;
F.line = 55;F.filename = "ptmplsyn.nim";
Keyw_84040 = copyString(((NimStringDesc*) &TMP84346));
F.line = 56;F.filename = "ptmplsyn.nim";
while (1) {
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_84036).X->data[J_84038])) >= ((NU8)(97)) && ((NU8)((*P_84036).X->data[J_84038])) <= ((NU8)(122)) || ((NU8)((*P_84036).X->data[J_84038])) >= ((NU8)(65)) && ((NU8)((*P_84036).X->data[J_84038])) <= ((NU8)(90)) || ((NU8)((*P_84036).X->data[J_84038])) >= ((NU8)(48)) && ((NU8)((*P_84036).X->data[J_84038])) <= ((NU8)(57)) || ((NU8)((*P_84036).X->data[J_84038])) >= ((NU8)(128)) && ((NU8)((*P_84036).X->data[J_84038])) <= ((NU8)(255)) || ((NU8)((*P_84036).X->data[J_84038])) == ((NU8)(46)) || ((NU8)((*P_84036).X->data[J_84038])) == ((NU8)(95)))) goto LA10;
F.line = 57;F.filename = "ptmplsyn.nim";
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
Keyw_84040 = addChar(Keyw_84040, (*P_84036).X->data[J_84038]);
F.line = 58;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
} LA10: ;
F.line = 59;F.filename = "ptmplsyn.nim";
LOC11 = Whichkeyword_66468(Keyw_84040);
switch (LOC11) {
case ((NU8) 19):
F.line = 61;F.filename = "ptmplsyn.nim";
if (!(2 <= (*P_84036).Indent)) goto LA13;
F.line = 62;F.filename = "ptmplsyn.nim";
(*P_84036).Indent = subInt((*P_84036).Indent, 2);
goto LA12;
LA13: ;
F.line = 64;F.filename = "ptmplsyn.nim";
(*P_84036).Info.Col = ((NI16)chckRange(J_84038, ((NI16) -32768), ((NI16) 32767)));
F.line = 65;F.filename = "ptmplsyn.nim";
Limessage_41562((*P_84036).Info, ((NU8) 159), ((NimStringDesc*) &TMP84347));
LA12: ;
F.line = 66;F.filename = "ptmplsyn.nim";
LOC15 = 0;
LOC15 = nsuRepeatChar((*P_84036).Indent, 32);
Llstreamwrite_68054((*P_84036).Outp, LOC15);
F.line = 67;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, ((NimStringDesc*) &TMP84348));
break;
case ((NU8) 26):
case ((NU8) 58):
case ((NU8) 54):
case ((NU8) 59):
case ((NU8) 23):
case ((NU8) 7):
case ((NU8) 9):
case ((NU8) 46):
case ((NU8) 33):
case ((NU8) 13):
case ((NU8) 36):
case ((NU8) 53):
case ((NU8) 37):
F.line = 70;F.filename = "ptmplsyn.nim";
LOC16 = 0;
LOC16 = nsuRepeatChar((*P_84036).Indent, 32);
Llstreamwrite_68054((*P_84036).Outp, LOC16);
F.line = 71;F.filename = "ptmplsyn.nim";
LOC17 = 0;
LOC17 = copyStr((*P_84036).X, D_84037);
Llstreamwrite_68054((*P_84036).Outp, LOC17);
F.line = 72;F.filename = "ptmplsyn.nim";
(*P_84036).Indent = addInt((*P_84036).Indent, 2);
break;
case ((NU8) 17):
case ((NU8) 43):
case ((NU8) 18):
case ((NU8) 21):
case ((NU8) 22):
F.line = 74;F.filename = "ptmplsyn.nim";
LOC18 = 0;
LOC18 = nsuRepeatChar(subInt((*P_84036).Indent, 2), 32);
Llstreamwrite_68054((*P_84036).Outp, LOC18);
F.line = 75;F.filename = "ptmplsyn.nim";
LOC19 = 0;
LOC19 = copyStr((*P_84036).X, D_84037);
Llstreamwrite_68054((*P_84036).Outp, LOC19);
break;
default:
F.line = 77;F.filename = "ptmplsyn.nim";
LOC20 = 0;
LOC20 = nsuRepeatChar((*P_84036).Indent, 32);
Llstreamwrite_68054((*P_84036).Outp, LOC20);
F.line = 78;F.filename = "ptmplsyn.nim";
LOC21 = 0;
LOC21 = copyStr((*P_84036).X, D_84037);
Llstreamwrite_68054((*P_84036).Outp, LOC21);
break;
}
F.line = 79;F.filename = "ptmplsyn.nim";
(*P_84036).State = ((NU8) 0);
goto LA2;
LA7: ;
F.line = 82;F.filename = "ptmplsyn.nim";
J_84038 = 0;
F.line = 83;F.filename = "ptmplsyn.nim";
switch ((*P_84036).State) {
case ((NU8) 1):
F.line = 86;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, (*P_84036).Conc);
F.line = 87;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, ((NimStringDesc*) &TMP84032));
F.line = 88;F.filename = "ptmplsyn.nim";
LOC22 = 0;
LOC22 = nsuRepeatChar(addInt((*P_84036).Indent, 2), 32);
Llstreamwrite_68054((*P_84036).Outp, LOC22);
F.line = 89;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, ((NimStringDesc*) &TMP84349));
break;
case ((NU8) 0):
F.line = 91;F.filename = "ptmplsyn.nim";
Newline_84026(P_84036);
F.line = 92;F.filename = "ptmplsyn.nim";
LOC23 = 0;
LOC23 = nsuRepeatChar((*P_84036).Indent, 32);
Llstreamwrite_68054((*P_84036).Outp, LOC23);
F.line = 93;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, (*P_84036).Emit);
F.line = 94;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, ((NimStringDesc*) &TMP84350));
F.line = 95;F.filename = "ptmplsyn.nim";
(*P_84036).Par = addInt((*P_84036).Par, 1);
break;
}
F.line = 96;F.filename = "ptmplsyn.nim";
(*P_84036).State = ((NU8) 1);
F.line = 97;F.filename = "ptmplsyn.nim";
while (1) {
F.line = 98;F.filename = "ptmplsyn.nim";
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
switch (((NU8)((*P_84036).X->data[J_84038]))) {
case 0:
F.line = 100;F.filename = "ptmplsyn.nim";
goto LA24;
break;
case 1 ... 31:
case 128 ... 255:
F.line = 102;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, ((NimStringDesc*) &TMP84351));
F.line = 103;F.filename = "ptmplsyn.nim";
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
LOC25 = 0;
LOC25 = nsuToHex(((NI64) (((NU8)((*P_84036).X->data[J_84038])))), 2);
Llstreamwrite_68054((*P_84036).Outp, LOC25);
F.line = 104;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
break;
case 92:
F.line = 106;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, ((NimStringDesc*) &TMP84352));
F.line = 107;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
break;
case 39:
F.line = 109;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, ((NimStringDesc*) &TMP84353));
F.line = 110;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
break;
case 34:
F.line = 112;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, ((NimStringDesc*) &TMP84354));
F.line = 113;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
break;
default:
F.line = 115;F.filename = "ptmplsyn.nim";
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
if (!((NU8)((*P_84036).X->data[J_84038]) == (NU8)((*P_84036).Subschar))) goto LA27;
F.line = 117;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
F.line = 118;F.filename = "ptmplsyn.nim";
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
switch (((NU8)((*P_84036).X->data[J_84038]))) {
case 123:
F.line = 120;F.filename = "ptmplsyn.nim";
(*P_84036).Info.Col = ((NI16)chckRange(J_84038, ((NI16) -32768), ((NI16) 32767)));
F.line = 121;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, 34);
F.line = 122;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, (*P_84036).Conc);
F.line = 123;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, (*P_84036).Tostr);
F.line = 124;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, 40);
F.line = 125;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
F.line = 126;F.filename = "ptmplsyn.nim";
Curly_84039 = 0;
F.line = 127;F.filename = "ptmplsyn.nim";
while (1) {
F.line = 128;F.filename = "ptmplsyn.nim";
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
switch (((NU8)((*P_84036).X->data[J_84038]))) {
case 0:
F.line = 130;F.filename = "ptmplsyn.nim";
Limessage_41562((*P_84036).Info, ((NU8) 182), ((NimStringDesc*) &TMP84355));
break;
case 123:
F.line = 132;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
F.line = 133;F.filename = "ptmplsyn.nim";
Curly_84039 = addInt(Curly_84039, 1);
F.line = 134;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, 123);
break;
case 125:
F.line = 136;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
F.line = 137;F.filename = "ptmplsyn.nim";
if (!(Curly_84039 == 0)) goto LA31;
F.line = 137;F.filename = "ptmplsyn.nim";
goto LA29;
LA31: ;
F.line = 138;F.filename = "ptmplsyn.nim";
if (!(0 < Curly_84039)) goto LA34;
F.line = 138;F.filename = "ptmplsyn.nim";
Curly_84039 = subInt(Curly_84039, 1);
LA34: ;
F.line = 139;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, 125);
break;
default:
F.line = 141;F.filename = "ptmplsyn.nim";
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
Llstreamwrite_68058((*P_84036).Outp, (*P_84036).X->data[J_84038]);
F.line = 142;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
break;
}
} LA29: ;
F.line = 143;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, 41);
F.line = 144;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, (*P_84036).Conc);
F.line = 145;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, 34);
break;
case 97 ... 122:
case 65 ... 90:
case 128 ... 255:
F.line = 147;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, 34);
F.line = 148;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, (*P_84036).Conc);
F.line = 149;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, (*P_84036).Tostr);
F.line = 150;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, 40);
F.line = 151;F.filename = "ptmplsyn.nim";
while (1) {
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_84036).X->data[J_84038])) >= ((NU8)(97)) && ((NU8)((*P_84036).X->data[J_84038])) <= ((NU8)(122)) || ((NU8)((*P_84036).X->data[J_84038])) >= ((NU8)(65)) && ((NU8)((*P_84036).X->data[J_84038])) <= ((NU8)(90)) || ((NU8)((*P_84036).X->data[J_84038])) >= ((NU8)(48)) && ((NU8)((*P_84036).X->data[J_84038])) <= ((NU8)(57)) || ((NU8)((*P_84036).X->data[J_84038])) >= ((NU8)(128)) && ((NU8)((*P_84036).X->data[J_84038])) <= ((NU8)(255)) || ((NU8)((*P_84036).X->data[J_84038])) == ((NU8)(46)) || ((NU8)((*P_84036).X->data[J_84038])) == ((NU8)(95)))) goto LA36;
F.line = 152;F.filename = "ptmplsyn.nim";
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
Llstreamwrite_68058((*P_84036).Outp, (*P_84036).X->data[J_84038]);
F.line = 153;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
} LA36: ;
F.line = 154;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, 41);
F.line = 155;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, (*P_84036).Conc);
F.line = 156;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, 34);
break;
default:
F.line = 158;F.filename = "ptmplsyn.nim";
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
if (!((NU8)((*P_84036).X->data[J_84038]) == (NU8)((*P_84036).Subschar))) goto LA38;
F.line = 159;F.filename = "ptmplsyn.nim";
Llstreamwrite_68058((*P_84036).Outp, (*P_84036).Subschar);
F.line = 160;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
goto LA37;
LA38: ;
F.line = 162;F.filename = "ptmplsyn.nim";
(*P_84036).Info.Col = ((NI16)chckRange(J_84038, ((NI16) -32768), ((NI16) 32767)));
F.line = 163;F.filename = "ptmplsyn.nim";
Limessage_41562((*P_84036).Info, ((NU8) 164), ((NimStringDesc*) &TMP84356));
LA37: ;
break;
}
goto LA26;
LA27: ;
F.line = 165;F.filename = "ptmplsyn.nim";
if ((NU)(J_84038) > (NU)((*P_84036).X->Sup.len)) raiseIndexError();
Llstreamwrite_68058((*P_84036).Outp, (*P_84036).X->data[J_84038]);
F.line = 166;F.filename = "ptmplsyn.nim";
J_84038 = addInt(J_84038, 1);
LA26: ;
break;
}
} LA24: ;
F.line = 167;F.filename = "ptmplsyn.nim";
Llstreamwrite_68054((*P_84036).Outp, ((NimStringDesc*) &TMP84357));
LA2: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY68013*, Filtertmpl_84001)(TY68013* Stdin_84003, NimStringDesc* Filename_84004, TY49523* Call_84005) {
TY68013* Result_84363;
TY84009 P_84364;
NIM_BOOL LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "filterTmpl";
F.prev = framePtr;
F.filename = "rod/ptmplsyn.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_84363 = 0;
memset((void*)&P_84364, 0, sizeof(P_84364));
F.line = 171;F.filename = "ptmplsyn.nim";
P_84364.Info = Newlineinfo_41574(Filename_84004, 0, 0);
F.line = 172;F.filename = "ptmplsyn.nim";
P_84364.Outp = Llstreamopen_68025(((NimStringDesc*) &TMP84346));
F.line = 173;F.filename = "ptmplsyn.nim";
P_84364.Inp = Stdin_84003;
F.line = 174;F.filename = "ptmplsyn.nim";
P_84364.Subschar = Chararg_83014(Call_84005, ((NimStringDesc*) &TMP84368), 1, 36);
F.line = 175;F.filename = "ptmplsyn.nim";
P_84364.Nimdirective = Chararg_83014(Call_84005, ((NimStringDesc*) &TMP84369), 2, 35);
F.line = 176;F.filename = "ptmplsyn.nim";
P_84364.Emit = Strarg_83020(Call_84005, ((NimStringDesc*) &TMP84370), 3, ((NimStringDesc*) &TMP84371));
F.line = 177;F.filename = "ptmplsyn.nim";
P_84364.Conc = Strarg_83020(Call_84005, ((NimStringDesc*) &TMP84372), 4, ((NimStringDesc*) &TMP84373));
F.line = 178;F.filename = "ptmplsyn.nim";
P_84364.Tostr = Strarg_83020(Call_84005, ((NimStringDesc*) &TMP84374), 5, ((NimStringDesc*) &TMP84356));
F.line = 179;F.filename = "ptmplsyn.nim";
while (1) {
LOC2 = Llstreamatend_68071(P_84364.Inp);
if (!!(LOC2)) goto LA1;
F.line = 180;F.filename = "ptmplsyn.nim";
P_84364.X = Llstreamreadline_68048(P_84364.Inp);
F.line = 181;F.filename = "ptmplsyn.nim";
P_84364.Info.Line = ((NI)(P_84364.Info.Line) + (NI)(((NI16) 1)));
if (P_84364.Info.Line < -32768 || P_84364.Info.Line > 32767) raiseOverflow();
F.line = 182;F.filename = "ptmplsyn.nim";
Parseline_84033(&P_84364);
} LA1: ;
F.line = 183;F.filename = "ptmplsyn.nim";
Newline_84026(&P_84364);
F.line = 184;F.filename = "ptmplsyn.nim";
Result_84363 = P_84364.Outp;
F.line = 185;F.filename = "ptmplsyn.nim";
Llstreamclose_68040(P_84364.Inp);
framePtr = framePtr->prev;
return Result_84363;
}
N_NOINLINE(void, ptmplsynInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ptmplsyn";
F.prev = framePtr;
F.filename = "rod/ptmplsyn.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

