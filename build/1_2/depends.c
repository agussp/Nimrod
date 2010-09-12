/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY46008 TY46008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY49523 TY49523;
typedef struct TY98002 TY98002;
typedef struct TY182010 TY182010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY49549 TY49549;
typedef struct TY41532 TY41532;
typedef struct TY49545 TY49545;
typedef struct TY48011 TY48011;
typedef struct TY49517 TY49517;
typedef struct TY32515 TY32515;
typedef struct TNimObject TNimObject;
typedef struct TY48005 TY48005;
typedef struct TY49527 TY49527;
typedef struct TY49525 TY49525;
typedef struct TY49537 TY49537;
typedef struct TY49541 TY49541;
typedef struct TY10402 TY10402;
typedef struct TY7804 TY7804;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY98006 TY98006;
typedef struct TY86031 TY86031;
typedef struct TY49547 TY49547;
typedef struct TY37013 TY37013;
typedef struct TY4377 TY4377;
typedef struct TY86029 TY86029;
typedef struct TY53223 TY53223;
typedef struct TY53221 TY53221;
typedef struct TY53219 TY53219;
typedef struct TY49561 TY49561;
typedef struct TY49559 TY49559;
typedef struct TY49557 TY49557;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef TY46008* TY53695[2];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY32515 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef NU8 TY49997[16];
struct TNimObject {
TNimType* m_type;
};
struct TY98002 {
  TNimObject Sup;
};
struct TY182010 {
  TY98002 Sup;
TY49545* Module;
NimStringDesc* Filename;
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
struct TY46008 {
  TNimObject Sup;
TY46008* Left;
TY46008* Right;
NI Length;
NimStringDesc* Data;
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
struct TY49517 {
  TGenericSeq Sup;
  TY49523* data[SEQ_DECL_SIZE];
};
struct TY49525 {
  TGenericSeq Sup;
  TY49545* data[SEQ_DECL_SIZE];
};
struct TY49547 {
  TGenericSeq Sup;
  TY49549* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, Adddependencyaux_182016)(NimStringDesc* Importing_182018, NimStringDesc* Imported_182019);
N_NIMCALL(void, Appf_46074)(TY46008** C_46077, NimStringDesc* Frmt_46078, TY46008** Args_46080, NI Args_46080Len0);
N_NIMCALL(TY46008*, Torope_46046)(NimStringDesc* S_46048);
N_NIMCALL(TY49523*, Adddotdependency_182026)(TY98002* C_182028, TY49523* N_182029);
N_NIMCALL(void, chckObj)(TNimType* Obj_5375, TNimType* Subclass_5376);
N_NIMCALL(NI, Sonslen_49801)(TY49523* N_49803);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_32514, TY32515* Result);
N_NIMCALL(NimStringDesc*, Getmodulefile_103013)(TY49523* N_103015);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5275);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(void, Generatedot_182006)(NimStringDesc* Project_182008);
N_NIMCALL(void, Writerope_46058)(TY46008* Head_46060, NimStringDesc* Filename_46061);
N_NIMCALL(TY46008*, Ropef_46069)(NimStringDesc* Frmt_46071, TY46008** Args_46073, NI Args_46073Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_32820, NimStringDesc* Ext_32821);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_32585);
N_NIMCALL(TY98002*, Myopen_182137)(TY49545* Module_182139, NimStringDesc* Filename_182140);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
static N_INLINE(void, asgnRef)(void** Dest_11614, void* Src_11615);
static N_INLINE(void, Incref_11602)(TY10402* C_11604);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NIM_BOOL, Canbecycleroot_10840)(TY10402* C_10842);
static N_INLINE(void, Rtladdcycleroot_11452)(TY10402* C_11454);
N_NOINLINE(void, Incl_10674)(TY10414* S_10677, TY10402* Cell_10678);
static N_INLINE(TY10402*, Usrtocell_10836)(void* Usr_10838);
static N_INLINE(void, Decref_11464)(TY10402* C_11466);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11458)(TY10402* C_11460);
N_NOINLINE(void, Addzct_10825)(TY10418* S_10828, TY10402* C_10829);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619);
N_NIMCALL(TY98006, Gendependpass_182004)(void);
N_NIMCALL(void, Initpass_98031)(TY98006* P_98034);
STRING_LITERAL(TMP182025, "$1 -> $2;$n", 11);
static NIM_CONST TY49997 TMP182125 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP182126, "sons", 4);
STRING_LITERAL(TMP182134, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP182135, "", 0);
STRING_LITERAL(TMP182136, "dot", 3);
TY46008* Gdotgraph_182015;
extern TNimType* NTI182010; /* TGen */
extern TNimType* NTI182012; /* PGen */
extern TY7816 Dl_7815;
extern TY10790 Gch_10810;
extern TY7820 Dl_7819;
N_NIMCALL(void, Adddependencyaux_182016)(NimStringDesc* Importing_182018, NimStringDesc* Imported_182019) {
TY53695 LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "addDependencyAux";
F.prev = framePtr;
F.filename = "rod/depends.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 27;F.filename = "depends.nim";
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = Torope_46046(Importing_182018);
LOC1[1] = Torope_46046(Imported_182019);
Appf_46074(&Gdotgraph_182015, ((NimStringDesc*) &TMP182025), LOC1, 2);
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
N_NIMCALL(TY49523*, Adddotdependency_182026)(TY98002* C_182028, TY49523* N_182029) {
TY49523* Result_182030;
TY182010* G_182042;
NI I_182065;
NI HEX3Atmp_182113;
NI LOC4;
NI Res_182115;
NimStringDesc* Imported_182078;
NimStringDesc* LOC6;
TY32515 LOC7;
NimStringDesc* Imported_182091;
NimStringDesc* LOC8;
TY32515 LOC9;
NI I_182099;
NI HEX3Atmp_182119;
NI LOC10;
NI Res_182121;
TY49523* LOC12;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "addDotDependency";
F.prev = framePtr;
F.filename = "rod/depends.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_182030 = 0;
F.line = 31;F.filename = "depends.nim";
Result_182030 = N_182029;
F.line = 32;F.filename = "depends.nim";
if (!(N_182029 == NIM_NIL)) goto LA2;
F.line = 32;F.filename = "depends.nim";
goto BeforeRet;
LA2: ;
G_182042 = 0;
F.line = 33;F.filename = "depends.nim";
if (C_182028) chckObj((*C_182028).Sup.m_type, NTI182010);
G_182042 = ((TY182010*) (C_182028));
F.line = 34;F.filename = "depends.nim";
switch ((*N_182029).Kind) {
case ((NU8) 102):
I_182065 = 0;
HEX3Atmp_182113 = 0;
F.line = 36;F.filename = "depends.nim";
LOC4 = Sonslen_49801(N_182029);
HEX3Atmp_182113 = subInt(LOC4, 1);
Res_182115 = 0;
F.line = 1011;F.filename = "system.nim";
Res_182115 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_182115 <= HEX3Atmp_182113)) goto LA5;
F.line = 1011;F.filename = "system.nim";
I_182065 = Res_182115;
Imported_182078 = 0;
F.line = 37;F.filename = "depends.nim";
if (((TMP182125[(*N_182029).Kind/8] &(1<<((*N_182029).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP182126));
if ((NU)(I_182065) >= (NU)((*N_182029).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC6 = 0;
LOC6 = Getmodulefile_103013((*N_182029).KindU.S6.Sons->data[I_182065]);
memset((void*)&LOC7, 0, sizeof(LOC7));
nossplitFile(LOC6, &LOC7);
Imported_182078 = copyString(LOC7.Name);
F.line = 38;F.filename = "depends.nim";
Adddependencyaux_182016((*(*(*G_182042).Module).Name).S, Imported_182078);
F.line = 1014;F.filename = "system.nim";
Res_182115 = addInt(Res_182115, 1);
} LA5: ;
break;
case ((NU8) 103):
Imported_182091 = 0;
F.line = 40;F.filename = "depends.nim";
if (((TMP182125[(*N_182029).Kind/8] &(1<<((*N_182029).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP182126));
if ((NU)(0) >= (NU)((*N_182029).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC8 = 0;
LOC8 = Getmodulefile_103013((*N_182029).KindU.S6.Sons->data[0]);
memset((void*)&LOC9, 0, sizeof(LOC9));
nossplitFile(LOC8, &LOC9);
Imported_182091 = copyString(LOC9.Name);
F.line = 41;F.filename = "depends.nim";
Adddependencyaux_182016((*(*(*G_182042).Module).Name).S, Imported_182091);
break;
case ((NU8) 101):
case ((NU8) 99):
case ((NU8) 106):
case ((NU8) 107):
I_182099 = 0;
HEX3Atmp_182119 = 0;
F.line = 43;F.filename = "depends.nim";
LOC10 = Sonslen_49801(N_182029);
HEX3Atmp_182119 = subInt(LOC10, 1);
Res_182121 = 0;
F.line = 1011;F.filename = "system.nim";
Res_182121 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_182121 <= HEX3Atmp_182119)) goto LA11;
F.line = 1011;F.filename = "system.nim";
I_182099 = Res_182121;
F.line = 43;F.filename = "depends.nim";
if (((TMP182125[(*N_182029).Kind/8] &(1<<((*N_182029).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP182126));
if ((NU)(I_182099) >= (NU)((*N_182029).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC12 = 0;
LOC12 = Adddotdependency_182026(C_182028, (*N_182029).KindU.S6.Sons->data[I_182099]);
F.line = 1014;F.filename = "system.nim";
Res_182121 = addInt(Res_182121, 1);
} LA11: ;
break;
default:
break;
}
BeforeRet: ;
framePtr = framePtr->prev;
return Result_182030;
}
N_NIMCALL(void, Generatedot_182006)(NimStringDesc* Project_182008) {
TY53695 LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
TY46008* LOC4;
NimStringDesc* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "generateDot";
F.prev = framePtr;
F.filename = "rod/depends.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 48;F.filename = "depends.nim";
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC2 = 0;
LOC2 = nosextractFilename(Project_182008);
LOC3 = 0;
LOC3 = nosChangeFileExt(LOC2, ((NimStringDesc*) &TMP182135));
LOC1[0] = Torope_46046(LOC3);
LOC1[1] = Gdotgraph_182015;
LOC4 = 0;
LOC4 = Ropef_46069(((NimStringDesc*) &TMP182134), LOC1, 2);
LOC5 = 0;
LOC5 = nosChangeFileExt(Project_182008, ((NimStringDesc*) &TMP182136));
Writerope_46058(LOC4, LOC5);
framePtr = framePtr->prev;
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
static N_INLINE(NIM_BOOL, Canbecycleroot_10840)(TY10402* C_10842) {
NIM_BOOL Result_10843;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "canbeCycleRoot";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_10843 = 0;
F.line = 103;F.filename = "gc.nim";
Result_10843 = !((((*(*C_10842).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
framePtr = framePtr->prev;
return Result_10843;
}
static N_INLINE(void, Rtladdcycleroot_11452)(TY10402* C_11454) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "rtlAddCycleRoot";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 205;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA2;
F.line = 205;F.filename = "gc.nim";
Dl_7815(&Gch_10810.Cyclerootslock);
LA2: ;
F.line = 206;F.filename = "gc.nim";
Incl_10674(&Gch_10810.Cycleroots, C_11454);
F.line = 207;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 207;F.filename = "gc.nim";
Dl_7819(&Gch_10810.Cyclerootslock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, Incref_11602)(TY10402* C_11604) {
NI LOC1;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "incRef";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 226;F.filename = "gc.nim";
LOC1 = Atomicinc_3001(&(*C_11604).Refcount, 8);
F.line = 227;F.filename = "gc.nim";
LOC3 = Canbecycleroot_10840(C_11604);
if (!LOC3) goto LA4;
F.line = 228;F.filename = "gc.nim";
Rtladdcycleroot_11452(C_11604);
LA4: ;
framePtr = framePtr->prev;
}
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
static N_INLINE(void, Decref_11464)(TY10402* C_11466) {
NI LOC2;
NIM_BOOL LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "decRef";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 219;F.filename = "gc.nim";
F.line = 220;F.filename = "gc.nim";
LOC2 = Atomicdec_3006(&(*C_11466).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
F.line = 221;F.filename = "gc.nim";
Rtladdzct_11458(C_11466);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_10840(C_11466);
if (!LOC5) goto LA6;
F.line = 223;F.filename = "gc.nim";
Rtladdcycleroot_11452(C_11466);
goto LA1;
LA6: ;
LA1: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRef)(void** Dest_11614, void* Src_11615) {
TY10402* LOC4;
TY10402* LOC8;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "asgnRef";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 235;F.filename = "gc.nim";
F.line = 237;F.filename = "gc.nim";
if (!!((Src_11615 == NIM_NIL))) goto LA2;
F.line = 237;F.filename = "gc.nim";
LOC4 = Usrtocell_10836(Src_11615);
Incref_11602(LOC4);
LA2: ;
F.line = 238;F.filename = "gc.nim";
if (!!(((*Dest_11614) == NIM_NIL))) goto LA6;
F.line = 238;F.filename = "gc.nim";
LOC8 = Usrtocell_10836((*Dest_11614));
Decref_11464(LOC8);
LA6: ;
F.line = 239;F.filename = "gc.nim";
(*Dest_11614) = Src_11615;
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
N_NIMCALL(TY98002*, Myopen_182137)(TY49545* Module_182139, NimStringDesc* Filename_182140) {
TY98002* Result_182141;
TY182010* G_182142;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "myOpen";
F.prev = framePtr;
F.filename = "rod/depends.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_182141 = 0;
G_182142 = 0;
F.line = 54;F.filename = "depends.nim";
G_182142 = (TY182010*) newObj(NTI182012, sizeof(TY182010));
(*G_182142).Sup.Sup.m_type = NTI182010;
F.line = 55;F.filename = "depends.nim";
asgnRef((void**) &(*G_182142).Module, Module_182139);
F.line = 56;F.filename = "depends.nim";
asgnRefNoCycle((void**) &(*G_182142).Filename, copyString(Filename_182140));
F.line = 57;F.filename = "depends.nim";
Result_182141 = &G_182142->Sup;
framePtr = framePtr->prev;
return Result_182141;
}
N_NIMCALL(TY98006, Gendependpass_182004)(void) {
TY98006 Result_182160;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "genDependPass";
F.prev = framePtr;
F.filename = "rod/depends.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&Result_182160, 0, sizeof(Result_182160));
F.line = 60;F.filename = "depends.nim";
Initpass_98031(&Result_182160);
F.line = 61;F.filename = "depends.nim";
Result_182160.Open = Myopen_182137;
F.line = 62;F.filename = "depends.nim";
Result_182160.Process = Adddotdependency_182026;
framePtr = framePtr->prev;
return Result_182160;
}
N_NOINLINE(void, dependsInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "depends";
F.prev = framePtr;
F.filename = "rod/depends.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

