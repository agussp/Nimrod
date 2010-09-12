/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY88009 TY88009;
typedef struct TY72013 TY72013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY46532 TY46532;
typedef struct TY54523 TY54523;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54549 TY54549;
typedef struct TY54545 TY54545;
typedef struct TY53011 TY53011;
typedef struct TY54517 TY54517;
typedef struct TY53005 TY53005;
typedef struct TY54547 TY54547;
typedef struct TY54537 TY54537;
typedef struct TY51008 TY51008;
typedef struct TY54527 TY54527;
typedef struct TY54525 TY54525;
typedef struct TY54541 TY54541;
typedef struct TY42013 TY42013;
typedef NU8 TY21402[32];
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY46532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY88009 {
TY72013* Inp;
NU8 State;
TY46532 Info;
NI Indent;
NI Par;
NimStringDesc* X;
TY72013* Outp;
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
struct TY72013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY54523 {
TY54549* Typ;
NimStringDesc* Comment;
TY46532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY54545* Sym;
} S4;
struct {TY53011* Ident;
} S5;
struct {TY54517* Sons;
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
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY54537 {
NU8 K;
NU8 S;
NU8 Flags;
TY54549* T;
TY51008* R;
NI A;
};
struct TY54549 {
  TY53005 Sup;
NU8 Kind;
TY54547* Sons;
TY54523* N;
NU8 Flags;
NU8 Callconv;
TY54545* Owner;
TY54545* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY54537 Loc;
};
struct TY54527 {
TNimType* m_type;
NI Counter;
TY54525* Data;
};
struct TY54545 {
  TY53005 Sup;
NU8 Kind;
NU8 Magic;
TY54549* Typ;
TY53011* Name;
TY46532 Info;
TY54545* Owner;
NU32 Flags;
TY54527 Tab;
TY54523* Ast;
NU32 Options;
NI Position;
NI Offset;
TY54537 Loc;
TY54541* Annex;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
};
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY54541 {
  TY42013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY51008* Name;
TY54523* Path;
};
struct TY54517 {
  TGenericSeq Sup;
  TY54523* data[SEQ_DECL_SIZE];
};
struct TY54547 {
  TGenericSeq Sup;
  TY54549* data[SEQ_DECL_SIZE];
};
struct TY54525 {
  TGenericSeq Sup;
  TY54545* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Newline_88026)(TY88009* P_88029);
N_NIMCALL(void, Llstreamwrite_72054)(TY72013* S_72056, NimStringDesc* Data_72057);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI Count_24750, NIM_CHAR C_24751);
N_NIMCALL(void, Parseline_88033)(TY88009* P_88036);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17308);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NU8, Whichkeyword_70468)(NimStringDesc* Id_70470);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
static N_INLINE(NI, chckRange)(NI I_4610, NI A_4611, NI B_4612);
N_NOINLINE(void, raiseRangeError)(NI64 Val_5218);
N_NIMCALL(void, Limessage_46562)(TY46532 Info_46564, NU8 Msg_46565, NimStringDesc* Arg_46566);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_24450, NI Len_24451);
N_NIMCALL(void, Llstreamwrite_72058)(TY72013* S_72060, NIM_CHAR Data_72061);
N_NIMCALL(TY72013*, Filtertmpl_88001)(TY72013* Stdin_88003, NimStringDesc* Filename_88004, TY54523* Call_88005);
N_NIMCALL(TY46532, Newlineinfo_46574)(NimStringDesc* Filename_46576, NI Line_46577, NI Col_46578);
N_NIMCALL(TY72013*, Llstreamopen_72025)(NimStringDesc* Data_72027);
N_NIMCALL(NIM_CHAR, Chararg_87014)(TY54523* N_87016, NimStringDesc* Name_87017, NI Pos_87018, NIM_CHAR Default_87019);
N_NIMCALL(NimStringDesc*, Strarg_87020)(TY54523* N_87022, NimStringDesc* Name_87023, NI Pos_87024, NimStringDesc* Default_87025);
N_NIMCALL(NIM_BOOL, Llstreamatend_72071)(TY72013* S_72073);
N_NIMCALL(NimStringDesc*, Llstreamreadline_72048)(TY72013* S_72050);
N_NIMCALL(void, Llstreamclose_72040)(TY72013* S_72042);
NIM_CONST TY21402 Patternchars_88024 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP88032, "\012", 1);
STRING_LITERAL(TMP88346, "", 0);
STRING_LITERAL(TMP88347, "end", 3);
STRING_LITERAL(TMP88348, "#end", 4);
STRING_LITERAL(TMP88349, "\"", 1);
STRING_LITERAL(TMP88350, "(\"", 2);
STRING_LITERAL(TMP88351, "\\x", 2);
STRING_LITERAL(TMP88352, "\\\\", 2);
STRING_LITERAL(TMP88353, "\\\'", 2);
STRING_LITERAL(TMP88354, "\\\"", 2);
STRING_LITERAL(TMP88355, "}", 1);
STRING_LITERAL(TMP88356, "$", 1);
STRING_LITERAL(TMP88357, "\\n\"", 3);
STRING_LITERAL(TMP88368, "subschar", 8);
STRING_LITERAL(TMP88369, "metachar", 8);
STRING_LITERAL(TMP88370, "emit", 4);
STRING_LITERAL(TMP88371, "result.add", 10);
STRING_LITERAL(TMP88372, "conc", 4);
STRING_LITERAL(TMP88373, " & ", 3);
STRING_LITERAL(TMP88374, "tostring", 8);
N_NIMCALL(void, Newline_88026)(TY88009* P_88029) {
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
LOC1 = nsuRepeatChar((*P_88029).Par, 41);
Llstreamwrite_72054((*P_88029).Outp, LOC1);
F.line = 39;F.filename = "ptmplsyn.nim";
(*P_88029).Par = 0;
F.line = 40;F.filename = "ptmplsyn.nim";
if (!(((NI16) 1) < (*P_88029).Info.Line)) goto LA3;
F.line = 40;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88029).Outp, ((NimStringDesc*) &TMP88032));
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
N_NIMCALL(void, Parseline_88033)(TY88009* P_88036) {
NI D_88037;
NI J_88038;
NI Curly_88039;
NimStringDesc* Keyw_88040;
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
D_88037 = 0;
J_88038 = 0;
Curly_88039 = 0;
Keyw_88040 = 0;
F.line = 46;F.filename = "ptmplsyn.nim";
J_88038 = 0;
F.line = 47;F.filename = "ptmplsyn.nim";
while (1) {
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
if (!((NU8)((*P_88036).X->data[J_88038]) == (NU8)(32))) goto LA1;
F.line = 47;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
} LA1: ;
F.line = 48;F.filename = "ptmplsyn.nim";
if ((NU)(0) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
LOC3 = ((NU8)((*P_88036).X->data[0]) == (NU8)((*P_88036).Nimdirective));
if (!(LOC3)) goto LA4;
if ((NU)(1) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
LOC3 = ((NU8)((*P_88036).X->data[1]) == (NU8)(33));
LA4: ;
if (!LOC3) goto LA5;
F.line = 49;F.filename = "ptmplsyn.nim";
Newline_88026(P_88036);
goto LA2;
LA5: ;
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
if (!((NU8)((*P_88036).X->data[J_88038]) == (NU8)((*P_88036).Nimdirective))) goto LA7;
F.line = 51;F.filename = "ptmplsyn.nim";
Newline_88026(P_88036);
F.line = 52;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
F.line = 53;F.filename = "ptmplsyn.nim";
while (1) {
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
if (!((NU8)((*P_88036).X->data[J_88038]) == (NU8)(32))) goto LA9;
F.line = 53;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
} LA9: ;
F.line = 54;F.filename = "ptmplsyn.nim";
D_88037 = J_88038;
F.line = 55;F.filename = "ptmplsyn.nim";
Keyw_88040 = copyString(((NimStringDesc*) &TMP88346));
F.line = 56;F.filename = "ptmplsyn.nim";
while (1) {
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_88036).X->data[J_88038])) >= ((NU8)(97)) && ((NU8)((*P_88036).X->data[J_88038])) <= ((NU8)(122)) || ((NU8)((*P_88036).X->data[J_88038])) >= ((NU8)(65)) && ((NU8)((*P_88036).X->data[J_88038])) <= ((NU8)(90)) || ((NU8)((*P_88036).X->data[J_88038])) >= ((NU8)(48)) && ((NU8)((*P_88036).X->data[J_88038])) <= ((NU8)(57)) || ((NU8)((*P_88036).X->data[J_88038])) >= ((NU8)(128)) && ((NU8)((*P_88036).X->data[J_88038])) <= ((NU8)(255)) || ((NU8)((*P_88036).X->data[J_88038])) == ((NU8)(46)) || ((NU8)((*P_88036).X->data[J_88038])) == ((NU8)(95)))) goto LA10;
F.line = 57;F.filename = "ptmplsyn.nim";
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
Keyw_88040 = addChar(Keyw_88040, (*P_88036).X->data[J_88038]);
F.line = 58;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
} LA10: ;
F.line = 59;F.filename = "ptmplsyn.nim";
LOC11 = Whichkeyword_70468(Keyw_88040);
switch (LOC11) {
case ((NU8) 19):
F.line = 61;F.filename = "ptmplsyn.nim";
if (!(2 <= (*P_88036).Indent)) goto LA13;
F.line = 62;F.filename = "ptmplsyn.nim";
(*P_88036).Indent = subInt((*P_88036).Indent, 2);
goto LA12;
LA13: ;
F.line = 64;F.filename = "ptmplsyn.nim";
(*P_88036).Info.Col = ((NI16)chckRange(J_88038, ((NI16) -32768), ((NI16) 32767)));
F.line = 65;F.filename = "ptmplsyn.nim";
Limessage_46562((*P_88036).Info, ((NU8) 159), ((NimStringDesc*) &TMP88347));
LA12: ;
F.line = 66;F.filename = "ptmplsyn.nim";
LOC15 = 0;
LOC15 = nsuRepeatChar((*P_88036).Indent, 32);
Llstreamwrite_72054((*P_88036).Outp, LOC15);
F.line = 67;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, ((NimStringDesc*) &TMP88348));
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
LOC16 = nsuRepeatChar((*P_88036).Indent, 32);
Llstreamwrite_72054((*P_88036).Outp, LOC16);
F.line = 71;F.filename = "ptmplsyn.nim";
LOC17 = 0;
LOC17 = copyStr((*P_88036).X, D_88037);
Llstreamwrite_72054((*P_88036).Outp, LOC17);
F.line = 72;F.filename = "ptmplsyn.nim";
(*P_88036).Indent = addInt((*P_88036).Indent, 2);
break;
case ((NU8) 17):
case ((NU8) 43):
case ((NU8) 18):
case ((NU8) 21):
case ((NU8) 22):
F.line = 74;F.filename = "ptmplsyn.nim";
LOC18 = 0;
LOC18 = nsuRepeatChar(subInt((*P_88036).Indent, 2), 32);
Llstreamwrite_72054((*P_88036).Outp, LOC18);
F.line = 75;F.filename = "ptmplsyn.nim";
LOC19 = 0;
LOC19 = copyStr((*P_88036).X, D_88037);
Llstreamwrite_72054((*P_88036).Outp, LOC19);
break;
default:
F.line = 77;F.filename = "ptmplsyn.nim";
LOC20 = 0;
LOC20 = nsuRepeatChar((*P_88036).Indent, 32);
Llstreamwrite_72054((*P_88036).Outp, LOC20);
F.line = 78;F.filename = "ptmplsyn.nim";
LOC21 = 0;
LOC21 = copyStr((*P_88036).X, D_88037);
Llstreamwrite_72054((*P_88036).Outp, LOC21);
break;
}
F.line = 79;F.filename = "ptmplsyn.nim";
(*P_88036).State = ((NU8) 0);
goto LA2;
LA7: ;
F.line = 82;F.filename = "ptmplsyn.nim";
J_88038 = 0;
F.line = 83;F.filename = "ptmplsyn.nim";
switch ((*P_88036).State) {
case ((NU8) 1):
F.line = 86;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, (*P_88036).Conc);
F.line = 87;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, ((NimStringDesc*) &TMP88032));
F.line = 88;F.filename = "ptmplsyn.nim";
LOC22 = 0;
LOC22 = nsuRepeatChar(addInt((*P_88036).Indent, 2), 32);
Llstreamwrite_72054((*P_88036).Outp, LOC22);
F.line = 89;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, ((NimStringDesc*) &TMP88349));
break;
case ((NU8) 0):
F.line = 91;F.filename = "ptmplsyn.nim";
Newline_88026(P_88036);
F.line = 92;F.filename = "ptmplsyn.nim";
LOC23 = 0;
LOC23 = nsuRepeatChar((*P_88036).Indent, 32);
Llstreamwrite_72054((*P_88036).Outp, LOC23);
F.line = 93;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, (*P_88036).Emit);
F.line = 94;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, ((NimStringDesc*) &TMP88350));
F.line = 95;F.filename = "ptmplsyn.nim";
(*P_88036).Par = addInt((*P_88036).Par, 1);
break;
}
F.line = 96;F.filename = "ptmplsyn.nim";
(*P_88036).State = ((NU8) 1);
F.line = 97;F.filename = "ptmplsyn.nim";
while (1) {
F.line = 98;F.filename = "ptmplsyn.nim";
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
switch (((NU8)((*P_88036).X->data[J_88038]))) {
case 0:
F.line = 100;F.filename = "ptmplsyn.nim";
goto LA24;
break;
case 1 ... 31:
case 128 ... 255:
F.line = 102;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, ((NimStringDesc*) &TMP88351));
F.line = 103;F.filename = "ptmplsyn.nim";
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
LOC25 = 0;
LOC25 = nsuToHex(((NI64) (((NU8)((*P_88036).X->data[J_88038])))), 2);
Llstreamwrite_72054((*P_88036).Outp, LOC25);
F.line = 104;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
break;
case 92:
F.line = 106;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, ((NimStringDesc*) &TMP88352));
F.line = 107;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
break;
case 39:
F.line = 109;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, ((NimStringDesc*) &TMP88353));
F.line = 110;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
break;
case 34:
F.line = 112;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, ((NimStringDesc*) &TMP88354));
F.line = 113;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
break;
default:
F.line = 115;F.filename = "ptmplsyn.nim";
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
if (!((NU8)((*P_88036).X->data[J_88038]) == (NU8)((*P_88036).Subschar))) goto LA27;
F.line = 117;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
F.line = 118;F.filename = "ptmplsyn.nim";
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
switch (((NU8)((*P_88036).X->data[J_88038]))) {
case 123:
F.line = 120;F.filename = "ptmplsyn.nim";
(*P_88036).Info.Col = ((NI16)chckRange(J_88038, ((NI16) -32768), ((NI16) 32767)));
F.line = 121;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, 34);
F.line = 122;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, (*P_88036).Conc);
F.line = 123;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, (*P_88036).Tostr);
F.line = 124;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, 40);
F.line = 125;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
F.line = 126;F.filename = "ptmplsyn.nim";
Curly_88039 = 0;
F.line = 127;F.filename = "ptmplsyn.nim";
while (1) {
F.line = 128;F.filename = "ptmplsyn.nim";
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
switch (((NU8)((*P_88036).X->data[J_88038]))) {
case 0:
F.line = 130;F.filename = "ptmplsyn.nim";
Limessage_46562((*P_88036).Info, ((NU8) 182), ((NimStringDesc*) &TMP88355));
break;
case 123:
F.line = 132;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
F.line = 133;F.filename = "ptmplsyn.nim";
Curly_88039 = addInt(Curly_88039, 1);
F.line = 134;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, 123);
break;
case 125:
F.line = 136;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
F.line = 137;F.filename = "ptmplsyn.nim";
if (!(Curly_88039 == 0)) goto LA31;
F.line = 137;F.filename = "ptmplsyn.nim";
goto LA29;
LA31: ;
F.line = 138;F.filename = "ptmplsyn.nim";
if (!(0 < Curly_88039)) goto LA34;
F.line = 138;F.filename = "ptmplsyn.nim";
Curly_88039 = subInt(Curly_88039, 1);
LA34: ;
F.line = 139;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, 125);
break;
default:
F.line = 141;F.filename = "ptmplsyn.nim";
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
Llstreamwrite_72058((*P_88036).Outp, (*P_88036).X->data[J_88038]);
F.line = 142;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
break;
}
} LA29: ;
F.line = 143;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, 41);
F.line = 144;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, (*P_88036).Conc);
F.line = 145;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, 34);
break;
case 97 ... 122:
case 65 ... 90:
case 128 ... 255:
F.line = 147;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, 34);
F.line = 148;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, (*P_88036).Conc);
F.line = 149;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, (*P_88036).Tostr);
F.line = 150;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, 40);
F.line = 151;F.filename = "ptmplsyn.nim";
while (1) {
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
if (!(((NU8)((*P_88036).X->data[J_88038])) >= ((NU8)(97)) && ((NU8)((*P_88036).X->data[J_88038])) <= ((NU8)(122)) || ((NU8)((*P_88036).X->data[J_88038])) >= ((NU8)(65)) && ((NU8)((*P_88036).X->data[J_88038])) <= ((NU8)(90)) || ((NU8)((*P_88036).X->data[J_88038])) >= ((NU8)(48)) && ((NU8)((*P_88036).X->data[J_88038])) <= ((NU8)(57)) || ((NU8)((*P_88036).X->data[J_88038])) >= ((NU8)(128)) && ((NU8)((*P_88036).X->data[J_88038])) <= ((NU8)(255)) || ((NU8)((*P_88036).X->data[J_88038])) == ((NU8)(46)) || ((NU8)((*P_88036).X->data[J_88038])) == ((NU8)(95)))) goto LA36;
F.line = 152;F.filename = "ptmplsyn.nim";
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
Llstreamwrite_72058((*P_88036).Outp, (*P_88036).X->data[J_88038]);
F.line = 153;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
} LA36: ;
F.line = 154;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, 41);
F.line = 155;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, (*P_88036).Conc);
F.line = 156;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, 34);
break;
default:
F.line = 158;F.filename = "ptmplsyn.nim";
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
if (!((NU8)((*P_88036).X->data[J_88038]) == (NU8)((*P_88036).Subschar))) goto LA38;
F.line = 159;F.filename = "ptmplsyn.nim";
Llstreamwrite_72058((*P_88036).Outp, (*P_88036).Subschar);
F.line = 160;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
goto LA37;
LA38: ;
F.line = 162;F.filename = "ptmplsyn.nim";
(*P_88036).Info.Col = ((NI16)chckRange(J_88038, ((NI16) -32768), ((NI16) 32767)));
F.line = 163;F.filename = "ptmplsyn.nim";
Limessage_46562((*P_88036).Info, ((NU8) 164), ((NimStringDesc*) &TMP88356));
LA37: ;
break;
}
goto LA26;
LA27: ;
F.line = 165;F.filename = "ptmplsyn.nim";
if ((NU)(J_88038) > (NU)((*P_88036).X->Sup.len)) raiseIndexError();
Llstreamwrite_72058((*P_88036).Outp, (*P_88036).X->data[J_88038]);
F.line = 166;F.filename = "ptmplsyn.nim";
J_88038 = addInt(J_88038, 1);
LA26: ;
break;
}
} LA24: ;
F.line = 167;F.filename = "ptmplsyn.nim";
Llstreamwrite_72054((*P_88036).Outp, ((NimStringDesc*) &TMP88357));
LA2: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY72013*, Filtertmpl_88001)(TY72013* Stdin_88003, NimStringDesc* Filename_88004, TY54523* Call_88005) {
TY72013* Result_88363;
TY88009 P_88364;
NIM_BOOL LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "filterTmpl";
F.prev = framePtr;
F.filename = "rod/ptmplsyn.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_88363 = 0;
memset((void*)&P_88364, 0, sizeof(P_88364));
F.line = 171;F.filename = "ptmplsyn.nim";
P_88364.Info = Newlineinfo_46574(Filename_88004, 0, 0);
F.line = 172;F.filename = "ptmplsyn.nim";
P_88364.Outp = Llstreamopen_72025(((NimStringDesc*) &TMP88346));
F.line = 173;F.filename = "ptmplsyn.nim";
P_88364.Inp = Stdin_88003;
F.line = 174;F.filename = "ptmplsyn.nim";
P_88364.Subschar = Chararg_87014(Call_88005, ((NimStringDesc*) &TMP88368), 1, 36);
F.line = 175;F.filename = "ptmplsyn.nim";
P_88364.Nimdirective = Chararg_87014(Call_88005, ((NimStringDesc*) &TMP88369), 2, 35);
F.line = 176;F.filename = "ptmplsyn.nim";
P_88364.Emit = Strarg_87020(Call_88005, ((NimStringDesc*) &TMP88370), 3, ((NimStringDesc*) &TMP88371));
F.line = 177;F.filename = "ptmplsyn.nim";
P_88364.Conc = Strarg_87020(Call_88005, ((NimStringDesc*) &TMP88372), 4, ((NimStringDesc*) &TMP88373));
F.line = 178;F.filename = "ptmplsyn.nim";
P_88364.Tostr = Strarg_87020(Call_88005, ((NimStringDesc*) &TMP88374), 5, ((NimStringDesc*) &TMP88356));
F.line = 179;F.filename = "ptmplsyn.nim";
while (1) {
LOC2 = Llstreamatend_72071(P_88364.Inp);
if (!!(LOC2)) goto LA1;
F.line = 180;F.filename = "ptmplsyn.nim";
P_88364.X = Llstreamreadline_72048(P_88364.Inp);
F.line = 181;F.filename = "ptmplsyn.nim";
P_88364.Info.Line = ((NI)(P_88364.Info.Line) + (NI)(((NI16) 1)));
if (P_88364.Info.Line < -32768 || P_88364.Info.Line > 32767) raiseOverflow();
F.line = 182;F.filename = "ptmplsyn.nim";
Parseline_88033(&P_88364);
} LA1: ;
F.line = 183;F.filename = "ptmplsyn.nim";
Newline_88026(&P_88364);
F.line = 184;F.filename = "ptmplsyn.nim";
Result_88363 = P_88364.Outp;
F.line = 185;F.filename = "ptmplsyn.nim";
Llstreamclose_72040(P_88364.Inp);
framePtr = framePtr->prev;
return Result_88363;
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

