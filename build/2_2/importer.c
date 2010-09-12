/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

#include <pthread.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY46532 TY46532;
typedef struct TY54523 TY54523;
typedef struct TY54549 TY54549;
typedef struct TY54545 TY54545;
typedef struct TY53011 TY53011;
typedef struct TY54517 TY54517;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54527 TY54527;
typedef struct TY54525 TY54525;
typedef struct TY54537 TY54537;
typedef struct TY51008 TY51008;
typedef struct TY54541 TY54541;
typedef struct TY104012 TY104012;
typedef struct TY102002 TY102002;
typedef struct TY104006 TY104006;
typedef struct TY58107 TY58107;
typedef struct TY58109 TY58109;
typedef struct TY54898 TY54898;
typedef struct TY54894 TY54894;
typedef struct TY54896 TY54896;
typedef struct TY42019 TY42019;
typedef struct TY42013 TY42013;
typedef struct TY54547 TY54547;
typedef struct TY58092 TY58092;
typedef struct TY58079 TY58079;
typedef struct TY10602 TY10602;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10988 TY10988;
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
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
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
struct TY102002 {
  TNimObject Sup;
};
struct TY58107 {
NI Tos;
TY58109* Stack;
};
struct TY54898 {
NI Counter;
NI Max;
TY54894* Head;
TY54896* Data;
};
struct TY42019 {
TNimType* m_type;
TY42013* Head;
TY42013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY54523*, TY104032) (TY104012* C_104033, TY54523* N_104034);
typedef N_NIMCALL_PTR(TY54523*, TY104037) (TY104012* C_104038, TY54523* N_104039);
struct TY104012 {
  TY102002 Sup;
TY54545* Module;
TY104006* P;
NI Instcounter;
TY54523* Generics;
NI Lastgenericidx;
TY58107 Tab;
TY54898 Ambiguoussymbols;
TY54525* Converters;
TY42019 Optionstack;
TY42019 Libs;
NIM_BOOL Fromcache;
TY104032 Semconstexpr;
TY104037 Semexpr;
TY54898 Includedfiles;
NimStringDesc* Filename;
TY54527 Userpragmas;
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
struct TY58092 {
NI H;
TY53011* Name;
};
struct TY58079 {
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(TY54545*, TY102044) (NimStringDesc* Filename_102045);
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
struct TY104006 {
TY54545* Owner;
TY54545* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8614[8];
struct TY54894 {
TY54894* Next;
NI Key;
TY8614 Bits;
};
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY54517 {
  TGenericSeq Sup;
  TY54523* data[SEQ_DECL_SIZE];
};
struct TY54525 {
  TGenericSeq Sup;
  TY54545* data[SEQ_DECL_SIZE];
};
struct TY58109 {
  TGenericSeq Sup;
  TY54527 data[SEQ_DECL_SIZE];
};
struct TY54896 {
  TGenericSeq Sup;
  TY54894* data[SEQ_DECL_SIZE];
};
struct TY54547 {
  TGenericSeq Sup;
  TY54549* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, Findmodule_107016)(TY46532 Info_107018, NimStringDesc* Modulename_107019);
N_NIMCALL(NimStringDesc*, Findfile_45087)(NimStringDesc* F_45089);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_38044, NimStringDesc* Ext_38045);
N_NIMCALL(void, Limessage_46562)(TY46532 Info_46564, NU8 Msg_46565, NimStringDesc* Arg_46566);
N_NIMCALL(NimStringDesc*, Getmodulefile_107013)(TY54523* N_107015);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_35856);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5275);
N_NIMCALL(void, Internalerror_46567)(TY46532 Info_46569, NimStringDesc* Errmsg_46570);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17308);
N_NIMCALL(void, Rawimportsymbol_107070)(TY104012* C_107072, TY54545* S_107073);
N_NIMCALL(TY54545*, Strtableget_58069)(TY54527* T_58071, TY53011* Name_58072);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, Intsetincl_54912)(TY54898* S_54915, NI Key_54916);
N_NIMCALL(void, Strtableadd_58064)(TY54527* T_58067, TY54545* N_58068);
N_NIMCALL(NI, Sonslen_54801)(TY54523* N_54803);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(TY54545*, Initidentiter_58095)(TY58092* Ti_58098, TY54527* Tab_58099, TY53011* S_58100);
N_NIMCALL(TY54545*, Nextidentiter_58101)(TY58092* Ti_58104, TY54527* Tab_58105);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(void, Addconverter_104058)(TY104012* C_104060, TY54545* Conv_104061);
N_NIMCALL(void, Importsymbol_107232)(TY104012* C_107234, TY54523* Ident_107235, TY54545* Frommod_107236);
N_NIMCALL(void, Loadstub_90070)(TY54545* S_90072);
N_NIMCALL(void, Importallsymbols_107009)(TY104012* C_107011, TY54545* Frommod_107012);
N_NIMCALL(TY54545*, Inittabiter_58081)(TY58079* Ti_58084, TY54527* Tab_58085);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17392, NimStringDesc* Src_17393);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_18379, TNimType* Typ_18380);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17287);
N_NIMCALL(TY54545*, Nextiter_58086)(TY58079* Ti_58089, TY54527* Tab_58090);
N_NIMCALL(TY54523*, Evalimport_107001)(TY104012* C_107003, TY54523* N_107004);
N_NIMCALL(void, Adddecl_105026)(TY104012* C_105028, TY54545* Sym_105029);
N_NIMCALL(TY54523*, Evalfrom_107005)(TY104012* C_107007, TY54523* N_107008);
N_NIMCALL(void, Checkminsonslen_104103)(TY54523* N_104105, NI Length_104106);
N_NIMCALL(TY54523*, Newsymnode_54732)(TY54545* Sym_54734);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819);
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660);
N_NOINLINE(void, Addzct_11025)(TY10618* S_11028, TY10602* C_11029);
STRING_LITERAL(TMP107021, "nim", 3);
static NIM_CONST TY54997 TMP107062 = {
0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP107063, "strVal", 6);
static NIM_CONST TY54997 TMP107064 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP107065, "ident", 5);
static NIM_CONST TY54997 TMP107066 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP107067, "sym", 3);
STRING_LITERAL(TMP107068, "getModuleFile()", 15);
STRING_LITERAL(TMP107069, "", 0);
static NIM_CONST TY54997 TMP107229 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP107230, "sons", 4);
STRING_LITERAL(TMP107231, "rawImportSymbol", 15);
STRING_LITERAL(TMP107320, "importSymbol", 12);
STRING_LITERAL(TMP107321, "importSymbol: 2", 15);
STRING_LITERAL(TMP107322, "importSymbol: 3", 15);
STRING_LITERAL(TMP107388, "importAllSymbols: ", 18);
extern TNimType* NTI54174; /* TSymKind */
extern TY102044 Gimportmodule_102047;
extern TY10990 Gch_11010;
N_NIMCALL(NimStringDesc*, Findmodule_107016)(TY46532 Info_107018, NimStringDesc* Modulename_107019) {
NimStringDesc* Result_107020;
NimStringDesc* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "findModule";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_107020 = 0;
F.line = 24;F.filename = "importer.nim";
LOC1 = 0;
LOC1 = nosaddFileExt(Modulename_107019, ((NimStringDesc*) &TMP107021));
Result_107020 = Findfile_45087(LOC1);
F.line = 25;F.filename = "importer.nim";
if (!((Result_107020) && (Result_107020)->Sup.len == 0)) goto LA3;
F.line = 25;F.filename = "importer.nim";
Limessage_46562(Info_107018, ((NU8) 2), Modulename_107019);
LA3: ;
framePtr = framePtr->prev;
return Result_107020;
}
N_NIMCALL(NimStringDesc*, Getmodulefile_107013)(TY54523* N_107015) {
NimStringDesc* Result_107025;
NimStringDesc* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getModuleFile";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_107025 = 0;
F.line = 28;F.filename = "importer.nim";
switch ((*N_107015).Kind) {
case ((NU8) 14):
case ((NU8) 15):
case ((NU8) 16):
F.line = 30;F.filename = "importer.nim";
if (!(((TMP107062[(*N_107015).Kind/8] &(1<<((*N_107015).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP107063));
LOC1 = 0;
LOC1 = nosUnixToNativePath((*N_107015).KindU.S3.Strval);
Result_107025 = Findmodule_107016((*N_107015).Info, LOC1);
break;
case ((NU8) 2):
F.line = 32;F.filename = "importer.nim";
if (!(((TMP107064[(*N_107015).Kind/8] &(1<<((*N_107015).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP107065));
Result_107025 = Findmodule_107016((*N_107015).Info, (*(*N_107015).KindU.S5.Ident).S);
break;
case ((NU8) 3):
F.line = 34;F.filename = "importer.nim";
if (!(((TMP107066[(*N_107015).Kind/8] &(1<<((*N_107015).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP107067));
Result_107025 = Findmodule_107016((*N_107015).Info, (*(*(*N_107015).KindU.S4.Sym).Name).S);
break;
default:
F.line = 36;F.filename = "importer.nim";
Internalerror_46567((*N_107015).Info, ((NimStringDesc*) &TMP107068));
F.line = 37;F.filename = "importer.nim";
Result_107025 = copyString(((NimStringDesc*) &TMP107069));
break;
}
framePtr = framePtr->prev;
return Result_107025;
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
N_NIMCALL(void, Rawimportsymbol_107070)(TY104012* C_107072, TY54545* S_107073) {
TY54545* Copy_107074;
TY54545* Check_107075;
NIM_BOOL LOC2;
TY54549* Etyp_107112;
NI J_107147;
NI HEX3Atmp_107220;
NI LOC15;
NI Res_107222;
TY54545* E_107172;
TY58092 It_107182;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "rawImportSymbol";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Copy_107074 = 0;
F.line = 42;F.filename = "importer.nim";
Copy_107074 = S_107073;
Check_107075 = 0;
F.line = 44;F.filename = "importer.nim";
if ((NU)(0) >= (NU)((*C_107072).Tab.Stack->Sup.len)) raiseIndexError();
Check_107075 = Strtableget_58069(&(*C_107072).Tab.Stack->data[0], (*S_107073).Name);
F.line = 45;F.filename = "importer.nim";
LOC2 = !((Check_107075 == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC2 = !(((*Check_107075).Sup.Id == (*Copy_107074).Sup.Id));
LA3: ;
if (!LOC2) goto LA4;
F.line = 46;F.filename = "importer.nim";
if (!!(((269824 &(1<<(((*S_107073).Kind)&31)))!=0))) goto LA7;
F.line = 48;F.filename = "importer.nim";
Intsetincl_54912(&(*C_107072).Ambiguoussymbols, (*Copy_107074).Sup.Id);
F.line = 49;F.filename = "importer.nim";
Intsetincl_54912(&(*C_107072).Ambiguoussymbols, (*Check_107075).Sup.Id);
LA7: ;
LA4: ;
F.line = 50;F.filename = "importer.nim";
if ((NU)(0) >= (NU)((*C_107072).Tab.Stack->Sup.len)) raiseIndexError();
Strtableadd_58064(&(*C_107072).Tab.Stack->data[0], Copy_107074);
F.line = 51;F.filename = "importer.nim";
if (!((*S_107073).Kind == ((NU8) 6))) goto LA10;
Etyp_107112 = 0;
F.line = 52;F.filename = "importer.nim";
Etyp_107112 = (*S_107073).Typ;
F.line = 53;F.filename = "importer.nim";
if (!((16386 &(IL64(1)<<(((*Etyp_107112).Kind)&IL64(63))))!=0)) goto LA13;
J_107147 = 0;
HEX3Atmp_107220 = 0;
F.line = 54;F.filename = "importer.nim";
LOC15 = Sonslen_54801((*Etyp_107112).N);
HEX3Atmp_107220 = subInt(LOC15, 1);
Res_107222 = 0;
F.line = 1011;F.filename = "system.nim";
Res_107222 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_107222 <= HEX3Atmp_107220)) goto LA16;
F.line = 1011;F.filename = "system.nim";
J_107147 = Res_107222;
E_107172 = 0;
F.line = 55;F.filename = "importer.nim";
if (((TMP107229[(*(*Etyp_107112).N).Kind/8] &(1<<((*(*Etyp_107112).N).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP107230));
if ((NU)(J_107147) >= (NU)((*(*Etyp_107112).N).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP107066[(*(*(*Etyp_107112).N).KindU.S6.Sons->data[J_107147]).Kind/8] &(1<<((*(*(*Etyp_107112).N).KindU.S6.Sons->data[J_107147]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP107067));
E_107172 = (*(*(*Etyp_107112).N).KindU.S6.Sons->data[J_107147]).KindU.S4.Sym;
F.line = 56;F.filename = "importer.nim";
if (!!(((*E_107172).Kind == ((NU8) 16)))) goto LA18;
F.line = 57;F.filename = "importer.nim";
Internalerror_46567((*S_107073).Info, ((NimStringDesc*) &TMP107231));
LA18: ;
memset((void*)&It_107182, 0, sizeof(It_107182));
F.line = 62;F.filename = "importer.nim";
if ((NU)(0) >= (NU)((*C_107072).Tab.Stack->Sup.len)) raiseIndexError();
Check_107075 = Initidentiter_58095(&It_107182, &(*C_107072).Tab.Stack->data[0], (*E_107172).Name);
F.line = 63;F.filename = "importer.nim";
while (1) {
if (!!((Check_107075 == NIM_NIL))) goto LA20;
F.line = 64;F.filename = "importer.nim";
if (!((*Check_107075).Sup.Id == (*E_107172).Sup.Id)) goto LA22;
F.line = 65;F.filename = "importer.nim";
E_107172 = NIM_NIL;
F.line = 66;F.filename = "importer.nim";
goto LA20;
LA22: ;
F.line = 67;F.filename = "importer.nim";
if ((NU)(0) >= (NU)((*C_107072).Tab.Stack->Sup.len)) raiseIndexError();
Check_107075 = Nextidentiter_58101(&It_107182, &(*C_107072).Tab.Stack->data[0]);
} LA20: ;
F.line = 68;F.filename = "importer.nim";
if (!!((E_107172 == NIM_NIL))) goto LA25;
F.line = 69;F.filename = "importer.nim";
Rawimportsymbol_107070(C_107072, E_107172);
LA25: ;
F.line = 1014;F.filename = "system.nim";
Res_107222 = addInt(Res_107222, 1);
} LA16: ;
LA13: ;
goto LA9;
LA10: ;
if (!((*S_107073).Kind == ((NU8) 12))) goto LA27;
F.line = 71;F.filename = "importer.nim";
Addconverter_104058(C_107072, S_107073);
goto LA9;
LA27: ;
LA9: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Importsymbol_107232)(TY104012* C_107234, TY54523* Ident_107235, TY54545* Frommod_107236) {
TY54545* S_107258;
TY58092 It_107302;
TY54545* E_107304;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "importSymbol";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 74;F.filename = "importer.nim";
if (!!(((*Ident_107235).Kind == ((NU8) 2)))) goto LA2;
F.line = 74;F.filename = "importer.nim";
Internalerror_46567((*Ident_107235).Info, ((NimStringDesc*) &TMP107320));
LA2: ;
S_107258 = 0;
F.line = 75;F.filename = "importer.nim";
if (!(((TMP107064[(*Ident_107235).Kind/8] &(1<<((*Ident_107235).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP107065));
S_107258 = Strtableget_58069(&(*Frommod_107236).Tab, (*Ident_107235).KindU.S5.Ident);
F.line = 76;F.filename = "importer.nim";
if (!(S_107258 == NIM_NIL)) goto LA5;
F.line = 76;F.filename = "importer.nim";
if (!(((TMP107064[(*Ident_107235).Kind/8] &(1<<((*Ident_107235).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP107065));
Limessage_46562((*Ident_107235).Info, ((NU8) 58), (*(*Ident_107235).KindU.S5.Ident).S);
LA5: ;
F.line = 77;F.filename = "importer.nim";
if (!((*S_107258).Kind == ((NU8) 20))) goto LA8;
F.line = 77;F.filename = "importer.nim";
Loadstub_90070(S_107258);
LA8: ;
F.line = 78;F.filename = "importer.nim";
if (!!(((1081280 &(1<<(((*S_107258).Kind)&31)))!=0))) goto LA11;
F.line = 79;F.filename = "importer.nim";
Internalerror_46567((*Ident_107235).Info, ((NimStringDesc*) &TMP107321));
LA11: ;
F.line = 81;F.filename = "importer.nim";
switch ((*S_107258).Kind) {
case ((NU8) 9):
case ((NU8) 10):
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 14):
case ((NU8) 12):
memset((void*)&It_107302, 0, sizeof(It_107302));
E_107304 = 0;
F.line = 85;F.filename = "importer.nim";
E_107304 = Initidentiter_58095(&It_107302, &(*Frommod_107236).Tab, (*S_107258).Name);
F.line = 86;F.filename = "importer.nim";
while (1) {
if (!!((E_107304 == NIM_NIL))) goto LA13;
F.line = 87;F.filename = "importer.nim";
if (!!(((*(*E_107304).Name).Sup.Id == (*(*S_107258).Name).Sup.Id))) goto LA15;
F.line = 87;F.filename = "importer.nim";
Internalerror_46567((*Ident_107235).Info, ((NimStringDesc*) &TMP107322));
LA15: ;
F.line = 88;F.filename = "importer.nim";
Rawimportsymbol_107070(C_107234, E_107304);
F.line = 89;F.filename = "importer.nim";
E_107304 = Nextidentiter_58101(&It_107302, &(*Frommod_107236).Tab);
} LA13: ;
break;
default:
F.line = 90;F.filename = "importer.nim";
Rawimportsymbol_107070(C_107234, S_107258);
break;
}
framePtr = framePtr->prev;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17392, NimStringDesc* Src_17393) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendString";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 150;F.filename = "sysstr.nim";
memcpy(((NCSTRING) (&(*Dest_17392).data[((*Dest_17392).Sup.len)-0])), ((NCSTRING) ((*Src_17393).data)), ((int) ((NI64)((NI64)((*Src_17393).Sup.len + 1) * 1))));
F.line = 151;F.filename = "sysstr.nim";
(*Dest_17392).Sup.len += (*Src_17393).Sup.len;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Importallsymbols_107009)(TY104012* C_107011, TY54545* Frommod_107012) {
TY58079 I_107327;
TY54545* S_107329;
NimStringDesc* LOC11;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "importAllSymbols";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&I_107327, 0, sizeof(I_107327));
S_107329 = 0;
F.line = 94;F.filename = "importer.nim";
S_107329 = Inittabiter_58081(&I_107327, &(*Frommod_107012).Tab);
F.line = 95;F.filename = "importer.nim";
while (1) {
if (!!((S_107329 == NIM_NIL))) goto LA1;
F.line = 96;F.filename = "importer.nim";
if (!!(((*S_107329).Kind == ((NU8) 18)))) goto LA3;
F.line = 97;F.filename = "importer.nim";
if (!!(((*S_107329).Kind == ((NU8) 16)))) goto LA6;
F.line = 98;F.filename = "importer.nim";
if (!!(((1081280 &(1<<(((*S_107329).Kind)&31)))!=0))) goto LA9;
F.line = 99;F.filename = "importer.nim";
LOC11 = 0;
LOC11 = rawNewString(reprEnum((*S_107329).Kind, NTI54174)->Sup.len + 18);
appendString(LOC11, ((NimStringDesc*) &TMP107388));
appendString(LOC11, reprEnum((*S_107329).Kind, NTI54174));
Internalerror_46567((*S_107329).Info, LOC11);
LA9: ;
F.line = 100;F.filename = "importer.nim";
Rawimportsymbol_107070(C_107011, S_107329);
LA6: ;
LA3: ;
F.line = 101;F.filename = "importer.nim";
S_107329 = Nextiter_58086(&I_107327, &(*Frommod_107012).Tab);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY54523*, Evalimport_107001)(TY104012* C_107003, TY54523* N_107004) {
TY54523* Result_107393;
NI I_107401;
NI HEX3Atmp_107440;
NI LOC1;
NI Res_107442;
NimStringDesc* F_107414;
TY54545* M_107415;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "evalImport";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_107393 = 0;
F.line = 104;F.filename = "importer.nim";
Result_107393 = N_107004;
I_107401 = 0;
HEX3Atmp_107440 = 0;
F.line = 105;F.filename = "importer.nim";
LOC1 = Sonslen_54801(N_107004);
HEX3Atmp_107440 = subInt(LOC1, 1);
Res_107442 = 0;
F.line = 1011;F.filename = "system.nim";
Res_107442 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_107442 <= HEX3Atmp_107440)) goto LA2;
F.line = 1011;F.filename = "system.nim";
I_107401 = Res_107442;
F_107414 = 0;
F.line = 106;F.filename = "importer.nim";
if (((TMP107229[(*N_107004).Kind/8] &(1<<((*N_107004).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP107230));
if ((NU)(I_107401) >= (NU)((*N_107004).KindU.S6.Sons->Sup.len)) raiseIndexError();
F_107414 = Getmodulefile_107013((*N_107004).KindU.S6.Sons->data[I_107401]);
M_107415 = 0;
F.line = 107;F.filename = "importer.nim";
M_107415 = Gimportmodule_102047(F_107414);
F.line = 108;F.filename = "importer.nim";
if (!(((*M_107415).Flags &(1<<((((NU8) 22))&31)))!=0)) goto LA4;
F.line = 109;F.filename = "importer.nim";
if (((TMP107229[(*N_107004).Kind/8] &(1<<((*N_107004).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP107230));
if ((NU)(I_107401) >= (NU)((*N_107004).KindU.S6.Sons->Sup.len)) raiseIndexError();
Limessage_46562((*(*N_107004).KindU.S6.Sons->data[I_107401]).Info, ((NU8) 213), (*(*M_107415).Name).S);
LA4: ;
F.line = 111;F.filename = "importer.nim";
Adddecl_105026(C_107003, M_107415);
F.line = 112;F.filename = "importer.nim";
Importallsymbols_107009(C_107003, M_107415);
F.line = 1014;F.filename = "system.nim";
Res_107442 = addInt(Res_107442, 1);
} LA2: ;
framePtr = framePtr->prev;
return Result_107393;
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
N_NIMCALL(TY54523*, Evalfrom_107005)(TY104012* C_107007, TY54523* N_107008) {
TY54523* Result_107449;
NimStringDesc* F_107462;
TY54545* M_107463;
NI I_107483;
NI HEX3Atmp_107497;
NI LOC1;
NI Res_107499;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "evalFrom";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_107449 = 0;
F.line = 115;F.filename = "importer.nim";
Result_107449 = N_107008;
F.line = 116;F.filename = "importer.nim";
Checkminsonslen_104103(N_107008, 2);
F_107462 = 0;
F.line = 117;F.filename = "importer.nim";
if (((TMP107229[(*N_107008).Kind/8] &(1<<((*N_107008).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP107230));
if ((NU)(0) >= (NU)((*N_107008).KindU.S6.Sons->Sup.len)) raiseIndexError();
F_107462 = Getmodulefile_107013((*N_107008).KindU.S6.Sons->data[0]);
M_107463 = 0;
F.line = 118;F.filename = "importer.nim";
M_107463 = Gimportmodule_102047(F_107462);
F.line = 119;F.filename = "importer.nim";
if (((TMP107229[(*N_107008).Kind/8] &(1<<((*N_107008).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP107230));
if ((NU)(0) >= (NU)((*N_107008).KindU.S6.Sons->Sup.len)) raiseIndexError();
asgnRefNoCycle((void**) &(*N_107008).KindU.S6.Sons->data[0], Newsymnode_54732(M_107463));
F.line = 120;F.filename = "importer.nim";
Adddecl_105026(C_107007, M_107463);
I_107483 = 0;
HEX3Atmp_107497 = 0;
F.line = 121;F.filename = "importer.nim";
LOC1 = Sonslen_54801(N_107008);
HEX3Atmp_107497 = subInt(LOC1, 1);
Res_107499 = 0;
F.line = 1011;F.filename = "system.nim";
Res_107499 = 1;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_107499 <= HEX3Atmp_107497)) goto LA2;
F.line = 1011;F.filename = "system.nim";
I_107483 = Res_107499;
F.line = 121;F.filename = "importer.nim";
if (((TMP107229[(*N_107008).Kind/8] &(1<<((*N_107008).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP107230));
if ((NU)(I_107483) >= (NU)((*N_107008).KindU.S6.Sons->Sup.len)) raiseIndexError();
Importsymbol_107232(C_107007, (*N_107008).KindU.S6.Sons->data[I_107483], M_107463);
F.line = 1014;F.filename = "system.nim";
Res_107499 = addInt(Res_107499, 1);
} LA2: ;
framePtr = framePtr->prev;
return Result_107449;
}
N_NOINLINE(void, importerInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "importer";
F.prev = framePtr;
F.filename = "rod/importer.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

