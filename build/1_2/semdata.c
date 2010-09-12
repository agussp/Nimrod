/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY49561 TY49561;
typedef struct TY49559 TY49559;
typedef struct TY49557 TY49557;
typedef struct TY48005 TY48005;
typedef struct TNimObject TNimObject;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY49525 TY49525;
typedef struct TY49545 TY49545;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10402 TY10402;
typedef struct TY7804 TY7804;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY100002 TY100002;
typedef struct TY100012 TY100012;
typedef struct TY98002 TY98002;
typedef struct TY100006 TY100006;
typedef struct TY49523 TY49523;
typedef struct TY53107 TY53107;
typedef struct TY53109 TY53109;
typedef struct TY49527 TY49527;
typedef struct TY49898 TY49898;
typedef struct TY49894 TY49894;
typedef struct TY49896 TY49896;
typedef struct TY37019 TY37019;
typedef struct TY37013 TY37013;
typedef struct TY49541 TY49541;
typedef struct TY49549 TY49549;
typedef struct TY48011 TY48011;
typedef struct TY41532 TY41532;
typedef struct TY49537 TY49537;
typedef struct TY46008 TY46008;
typedef struct TY49547 TY49547;
typedef struct TY49517 TY49517;
struct TY49557 {
TY48005* Key;
TNimObject* Val;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY49561 {
NI Counter;
TY49559* Data;
};
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
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY98002 {
  TNimObject Sup;
};
struct TY49527 {
TNimType* m_type;
NI Counter;
TY49525* Data;
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
struct TY100006 {
TY49545* Owner;
TY49545* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
struct TY37013 {
  TNimObject Sup;
TY37013* Prev;
TY37013* Next;
};
struct TY100002 {
  TY37013 Sup;
NU32 Options;
NU8 Defaultcc;
TY49541* Dynlib;
NU32 Notes;
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
struct TY49541 {
  TY37013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY46008* Name;
TY49523* Path;
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
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY49894 {
TY49894* Next;
NI Key;
TY8414 Bits;
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
struct TY49559 {
  TGenericSeq Sup;
  TY49557 data[SEQ_DECL_SIZE];
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
struct TY49517 {
  TGenericSeq Sup;
  TY49523* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_12604, NI Len_12605);
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
N_NIMCALL(TY49545*, Getcurrowner_100107)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, Pushowner_100109)(TY49545* Owner_100111);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_17235, NI Elemsize_17236);
N_NIMCALL(void, Popowner_100112)(void);
N_NIMCALL(void, Internalerror_41571)(NimStringDesc* Errmsg_41573);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_17403, NI Elemsize_17404, NI Newlen_17405);
N_NIMCALL(TY100002*, Lastoptionentry_100053)(TY100012* C_100055);
N_NIMCALL(void, chckObj)(TNimType* Obj_5375, TNimType* Subclass_5376);
N_NIMCALL(TY100006*, Newproccon_100050)(TY49545* Owner_100052);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
N_NIMCALL(TY100002*, Newoptionentry_100056)(void);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619);
N_NIMCALL(TY100012*, Newcontext_100046)(TY49545* Module_100048, NimStringDesc* Nimfile_100049);
N_NIMCALL(void, objectInit)(void* Dest_18062, TNimType* Typ_18063);
N_NIMCALL(void, Initsymtab_53111)(TY53107* Tab_53114);
N_NIMCALL(void, Intsetinit_49922)(TY49898* S_49925);
N_NIMCALL(void, Initlinkedlist_37031)(TY37019* List_37034);
N_NIMCALL(void, Append_37035)(TY37019* List_37038, TY37013* Entry_37039);
N_NIMCALL(TY49523*, Newnode_49708)(NU8 Kind_49710);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, Initstrtable_49744)(TY49527* X_49747);
N_NIMCALL(void, Addconverter_100058)(TY100012* C_100060, TY49545* Conv_100061);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(TY49541*, Newlib_100062)(NU8 Kind_100064);
N_NIMCALL(void, Addtolib_100065)(TY49541* Lib_100067, TY49545* Sym_100068);
N_NIMCALL(void, Limessage_41562)(TY41532 Info_41564, NU8 Msg_41565, NimStringDesc* Arg_41566);
N_NIMCALL(TY49549*, Makeptrtype_100069)(TY100012* C_100071, TY49549* Basetype_100072);
N_NIMCALL(void, Addson_49825)(TY49549* Father_49827, TY49549* Son_49828);
N_NIMCALL(TY49549*, Makevartype_100073)(TY100012* C_100075, TY49549* Basetype_100076);
N_NIMCALL(TY49549*, Newtypes_100077)(NU8 Kind_100079, TY100012* C_100080);
N_NIMCALL(TY49549*, Newtype_49704)(NU8 Kind_49706, TY49545* Owner_49707);
N_NIMCALL(void, Filltypes_100081)(TY49549* Dest_100083, NU8 Kind_100084, TY100012* C_100085);
N_NIMCALL(TY49549*, Makerangetype_100086)(TY100012* C_100088, NI64 First_100089, NI64 Last_100090, TY41532 Info_100091);
N_NIMCALL(TY49523*, Newnodei_49735)(NU8 Kind_49737, TY41532 Info_49738);
N_NIMCALL(void, Addson_49821)(TY49523* Father_49823, TY49523* Son_49824);
N_NIMCALL(TY49523*, Newintnode_49711)(NU8 Kind_49713, NI64 Intval_49714);
N_NIMCALL(TY49549*, Getsystype_95008)(NU8 Kind_95010);
N_NIMCALL(void, Illformedast_100092)(TY49523* N_100094);
N_NIMCALL(NimStringDesc*, Rendertree_78042)(TY49523* N_78044, NU8 Renderflags_78047);
N_NIMCALL(TY49523*, Getson_100095)(TY49523* N_100097, NI Indx_100098);
N_NIMCALL(NI, Sonslen_49801)(TY49523* N_49803);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5275);
N_NIMCALL(void, Checksonslen_100099)(TY49523* N_100101, NI Length_100102);
N_NIMCALL(void, Checkminsonslen_100103)(TY49523* N_100105, NI Length_100106);
N_NIMCALL(void, Initidtable_49752)(TY49561* X_49755);
STRING_LITERAL(TMP100183, "popOwner", 8);
STRING_LITERAL(TMP100222, "owner is nil", 12);
STRING_LITERAL(TMP100380, "", 0);
STRING_LITERAL(TMP100397, "makePtrType", 11);
STRING_LITERAL(TMP100414, "makeVarType", 11);
static NIM_CONST TY49997 TMP100467 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP100468, "sons", 4);
TY49561 Ginsttypes_100045;
TY49525* Gowners_100131;
extern TNimType* NTI49525; /* TSymSeq */
extern TY7816 Dl_7815;
extern TY10790 Gch_10810;
extern TY7820 Dl_7819;
extern TNimType* NTI100002; /* TOptionEntry */
extern TNimType* NTI100008; /* PProcCon */
extern TNimType* NTI100004; /* POptionEntry */
extern NU32 Goptions_40075;
extern NU32 Gnotes_41539;
extern TNimType* NTI100010; /* PContext */
extern TNimType* NTI100012; /* TContext */
extern TNimType* NTI49543; /* PLib */
extern TNimType* NTI49541; /* TLib */
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
N_NIMCALL(TY49545*, Getcurrowner_100107)(void) {
TY49545* Result_100134;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getCurrOwner";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100134 = 0;
F.line = 91;F.filename = "semdata.nim";
if ((NU)((Gowners_100131->Sup.len-1)) >= (NU)(Gowners_100131->Sup.len)) raiseIndexError();
Result_100134 = Gowners_100131->data[(Gowners_100131->Sup.len-1)];
framePtr = framePtr->prev;
return Result_100134;
}
N_NIMCALL(void, Pushowner_100109)(TY49545* Owner_100111) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "PushOwner";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 94;F.filename = "semdata.nim";
Gowners_100131 = (TY49525*) incrSeq(&(Gowners_100131)->Sup, sizeof(TY49545*));
asgnRef((void**) &Gowners_100131->data[Gowners_100131->Sup.len-1], Owner_100111);
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
N_NIMCALL(void, Popowner_100112)(void) {
NI Length_100168;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "PopOwner";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Length_100168 = 0;
F.line = 97;F.filename = "semdata.nim";
Length_100168 = Gowners_100131->Sup.len;
F.line = 98;F.filename = "semdata.nim";
if (!(Length_100168 <= 0)) goto LA2;
F.line = 98;F.filename = "semdata.nim";
Internalerror_41571(((NimStringDesc*) &TMP100183));
LA2: ;
F.line = 99;F.filename = "semdata.nim";
Gowners_100131 = (TY49525*) setLengthSeq(&(Gowners_100131)->Sup, sizeof(TY49545*), subInt(Length_100168, 1));
framePtr = framePtr->prev;
}
N_NIMCALL(TY100002*, Lastoptionentry_100053)(TY100012* C_100055) {
TY100002* Result_100187;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "lastOptionEntry";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100187 = 0;
F.line = 102;F.filename = "semdata.nim";
if ((*C_100055).Optionstack.Tail) chckObj((*(*C_100055).Optionstack.Tail).Sup.m_type, NTI100002);
Result_100187 = ((TY100002*) ((*C_100055).Optionstack.Tail));
framePtr = framePtr->prev;
return Result_100187;
}
N_NIMCALL(TY100006*, Newproccon_100050)(TY49545* Owner_100052) {
TY100006* Result_100195;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newProcCon";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100195 = 0;
F.line = 105;F.filename = "semdata.nim";
if (!(Owner_100052 == NIM_NIL)) goto LA2;
F.line = 105;F.filename = "semdata.nim";
Internalerror_41571(((NimStringDesc*) &TMP100222));
LA2: ;
F.line = 106;F.filename = "semdata.nim";
Result_100195 = (TY100006*) newObj(NTI100008, sizeof(TY100006));
F.line = 107;F.filename = "semdata.nim";
asgnRef((void**) &(*Result_100195).Owner, Owner_100052);
framePtr = framePtr->prev;
return Result_100195;
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
N_NIMCALL(TY100002*, Newoptionentry_100056)(void) {
TY100002* Result_100226;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newOptionEntry";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100226 = 0;
F.line = 110;F.filename = "semdata.nim";
Result_100226 = (TY100002*) newObj(NTI100004, sizeof(TY100002));
(*Result_100226).Sup.Sup.m_type = NTI100002;
F.line = 111;F.filename = "semdata.nim";
(*Result_100226).Options = Goptions_40075;
F.line = 112;F.filename = "semdata.nim";
(*Result_100226).Defaultcc = ((NU8) 0);
F.line = 113;F.filename = "semdata.nim";
asgnRefNoCycle((void**) &(*Result_100226).Dynlib, NIM_NIL);
F.line = 114;F.filename = "semdata.nim";
(*Result_100226).Notes = Gnotes_41539;
framePtr = framePtr->prev;
return Result_100226;
}
N_NIMCALL(TY100012*, Newcontext_100046)(TY49545* Module_100048, NimStringDesc* Nimfile_100049) {
TY100012* Result_100246;
TY100002* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newContext";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100246 = 0;
F.line = 117;F.filename = "semdata.nim";
Result_100246 = (TY100012*) newObj(NTI100010, sizeof(TY100012));
objectInit(Result_100246, NTI100012);
F.line = 118;F.filename = "semdata.nim";
Initsymtab_53111(&(*Result_100246).Tab);
F.line = 119;F.filename = "semdata.nim";
Intsetinit_49922(&(*Result_100246).Ambiguoussymbols);
F.line = 120;F.filename = "semdata.nim";
Initlinkedlist_37031(&(*Result_100246).Optionstack);
F.line = 121;F.filename = "semdata.nim";
Initlinkedlist_37031(&(*Result_100246).Libs);
F.line = 122;F.filename = "semdata.nim";
LOC1 = 0;
LOC1 = Newoptionentry_100056();
Append_37035(&(*Result_100246).Optionstack, &LOC1->Sup);
F.line = 123;F.filename = "semdata.nim";
asgnRef((void**) &(*Result_100246).Module, Module_100048);
F.line = 124;F.filename = "semdata.nim";
asgnRefNoCycle((void**) &(*Result_100246).Generics, Newnode_49708(((NU8) 101)));
F.line = 125;F.filename = "semdata.nim";
asgnRef((void**) &(*Result_100246).Converters, (TY49525*) newSeq(NTI49525, 0));
F.line = 126;F.filename = "semdata.nim";
asgnRefNoCycle((void**) &(*Result_100246).Filename, copyString(Nimfile_100049));
F.line = 127;F.filename = "semdata.nim";
Intsetinit_49922(&(*Result_100246).Includedfiles);
F.line = 128;F.filename = "semdata.nim";
Initstrtable_49744(&(*Result_100246).Userpragmas);
framePtr = framePtr->prev;
return Result_100246;
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
N_NIMCALL(void, Addconverter_100058)(TY100012* C_100060, TY49545* Conv_100061) {
NI L_100302;
NI I_100325;
NI HEX3Atmp_100341;
NI Res_100343;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "addConverter";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
L_100302 = 0;
F.line = 131;F.filename = "semdata.nim";
L_100302 = (*C_100060).Converters->Sup.len;
I_100325 = 0;
HEX3Atmp_100341 = 0;
F.line = 132;F.filename = "semdata.nim";
HEX3Atmp_100341 = subInt(L_100302, 1);
Res_100343 = 0;
F.line = 1011;F.filename = "system.nim";
Res_100343 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_100343 <= HEX3Atmp_100341)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_100325 = Res_100343;
F.line = 133;F.filename = "semdata.nim";
if ((NU)(I_100325) >= (NU)((*C_100060).Converters->Sup.len)) raiseIndexError();
if (!((*(*C_100060).Converters->data[I_100325]).Sup.Id == (*Conv_100061).Sup.Id)) goto LA3;
F.line = 133;F.filename = "semdata.nim";
goto BeforeRet;
LA3: ;
F.line = 1014;F.filename = "system.nim";
Res_100343 = addInt(Res_100343, 1);
} LA1: ;
F.line = 134;F.filename = "semdata.nim";
(*C_100060).Converters = (TY49525*) setLengthSeq(&((*C_100060).Converters)->Sup, sizeof(TY49545*), addInt(L_100302, 1));
F.line = 135;F.filename = "semdata.nim";
if ((NU)(L_100302) >= (NU)((*C_100060).Converters->Sup.len)) raiseIndexError();
asgnRef((void**) &(*C_100060).Converters->data[L_100302], Conv_100061);
BeforeRet: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY49541*, Newlib_100062)(NU8 Kind_100064) {
TY49541* Result_100349;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newLib";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100349 = 0;
F.line = 138;F.filename = "semdata.nim";
Result_100349 = (TY49541*) newObj(NTI49543, sizeof(TY49541));
(*Result_100349).Sup.Sup.m_type = NTI49541;
F.line = 139;F.filename = "semdata.nim";
(*Result_100349).Kind = Kind_100064;
framePtr = framePtr->prev;
return Result_100349;
}
N_NIMCALL(void, Addtolib_100065)(TY49541* Lib_100067, TY49545* Sym_100068) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "addToLib";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 143;F.filename = "semdata.nim";
if (!!(((*Sym_100068).Annex == NIM_NIL))) goto LA2;
F.line = 143;F.filename = "semdata.nim";
Limessage_41562((*Sym_100068).Info, ((NU8) 26), ((NimStringDesc*) &TMP100380));
LA2: ;
F.line = 144;F.filename = "semdata.nim";
asgnRefNoCycle((void**) &(*Sym_100068).Annex, Lib_100067);
framePtr = framePtr->prev;
}
N_NIMCALL(TY49549*, Makeptrtype_100069)(TY100012* C_100071, TY49549* Basetype_100072) {
TY49549* Result_100385;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "makePtrType";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100385 = 0;
F.line = 147;F.filename = "semdata.nim";
if (!(Basetype_100072 == NIM_NIL)) goto LA2;
F.line = 147;F.filename = "semdata.nim";
Internalerror_41571(((NimStringDesc*) &TMP100397));
LA2: ;
F.line = 148;F.filename = "semdata.nim";
Result_100385 = Newtypes_100077(((NU8) 21), C_100071);
F.line = 149;F.filename = "semdata.nim";
Addson_49825(Result_100385, Basetype_100072);
framePtr = framePtr->prev;
return Result_100385;
}
N_NIMCALL(TY49549*, Makevartype_100073)(TY100012* C_100075, TY49549* Basetype_100076) {
TY49549* Result_100402;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "makeVarType";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100402 = 0;
F.line = 152;F.filename = "semdata.nim";
if (!(Basetype_100076 == NIM_NIL)) goto LA2;
F.line = 152;F.filename = "semdata.nim";
Internalerror_41571(((NimStringDesc*) &TMP100414));
LA2: ;
F.line = 153;F.filename = "semdata.nim";
Result_100402 = Newtypes_100077(((NU8) 23), C_100075);
F.line = 154;F.filename = "semdata.nim";
Addson_49825(Result_100402, Basetype_100076);
framePtr = framePtr->prev;
return Result_100402;
}
N_NIMCALL(TY49549*, Newtypes_100077)(NU8 Kind_100079, TY100012* C_100080) {
TY49549* Result_100419;
TY49545* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newTypeS";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100419 = 0;
F.line = 157;F.filename = "semdata.nim";
LOC1 = 0;
LOC1 = Getcurrowner_100107();
Result_100419 = Newtype_49704(Kind_100079, LOC1);
framePtr = framePtr->prev;
return Result_100419;
}
N_NIMCALL(void, Filltypes_100081)(TY49549* Dest_100083, NU8 Kind_100084, TY100012* C_100085) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "fillTypeS";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 160;F.filename = "semdata.nim";
(*Dest_100083).Kind = Kind_100084;
F.line = 161;F.filename = "semdata.nim";
asgnRef((void**) &(*Dest_100083).Owner, Getcurrowner_100107());
F.line = 162;F.filename = "semdata.nim";
(*Dest_100083).Size = -1;
framePtr = framePtr->prev;
}
N_NIMCALL(TY49549*, Makerangetype_100086)(TY100012* C_100088, NI64 First_100089, NI64 Last_100090, TY41532 Info_100091) {
TY49549* Result_100431;
TY49523* N_100432;
TY49523* LOC1;
TY49523* LOC2;
TY49549* LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "makeRangeType";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100431 = 0;
N_100432 = 0;
F.line = 166;F.filename = "semdata.nim";
N_100432 = Newnodei_49735(((NU8) 35), Info_100091);
F.line = 167;F.filename = "semdata.nim";
LOC1 = 0;
LOC1 = Newintnode_49711(((NU8) 6), First_100089);
Addson_49821(N_100432, LOC1);
F.line = 168;F.filename = "semdata.nim";
LOC2 = 0;
LOC2 = Newintnode_49711(((NU8) 6), Last_100090);
Addson_49821(N_100432, LOC2);
F.line = 169;F.filename = "semdata.nim";
Result_100431 = Newtypes_100077(((NU8) 20), C_100088);
F.line = 170;F.filename = "semdata.nim";
asgnRefNoCycle((void**) &(*Result_100431).N, N_100432);
F.line = 171;F.filename = "semdata.nim";
LOC3 = 0;
LOC3 = Getsystype_95008(((NU8) 31));
Addson_49825(Result_100431, LOC3);
framePtr = framePtr->prev;
return Result_100431;
}
N_NIMCALL(void, Illformedast_100092)(TY49523* N_100094) {
NimStringDesc* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "illFormedAst";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 174;F.filename = "semdata.nim";
LOC1 = 0;
LOC1 = Rendertree_78042(N_100094, 4);
Limessage_41562((*N_100094).Info, ((NU8) 1), LOC1);
framePtr = framePtr->prev;
}
N_NIMCALL(TY49523*, Getson_100095)(TY49523* N_100097, NI Indx_100098) {
TY49523* Result_100441;
NIM_BOOL LOC2;
NI LOC4;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getSon";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100441 = 0;
F.line = 177;F.filename = "semdata.nim";
LOC2 = !((N_100097 == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC4 = Sonslen_49801(N_100097);
LOC2 = (Indx_100098 < LOC4);
LA3: ;
if (!LOC2) goto LA5;
F.line = 178;F.filename = "semdata.nim";
if (((TMP100467[(*N_100097).Kind/8] &(1<<((*N_100097).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP100468));
if ((NU)(Indx_100098) >= (NU)((*N_100097).KindU.S6.Sons->Sup.len)) raiseIndexError();
Result_100441 = (*N_100097).KindU.S6.Sons->data[Indx_100098];
goto LA1;
LA5: ;
F.line = 180;F.filename = "semdata.nim";
Illformedast_100092(N_100097);
F.line = 181;F.filename = "semdata.nim";
Result_100441 = NIM_NIL;
LA1: ;
framePtr = framePtr->prev;
return Result_100441;
}
N_NIMCALL(void, Checksonslen_100099)(TY49523* N_100101, NI Length_100102) {
NIM_BOOL LOC2;
NI LOC4;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "checkSonsLen";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 184;F.filename = "semdata.nim";
LOC2 = (N_100101 == NIM_NIL);
if (LOC2) goto LA3;
LOC4 = Sonslen_49801(N_100101);
LOC2 = !((LOC4 == Length_100102));
LA3: ;
if (!LOC2) goto LA5;
F.line = 184;F.filename = "semdata.nim";
Illformedast_100092(N_100101);
LA5: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Checkminsonslen_100103)(TY49523* N_100105, NI Length_100106) {
NIM_BOOL LOC2;
NI LOC4;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "checkMinSonsLen";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 187;F.filename = "semdata.nim";
LOC2 = (N_100105 == NIM_NIL);
if (LOC2) goto LA3;
LOC4 = Sonslen_49801(N_100105);
LOC2 = (LOC4 < Length_100106);
LA3: ;
if (!LOC2) goto LA5;
F.line = 187;F.filename = "semdata.nim";
Illformedast_100092(N_100105);
LA5: ;
framePtr = framePtr->prev;
}
N_NOINLINE(void, semdataInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "semdata";
F.prev = framePtr;
F.filename = "rod/semdata.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 83;F.filename = "semdata.nim";
asgnRef((void**) &Gowners_100131, (TY49525*) newSeq(NTI49525, 0));
F.line = 189;F.filename = "semdata.nim";
Initidtable_49752(&Ginsttypes_100045);
framePtr = framePtr->prev;
}

