/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY37019 TY37019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY37013 TY37013;
typedef struct TNimObject TNimObject;
typedef struct TY10402 TY10402;
typedef struct TY7804 TY7804;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY37015 TY37015;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY37019 {
TNimType* m_type;
TY37013* Head;
TY37013* Tail;
NI Counter;
};
struct TNimObject {
TNimType* m_type;
};
struct TY37013 {
  TNimObject Sup;
TY37013* Prev;
TY37013* Next;
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
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY37015 {
  TY37013 Sup;
NimStringDesc* Data;
};
typedef N_NIMCALL_PTR(NIM_BOOL, TY37021) (TY37013* Entry_37028, void* Closure_37029);
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
N_NIMCALL(void, Initlinkedlist_37031)(TY37019* List_37034);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11626, void* Src_11627);
N_NIMCALL(void, Append_37035)(TY37019* List_37038, TY37013* Entry_37039);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
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
N_NIMCALL(void, internalAssert)(NCSTRING File_5054, NI Line_5055, NIM_BOOL Cond_5056);
N_NIMCALL(TY37015*, Newstrentry_37130)(NimStringDesc* Data_37132);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, Appendstr_37061)(TY37019* List_37064, NimStringDesc* Data_37065);
N_NIMCALL(void, Prependstr_37071)(TY37019* List_37074, NimStringDesc* Data_37075);
N_NIMCALL(NIM_BOOL, Contains_37160)(TY37019* List_37162, NimStringDesc* Data_37163);
N_NIMCALL(void, chckObj)(TNimType* Obj_5375, TNimType* Subclass_5376);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17047, NimStringDesc* B_17048);
N_NIMCALL(NIM_BOOL, Includestr_37066)(TY37019* List_37069, NimStringDesc* Data_37070);
N_NIMCALL(void, Insertbefore_37050)(TY37019* List_37053, TY37013* Pos_37054, TY37013* Entry_37055);
N_NIMCALL(void, Prepend_37040)(TY37019* List_37043, TY37013* Entry_37044);
N_NIMCALL(void, Remove_37045)(TY37019* List_37048, TY37013* Entry_37049);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NIMCALL(TY37013*, Find_37056)(TY37019* List_37058, TY37021 Fn_37059, void* Closure_37060);
extern TY7816 Dl_7815;
extern TY10790 Gch_10810;
extern TY7820 Dl_7819;
extern TNimType* NTI37017; /* PStrEntry */
extern TNimType* NTI37015; /* TStrEntry */
N_NIMCALL(void, Initlinkedlist_37031)(TY37019* List_37034) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "InitLinkedList";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 39;F.filename = "lists.nim";
(*List_37034).Counter = 0;
F.line = 40;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_37034).Head, NIM_NIL);
F.line = 41;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_37034).Tail, NIM_NIL);
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
Result_10839 = ((TY10402*) ((NI32)((NU32)(((NI) (Usr_10838))) - (NU32)(((NI) (((NI)sizeof(TY10402))))))));
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
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
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
N_NIMCALL(void, Append_37035)(TY37019* List_37038, TY37013* Entry_37039) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "Append";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 44;F.filename = "lists.nim";
(*List_37038).Counter = addInt((*List_37038).Counter, 1);
F.line = 45;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_37039).Next, NIM_NIL);
F.line = 46;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_37039).Prev, (*List_37038).Tail);
F.line = 47;F.filename = "lists.nim";
if (!!(((*List_37038).Tail == NIM_NIL))) goto LA2;
F.line = 48;F.filename = "lists.nim";
internalAssert("rod/lists.nim", 48, ((*(*List_37038).Tail).Next == NIM_NIL));
F.line = 49;F.filename = "lists.nim";
asgnRef((void**) &(*(*List_37038).Tail).Next, Entry_37039);
LA2: ;
F.line = 50;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_37038).Tail, Entry_37039);
F.line = 51;F.filename = "lists.nim";
if (!((*List_37038).Head == NIM_NIL)) goto LA5;
F.line = 51;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_37038).Head, Entry_37039);
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11458(C_11622);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_11618) = Src_11619;
framePtr = framePtr->prev;
}
N_NIMCALL(TY37015*, Newstrentry_37130)(NimStringDesc* Data_37132) {
TY37015* Result_37133;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newStrEntry";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_37133 = 0;
F.line = 54;F.filename = "lists.nim";
Result_37133 = (TY37015*) newObj(NTI37017, sizeof(TY37015));
(*Result_37133).Sup.Sup.m_type = NTI37015;
F.line = 55;F.filename = "lists.nim";
asgnRefNoCycle((void**) &(*Result_37133).Data, copyString(Data_37132));
framePtr = framePtr->prev;
return Result_37133;
}
N_NIMCALL(void, Appendstr_37061)(TY37019* List_37064, NimStringDesc* Data_37065) {
TY37015* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "AppendStr";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 58;F.filename = "lists.nim";
LOC1 = 0;
LOC1 = Newstrentry_37130(Data_37065);
Append_37035(List_37064, &LOC1->Sup);
framePtr = framePtr->prev;
}
N_NIMCALL(void, Prependstr_37071)(TY37019* List_37074, NimStringDesc* Data_37075) {
TY37015* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "PrependStr";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 61;F.filename = "lists.nim";
LOC1 = 0;
LOC1 = Newstrentry_37130(Data_37075);
Prepend_37040(List_37074, &LOC1->Sup);
framePtr = framePtr->prev;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17047, NimStringDesc* B_17048) {
NIM_BOOL Result_17049;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
NI32 LOC11;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "eqStrings";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_17049 = 0;
F.line = 32;F.filename = "sysstr.nim";
if (!(A_17047 == B_17048)) goto LA2;
F.line = 32;F.filename = "sysstr.nim";
F.line = 32;F.filename = "sysstr.nim";
Result_17049 = NIM_TRUE;
goto BeforeRet;
LA2: ;
F.line = 33;F.filename = "sysstr.nim";
LOC5 = (A_17047 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_17048 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
F.line = 33;F.filename = "sysstr.nim";
F.line = 33;F.filename = "sysstr.nim";
Result_17049 = NIM_FALSE;
goto BeforeRet;
LA7: ;
F.line = 34;F.filename = "sysstr.nim";
F.line = 34;F.filename = "sysstr.nim";
LOC9 = ((*A_17047).Sup.len == (*B_17048).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_17047).data)), ((NCSTRING) ((*B_17048).data)), ((NI32) ((NI32)((*A_17047).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_17049 = LOC9;
goto BeforeRet;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_17049;
}
N_NIMCALL(NIM_BOOL, Contains_37160)(TY37019* List_37162, NimStringDesc* Data_37163) {
NIM_BOOL Result_37164;
TY37013* It_37165;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "Contains";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_37164 = 0;
It_37165 = 0;
F.line = 64;F.filename = "lists.nim";
It_37165 = (*List_37162).Head;
F.line = 65;F.filename = "lists.nim";
while (1) {
if (!!((It_37165 == NIM_NIL))) goto LA1;
F.line = 66;F.filename = "lists.nim";
if (It_37165) chckObj((*It_37165).Sup.m_type, NTI37015);
if (!eqStrings((*((TY37015*) (It_37165))).Data, Data_37163)) goto LA3;
F.line = 67;F.filename = "lists.nim";
F.line = 67;F.filename = "lists.nim";
Result_37164 = NIM_TRUE;
goto BeforeRet;
LA3: ;
F.line = 68;F.filename = "lists.nim";
It_37165 = (*It_37165).Next;
} LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_37164;
}
N_NIMCALL(NIM_BOOL, Includestr_37066)(TY37019* List_37069, NimStringDesc* Data_37070) {
NIM_BOOL Result_37183;
NIM_BOOL LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "IncludeStr";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_37183 = 0;
F.line = 71;F.filename = "lists.nim";
LOC2 = Contains_37160(&(*List_37069), Data_37070);
if (!LOC2) goto LA3;
F.line = 71;F.filename = "lists.nim";
F.line = 71;F.filename = "lists.nim";
Result_37183 = NIM_TRUE;
goto BeforeRet;
LA3: ;
F.line = 72;F.filename = "lists.nim";
Appendstr_37061(List_37069, Data_37070);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_37183;
}
N_NIMCALL(void, Insertbefore_37050)(TY37019* List_37053, TY37013* Pos_37054, TY37013* Entry_37055) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "InsertBefore";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 75;F.filename = "lists.nim";
internalAssert("rod/lists.nim", 75, !((Pos_37054 == NIM_NIL)));
F.line = 76;F.filename = "lists.nim";
if (!(Pos_37054 == (*List_37053).Head)) goto LA2;
F.line = 77;F.filename = "lists.nim";
Prepend_37040(List_37053, Entry_37055);
goto LA1;
LA2: ;
F.line = 79;F.filename = "lists.nim";
(*List_37053).Counter = addInt((*List_37053).Counter, 1);
F.line = 80;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_37055).Next, Pos_37054);
F.line = 81;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_37055).Prev, (*Pos_37054).Prev);
F.line = 82;F.filename = "lists.nim";
if (!!(((*Pos_37054).Prev == NIM_NIL))) goto LA5;
F.line = 82;F.filename = "lists.nim";
asgnRef((void**) &(*(*Pos_37054).Prev).Next, Entry_37055);
LA5: ;
F.line = 83;F.filename = "lists.nim";
asgnRef((void**) &(*Pos_37054).Prev, Entry_37055);
LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Prepend_37040)(TY37019* List_37043, TY37013* Entry_37044) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "Prepend";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 86;F.filename = "lists.nim";
(*List_37043).Counter = addInt((*List_37043).Counter, 1);
F.line = 87;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_37044).Prev, NIM_NIL);
F.line = 88;F.filename = "lists.nim";
asgnRef((void**) &(*Entry_37044).Next, (*List_37043).Head);
F.line = 89;F.filename = "lists.nim";
if (!!(((*List_37043).Head == NIM_NIL))) goto LA2;
F.line = 90;F.filename = "lists.nim";
internalAssert("rod/lists.nim", 90, ((*(*List_37043).Head).Prev == NIM_NIL));
F.line = 91;F.filename = "lists.nim";
asgnRef((void**) &(*(*List_37043).Head).Prev, Entry_37044);
LA2: ;
F.line = 92;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_37043).Head, Entry_37044);
F.line = 93;F.filename = "lists.nim";
if (!((*List_37043).Tail == NIM_NIL)) goto LA5;
F.line = 93;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_37043).Tail, Entry_37044);
LA5: ;
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
N_NIMCALL(void, Remove_37045)(TY37019* List_37048, TY37013* Entry_37049) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "Remove";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 96;F.filename = "lists.nim";
(*List_37048).Counter = subInt((*List_37048).Counter, 1);
F.line = 97;F.filename = "lists.nim";
if (!(Entry_37049 == (*List_37048).Tail)) goto LA2;
F.line = 98;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_37048).Tail, (*Entry_37049).Prev);
LA2: ;
F.line = 99;F.filename = "lists.nim";
if (!(Entry_37049 == (*List_37048).Head)) goto LA5;
F.line = 100;F.filename = "lists.nim";
unsureAsgnRef((void**) &(*List_37048).Head, (*Entry_37049).Next);
LA5: ;
F.line = 101;F.filename = "lists.nim";
if (!!(((*Entry_37049).Next == NIM_NIL))) goto LA8;
F.line = 101;F.filename = "lists.nim";
asgnRef((void**) &(*(*Entry_37049).Next).Prev, (*Entry_37049).Prev);
LA8: ;
F.line = 102;F.filename = "lists.nim";
if (!!(((*Entry_37049).Prev == NIM_NIL))) goto LA11;
F.line = 102;F.filename = "lists.nim";
asgnRef((void**) &(*(*Entry_37049).Prev).Next, (*Entry_37049).Next);
LA11: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY37013*, Find_37056)(TY37019* List_37058, TY37021 Fn_37059, void* Closure_37060) {
TY37013* Result_37347;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "Find";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_37347 = 0;
F.line = 105;F.filename = "lists.nim";
Result_37347 = (*List_37058).Head;
F.line = 106;F.filename = "lists.nim";
while (1) {
if (!!((Result_37347 == NIM_NIL))) goto LA1;
F.line = 107;F.filename = "lists.nim";
LOC3 = Fn_37059(Result_37347, Closure_37060);
if (!LOC3) goto LA4;
F.line = 107;F.filename = "lists.nim";
goto BeforeRet;
LA4: ;
F.line = 108;F.filename = "lists.nim";
Result_37347 = (*Result_37347).Next;
} LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_37347;
}
N_NOINLINE(void, listsInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "lists";
F.prev = framePtr;
F.filename = "rod/lists.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

