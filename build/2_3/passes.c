/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY54545 TY54545;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY54523 TY54523;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54549 TY54549;
typedef struct TY53011 TY53011;
typedef struct TY46532 TY46532;
typedef struct TY54527 TY54527;
typedef struct TY54525 TY54525;
typedef struct TY54537 TY54537;
typedef struct TY51008 TY51008;
typedef struct TY54541 TY54541;
typedef struct TY54547 TY54547;
typedef struct TY54517 TY54517;
typedef struct TY102006 TY102006;
typedef struct TY102002 TY102002;
typedef struct TY90031 TY90031;
typedef struct TY72013 TY72013;
typedef struct TY89028 TY89028;
typedef struct TY78011 TY78011;
typedef struct TY74267 TY74267;
typedef struct TY74263 TY74263;
typedef struct TY42013 TY42013;
typedef struct TY4377 TY4377;
typedef struct TY90029 TY90029;
typedef struct TY58223 TY58223;
typedef struct TY58221 TY58221;
typedef struct TY58219 TY58219;
typedef struct TY54561 TY54561;
typedef struct TY54559 TY54559;
typedef struct TY54557 TY54557;
typedef struct TY73015 TY73015;
typedef struct TY74434 TY74434;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef N_NIMCALL_PTR(TY54545*, TY102044) (NimStringDesc* Filename_102045);
typedef N_NIMCALL_PTR(TY54523*, TY102048) (NimStringDesc* Filename_102049);
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
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY46532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY54527 {
TNimType* m_type;
NI Counter;
TY54525* Data;
};
struct TY54537 {
NU8 K;
NU8 S;
NU8 Flags;
TY54549* T;
TY51008* R;
NI A;
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
typedef NU8 TY54997[16];
typedef N_NIMCALL_PTR(TY102002*, TY102007) (TY54545* Module_102008, NimStringDesc* Filename_102009);
typedef N_NIMCALL_PTR(TY102002*, TY102012) (TY54545* Module_102013, NimStringDesc* Filename_102014, TY90031* Rd_102015);
typedef N_NIMCALL_PTR(TY54523*, TY102018) (TY102002* P_102019, TY54523* N_102020);
typedef N_NIMCALL_PTR(TY54523*, TY102023) (TY102002* P_102024, TY54523* Toplevelstmt_102025);
struct TY102006 {
TY102007 Open;
TY102012 Opencached;
TY102018 Close;
TY102023 Process;
};
typedef TY102006 TY102130[10];
struct TY78011 {
TY74267* Lex;
TY74263* Tok;
};
struct TY89028 {
NU8 Skin;
TY78011 Parser;
};
typedef TY102002* TY102128[10];
struct TY72013 {
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
struct TY102002 {
  TNimObject Sup;
};
struct TY58219 {
NI Key;
NI Val;
};
struct TY58223 {
NI Counter;
TY58221* Data;
};
struct TY90029 {
NI Lastidxkey;
NI Lastidxval;
TY58223 Tab;
TY51008* R;
NI Offset;
};
struct TY54557 {
TY53005* Key;
TNimObject* Val;
};
struct TY54561 {
NI Counter;
TY54559* Data;
};
struct TY90031 {
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
TY90029 Index;
TY90029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY54561 Syms;
};
struct TY73015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY72013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY74267 {
  TY73015 Sup;
NimStringDesc* Filename;
TY74434* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY74263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY53011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY74263* Next;
};
struct TY54525 {
  TGenericSeq Sup;
  TY54545* data[SEQ_DECL_SIZE];
};
struct TY54547 {
  TGenericSeq Sup;
  TY54549* data[SEQ_DECL_SIZE];
};
struct TY54517 {
  TGenericSeq Sup;
  TY54523* data[SEQ_DECL_SIZE];
};
struct TY4377 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY58221 {
  TGenericSeq Sup;
  TY58219 data[SEQ_DECL_SIZE];
};
struct TY54559 {
  TGenericSeq Sup;
  TY54557 data[SEQ_DECL_SIZE];
};
struct TY74434 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, Astneeded_102041)(TY54545* S_102043);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5275);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, Registerpass_102028)(TY102006* P_102030);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, Openpasses_102149)(TY102002** A_102152, TY54545* Module_102153, NimStringDesc* Filename_102154);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NIMCALL(void, Openpassescached_102184)(TY102002** A_102187, TY54545* Module_102188, NimStringDesc* Filename_102189, TY90031* Rd_102190);
N_NIMCALL(void, Closepasses_102205)(TY102002** A_102208);
N_NIMCALL(void, Processtoplevelstmt_102224)(TY54523* N_102226, TY102002** A_102228);
N_NIMCALL(void, Processtoplevelstmtcached_102244)(TY54523* N_102246, TY102002** A_102248);
N_NIMCALL(void, Closepassescached_102264)(TY102002** A_102267);
N_NIMCALL(void, Processmodule_102035)(TY54545* Module_102037, NimStringDesc* Filename_102038, TY72013* Stream_102039, TY90031* Rd_102040);
N_NIMCALL(TY72013*, Llstreamopen_72032)(NimStringDesc* Filename_72034, NU8 Mode_72035);
N_NIMCALL(void, Rawmessage_46553)(NU8 Msg_46555, NimStringDesc* Arg_46556);
N_NIMCALL(void, Openparsers_89034)(TY89028* P_89037, NimStringDesc* Filename_89038, TY72013* Inputstream_89039);
N_NIMCALL(TY54523*, Parsetoplevelstmt_89048)(TY89028* P_89051);
N_NIMCALL(void, Closeparsers_89040)(TY89028* P_89043);
N_NIMCALL(void, Idsynchronizationpoint_54696)(NI Idrange_54698);
N_NIMCALL(TY54523*, Loadinitsection_90067)(TY90031* R_90069);
N_NIMCALL(NI, Sonslen_54801)(TY54523* N_54803);
N_NIMCALL(void, Initpass_102031)(TY102006* P_102034);
static NIM_CONST TY54997 TMP102124 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP102125, "sons", 4);
TY102044 Gimportmodule_102047;
TY102048 Gincludefile_102051;
TY102130 Gpasses_102132;
NI Gpasseslen_102133;
N_NIMCALL(NIM_BOOL, Astneeded_102041)(TY54545* S_102043) {
NIM_BOOL Result_102055;
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
Result_102055 = 0;
F.line = 54;F.filename = "passes.nim";
LOC4 = ((393216 &(1<<(((*S_102043).Kind)&31)))!=0);
if (!(LOC4)) goto LA5;
LOC4 = ((2050 & (*S_102043).Flags) == 0);
LA5: ;
LOC3 = LOC4;
if (!(LOC3)) goto LA6;
LOC3 = !(((*(*S_102043).Typ).Callconv == ((NU8) 5)));
LA6: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA7;
if (((TMP102124[(*(*S_102043).Ast).Kind/8] &(1<<((*(*S_102043).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP102125));
if ((NU)(1) >= (NU)((*(*S_102043).Ast).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC2 = ((*(*S_102043).Ast).KindU.S6.Sons->data[1] == NIM_NIL);
LA7: ;
if (!LOC2) goto LA8;
F.line = 57;F.filename = "passes.nim";
Result_102055 = NIM_FALSE;
goto LA1;
LA8: ;
F.line = 59;F.filename = "passes.nim";
Result_102055 = NIM_TRUE;
LA1: ;
framePtr = framePtr->prev;
return Result_102055;
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
N_NIMCALL(void, Registerpass_102028)(TY102006* P_102030) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "registerPass";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 72;F.filename = "passes.nim";
if ((NU)(Gpasseslen_102133) > (NU)(9)) raiseIndexError();
Gpasses_102132[(Gpasseslen_102133)-0] = (*P_102030);
F.line = 73;F.filename = "passes.nim";
Gpasseslen_102133 = addInt(Gpasseslen_102133, 1);
framePtr = framePtr->prev;
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
N_NIMCALL(void, Openpasses_102149)(TY102002** A_102152, TY54545* Module_102153, NimStringDesc* Filename_102154) {
NI I_102177;
NI HEX3Atmp_102179;
NI Res_102181;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "openPasses";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_102177 = 0;
HEX3Atmp_102179 = 0;
F.line = 76;F.filename = "passes.nim";
HEX3Atmp_102179 = subInt(Gpasseslen_102133, 1);
Res_102181 = 0;
F.line = 1011;F.filename = "system.nim";
Res_102181 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_102181 <= HEX3Atmp_102179)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_102177 = Res_102181;
F.line = 77;F.filename = "passes.nim";
if ((NU)(I_102177) > (NU)(9)) raiseIndexError();
if (!!(((void*) (Gpasses_102132[(I_102177)-0].Open)) == 0)) goto LA3;
F.line = 77;F.filename = "passes.nim";
if ((NU)(I_102177) > (NU)(9)) raiseIndexError();
if ((NU)(I_102177) > (NU)(9)) raiseIndexError();
A_102152[(I_102177)-0] = Gpasses_102132[(I_102177)-0].Open(Module_102153, Filename_102154);
goto LA2;
LA3: ;
F.line = 78;F.filename = "passes.nim";
if ((NU)(I_102177) > (NU)(9)) raiseIndexError();
A_102152[(I_102177)-0] = NIM_NIL;
LA2: ;
F.line = 1014;F.filename = "system.nim";
Res_102181 = addInt(Res_102181, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Openpassescached_102184)(TY102002** A_102187, TY54545* Module_102188, NimStringDesc* Filename_102189, TY90031* Rd_102190) {
NI I_102198;
NI HEX3Atmp_102200;
NI Res_102202;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "openPassesCached";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_102198 = 0;
HEX3Atmp_102200 = 0;
F.line = 82;F.filename = "passes.nim";
HEX3Atmp_102200 = subInt(Gpasseslen_102133, 1);
Res_102202 = 0;
F.line = 1011;F.filename = "system.nim";
Res_102202 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_102202 <= HEX3Atmp_102200)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_102198 = Res_102202;
F.line = 83;F.filename = "passes.nim";
if ((NU)(I_102198) > (NU)(9)) raiseIndexError();
if (!!(((void*) (Gpasses_102132[(I_102198)-0].Opencached)) == 0)) goto LA3;
F.line = 84;F.filename = "passes.nim";
if ((NU)(I_102198) > (NU)(9)) raiseIndexError();
if ((NU)(I_102198) > (NU)(9)) raiseIndexError();
A_102187[(I_102198)-0] = Gpasses_102132[(I_102198)-0].Opencached(Module_102188, Filename_102189, Rd_102190);
goto LA2;
LA3: ;
F.line = 86;F.filename = "passes.nim";
if ((NU)(I_102198) > (NU)(9)) raiseIndexError();
A_102187[(I_102198)-0] = NIM_NIL;
LA2: ;
F.line = 1014;F.filename = "system.nim";
Res_102202 = addInt(Res_102202, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Closepasses_102205)(TY102002** A_102208) {
TY54523* M_102209;
NI I_102217;
NI HEX3Atmp_102219;
NI Res_102221;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "closePasses";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
M_102209 = 0;
F.line = 89;F.filename = "passes.nim";
M_102209 = NIM_NIL;
I_102217 = 0;
HEX3Atmp_102219 = 0;
F.line = 90;F.filename = "passes.nim";
HEX3Atmp_102219 = subInt(Gpasseslen_102133, 1);
Res_102221 = 0;
F.line = 1011;F.filename = "system.nim";
Res_102221 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_102221 <= HEX3Atmp_102219)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_102217 = Res_102221;
F.line = 91;F.filename = "passes.nim";
if ((NU)(I_102217) > (NU)(9)) raiseIndexError();
if (!!(((void*) (Gpasses_102132[(I_102217)-0].Close)) == 0)) goto LA3;
F.line = 91;F.filename = "passes.nim";
if ((NU)(I_102217) > (NU)(9)) raiseIndexError();
if ((NU)(I_102217) > (NU)(9)) raiseIndexError();
M_102209 = Gpasses_102132[(I_102217)-0].Close(A_102208[(I_102217)-0], M_102209);
LA3: ;
F.line = 92;F.filename = "passes.nim";
if ((NU)(I_102217) > (NU)(9)) raiseIndexError();
A_102208[(I_102217)-0] = NIM_NIL;
F.line = 1014;F.filename = "system.nim";
Res_102221 = addInt(Res_102221, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Processtoplevelstmt_102224)(TY54523* N_102226, TY102002** A_102228) {
TY54523* M_102229;
NI I_102237;
NI HEX3Atmp_102239;
NI Res_102241;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "processTopLevelStmt";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
M_102229 = 0;
F.line = 96;F.filename = "passes.nim";
M_102229 = N_102226;
I_102237 = 0;
HEX3Atmp_102239 = 0;
F.line = 97;F.filename = "passes.nim";
HEX3Atmp_102239 = subInt(Gpasseslen_102133, 1);
Res_102241 = 0;
F.line = 1011;F.filename = "system.nim";
Res_102241 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_102241 <= HEX3Atmp_102239)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_102237 = Res_102241;
F.line = 98;F.filename = "passes.nim";
if ((NU)(I_102237) > (NU)(9)) raiseIndexError();
if (!!(((void*) (Gpasses_102132[(I_102237)-0].Process)) == 0)) goto LA3;
F.line = 98;F.filename = "passes.nim";
if ((NU)(I_102237) > (NU)(9)) raiseIndexError();
if ((NU)(I_102237) > (NU)(9)) raiseIndexError();
M_102229 = Gpasses_102132[(I_102237)-0].Process(A_102228[(I_102237)-0], M_102229);
LA3: ;
F.line = 1014;F.filename = "system.nim";
Res_102241 = addInt(Res_102241, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Processtoplevelstmtcached_102244)(TY54523* N_102246, TY102002** A_102248) {
TY54523* M_102249;
NI I_102257;
NI HEX3Atmp_102259;
NI Res_102261;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "processTopLevelStmtCached";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
M_102249 = 0;
F.line = 102;F.filename = "passes.nim";
M_102249 = N_102246;
I_102257 = 0;
HEX3Atmp_102259 = 0;
F.line = 103;F.filename = "passes.nim";
HEX3Atmp_102259 = subInt(Gpasseslen_102133, 1);
Res_102261 = 0;
F.line = 1011;F.filename = "system.nim";
Res_102261 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_102261 <= HEX3Atmp_102259)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_102257 = Res_102261;
F.line = 104;F.filename = "passes.nim";
if ((NU)(I_102257) > (NU)(9)) raiseIndexError();
if (!!(((void*) (Gpasses_102132[(I_102257)-0].Opencached)) == 0)) goto LA3;
F.line = 104;F.filename = "passes.nim";
if ((NU)(I_102257) > (NU)(9)) raiseIndexError();
if ((NU)(I_102257) > (NU)(9)) raiseIndexError();
M_102249 = Gpasses_102132[(I_102257)-0].Process(A_102248[(I_102257)-0], M_102249);
LA3: ;
F.line = 1014;F.filename = "system.nim";
Res_102261 = addInt(Res_102261, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Closepassescached_102264)(TY102002** A_102267) {
TY54523* M_102268;
NI I_102276;
NI HEX3Atmp_102278;
NI Res_102280;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "closePassesCached";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
M_102268 = 0;
F.line = 107;F.filename = "passes.nim";
M_102268 = NIM_NIL;
I_102276 = 0;
HEX3Atmp_102278 = 0;
F.line = 108;F.filename = "passes.nim";
HEX3Atmp_102278 = subInt(Gpasseslen_102133, 1);
Res_102280 = 0;
F.line = 1011;F.filename = "system.nim";
Res_102280 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_102280 <= HEX3Atmp_102278)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_102276 = Res_102280;
F.line = 109;F.filename = "passes.nim";
if ((NU)(I_102276) > (NU)(9)) raiseIndexError();
LOC3 = !(((void*) (Gpasses_102132[(I_102276)-0].Opencached)) == 0);
if (!(LOC3)) goto LA4;
if ((NU)(I_102276) > (NU)(9)) raiseIndexError();
LOC3 = !(((void*) (Gpasses_102132[(I_102276)-0].Close)) == 0);
LA4: ;
if (!LOC3) goto LA5;
F.line = 110;F.filename = "passes.nim";
if ((NU)(I_102276) > (NU)(9)) raiseIndexError();
if ((NU)(I_102276) > (NU)(9)) raiseIndexError();
M_102268 = Gpasses_102132[(I_102276)-0].Close(A_102267[(I_102276)-0], M_102268);
LA5: ;
F.line = 111;F.filename = "passes.nim";
if ((NU)(I_102276) > (NU)(9)) raiseIndexError();
A_102267[(I_102276)-0] = NIM_NIL;
F.line = 1014;F.filename = "system.nim";
Res_102280 = addInt(Res_102280, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Processmodule_102035)(TY54545* Module_102037, NimStringDesc* Filename_102038, TY72013* Stream_102039, TY90031* Rd_102040) {
TY89028 P_102289;
TY54523* N_102290;
TY102128 A_102291;
TY72013* S_102292;
NI I_102360;
NI HEX3Atmp_102378;
NI LOC18;
NI Res_102380;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "processModule";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&P_102289, 0, sizeof(P_102289));
N_102290 = 0;
memset((void*)&A_102291, 0, sizeof(A_102291));
S_102292 = 0;
F.line = 120;F.filename = "passes.nim";
if (!(Rd_102040 == NIM_NIL)) goto LA2;
F.line = 121;F.filename = "passes.nim";
Openpasses_102149(A_102291, Module_102037, Filename_102038);
F.line = 122;F.filename = "passes.nim";
if (!(Stream_102039 == NIM_NIL)) goto LA5;
F.line = 123;F.filename = "passes.nim";
S_102292 = Llstreamopen_72032(Filename_102038, ((NU8) 0));
F.line = 124;F.filename = "passes.nim";
if (!(S_102292 == NIM_NIL)) goto LA8;
F.line = 125;F.filename = "passes.nim";
Rawmessage_46553(((NU8) 2), Filename_102038);
F.line = 126;F.filename = "passes.nim";
goto BeforeRet;
LA8: ;
goto LA4;
LA5: ;
F.line = 128;F.filename = "passes.nim";
S_102292 = Stream_102039;
LA4: ;
F.line = 129;F.filename = "passes.nim";
while (1) {
F.line = 130;F.filename = "passes.nim";
Openparsers_89034(&P_102289, Filename_102038, S_102292);
F.line = 131;F.filename = "passes.nim";
while (1) {
F.line = 132;F.filename = "passes.nim";
N_102290 = Parsetoplevelstmt_89048(&P_102289);
F.line = 133;F.filename = "passes.nim";
if (!(N_102290 == NIM_NIL)) goto LA13;
F.line = 133;F.filename = "passes.nim";
goto LA11;
LA13: ;
F.line = 134;F.filename = "passes.nim";
Processtoplevelstmt_102224(N_102290, A_102291);
} LA11: ;
F.line = 135;F.filename = "passes.nim";
Closeparsers_89040(&P_102289);
F.line = 136;F.filename = "passes.nim";
if (!!(((*S_102292).Kind == ((NU8) 3)))) goto LA16;
F.line = 136;F.filename = "passes.nim";
goto LA10;
LA16: ;
} LA10: ;
F.line = 137;F.filename = "passes.nim";
Closepasses_102205(A_102291);
F.line = 139;F.filename = "passes.nim";
Idsynchronizationpoint_54696(1000);
goto LA1;
LA2: ;
F.line = 141;F.filename = "passes.nim";
Openpassescached_102184(A_102291, Module_102037, Filename_102038, Rd_102040);
F.line = 142;F.filename = "passes.nim";
N_102290 = Loadinitsection_90067(Rd_102040);
I_102360 = 0;
HEX3Atmp_102378 = 0;
F.line = 143;F.filename = "passes.nim";
LOC18 = Sonslen_54801(N_102290);
HEX3Atmp_102378 = subInt(LOC18, 1);
Res_102380 = 0;
F.line = 1011;F.filename = "system.nim";
Res_102380 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_102380 <= HEX3Atmp_102378)) goto LA19;
F.line = 1011;F.filename = "system.nim";
I_102360 = Res_102380;
F.line = 143;F.filename = "passes.nim";
if (((TMP102124[(*N_102290).Kind/8] &(1<<((*N_102290).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP102125));
if ((NU)(I_102360) >= (NU)((*N_102290).KindU.S6.Sons->Sup.len)) raiseIndexError();
Processtoplevelstmtcached_102244((*N_102290).KindU.S6.Sons->data[I_102360], A_102291);
F.line = 1014;F.filename = "system.nim";
Res_102380 = addInt(Res_102380, 1);
} LA19: ;
F.line = 144;F.filename = "passes.nim";
Closepassescached_102264(A_102291);
LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Initpass_102031)(TY102006* P_102034) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "initPass";
F.prev = framePtr;
F.filename = "rod/passes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 147;F.filename = "passes.nim";
(*P_102034).Open = NIM_NIL;
F.line = 148;F.filename = "passes.nim";
(*P_102034).Opencached = NIM_NIL;
F.line = 149;F.filename = "passes.nim";
(*P_102034).Close = NIM_NIL;
F.line = 150;F.filename = "passes.nim";
(*P_102034).Process = NIM_NIL;
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

