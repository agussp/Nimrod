/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

#include <pthread.h>
typedef struct TY51008 TY51008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY54523 TY54523;
typedef struct TY102002 TY102002;
typedef struct TY186010 TY186010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54549 TY54549;
typedef struct TY46532 TY46532;
typedef struct TY54545 TY54545;
typedef struct TY53011 TY53011;
typedef struct TY54517 TY54517;
typedef struct TY37715 TY37715;
typedef struct TNimObject TNimObject;
typedef struct TY53005 TY53005;
typedef struct TY54527 TY54527;
typedef struct TY54525 TY54525;
typedef struct TY54537 TY54537;
typedef struct TY54541 TY54541;
typedef struct TY10602 TY10602;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10988 TY10988;
typedef struct TY102006 TY102006;
typedef struct TY90031 TY90031;
typedef struct TY54547 TY54547;
typedef struct TY42013 TY42013;
typedef struct TY4377 TY4377;
typedef struct TY90029 TY90029;
typedef struct TY58223 TY58223;
typedef struct TY58221 TY58221;
typedef struct TY58219 TY58219;
typedef struct TY54561 TY54561;
typedef struct TY54559 TY54559;
typedef struct TY54557 TY54557;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef TY51008* TY58695[2];
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
struct TY46532 {
NI16 Line;
NI16 Col;
int Fileindex;
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
struct TY37715 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef NU8 TY54997[16];
struct TNimObject {
TNimType* m_type;
};
struct TY102002 {
  TNimObject Sup;
};
struct TY186010 {
  TY102002 Sup;
TY54545* Module;
NimStringDesc* Filename;
};
struct TY53005 {
  TNimObject Sup;
NI Id;
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
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
};
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY10988 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10990 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
NI Cyclerootslock;
NI Zctlock;
TY10988 Stat;
};
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
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
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
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
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
struct TY54517 {
  TGenericSeq Sup;
  TY54523* data[SEQ_DECL_SIZE];
};
struct TY54525 {
  TGenericSeq Sup;
  TY54545* data[SEQ_DECL_SIZE];
};
struct TY54547 {
  TGenericSeq Sup;
  TY54549* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, Adddependencyaux_186016)(NimStringDesc* Importing_186018, NimStringDesc* Imported_186019);
