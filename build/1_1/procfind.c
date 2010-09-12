/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY49523 TY49523;
typedef struct TY49545 TY49545;
typedef struct TY49549 TY49549;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY41532 TY41532;
typedef struct TY48011 TY48011;
typedef struct TY49517 TY49517;
typedef struct TY48005 TY48005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY49527 TY49527;
typedef struct TY49525 TY49525;
typedef struct TY49537 TY49537;
typedef struct TY46008 TY46008;
typedef struct TY49541 TY49541;
typedef struct TY100012 TY100012;
typedef struct TY53092 TY53092;
typedef struct TY98002 TY98002;
typedef struct TY100006 TY100006;
typedef struct TY53107 TY53107;
typedef struct TY53109 TY53109;
typedef struct TY49898 TY49898;
typedef struct TY49894 TY49894;
typedef struct TY49896 TY49896;
typedef struct TY37019 TY37019;
typedef struct TY37013 TY37013;
typedef struct TY49547 TY49547;
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
typedef NU8 TY49997[16];
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
struct TY48005 {
  TNimObject Sup;
NI Id;
};
struct TY49527 {
TNimType* m_type;
NI Counter;
TY49525* Data;
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
struct TY48011 {
  TY48005 Sup;
NimStringDesc* S;
TY48011* Next;
NI H;
};
struct TY53092 {
NI H;
TY48011* Name;
};
struct TY98002 {
  TNimObject Sup;
};
struct TY53107 {
NI Tos;
TY53109* Stack;
};
struct TY49898 {
NI Counter;
NI Max;
TY49894* Head;
TY49896* Data;
};
struct TY37019 {
TNimType* m_type;
TY37013* Head;
TY37013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY49523*, TY100032) (TY100012* C_100033, TY49523* N_100034);
typedef N_NIMCALL_PTR(TY49523*, TY100037) (TY100012* C_100038, TY49523* N_100039);
struct TY100012 {
  TY98002 Sup;
TY49545* Module;
TY100006* P;
NI Instcounter;
TY49523* Generics;
NI Lastgenericidx;
TY53107 Tab;
TY49898 Ambiguoussymbols;
TY49525* Converters;
TY37019 Optionstack;
TY37019 Libs;
NIM_BOOL Fromcache;
TY100032 Semconstexpr;
TY100037 Semexpr;
TY49898 Includedfiles;
NimStringDesc* Filename;
TY49527 Userpragmas;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY100006 {
TY49545* Owner;
TY49545* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8414[16];
struct TY49894 {
TY49894* Next;
NI Key;
TY8414 Bits;
};
struct TY49517 {
  TGenericSeq Sup;
  TY49523* data[SEQ_DECL_SIZE];
};
struct TY49525 {
  TGenericSeq Sup;
  TY49545* data[SEQ_DECL_SIZE];
};
struct TY53109 {
  TGenericSeq Sup;
  TY49527 data[SEQ_DECL_SIZE];
};
struct TY49896 {
  TGenericSeq Sup;
  TY49894* data[SEQ_DECL_SIZE];
};
struct TY49547 {
  TGenericSeq Sup;
  TY49549* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, Equalgenericparams_115014)(TY49523* Proca_115016, TY49523* Procb_115017);
N_NIMCALL(NI, Sonslen_49801)(TY49523* N_49803);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5275);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, Internalerror_41567)(TY41532 Info_41569, NimStringDesc* Errmsg_41570);
N_NIMCALL(NIM_BOOL, Sametypeornil_90052)(TY49549* A_90054, TY49549* B_90055);
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_89035)(TY49523* A_89037, TY49523* B_89038);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(TY49545*, Searchforproc_115004)(TY100012* C_115006, TY49545* Fn_115007, NI Tos_115008);
N_NIMCALL(TY49545*, Initidentiter_53095)(TY53092* Ti_53098, TY49527* Tab_53099, TY48011* S_53100);
N_NIMCALL(NU8, Equalparams_90065)(TY49523* A_90067, TY49523* B_90068);
N_NIMCALL(void, Limessage_41562)(TY41532 Info_41564, NU8 Msg_41565, NimStringDesc* Arg_41566);
N_NIMCALL(TY49545*, Nextidentiter_53101)(TY53092* Ti_53104, TY49527* Tab_53105);
N_NIMCALL(NIM_BOOL, Paramsfitborrow_115256)(TY49523* A_115258, TY49523* B_115259);
N_NIMCALL(void, internalAssert)(NCSTRING File_5054, NI Line_5055, NIM_BOOL Cond_5056);
N_NIMCALL(NIM_BOOL, Equalordistinctof_90056)(TY49549* X_90058, TY49549* Y_90059);
N_NIMCALL(TY49545*, Searchforborrowproc_115009)(TY100012* C_115011, TY49545* Fn_115012, NI Tos_115013);
static NIM_CONST TY49997 TMP115197 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP115198, "sons", 4);
STRING_LITERAL(TMP115199, "equalGenericParams", 18);
static NIM_CONST TY49997 TMP115200 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP115201, "sym", 3);
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
N_NIMCALL(NIM_BOOL, Equalgenericparams_115014)(TY49523* Proca_115016, TY49523* Procb_115017) {
NIM_BOOL Result_115018;
TY49545* A_115019;
TY49545* B_115020;
NIM_BOOL LOC5;
NI LOC10;
NI LOC11;
NI I_115076;
NI HEX3Atmp_115192;
NI LOC14;
NI Res_115194;
NIM_BOOL LOC23;
NIM_BOOL LOC25;
NIM_BOOL LOC29;
NIM_BOOL LOC34;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "equalGenericParams";
F.prev = framePtr;
F.filename = "rod/procfind.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_115018 = 0;
A_115019 = 0;
B_115020 = 0;
F.line = 26;F.filename = "procfind.nim";
Result_115018 = (Proca_115016 == Procb_115017);
F.line = 27;F.filename = "procfind.nim";
if (!Result_115018) goto LA2;
F.line = 27;F.filename = "procfind.nim";
goto BeforeRet;
LA2: ;
F.line = 28;F.filename = "procfind.nim";
LOC5 = (Proca_115016 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (Procb_115017 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
F.line = 28;F.filename = "procfind.nim";
goto BeforeRet;
LA7: ;
F.line = 29;F.filename = "procfind.nim";
LOC10 = Sonslen_49801(Proca_115016);
LOC11 = Sonslen_49801(Procb_115017);
if (!!((LOC10 == LOC11))) goto LA12;
F.line = 29;F.filename = "procfind.nim";
goto BeforeRet;
LA12: ;
I_115076 = 0;
HEX3Atmp_115192 = 0;
F.line = 30;F.filename = "procfind.nim";
LOC14 = Sonslen_49801(Proca_115016);
HEX3Atmp_115192 = subInt(LOC14, 1);
Res_115194 = 0;
F.line = 1011;F.filename = "system.nim";
Res_115194 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_115194 <= HEX3Atmp_115192)) goto LA15;
F.line = 1011;F.filename = "system.nim";
I_115076 = Res_115194;
F.line = 31;F.filename = "procfind.nim";
if (((TMP115197[(*Proca_115016).Kind/8] &(1<<((*Proca_115016).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(I_115076) >= (NU)((*Proca_115016).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!!(((*(*Proca_115016).KindU.S6.Sons->data[I_115076]).Kind == ((NU8) 3)))) goto LA17;
F.line = 32;F.filename = "procfind.nim";
Internalerror_41567((*Proca_115016).Info, ((NimStringDesc*) &TMP115199));
LA17: ;
F.line = 33;F.filename = "procfind.nim";
if (((TMP115197[(*Procb_115017).Kind/8] &(1<<((*Procb_115017).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(I_115076) >= (NU)((*Procb_115017).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!!(((*(*Procb_115017).KindU.S6.Sons->data[I_115076]).Kind == ((NU8) 3)))) goto LA20;
F.line = 34;F.filename = "procfind.nim";
Internalerror_41567((*Procb_115017).Info, ((NimStringDesc*) &TMP115199));
LA20: ;
F.line = 35;F.filename = "procfind.nim";
if (((TMP115197[(*Proca_115016).Kind/8] &(1<<((*Proca_115016).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(I_115076) >= (NU)((*Proca_115016).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP115200[(*(*Proca_115016).KindU.S6.Sons->data[I_115076]).Kind/8] &(1<<((*(*Proca_115016).KindU.S6.Sons->data[I_115076]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP115201));
A_115019 = (*(*Proca_115016).KindU.S6.Sons->data[I_115076]).KindU.S4.Sym;
F.line = 36;F.filename = "procfind.nim";
if (((TMP115197[(*Procb_115017).Kind/8] &(1<<((*Procb_115017).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(I_115076) >= (NU)((*Procb_115017).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP115200[(*(*Procb_115017).KindU.S6.Sons->data[I_115076]).Kind/8] &(1<<((*(*Procb_115017).KindU.S6.Sons->data[I_115076]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP115201));
B_115020 = (*(*Procb_115017).KindU.S6.Sons->data[I_115076]).KindU.S4.Sym;
F.line = 37;F.filename = "procfind.nim";
LOC23 = !(((*(*A_115019).Name).Sup.Id == (*(*B_115020).Name).Sup.Id));
if (LOC23) goto LA24;
LOC25 = Sametypeornil_90052((*A_115019).Typ, (*B_115020).Typ);
LOC23 = !(LOC25);
LA24: ;
if (!LOC23) goto LA26;
F.line = 37;F.filename = "procfind.nim";
goto BeforeRet;
LA26: ;
F.line = 38;F.filename = "procfind.nim";
LOC29 = !(((*A_115019).Ast == NIM_NIL));
if (!(LOC29)) goto LA30;
LOC29 = !(((*B_115020).Ast == NIM_NIL));
LA30: ;
if (!LOC29) goto LA31;
F.line = 39;F.filename = "procfind.nim";
LOC34 = Exprstructuralequivalent_89035((*A_115019).Ast, (*B_115020).Ast);
if (!!(LOC34)) goto LA35;
F.line = 39;F.filename = "procfind.nim";
goto BeforeRet;
LA35: ;
LA31: ;
F.line = 1014;F.filename = "system.nim";
Res_115194 = addInt(Res_115194, 1);
} LA15: ;
F.line = 40;F.filename = "procfind.nim";
Result_115018 = NIM_TRUE;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_115018;
}
N_NIMCALL(TY49545*, Searchforproc_115004)(TY100012* C_115006, TY49545* Fn_115007, NI Tos_115008) {
TY49545* Result_115207;
TY53092 It_115208;
NIM_BOOL LOC6;
NU8 LOC9;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "SearchForProc";
F.prev = framePtr;
F.filename = "rod/procfind.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_115207 = 0;
memset((void*)&It_115208, 0, sizeof(It_115208));
F.line = 44;F.filename = "procfind.nim";
if ((NU)(Tos_115008) >= (NU)((*C_115006).Tab.Stack->Sup.len)) raiseIndexError();
Result_115207 = Initidentiter_53095(&It_115208, &(*C_115006).Tab.Stack->data[Tos_115008], (*Fn_115007).Name);
F.line = 45;F.filename = "procfind.nim";
while (1) {
if (!!((Result_115207 == NIM_NIL))) goto LA1;
F.line = 46;F.filename = "procfind.nim";
if (!((*Result_115207).Kind == (*Fn_115007).Kind)) goto LA3;
F.line = 47;F.filename = "procfind.nim";
if (((TMP115197[(*(*Result_115207).Ast).Kind/8] &(1<<((*(*Result_115207).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(1) >= (NU)((*(*Result_115207).Ast).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (((TMP115197[(*(*Fn_115007).Ast).Kind/8] &(1<<((*(*Fn_115007).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(1) >= (NU)((*(*Fn_115007).Ast).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC6 = Equalgenericparams_115014((*(*Result_115207).Ast).KindU.S6.Sons->data[1], (*(*Fn_115007).Ast).KindU.S6.Sons->data[1]);
if (!LOC6) goto LA7;
F.line = 49;F.filename = "procfind.nim";
LOC9 = Equalparams_90065((*(*Result_115207).Typ).N, (*(*Fn_115007).Typ).N);
switch (LOC9) {
case ((NU8) 1):
F.line = 51;F.filename = "procfind.nim";
goto BeforeRet;
break;
case ((NU8) 2):
F.line = 53;F.filename = "procfind.nim";
Limessage_41562((*Fn_115007).Info, ((NU8) 63), (*(*Fn_115007).Name).S);
F.line = 54;F.filename = "procfind.nim";
goto BeforeRet;
break;
case ((NU8) 0):
break;
}
LA7: ;
LA3: ;
F.line = 57;F.filename = "procfind.nim";
if ((NU)(Tos_115008) >= (NU)((*C_115006).Tab.Stack->Sup.len)) raiseIndexError();
Result_115207 = Nextidentiter_53101(&It_115208, &(*C_115006).Tab.Stack->data[Tos_115008]);
} LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_115207;
}
N_NIMCALL(NIM_BOOL, Paramsfitborrow_115256)(TY49523* A_115258, TY49523* B_115259) {
NIM_BOOL Result_115260;
NI Length_115261;
TY49545* M_115262;
TY49545* N_115263;
NI LOC2;
NI I_115273;
NI HEX3Atmp_115365;
NI Res_115367;
NIM_BOOL LOC6;
NIM_BOOL LOC9;
NIM_BOOL LOC13;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "paramsFitBorrow";
F.prev = framePtr;
F.filename = "rod/procfind.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_115260 = 0;
Length_115261 = 0;
M_115262 = 0;
N_115263 = 0;
F.line = 63;F.filename = "procfind.nim";
Length_115261 = Sonslen_49801(A_115258);
F.line = 64;F.filename = "procfind.nim";
Result_115260 = NIM_FALSE;
F.line = 65;F.filename = "procfind.nim";
LOC2 = Sonslen_49801(B_115259);
if (!(Length_115261 == LOC2)) goto LA3;
I_115273 = 0;
HEX3Atmp_115365 = 0;
F.line = 66;F.filename = "procfind.nim";
HEX3Atmp_115365 = subInt(Length_115261, 1);
Res_115367 = 0;
F.line = 1011;F.filename = "system.nim";
Res_115367 = 1;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_115367 <= HEX3Atmp_115365)) goto LA5;
F.line = 1011;F.filename = "system.nim";
I_115273 = Res_115367;
F.line = 67;F.filename = "procfind.nim";
if (((TMP115197[(*A_115258).Kind/8] &(1<<((*A_115258).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(I_115273) >= (NU)((*A_115258).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP115200[(*(*A_115258).KindU.S6.Sons->data[I_115273]).Kind/8] &(1<<((*(*A_115258).KindU.S6.Sons->data[I_115273]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP115201));
M_115262 = (*(*A_115258).KindU.S6.Sons->data[I_115273]).KindU.S4.Sym;
F.line = 68;F.filename = "procfind.nim";
if (((TMP115197[(*B_115259).Kind/8] &(1<<((*B_115259).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(I_115273) >= (NU)((*B_115259).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP115200[(*(*B_115259).KindU.S6.Sons->data[I_115273]).Kind/8] &(1<<((*(*B_115259).KindU.S6.Sons->data[I_115273]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP115201));
N_115263 = (*(*B_115259).KindU.S6.Sons->data[I_115273]).KindU.S4.Sym;
F.line = 69;F.filename = "procfind.nim";
LOC6 = ((*M_115262).Kind == ((NU8) 3));
if (!(LOC6)) goto LA7;
LOC6 = ((*N_115263).Kind == ((NU8) 3));
LA7: ;
internalAssert("rod/procfind.nim", 69, LOC6);
F.line = 70;F.filename = "procfind.nim";
LOC9 = Equalordistinctof_90056((*M_115262).Typ, (*N_115263).Typ);
if (!!(LOC9)) goto LA10;
F.line = 70;F.filename = "procfind.nim";
goto BeforeRet;
LA10: ;
F.line = 1014;F.filename = "system.nim";
Res_115367 = addInt(Res_115367, 1);
} LA5: ;
F.line = 71;F.filename = "procfind.nim";
if (((TMP115197[(*A_115258).Kind/8] &(1<<((*A_115258).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(0) >= (NU)((*A_115258).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (((TMP115197[(*B_115259).Kind/8] &(1<<((*B_115259).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(0) >= (NU)((*B_115259).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC13 = Equalordistinctof_90056((*(*A_115258).KindU.S6.Sons->data[0]).Typ, (*(*B_115259).KindU.S6.Sons->data[0]).Typ);
if (!!(LOC13)) goto LA14;
F.line = 71;F.filename = "procfind.nim";
goto BeforeRet;
LA14: ;
F.line = 72;F.filename = "procfind.nim";
Result_115260 = NIM_TRUE;
LA3: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_115260;
}
N_NIMCALL(TY49545*, Searchforborrowproc_115009)(TY100012* C_115011, TY49545* Fn_115012, NI Tos_115013) {
TY49545* Result_115375;
TY53092 It_115376;
NI Scope_115399;
NI Res_115451;
NIM_BOOL LOC4;
NIM_BOOL LOC9;
NIM_BOOL LOC13;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "SearchForBorrowProc";
F.prev = framePtr;
F.filename = "rod/procfind.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_115375 = 0;
memset((void*)&It_115376, 0, sizeof(It_115376));
Scope_115399 = 0;
Res_115451 = 0;
F.line = 1002;F.filename = "system.nim";
Res_115451 = Tos_115013;
F.line = 1003;F.filename = "system.nim";
while (1) {
if (!(0 <= Res_115451)) goto LA1;
F.line = 1002;F.filename = "system.nim";
Scope_115399 = Res_115451;
F.line = 79;F.filename = "procfind.nim";
if ((NU)(Scope_115399) >= (NU)((*C_115011).Tab.Stack->Sup.len)) raiseIndexError();
Result_115375 = Initidentiter_53095(&It_115376, &(*C_115011).Tab.Stack->data[Scope_115399], (*Fn_115012).Name);
F.line = 80;F.filename = "procfind.nim";
while (1) {
if (!!((Result_115375 == NIM_NIL))) goto LA2;
F.line = 82;F.filename = "procfind.nim";
LOC4 = ((*Result_115375).Kind == (*Fn_115012).Kind);
if (!(LOC4)) goto LA5;
LOC4 = !(((*Result_115375).Sup.Id == (*Fn_115012).Sup.Id));
LA5: ;
if (!LOC4) goto LA6;
F.line = 83;F.filename = "procfind.nim";
if (((TMP115197[(*(*Result_115375).Ast).Kind/8] &(1<<((*(*Result_115375).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(1) >= (NU)((*(*Result_115375).Ast).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (((TMP115197[(*(*Fn_115012).Ast).Kind/8] &(1<<((*(*Fn_115012).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP115198));
if ((NU)(1) >= (NU)((*(*Fn_115012).Ast).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC9 = Equalgenericparams_115014((*(*Result_115375).Ast).KindU.S6.Sons->data[1], (*(*Fn_115012).Ast).KindU.S6.Sons->data[1]);
if (!LOC9) goto LA10;
F.line = 85;F.filename = "procfind.nim";
LOC13 = Paramsfitborrow_115256((*(*Fn_115012).Typ).N, (*(*Result_115375).Typ).N);
if (!LOC13) goto LA14;
F.line = 85;F.filename = "procfind.nim";
goto BeforeRet;
LA14: ;
LA10: ;
LA6: ;
F.line = 86;F.filename = "procfind.nim";
if ((NU)(Scope_115399) >= (NU)((*C_115011).Tab.Stack->Sup.len)) raiseIndexError();
Result_115375 = Nextidentiter_53101(&It_115376, &(*C_115011).Tab.Stack->data[Scope_115399]);
} LA2: ;
F.line = 1005;F.filename = "system.nim";
Res_115451 = subInt(Res_115451, 1);
} LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_115375;
}
N_NOINLINE(void, procfindInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "procfind";
F.prev = framePtr;
F.filename = "rod/procfind.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

