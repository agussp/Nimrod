/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10402 TY10402;
typedef struct TNimType TNimType;
typedef struct TY7804 TY7804;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY41532 TY41532;
typedef struct TY189404 TY189404;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY32515 TY32515;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY41532 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct TY189404 {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY40352[1];
struct TY32515 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef NimStringDesc* TY62426[2];
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619);
static N_INLINE(TY10402*, Usrtocell_10836)(void* Usr_10838);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11458)(TY10402* C_11460);
N_NOINLINE(void, Addzct_10825)(TY10418* S_10828, TY10402* C_10829);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, Processcmdline_191204)(NU8 Pass_191206, NimStringDesc** Command_191208, NimStringDesc** Filename_191209);
N_NIMCALL(void, Initoptparser_189415)(NimStringDesc* Cmdline_189417, TY189404* Result);
N_NIMCALL(void, nponext)(TY189404* P_189796);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_24227, NIM_CHAR Sub_24228, NI Start_24229);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1752, NI First_1753, NI Last_1754);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
N_NIMCALL(void, Processswitch_67012)(NimStringDesc* Switch_67014, NimStringDesc* Arg_67015, NU8 Pass_67016, TY41532 Info_67017);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11626, void* Src_11627);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_30256);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY189404* P_189930);
N_NIMCALL(void, Rawmessage_41557)(NU8 Msg_41559, NimStringDesc** Args_41561, NI Args_41561Len0);
N_NIMCALL(void, Handlecmdline_191258)(void);
N_NIMCALL(NI32, Gettime_27416)(void);
N_NIMCALL(NI, nosparamCount)(void);
N_NIMCALL(void, Writecommandlineusage_67001)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_32514, TY32515* Result);
N_NIMCALL(void, Loadconfig_73004)(NimStringDesc* Project_73006);
N_NIMCALL(void, Initvars_64379)(void);
N_NIMCALL(void, Maincommand_187201)(NimStringDesc* Cmd_187203, NimStringDesc* Filename_187204);
N_NIMCALL(NimStringDesc*, Gcgetstatistics_2682)(void);
static N_INLINE(void, rawEcho)(NimStringDesc* X_4094);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
static N_INLINE(void, rawEchoNL)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_17803);
N_NIMCALL(NI64, ntDiffTime)(NI32 A_27435, NI32 B_27436);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_17867);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_24283)(NimStringDesc* S_24285);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_32820, NimStringDesc* Ext_32821);
N_NIMCALL(void, Execexternalprogram_64373)(NimStringDesc* Cmd_64375);
N_NIMCALL(TY41532, Newlineinfo_41574)(NimStringDesc* Filename_41576, NI Line_41577, NI Col_41578);
N_NIMCALL(void, Initdefines_57002)(void);
N_NOINLINE(void, nim__datInit)(void);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, parseutilsInit)(void);
N_NOINLINE(void, strutilsInit)(void);
N_NOINLINE(void, winleanInit)(void);
N_NOINLINE(void, timesInit)(void);
N_NOINLINE(void, osInit)(void);
N_NOINLINE(void, listsInit)(void);
N_NOINLINE(void, nhashesInit)(void);
N_NOINLINE(void, nstrtabsInit)(void);
N_NOINLINE(void, optionsInit)(void);
N_NOINLINE(void, msgsInit)(void);
N_NOINLINE(void, nversionInit)(void);
N_NOINLINE(void, crcInit)(void);
N_NOINLINE(void, platformInit)(void);
N_NOINLINE(void, ropesInit)(void);
N_NOINLINE(void, identsInit)(void);
N_NOINLINE(void, astInit)(void);
N_NOINLINE(void, astalgoInit)(void);
N_NOINLINE(void, condsymsInit)(void);
N_NOINLINE(void, hashesInit)(void);
N_NOINLINE(void, strtabsInit)(void);
N_NOINLINE(void, streamsInit)(void);
N_NOINLINE(void, osprocInit)(void);
N_NOINLINE(void, extccompInit)(void);
N_NOINLINE(void, wordrecgInit)(void);
N_NOINLINE(void, commandsInit)(void);
N_NOINLINE(void, llstreamInit)(void);
N_NOINLINE(void, lexbaseInit)(void);
N_NOINLINE(void, scannerInit)(void);
N_NOINLINE(void, nimconfInit)(void);
N_NOINLINE(void, pnimsynInit)(void);
N_NOINLINE(void, pbracesInit)(void);
N_NOINLINE(void, rnimsynInit)(void);
N_NOINLINE(void, filtersInit)(void);
N_NOINLINE(void, ptmplsynInit)(void);
N_NOINLINE(void, syntaxesInit)(void);
N_NOINLINE(void, rodreadInit)(void);
N_NOINLINE(void, treesInit)(void);
N_NOINLINE(void, typesInit)(void);
N_NOINLINE(void, mathInit)(void);
N_NOINLINE(void, magicsysInit)(void);
N_NOINLINE(void, bitsetsInit)(void);
N_NOINLINE(void, nimsetsInit)(void);
N_NOINLINE(void, passesInit)(void);
N_NOINLINE(void, treetabInit)(void);
N_NOINLINE(void, semdataInit)(void);
N_NOINLINE(void, lookupsInit)(void);
N_NOINLINE(void, importerInit)(void);
N_NOINLINE(void, rodwriteInit)(void);
N_NOINLINE(void, semfoldInit)(void);
N_NOINLINE(void, evalsInit)(void);
N_NOINLINE(void, procfindInit)(void);
N_NOINLINE(void, pragmasInit)(void);
N_NOINLINE(void, semInit)(void);
N_NOINLINE(void, rstInit)(void);
N_NOINLINE(void, highliteInit)(void);
N_NOINLINE(void, docgenInit)(void);
N_NOINLINE(void, ccgutilsInit)(void);
N_NOINLINE(void, cgmethInit)(void);
N_NOINLINE(void, cgenInit)(void);
N_NOINLINE(void, ecmasgenInit)(void);
N_NOINLINE(void, interactInit)(void);
N_NOINLINE(void, passauxInit)(void);
N_NOINLINE(void, dependsInit)(void);
N_NOINLINE(void, transfInit)(void);
N_NOINLINE(void, mainInit)(void);
N_NOINLINE(void, parseoptInit)(void);
N_NOINLINE(void, nimrodInit)(void);
STRING_LITERAL(TMP191203, "", 0);
STRING_LITERAL(TMP191613, "\015\012", 2);
STRING_LITERAL(TMP191614, "command line", 12);
NimStringDesc* Arguments_191201;
extern TY7816 Dl_7815;
extern TY10790 Gch_10810;
extern TY7820 Dl_7819;
TY41532 Cmdlineinfo_191202;
extern TNimType* NTI189404; /* TOptParser */
extern NU32 Gglobaloptions_40077;
extern NimStringDesc* Projectpath_40110;
extern NI Gverbosity_40083;
extern NU8 Gcmd_40082;
extern NI Gerrorcounter_41540;
extern NI Glinescompiled_70285;
extern NI8 Gexitcode_40078;
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
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendString";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 150;F.filename = "sysstr.nim";
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((NI32) ((NI32)((NI32)((*Src_17193).Sup.len + 1) * 1))));
F.line = 151;F.filename = "sysstr.nim";
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
framePtr = framePtr->prev;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendChar";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 154;F.filename = "sysstr.nim";
(*Dest_17209).data[((*Dest_17209).Sup.len)-0] = C_17210;
F.line = 155;F.filename = "sysstr.nim";
(*Dest_17209).data[((NI32)((*Dest_17209).Sup.len + 1))-0] = 0;
F.line = 156;F.filename = "sysstr.nim";
(*Dest_17209).Sup.len += 1;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Processcmdline_191204)(NU8 Pass_191206, NimStringDesc** Command_191208, NimStringDesc** Filename_191209) {
TY189404 P_191210;
NI Bracketle_191212;
NimStringDesc* Key_191215;
NimStringDesc* Val_191228;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NIM_BOOL LOC16;
TY40352 LOC20;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ProcessCmdLine";
F.prev = framePtr;
F.filename = "rod/nimrod.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&P_191210, 0, sizeof(P_191210));
F.line = 23;F.filename = "nimrod.nim";
Initoptparser_189415(((NimStringDesc*) &TMP191203), &P_191210);
P_191210.Sup.m_type = NTI189404;
F.line = 24;F.filename = "nimrod.nim";
while (1) {
F.line = 25;F.filename = "nimrod.nim";
nponext(&P_191210);
F.line = 26;F.filename = "nimrod.nim";
switch (P_191210.Kind) {
case ((NU8) 0):
F.line = 27;F.filename = "nimrod.nim";
goto LA1;
break;
case ((NU8) 2):
case ((NU8) 3):
Bracketle_191212 = 0;
F.line = 31;F.filename = "nimrod.nim";
Bracketle_191212 = nsuFindChar(P_191210.Key, 91, 0);
F.line = 32;F.filename = "nimrod.nim";
if (!(0 <= Bracketle_191212)) goto LA3;
Key_191215 = 0;
F.line = 33;F.filename = "nimrod.nim";
Key_191215 = copyStrLast(P_191210.Key, 0, subInt(Bracketle_191212, 1));
Val_191228 = 0;
F.line = 34;F.filename = "nimrod.nim";
LOC5 = 0;
LOC6 = 0;
LOC6 = copyStr(P_191210.Key, addInt(Bracketle_191212, 1));
LOC5 = rawNewString(LOC6->Sup.len + P_191210.Val->Sup.len + 1);
appendString(LOC5, LOC6);
appendChar(LOC5, 58);
appendString(LOC5, P_191210.Val);
Val_191228 = LOC5;
F.line = 35;F.filename = "nimrod.nim";
Processswitch_67012(Key_191215, Val_191228, Pass_191206, Cmdlineinfo_191202);
goto LA2;
LA3: ;
F.line = 37;F.filename = "nimrod.nim";
Processswitch_67012(P_191210.Key, P_191210.Val, Pass_191206, Cmdlineinfo_191202);
LA2: ;
break;
case ((NU8) 1):
F.line = 39;F.filename = "nimrod.nim";
if (!(((*Command_191208)) && ((*Command_191208))->Sup.len == 0)) goto LA8;
F.line = 40;F.filename = "nimrod.nim";
unsureAsgnRef((void**) &(*Command_191208), copyString(P_191210.Key));
goto LA7;
LA8: ;
if (!(((*Filename_191209)) && ((*Filename_191209))->Sup.len == 0)) goto LA10;
F.line = 42;F.filename = "nimrod.nim";
unsureAsgnRef((void**) &(*Filename_191209), nosUnixToNativePath(P_191210.Key));
F.line = 43;F.filename = "nimrod.nim";
goto LA1;
goto LA7;
LA10: ;
LA7: ;
break;
}
} LA1: ;
F.line = 44;F.filename = "nimrod.nim";
if (!(Pass_191206 == ((NU8) 1))) goto LA13;
F.line = 45;F.filename = "nimrod.nim";
asgnRefNoCycle((void**) &Arguments_191201, npocmdLineRest(&P_191210));
F.line = 46;F.filename = "nimrod.nim";
LOC16 = !(((Gglobaloptions_40077 &(1<<((((NU8) 14))&31)))!=0));
if (!(LOC16)) goto LA17;
LOC16 = !(((Arguments_191201) && (Arguments_191201)->Sup.len == 0));
LA17: ;
if (!LOC16) goto LA18;
F.line = 47;F.filename = "nimrod.nim";
memset((void*)&LOC20, 0, sizeof(LOC20));
Rawmessage_41557(((NU8) 54), LOC20, 0);
LA18: ;
LA13: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, rawEcho)(NimStringDesc* X_4094) {
Write_3658(stdout, X_4094);
}
static N_INLINE(void, rawEchoNL)(void) {
Write_3658(stdout, ((NimStringDesc*) &TMP191613));
}
N_NIMCALL(void, Handlecmdline_191258)(void) {
NI32 Start_191260;
NI LOC2;
NimStringDesc* Command_191263;
NimStringDesc* Filename_191264;
TY32515 LOC8;
NimStringDesc* LOC12;
NIM_BOOL LOC14;
TY62426 LOC18;
NI32 LOC19;
NI64 LOC20;
NimStringDesc* Prog_191434;
NimStringDesc* LOC24;
NimStringDesc* LOC25;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "HandleCmdLine";
F.prev = framePtr;
F.filename = "rod/nimrod.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Start_191260 = 0;
F.line = 50;F.filename = "nimrod.nim";
Start_191260 = Gettime_27416();
F.line = 51;F.filename = "nimrod.nim";
LOC2 = nosparamCount();
if (!(LOC2 == 0)) goto LA3;
F.line = 52;F.filename = "nimrod.nim";
Writecommandlineusage_67001();
goto LA1;
LA3: ;
Command_191263 = 0;
F.line = 55;F.filename = "nimrod.nim";
Command_191263 = copyString(((NimStringDesc*) &TMP191203));
Filename_191264 = 0;
F.line = 56;F.filename = "nimrod.nim";
Filename_191264 = copyString(((NimStringDesc*) &TMP191203));
F.line = 57;F.filename = "nimrod.nim";
Processcmdline_191204(((NU8) 0), &Command_191263, &Filename_191264);
F.line = 58;F.filename = "nimrod.nim";
if (!!(((Filename_191264) && (Filename_191264)->Sup.len == 0))) goto LA6;
F.line = 58;F.filename = "nimrod.nim";
memset((void*)&LOC8, 0, sizeof(LOC8));
nossplitFile(Filename_191264, &LOC8);
asgnRefNoCycle((void**) &Projectpath_40110, copyString(LOC8.Dir));
LA6: ;
F.line = 59;F.filename = "nimrod.nim";
Loadconfig_73004(Filename_191264);
F.line = 62;F.filename = "nimrod.nim";
Initvars_64379();
F.line = 63;F.filename = "nimrod.nim";
Command_191263 = copyString(((NimStringDesc*) &TMP191203));
F.line = 64;F.filename = "nimrod.nim";
Filename_191264 = copyString(((NimStringDesc*) &TMP191203));
F.line = 65;F.filename = "nimrod.nim";
Processcmdline_191204(((NU8) 1), &Command_191263, &Filename_191264);
F.line = 66;F.filename = "nimrod.nim";
Maincommand_187201(Command_191263, Filename_191264);
F.line = 67;F.filename = "nimrod.nim";
if (!(2 <= Gverbosity_40083)) goto LA10;
F.line = 67;F.filename = "nimrod.nim";
LOC12 = 0;
LOC12 = Gcgetstatistics_2682();
rawEcho(LOC12);
rawEchoNL();
LA10: ;
F.line = 71;F.filename = "nimrod.nim";
LOC14 = !(((131104 &(1<<((Gcmd_40082)&31)))!=0));
if (!(LOC14)) goto LA15;
LOC14 = (Gerrorcounter_41540 == 0);
LA15: ;
if (!LOC14) goto LA16;
F.line = 72;F.filename = "nimrod.nim";
memset((void*)&LOC18, 0, sizeof(LOC18));
LOC18[0] = nimIntToStr(Glinescompiled_70285);
LOC19 = Gettime_27416();
LOC20 = ntDiffTime(LOC19, Start_191260);
LOC18[1] = nimInt64ToStr(LOC20);
Rawmessage_41557(((NU8) 223), LOC18, 2);
LA16: ;
F.line = 73;F.filename = "nimrod.nim";
if (!((Gglobaloptions_40077 &(1<<((((NU8) 14))&31)))!=0)) goto LA22;
Prog_191434 = 0;
F.line = 77;F.filename = "nimrod.nim";
LOC24 = 0;
LOC24 = nosChangeFileExt(Filename_191264, ((NimStringDesc*) &TMP191203));
Prog_191434 = Quoteifcontainswhite_24283(LOC24);
F.line = 78;F.filename = "nimrod.nim";
LOC25 = 0;
LOC25 = rawNewString(Prog_191434->Sup.len + Arguments_191201->Sup.len + 1);
appendString(LOC25, Prog_191434);
appendChar(LOC25, 32);
appendString(LOC25, Arguments_191201);
Execexternalprogram_64373(LOC25);
LA22: ;
LA1: ;
framePtr = framePtr->prev;
}
int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMain)(void) {
  nim__datInit();
  systemInit();
parseutilsInit();
strutilsInit();
winleanInit();
timesInit();
osInit();
listsInit();
nhashesInit();
nstrtabsInit();
optionsInit();
msgsInit();
nversionInit();
crcInit();
platformInit();
ropesInit();
identsInit();
astInit();
astalgoInit();
condsymsInit();
hashesInit();
strtabsInit();
streamsInit();
osprocInit();
extccompInit();
wordrecgInit();
commandsInit();
llstreamInit();
lexbaseInit();
scannerInit();
nimconfInit();
pnimsynInit();
pbracesInit();
rnimsynInit();
filtersInit();
ptmplsynInit();
syntaxesInit();
rodreadInit();
treesInit();
typesInit();
mathInit();
magicsysInit();
bitsetsInit();
nimsetsInit();
passesInit();
treetabInit();
semdataInit();
lookupsInit();
importerInit();
rodwriteInit();
semfoldInit();
evalsInit();
procfindInit();
pragmasInit();
semInit();
rstInit();
highliteInit();
docgenInit();
ccgutilsInit();
cgmethInit();
cgenInit();
ecmasgenInit();
interactInit();
passauxInit();
dependsInit();
transfInit();
mainInit();
parseoptInit();
nimrodInit();
}
int main(int argc, char** args, char** env) {
  cmdLine = args;
  cmdCount = argc;
  gEnv = env;
  NimMain();
  return 0;
}
N_NOINLINE(void, nimrodInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "nimrod";
F.prev = framePtr;
F.filename = "rod/nimrod.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 18;F.filename = "nimrod.nim";
asgnRefNoCycle((void**) &Arguments_191201, copyString(((NimStringDesc*) &TMP191203)));
F.line = 80;F.filename = "nimrod.nim";
Cmdlineinfo_191202 = Newlineinfo_41574(((NimStringDesc*) &TMP191614), -1, -1);
F.line = 81;F.filename = "nimrod.nim";
Initdefines_57002();
F.line = 82;F.filename = "nimrod.nim";
Handlecmdline_191258();
F.line = 83;F.filename = "nimrod.nim";
exit(((NI) (Gexitcode_40078)));
framePtr = framePtr->prev;
}