N_NIMCALL(void, Appf_51074)(TY51008** C_51077, NimStringDesc* Frmt_51078, TY51008** Args_51080, NI Args_51080Len0);
N_NIMCALL(TY51008*, Torope_51046)(NimStringDesc* S_51048);
N_NIMCALL(TY54523*, Adddotdependency_186026)(TY102002* C_186028, TY54523* N_186029);
N_NIMCALL(void, chckObj)(TNimType* Obj_5375, TNimType* Subclass_5376);
N_NIMCALL(NI, Sonslen_54801)(TY54523* N_54803);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_37714, TY37715* Result);
N_NIMCALL(NimStringDesc*, Getmodulefile_107013)(TY54523* N_107015);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5275);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17308);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(void, Generatedot_186006)(NimStringDesc* Project_186008);
N_NIMCALL(void, Writerope_51058)(TY51008* Head_51060, NimStringDesc* Filename_51061);
N_NIMCALL(TY51008*, Ropef_51069)(NimStringDesc* Frmt_51071, TY51008** Args_51073, NI Args_51073Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_38020, NimStringDesc* Ext_38021);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_37785);
N_NIMCALL(TY102002*, Myopen_186137)(TY54545* Module_186139, NimStringDesc* Filename_186140);
N_NIMCALL(void*, newObj)(TNimType* Typ_12307, NI Size_12308);
static N_INLINE(void, asgnRef)(void** Dest_11814, void* Src_11815);
static N_INLINE(void, Incref_11802)(TY10602* C_11804);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NIM_BOOL, Canbecycleroot_11040)(TY10602* C_11042);
static N_INLINE(void, Rtladdcycleroot_11652)(TY10602* C_11654);
N_NOINLINE(void, Incl_10874)(TY10614* S_10877, TY10602* Cell_10878);
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038);
static N_INLINE(void, Decref_11664)(TY10602* C_11666);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660);
N_NOINLINE(void, Addzct_11025)(TY10618* S_11028, TY10602* C_11029);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819);
N_NIMCALL(TY102006, Gendependpass_186004)(void);
N_NIMCALL(void, Initpass_102031)(TY102006* P_102034);
STRING_LITERAL(TMP186025, "$1 -> $2;$n", 11);
static NIM_CONST TY54997 TMP186125 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP186126, "sons", 4);
STRING_LITERAL(TMP186134, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP186135, "", 0);
STRING_LITERAL(TMP186136, "dot", 3);
TY51008* Gdotgraph_186015;
extern TNimType* NTI186010; /* TGen */
extern TNimType* NTI186012; /* PGen */
extern TY10990 Gch_11010;
N_NIMCALL(void, Adddependencyaux_186016)(NimStringDesc* Importing_186018, NimStringDesc* Imported_186019) {
TY58695 LOC1;
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
LOC1[0] = Torope_51046(Importing_186018);
LOC1[1] = Torope_51046(Imported_186019);
Appf_51074(&Gdotgraph_186015, ((NimStringDesc*) &TMP186025), LOC1, 2);
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
N_NIMCALL(TY54523*, Adddotdependency_186026)(TY102002* C_186028, TY54523* N_186029) {
TY54523* Result_186030;
TY186010* G_186042;
NI I_186065;
NI HEX3Atmp_186113;
NI LOC4;
NI Res_186115;
NimStringDesc* Imported_186078;
NimStringDesc* LOC6;
TY37715 LOC7;
NimStringDesc* Imported_186091;
NimStringDesc* LOC8;
TY37715 LOC9;
NI I_186099;
NI HEX3Atmp_186119;
NI LOC10;
NI Res_186121;
TY54523* LOC12;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "addDotDependency";
F.prev = framePtr;
F.filename = "rod/depends.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_186030 = 0;
F.line = 31;F.filename = "depends.nim";
Result_186030 = N_186029;
F.line = 32;F.filename = "depends.nim";
if (!(N_186029 == NIM_NIL)) goto LA2;
F.line = 32;F.filename = "depends.nim";
goto BeforeRet;
LA2: ;
G_186042 = 0;
F.line = 33;F.filename = "depends.nim";
if (C_186028) chckObj((*C_186028).Sup.m_type, NTI186010);
G_186042 = ((TY186010*) (C_186028));
F.line = 34;F.filename = "depends.nim";
switch ((*N_186029).Kind) {
case ((NU8) 102):
I_186065 = 0;
HEX3Atmp_186113 = 0;
F.line = 36;F.filename = "depends.nim";
LOC4 = Sonslen_54801(N_186029);
HEX3Atmp_186113 = subInt(LOC4, 1);
Res_186115 = 0;
F.line = 1011;F.filename = "system.nim";
Res_186115 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_186115 <= HEX3Atmp_186113)) goto LA5;
F.line = 1011;F.filename = "system.nim";
I_186065 = Res_186115;
Imported_186078 = 0;
F.line = 37;F.filename = "depends.nim";
if (((TMP186125[(*N_186029).Kind/8] &(1<<((*N_186029).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP186126));
if ((NU)(I_186065) >= (NU)((*N_186029).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC6 = 0;
LOC6 = Getmodulefile_107013((*N_186029).KindU.S6.Sons->data[I_186065]);
memset((void*)&LOC7, 0, sizeof(LOC7));
nossplitFile(LOC6, &LOC7);
Imported_186078 = copyString(LOC7.Name);
F.line = 38;F.filename = "depends.nim";
Adddependencyaux_186016((*(*(*G_186042).Module).Name).S, Imported_186078);
F.line = 1014;F.filename = "system.nim";
Res_186115 = addInt(Res_186115, 1);
} LA5: ;
break;
case ((NU8) 103):
Imported_186091 = 0;
F.line = 40;F.filename = "depends.nim";
if (((TMP186125[(*N_186029).Kind/8] &(1<<((*N_186029).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP186126));
if ((NU)(0) >= (NU)((*N_186029).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC8 = 0;
LOC8 = Getmodulefile_107013((*N_186029).KindU.S6.Sons->data[0]);
memset((void*)&LOC9, 0, sizeof(LOC9));
nossplitFile(LOC8, &LOC9);
Imported_186091 = copyString(LOC9.Name);
F.line = 41;F.filename = "depends.nim";
Adddependencyaux_186016((*(*(*G_186042).Module).Name).S, Imported_186091);
break;
case ((NU8) 101):
case ((NU8) 99):
case ((NU8) 106):
case ((NU8) 107):
I_186099 = 0;
HEX3Atmp_186119 = 0;
F.line = 43;F.filename = "depends.nim";
LOC10 = Sonslen_54801(N_186029);
HEX3Atmp_186119 = subInt(LOC10, 1);
Res_186121 = 0;
F.line = 1011;F.filename = "system.nim";
Res_186121 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_186121 <= HEX3Atmp_186119)) goto LA11;
F.line = 1011;F.filename = "system.nim";
I_186099 = Res_186121;
F.line = 43;F.filename = "depends.nim";
if (((TMP186125[(*N_186029).Kind/8] &(1<<((*N_186029).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP186126));
if ((NU)(I_186099) >= (NU)((*N_186029).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC12 = 0;
LOC12 = Adddotdependency_186026(C_186028, (*N_186029).KindU.S6.Sons->data[I_186099]);
F.line = 1014;F.filename = "system.nim";
Res_186121 = addInt(Res_186121, 1);
} LA11: ;
break;
default:
break;
}
BeforeRet: ;
framePtr = framePtr->prev;
return Result_186030;
}
N_NIMCALL(void, Generatedot_186006)(NimStringDesc* Project_186008) {
TY58695 LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
TY51008* LOC4;
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
LOC2 = nosextractFilename(Project_186008);
LOC3 = 0;
LOC3 = nosChangeFileExt(LOC2, ((NimStringDesc*) &TMP186135));
LOC1[0] = Torope_51046(LOC3);
LOC1[1] = Gdotgraph_186015;
LOC4 = 0;
LOC4 = Ropef_51069(((NimStringDesc*) &TMP186134), LOC1, 2);
LOC5 = 0;
LOC5 = nosChangeFileExt(Project_186008, ((NimStringDesc*) &TMP186136));
Writerope_51058(LOC4, LOC5);
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
static N_INLINE(NIM_BOOL, Canbecycleroot_11040)(TY10602* C_11042) {
NIM_BOOL Result_11043;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "canbeCycleRoot";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_11043 = 0;
F.line = 103;F.filename = "gc.nim";
Result_11043 = !((((*(*C_11042).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
framePtr = framePtr->prev;
return Result_11043;
}
static N_INLINE(void, Rtladdcycleroot_11652)(TY10602* C_11654) {
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
pthread_mutex_lock(&Gch_11010.Cyclerootslock);
LA2: ;
F.line = 206;F.filename = "gc.nim";
Incl_10874(&Gch_11010.Cycleroots, C_11654);
F.line = 207;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 207;F.filename = "gc.nim";
pthread_mutex_unlock(&Gch_11010.Cyclerootslock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, Incref_11802)(TY10602* C_11804) {
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
LOC1 = Atomicinc_3001(&(*C_11804).Refcount, 8);
F.line = 227;F.filename = "gc.nim";
LOC3 = Canbecycleroot_11040(C_11804);
if (!LOC3) goto LA4;
F.line = 228;F.filename = "gc.nim";
Rtladdcycleroot_11652(C_11804);
LA4: ;
framePtr = framePtr->prev;
}
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038) {
TY10602* Result_11039;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "usrToCell";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_11039 = 0;
F.line = 100;F.filename = "gc.nim";
Result_11039 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11038))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
framePtr = framePtr->prev;
return Result_11039;
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
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660) {
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
pthread_mutex_lock(&Gch_11010.Zctlock);
LA2: ;
F.line = 212;F.filename = "gc.nim";
Addzct_11025(&Gch_11010.Zct, C_11660);
F.line = 213;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 213;F.filename = "gc.nim";
pthread_mutex_unlock(&Gch_11010.Zctlock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, Decref_11664)(TY10602* C_11666) {
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
LOC2 = Atomicdec_3006(&(*C_11666).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
F.line = 221;F.filename = "gc.nim";
Rtladdzct_11658(C_11666);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11040(C_11666);
if (!LOC5) goto LA6;
F.line = 223;F.filename = "gc.nim";
Rtladdcycleroot_11652(C_11666);
goto LA1;
LA6: ;
LA1: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRef)(void** Dest_11814, void* Src_11815) {
TY10602* LOC4;
TY10602* LOC8;
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
if (!!((Src_11815 == NIM_NIL))) goto LA2;
F.line = 237;F.filename = "gc.nim";
LOC4 = Usrtocell_11036(Src_11815);
Incref_11802(LOC4);
LA2: ;
F.line = 238;F.filename = "gc.nim";
if (!!(((*Dest_11814) == NIM_NIL))) goto LA6;
F.line = 238;F.filename = "gc.nim";
LOC8 = Usrtocell_11036((*Dest_11814));
Decref_11664(LOC8);
LA6: ;
F.line = 239;F.filename = "gc.nim";
(*Dest_11814) = Src_11815;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819) {
TY10602* C_11820;
NI LOC4;
TY10602* C_11822;
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
if (!!((Src_11819 == NIM_NIL))) goto LA2;
C_11820 = 0;
F.line = 245;F.filename = "gc.nim";
C_11820 = Usrtocell_11036(Src_11819);
F.line = 246;F.filename = "gc.nim";
LOC4 = Atomicinc_3001(&(*C_11820).Refcount, 8);
LA2: ;
F.line = 247;F.filename = "gc.nim";
if (!!(((*Dest_11818) == NIM_NIL))) goto LA6;
C_11822 = 0;
F.line = 248;F.filename = "gc.nim";
C_11822 = Usrtocell_11036((*Dest_11818));
F.line = 249;F.filename = "gc.nim";
LOC9 = Atomicdec_3006(&(*C_11822).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11658(C_11822);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_11818) = Src_11819;
framePtr = framePtr->prev;
}
N_NIMCALL(TY102002*, Myopen_186137)(TY54545* Module_186139, NimStringDesc* Filename_186140) {
TY102002* Result_186141;
TY186010* G_186142;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "myOpen";
F.prev = framePtr;
F.filename = "rod/depends.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_186141 = 0;
G_186142 = 0;
F.line = 54;F.filename = "depends.nim";
G_186142 = (TY186010*) newObj(NTI186012, sizeof(TY186010));
(*G_186142).Sup.Sup.m_type = NTI186010;
F.line = 55;F.filename = "depends.nim";
asgnRef((void**) &(*G_186142).Module, Module_186139);
F.line = 56;F.filename = "depends.nim";
asgnRefNoCycle((void**) &(*G_186142).Filename, copyString(Filename_186140));
F.line = 57;F.filename = "depends.nim";
Result_186141 = &G_186142->Sup;
framePtr = framePtr->prev;
return Result_186141;
}
N_NIMCALL(TY102006, Gendependpass_186004)(void) {
TY102006 Result_186160;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "genDependPass";
F.prev = framePtr;
F.filename = "rod/depends.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&Result_186160, 0, sizeof(Result_186160));
F.line = 60;F.filename = "depends.nim";
Initpass_102031(&Result_186160);
F.line = 61;F.filename = "depends.nim";
Result_186160.Open = Myopen_186137;
F.line = 62;F.filename = "depends.nim";
Result_186160.Process = Adddotdependency_186026;
framePtr = framePtr->prev;
return Result_186160;
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

