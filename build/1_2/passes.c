/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY49545 TY49545;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY49523 TY49523;
typedef struct TY48005 TY48005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY49549 TY49549;
typedef struct TY48011 TY48011;
typedef struct TY41532 TY41532;
typedef struct TY49527 TY49527;
typedef struct TY49525 TY49525;
typedef struct TY49537 TY49537;
typedef struct TY46008 TY46008;
typedef struct TY49541 TY49541;
typedef struct TY49547 TY49547;
typedef struct TY49517 TY49517;
typedef struct TY98006 TY98006;
typedef struct TY98002 TY98002;
typedef struct TY86031 TY86031;
typedef struct TY68013 TY68013;
typedef struct TY85028 TY85028;
typedef struct TY74011 TY74011;
typedef struct TY70267 TY70267;
typedef struct TY70263 TY70263;
typedef struct TY37013 TY37013;
typedef struct TY4377 TY4377;
typedef struct TY86029 TY86029;
typedef struct TY53223 TY53223;
typedef struct TY53221 TY53221;
typedef struct TY53219 TY53219;
typedef struct TY49561 TY49561;
typedef struct TY49559 TY49559;
typedef struct TY49557 TY49557;
typedef struct TY69015 TY69015;
typedef struct TY70434 TY70434;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef N_NIMCALL_PTR(TY49545*, TY98044) (NimStringDesc* Filename_98045);
typedef N_NIMCALL_PTR(TY49523*, TY98048) (NimStringDesc* Filename_98049);
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
struct TY41532 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
typedef NU8 TY49997[16];
typedef N_NIMCALL_PTR(TY98002*, TY98007) (TY49545* Module_98008, NimStringDesc* Filename_98009);
typedef N_NIMCALL_PTR(TY98002*, TY98012) (TY49545* Module_98013, NimStringDesc* Filename_98014, TY86031* Rd_98015);
typedef N_NIMCALL_PTR(TY49523*, TY98018) (TY98002* P_98019, TY49523* N_98020);
typedef N_NIMCALL_PTR(TY49523*, TY98023) (TY98002* P_98024, TY49523* Toplevelstmt_98025);
struct TY98006 {
TY98007 Open;
TY98012 Opencached;
TY98018 Close;
TY98023 Process;
};
typedef TY98006 TY98130[10];
struct TY74011 {
TY70267* Lex;
TY70263* Tok;
};
struct TY85028 {
NU8 Skin;
TY74011 Parser;
};
typedef TY98002* TY98128[10];
struct TY68013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY98002 {
  TNimObject Sup;
};
struct TY53219 {
NI Key;
NI Val;
};
struct TY53223 {
NI Counter;
TY53221* Data;
};
struct TY86029 {
NI Lastidxkey;
NI Lastidxval;
TY53223 Tab;
TY46008* R;
NI Offset;
};
struct TY49557 {
TY48005* Key;
TNimObject* Val;
};
struct TY49561 {
NI Counter;
TY49559* Data;
};
struct TY86031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY4377* Moddeps;
TY4377* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY86029 Index;
TY86029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY49561 Syms;
};
struct TY69015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY68013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY70267 {
  TY69015 Sup;
NimStringDesc* Filename;
TY70434* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY70263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY48011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY70263* Next;
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
struct TY4377 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY53221 {
  TGenericSeq Sup;
  TY53219 data[SEQ_DECL_SIZE];
};
struct TY49559 {
  TGenericSeq Sup;
  TY49557 data[SEQ_DECL_SIZE];
};
struct TY70434 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, Astneeded_98041)(TY49545* S_98043);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5275);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, Registerpass_98028)(TY98006* P_98030);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, Openpasses_98149)(TY98002** A_98152, TY49545* Module_98153, NimStringDesc* Filename_98154);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NIMCALL(void, Openpassescached_98184)(TY98002** A_98187, TY49545* Module_98188, NimStringDesc* Filename_98189, TY86031* Rd_98190);
N_NIMCALL(void, Closepasses_98205)(TY98002** A_98208);
N_NIMCALL(void, Processtoplevelstmt_98224)(TY49523* N_98226, TY98002** A_98228);
N_NIMCALL(void, Processtoplevelstmtcached_98244)(TY49523* N_98246, TY98002** A_98248);
N_NIMCALL(void, Closepassescached_98264)(TY98002** A_98267);
N_NIMCALL(void, Processmodule_98035)(TY49545* Module_98037, NimStringDesc* Filename_98038, TY68013* Stream_98039, TY86031* Rd_98040);
N_NIMCALL(TY68013*, Llstreamopen_68032)(NimStringDesc* Filename_68034, NU8 Mode_68035);
N_NIMCALL(void, Rawmessage_41553)(NU8 Msg_41555, NimStringDesc* Arg_41556);
N_NIMCALL(void, Openparsers_85034)(TY85028* P_85037, NimStringDesc* Filename_85038, TY68013* Inputstream_85039);
N_NIMCALL(TY49523*, Parsetoplevelstmt_85048)(TY85028* P_85051);
N_NIMCALL(void, Closeparsers_85040)(TY85028* P_85043);
N_NIMCALL(void, Idsynchronizationpoint_49696)(NI Idrange_49698);
N_NIMCALL(TY49523*, Loadinitsection_86067)(TY86031* R_86069);
N_NIMCALL(NI, Sonslen_49801)(TY49523* N_49803);
N_NIMCALL(void, Initpass_98031)(TY98006* P_98034);
static NIM_CONST TY49997 TMP98124 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP98125, "sons", 4);
TY98044 Gimportmodule_98047;
TY98048 Gincludefile_98051;
TY98130 Gpasses_98132;
NI Gpasseslen_98133;
N_NIMCALL(NIM_BOOL, Astneeded_98041)(TY49545* S_98043) {
NIM_BOOL Result_98055;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
NIM_BOOL LOC4;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "astNeeded";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_98055 = 0;
F.line = 54;F.filename = "passes.nim";
LOC4 = ((1536 &(1<<(((*S_98043).Kind)&31)))!=0);
if (!(LOC4)) goto LA5;
LOC4 = ((34078720 & (*S_98043).Flags) == 0);
LA5: ;
LOC3 = LOC4;
if (!(LOC3)) goto LA6;
LOC3 = !(((*(*S_98043).Typ).Callconv == ((NU8) 5)));
LA6: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA7;
if (((TMP98124[(*(*S_98043).Ast).Kind/8] &(1<<((*(*S_98043).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP98125));
if ((NU)(1) >= (NU)((*(*S_98043).Ast).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC2 = ((*(*S_98043).Ast).KindU.S6.Sons->data[1] == NIM_NIL);
LA7: ;
if (!LOC2) goto LA8;
F.line = 57;F.filename = "passes.nim";
Result_98055 = NIM_FALSE;
goto LA1;
LA8: ;
F.line = 59;F.filename = "passes.nim";
Result_98055 = NIM_TRUE;
LA1: ;
framePtr = framePtr->prev;
return Result_98055;
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
N_NIMCALL(void, Registerpass_98028)(TY98006* P_98030) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "registerPass";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 72;F.filename = "passes.nim";
if ((NU)(Gpasseslen_98133) > (NU)(9)) raiseIndexError();
Gpasses_98132[(Gpasseslen_98133)-0] = (*P_98030);
F.line = 73;F.filename = "passes.nim";
Gpasseslen_98133 = addInt(Gpasseslen_98133, 1);
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
N_NIMCALL(void, Openpasses_98149)(TY98002** A_98152, TY49545* Module_98153, NimStringDesc* Filename_98154) {
NI I_98177;
NI HEX3Atmp_98179;
NI Res_98181;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "openPasses";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_98177 = 0;
HEX3Atmp_98179 = 0;
F.line = 76;F.filename = "passes.nim";
HEX3Atmp_98179 = subInt(Gpasseslen_98133, 1);
Res_98181 = 0;
F.line = 1011;F.filename = "system.nim";
Res_98181 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_98181 <= HEX3Atmp_98179)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_98177 = Res_98181;
F.line = 77;F.filename = "passes.nim";
if ((NU)(I_98177) > (NU)(9)) raiseIndexError();
if (!!(((void*) (Gpasses_98132[(I_98177)-0].Open)) == 0)) goto LA3;
F.line = 77;F.filename = "passes.nim";
if ((NU)(I_98177) > (NU)(9)) raiseIndexError();
if ((NU)(I_98177) > (NU)(9)) raiseIndexError();
A_98152[(I_98177)-0] = Gpasses_98132[(I_98177)-0].Open(Module_98153, Filename_98154);
goto LA2;
LA3: ;
F.line = 78;F.filename = "passes.nim";
if ((NU)(I_98177) > (NU)(9)) raiseIndexError();
A_98152[(I_98177)-0] = NIM_NIL;
LA2: ;
F.line = 1014;F.filename = "system.nim";
Res_98181 = addInt(Res_98181, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Openpassescached_98184)(TY98002** A_98187, TY49545* Module_98188, NimStringDesc* Filename_98189, TY86031* Rd_98190) {
NI I_98198;
NI HEX3Atmp_98200;
NI Res_98202;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "openPassesCached";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_98198 = 0;
HEX3Atmp_98200 = 0;
F.line = 82;F.filename = "passes.nim";
HEX3Atmp_98200 = subInt(Gpasseslen_98133, 1);
Res_98202 = 0;
F.line = 1011;F.filename = "system.nim";
Res_98202 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_98202 <= HEX3Atmp_98200)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_98198 = Res_98202;
F.line = 83;F.filename = "passes.nim";
if ((NU)(I_98198) > (NU)(9)) raiseIndexError();
if (!!(((void*) (Gpasses_98132[(I_98198)-0].Opencached)) == 0)) goto LA3;
F.line = 84;F.filename = "passes.nim";
if ((NU)(I_98198) > (NU)(9)) raiseIndexError();
if ((NU)(I_98198) > (NU)(9)) raiseIndexError();
A_98187[(I_98198)-0] = Gpasses_98132[(I_98198)-0].Opencached(Module_98188, Filename_98189, Rd_98190);
goto LA2;
LA3: ;
F.line = 86;F.filename = "passes.nim";
if ((NU)(I_98198) > (NU)(9)) raiseIndexError();
A_98187[(I_98198)-0] = NIM_NIL;
LA2: ;
F.line = 1014;F.filename = "system.nim";
Res_98202 = addInt(Res_98202, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Closepasses_98205)(TY98002** A_98208) {
TY49523* M_98209;
NI I_98217;
NI HEX3Atmp_98219;
NI Res_98221;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "closePasses";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
M_98209 = 0;
F.line = 89;F.filename = "passes.nim";
M_98209 = NIM_NIL;
I_98217 = 0;
HEX3Atmp_98219 = 0;
F.line = 90;F.filename = "passes.nim";
HEX3Atmp_98219 = subInt(Gpasseslen_98133, 1);
Res_98221 = 0;
F.line = 1011;F.filename = "system.nim";
Res_98221 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_98221 <= HEX3Atmp_98219)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_98217 = Res_98221;
F.line = 91;F.filename = "passes.nim";
if ((NU)(I_98217) > (NU)(9)) raiseIndexError();
if (!!(((void*) (Gpasses_98132[(I_98217)-0].Close)) == 0)) goto LA3;
F.line = 91;F.filename = "passes.nim";
if ((NU)(I_98217) > (NU)(9)) raiseIndexError();
if ((NU)(I_98217) > (NU)(9)) raiseIndexError();
M_98209 = Gpasses_98132[(I_98217)-0].Close(A_98208[(I_98217)-0], M_98209);
LA3: ;
F.line = 92;F.filename = "passes.nim";
if ((NU)(I_98217) > (NU)(9)) raiseIndexError();
A_98208[(I_98217)-0] = NIM_NIL;
F.line = 1014;F.filename = "system.nim";
Res_98221 = addInt(Res_98221, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Processtoplevelstmt_98224)(TY49523* N_98226, TY98002** A_98228) {
TY49523* M_98229;
NI I_98237;
NI HEX3Atmp_98239;
NI Res_98241;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "processTopLevelStmt";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
M_98229 = 0;
F.line = 96;F.filename = "passes.nim";
M_98229 = N_98226;
I_98237 = 0;
HEX3Atmp_98239 = 0;
F.line = 97;F.filename = "passes.nim";
HEX3Atmp_98239 = subInt(Gpasseslen_98133, 1);
Res_98241 = 0;
F.line = 1011;F.filename = "system.nim";
Res_98241 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_98241 <= HEX3Atmp_98239)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_98237 = Res_98241;
F.line = 98;F.filename = "passes.nim";
if ((NU)(I_98237) > (NU)(9)) raiseIndexError();
if (!!(((void*) (Gpasses_98132[(I_98237)-0].Process)) == 0)) goto LA3;
F.line = 98;F.filename = "passes.nim";
if ((NU)(I_98237) > (NU)(9)) raiseIndexError();
if ((NU)(I_98237) > (NU)(9)) raiseIndexError();
M_98229 = Gpasses_98132[(I_98237)-0].Process(A_98228[(I_98237)-0], M_98229);
LA3: ;
F.line = 1014;F.filename = "system.nim";
Res_98241 = addInt(Res_98241, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Processtoplevelstmtcached_98244)(TY49523* N_98246, TY98002** A_98248) {
TY49523* M_98249;
NI I_98257;
NI HEX3Atmp_98259;
NI Res_98261;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "processTopLevelStmtCached";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
M_98249 = 0;
F.line = 102;F.filename = "passes.nim";
M_98249 = N_98246;
I_98257 = 0;
HEX3Atmp_98259 = 0;
F.line = 103;F.filename = "passes.nim";
HEX3Atmp_98259 = subInt(Gpasseslen_98133, 1);
Res_98261 = 0;
F.line = 1011;F.filename = "system.nim";
Res_98261 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_98261 <= HEX3Atmp_98259)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_98257 = Res_98261;
F.line = 104;F.filename = "passes.nim";
if ((NU)(I_98257) > (NU)(9)) raiseIndexError();
if (!!(((void*) (Gpasses_98132[(I_98257)-0].Opencached)) == 0)) goto LA3;
F.line = 104;F.filename = "passes.nim";
if ((NU)(I_98257) > (NU)(9)) raiseIndexError();
if ((NU)(I_98257) > (NU)(9)) raiseIndexError();
M_98249 = Gpasses_98132[(I_98257)-0].Process(A_98248[(I_98257)-0], M_98249);
LA3: ;
F.line = 1014;F.filename = "system.nim";
Res_98261 = addInt(Res_98261, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Closepassescached_98264)(TY98002** A_98267) {
TY49523* M_98268;
NI I_98276;
NI HEX3Atmp_98278;
NI Res_98280;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "closePassesCached";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
M_98268 = 0;
F.line = 107;F.filename = "passes.nim";
M_98268 = NIM_NIL;
I_98276 = 0;
HEX3Atmp_98278 = 0;
F.line = 108;F.filename = "passes.nim";
HEX3Atmp_98278 = subInt(Gpasseslen_98133, 1);
Res_98280 = 0;
F.line = 1011;F.filename = "system.nim";
Res_98280 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_98280 <= HEX3Atmp_98278)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_98276 = Res_98280;
F.line = 109;F.filename = "passes.nim";
if ((NU)(I_98276) > (NU)(9)) raiseIndexError();
LOC3 = !(((void*) (Gpasses_98132[(I_98276)-0].Opencached)) == 0);
if (!(LOC3)) goto LA4;
if ((NU)(I_98276) > (NU)(9)) raiseIndexError();
LOC3 = !(((void*) (Gpasses_98132[(I_98276)-0].Close)) == 0);
LA4: ;
if (!LOC3) goto LA5;
F.line = 110;F.filename = "passes.nim";
if ((NU)(I_98276) > (NU)(9)) raiseIndexError();
if ((NU)(I_98276) > (NU)(9)) raiseIndexError();
M_98268 = Gpasses_98132[(I_98276)-0].Close(A_98267[(I_98276)-0], M_98268);
LA5: ;
F.line = 111;F.filename = "passes.nim";
if ((NU)(I_98276) > (NU)(9)) raiseIndexError();
A_98267[(I_98276)-0] = NIM_NIL;
F.line = 1014;F.filename = "system.nim";
Res_98280 = addInt(Res_98280, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Processmodule_98035)(TY49545* Module_98037, NimStringDesc* Filename_98038, TY68013* Stream_98039, TY86031* Rd_98040) {
TY85028 P_98289;
TY49523* N_98290;
TY98128 A_98291;
TY68013* S_98292;
NI I_98360;
NI HEX3Atmp_98378;
NI LOC18;
NI Res_98380;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "processModule";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&P_98289, 0, sizeof(P_98289));
N_98290 = 0;
memset((void*)&A_98291, 0, sizeof(A_98291));
S_98292 = 0;
F.line = 120;F.filename = "passes.nim";
if (!(Rd_98040 == NIM_NIL)) goto LA2;
F.line = 121;F.filename = "passes.nim";
Openpasses_98149(A_98291, Module_98037, Filename_98038);
F.line = 122;F.filename = "passes.nim";
if (!(Stream_98039 == NIM_NIL)) goto LA5;
F.line = 123;F.filename = "passes.nim";
S_98292 = Llstreamopen_68032(Filename_98038, ((NU8) 0));
F.line = 124;F.filename = "passes.nim";
if (!(S_98292 == NIM_NIL)) goto LA8;
F.line = 125;F.filename = "passes.nim";
Rawmessage_41553(((NU8) 2), Filename_98038);
F.line = 126;F.filename = "passes.nim";
goto BeforeRet;
LA8: ;
goto LA4;
LA5: ;
F.line = 128;F.filename = "passes.nim";
S_98292 = Stream_98039;
LA4: ;
F.line = 129;F.filename = "passes.nim";
while (1) {
F.line = 130;F.filename = "passes.nim";
Openparsers_85034(&P_98289, Filename_98038, S_98292);
F.line = 131;F.filename = "passes.nim";
while (1) {
F.line = 132;F.filename = "passes.nim";
N_98290 = Parsetoplevelstmt_85048(&P_98289);
F.line = 133;F.filename = "passes.nim";
if (!(N_98290 == NIM_NIL)) goto LA13;
F.line = 133;F.filename = "passes.nim";
goto LA11;
LA13: ;
F.line = 134;F.filename = "passes.nim";
Processtoplevelstmt_98224(N_98290, A_98291);
} LA11: ;
F.line = 135;F.filename = "passes.nim";
Closeparsers_85040(&P_98289);
F.line = 136;F.filename = "passes.nim";
if (!!(((*S_98292).Kind == ((NU8) 3)))) goto LA16;
F.line = 136;F.filename = "passes.nim";
goto LA10;
LA16: ;
} LA10: ;
F.line = 137;F.filename = "passes.nim";
Closepasses_98205(A_98291);
F.line = 139;F.filename = "passes.nim";
Idsynchronizationpoint_49696(1000);
goto LA1;
LA2: ;
F.line = 141;F.filename = "passes.nim";
Openpassescached_98184(A_98291, Module_98037, Filename_98038, Rd_98040);
F.line = 142;F.filename = "passes.nim";
N_98290 = Loadinitsection_86067(Rd_98040);
I_98360 = 0;
HEX3Atmp_98378 = 0;
F.line = 143;F.filename = "passes.nim";
LOC18 = Sonslen_49801(N_98290);
HEX3Atmp_98378 = subInt(LOC18, 1);
Res_98380 = 0;
F.line = 1011;F.filename = "system.nim";
Res_98380 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_98380 <= HEX3Atmp_98378)) goto LA19;
F.line = 1011;F.filename = "system.nim";
I_98360 = Res_98380;
F.line = 143;F.filename = "passes.nim";
if (((TMP98124[(*N_98290).Kind/8] &(1<<((*N_98290).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP98125));
if ((NU)(I_98360) >= (NU)((*N_98290).KindU.S6.Sons->Sup.len)) raiseIndexError();
Processtoplevelstmtcached_98244((*N_98290).KindU.S6.Sons->data[I_98360], A_98291);
F.line = 1014;F.filename = "system.nim";
Res_98380 = addInt(Res_98380, 1);
} LA19: ;
F.line = 144;F.filename = "passes.nim";
Closepassescached_98264(A_98291);
LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Initpass_98031)(TY98006* P_98034) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "initPass";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 147;F.filename = "passes.nim";
(*P_98034).Open = NIM_NIL;
F.line = 148;F.filename = "passes.nim";
(*P_98034).Opencached = NIM_NIL;
F.line = 149;F.filename = "passes.nim";
(*P_98034).Close = NIM_NIL;
F.line = 150;F.filename = "passes.nim";
(*P_98034).Process = NIM_NIL;
framePtr = framePtr->prev;
}
N_NOINLINE(void, passesInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "passes";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

