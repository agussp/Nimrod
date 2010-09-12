/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

#include <pthread.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10602 TY10602;
typedef struct TNimType TNimType;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10988 TY10988;
typedef struct TY46532 TY46532;
typedef struct TY193404 TY193404;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY37715 TY37715;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY46532 {
NI16 Line;
NI16 Col;
int Fileindex;
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
struct TY193404 {
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
typedef NimStringDesc* TY45354[1];
struct TY37715 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef NimStringDesc* TY67430[2];
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819);
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660);
N_NOINLINE(void, Addzct_11025)(TY10618* S_11028, TY10602* C_11029);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17308);
N_NIMCALL(void, Processcmdline_195204)(NU8 Pass_195206, NimStringDesc** Command_195208, NimStringDesc** Filename_195209);
N_NIMCALL(void, Initoptparser_193415)(NimStringDesc* Cmdline_193417, TY193404* Result);
N_NIMCALL(void, nponext)(TY193404* P_193797);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_25227, NIM_CHAR Sub_25228, NI Start_25229);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1752, NI First_1753, NI Last_1754);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17392, NimStringDesc* Src_17393);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17409, NIM_CHAR C_17410);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17287);
N_NIMCALL(void, Processswitch_71012)(NimStringDesc* Switch_71014, NimStringDesc* Arg_71015, NU8 Pass_71016, TY46532 Info_71017);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11826, void* Src_11827);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_35856);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY193404* P_193931);
N_NIMCALL(void, Rawmessage_46557)(NU8 Msg_46559, NimStringDesc** Args_46561, NI Args_46561Len0);
N_NIMCALL(void, Handlecmdline_195258)(void);
N_NIMCALL(NI, Gettime_27616)(void);
N_NIMCALL(NI, Paramcount_40628)(void);
N_NIMCALL(void, Writecommandlineusage_71001)(void);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_37714, TY37715* Result);
N_NIMCALL(void, Loadconfig_77004)(NimStringDesc* Project_77006);
N_NIMCALL(void, Initvars_68379)(void);
N_NIMCALL(void, Maincommand_191201)(NimStringDesc* Cmd_191203, NimStringDesc* Filename_191204);
N_NIMCALL(NimStringDesc*, Gcgetstatistics_2682)(void);
static N_INLINE(void, rawEcho)(NimStringDesc* X_4094);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
static N_INLINE(void, rawEchoNL)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_18003);
N_NIMCALL(NI64, ntDiffTime)(NI A_27635, NI B_27636);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_18067);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_25283)(NimStringDesc* S_25285);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_38020, NimStringDesc* Ext_38021);
N_NIMCALL(void, Execexternalprogram_68373)(NimStringDesc* Cmd_68375);
N_NIMCALL(TY46532, Newlineinfo_46574)(NimStringDesc* Filename_46576, NI Line_46577, NI Col_46578);
N_NIMCALL(void, Initdefines_62002)(void);
N_NOINLINE(void, nim__datInit)(void);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, parseutilsInit)(void);
N_NOINLINE(void, strutilsInit)(void);
N_NOINLINE(void, timesInit)(void);
N_NOINLINE(void, posixInit)(void);
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
STRING_LITERAL(TMP195203, "", 0);
STRING_LITERAL(TMP195613, "\012", 1);
STRING_LITERAL(TMP195614, "./", 2);
STRING_LITERAL(TMP195615, "command line", 12);
NimStringDesc* Arguments_195201;
extern TY10990 Gch_11010;
TY46532 Cmdlineinfo_195202;
extern TNimType* NTI193404; /* TOptParser */
extern NU32 Gglobaloptions_45077;
extern NimStringDesc* Projectpath_45110;
extern NI Gverbosity_45083;
extern NU8 Gcmd_45082;
extern NI Gerrorcounter_46540;
extern NI Glinescompiled_74285;
extern NI8 Gexitcode_45078;
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
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17409, NIM_CHAR C_17410) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendChar";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 154;F.filename = "sysstr.nim";
(*Dest_17409).data[((*Dest_17409).Sup.len)-0] = C_17410;
F.line = 155;F.filename = "sysstr.nim";
(*Dest_17409).data[((NI64)((*Dest_17409).Sup.len + 1))-0] = 0;
F.line = 156;F.filename = "sysstr.nim";
(*Dest_17409).Sup.len += 1;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Processcmdline_195204)(NU8 Pass_195206, NimStringDesc** Command_195208, NimStringDesc** Filename_195209) {
TY193404 P_195210;
NI Bracketle_195212;
NimStringDesc* Key_195215;
NimStringDesc* Val_195228;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NIM_BOOL LOC16;
TY45354 LOC20;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ProcessCmdLine";
F.prev = framePtr;
F.filename = "rod/nimrod.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&P_195210, 0, sizeof(P_195210));
F.line = 23;F.filename = "nimrod.nim";
Initoptparser_193415(((NimStringDesc*) &TMP195203), &P_195210);
P_195210.Sup.m_type = NTI193404;
F.line = 24;F.filename = "nimrod.nim";
while (1) {
F.line = 25;F.filename = "nimrod.nim";
nponext(&P_195210);
F.line = 26;F.filename = "nimrod.nim";
switch (P_195210.Kind) {
case ((NU8) 0):
F.line = 27;F.filename = "nimrod.nim";
goto LA1;
break;
case ((NU8) 2):
case ((NU8) 3):
Bracketle_195212 = 0;
F.line = 31;F.filename = "nimrod.nim";
Bracketle_195212 = nsuFindChar(P_195210.Key, 91, 0);
F.line = 32;F.filename = "nimrod.nim";
if (!(0 <= Bracketle_195212)) goto LA3;
Key_195215 = 0;
F.line = 33;F.filename = "nimrod.nim";
Key_195215 = copyStrLast(P_195210.Key, 0, subInt(Bracketle_195212, 1));
Val_195228 = 0;
F.line = 34;F.filename = "nimrod.nim";
LOC5 = 0;
LOC6 = 0;
LOC6 = copyStr(P_195210.Key, addInt(Bracketle_195212, 1));
LOC5 = rawNewString(LOC6->Sup.len + P_195210.Val->Sup.len + 1);
appendString(LOC5, LOC6);
appendChar(LOC5, 58);
appendString(LOC5, P_195210.Val);
Val_195228 = LOC5;
F.line = 35;F.filename = "nimrod.nim";
Processswitch_71012(Key_195215, Val_195228, Pass_195206, Cmdlineinfo_195202);
goto LA2;
LA3: ;
F.line = 37;F.filename = "nimrod.nim";
Processswitch_71012(P_195210.Key, P_195210.Val, Pass_195206, Cmdlineinfo_195202);
LA2: ;
break;
case ((NU8) 1):
F.line = 39;F.filename = "nimrod.nim";
if (!(((*Command_195208)) && ((*Command_195208))->Sup.len == 0)) goto LA8;
F.line = 40;F.filename = "nimrod.nim";
unsureAsgnRef((void**) &(*Command_195208), copyString(P_195210.Key));
goto LA7;
LA8: ;
if (!(((*Filename_195209)) && ((*Filename_195209))->Sup.len == 0)) goto LA10;
F.line = 42;F.filename = "nimrod.nim";
unsureAsgnRef((void**) &(*Filename_195209), nosUnixToNativePath(P_195210.Key));
F.line = 43;F.filename = "nimrod.nim";
goto LA1;
goto LA7;
LA10: ;
LA7: ;
break;
}
} LA1: ;
F.line = 44;F.filename = "nimrod.nim";
if (!(Pass_195206 == ((NU8) 1))) goto LA13;
F.line = 45;F.filename = "nimrod.nim";
asgnRefNoCycle((void**) &Arguments_195201, npocmdLineRest(&P_195210));
F.line = 46;F.filename = "nimrod.nim";
LOC16 = !(((Gglobaloptions_45077 &(1<<((((NU8) 14))&31)))!=0));
if (!(LOC16)) goto LA17;
LOC16 = !(((Arguments_195201) && (Arguments_195201)->Sup.len == 0));
LA17: ;
if (!LOC16) goto LA18;
F.line = 47;F.filename = "nimrod.nim";
memset((void*)&LOC20, 0, sizeof(LOC20));
Rawmessage_46557(((NU8) 54), LOC20, 0);
LA18: ;
LA13: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, rawEcho)(NimStringDesc* X_4094) {
Write_3658(stdout, X_4094);
}
static N_INLINE(void, rawEchoNL)(void) {
Write_3658(stdout, ((NimStringDesc*) &TMP195613));
}
N_NIMCALL(void, Handlecmdline_195258)(void) {
NI Start_195260;
NI LOC2;
NimStringDesc* Command_195263;
NimStringDesc* Filename_195264;
TY37715 LOC8;
NimStringDesc* LOC12;
NIM_BOOL LOC14;
TY67430 LOC18;
NI LOC19;
NI64 LOC20;
NimStringDesc* Prog_195442;
NimStringDesc* LOC24;
NimStringDesc* LOC25;
NimStringDesc* LOC26;
NimStringDesc* LOC27;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "HandleCmdLine";
F.prev = framePtr;
F.filename = "rod/nimrod.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Start_195260 = 0;
F.line = 50;F.filename = "nimrod.nim";
Start_195260 = Gettime_27616();
F.line = 51;F.filename = "nimrod.nim";
LOC2 = Paramcount_40628();
if (!(LOC2 == 0)) goto LA3;
F.line = 52;F.filename = "nimrod.nim";
Writecommandlineusage_71001();
goto LA1;
LA3: ;
Command_195263 = 0;
F.line = 55;F.filename = "nimrod.nim";
Command_195263 = copyString(((NimStringDesc*) &TMP195203));
Filename_195264 = 0;
F.line = 56;F.filename = "nimrod.nim";
Filename_195264 = copyString(((NimStringDesc*) &TMP195203));
F.line = 57;F.filename = "nimrod.nim";
Processcmdline_195204(((NU8) 0), &Command_195263, &Filename_195264);
F.line = 58;F.filename = "nimrod.nim";
if (!!(((Filename_195264) && (Filename_195264)->Sup.len == 0))) goto LA6;
F.line = 58;F.filename = "nimrod.nim";
memset((void*)&LOC8, 0, sizeof(LOC8));
nossplitFile(Filename_195264, &LOC8);
asgnRefNoCycle((void**) &Projectpath_45110, copyString(LOC8.Dir));
LA6: ;
F.line = 59;F.filename = "nimrod.nim";
Loadconfig_77004(Filename_195264);
F.line = 62;F.filename = "nimrod.nim";
Initvars_68379();
F.line = 63;F.filename = "nimrod.nim";
Command_195263 = copyString(((NimStringDesc*) &TMP195203));
F.line = 64;F.filename = "nimrod.nim";
Filename_195264 = copyString(((NimStringDesc*) &TMP195203));
F.line = 65;F.filename = "nimrod.nim";
Processcmdline_195204(((NU8) 1), &Command_195263, &Filename_195264);
F.line = 66;F.filename = "nimrod.nim";
Maincommand_191201(Command_195263, Filename_195264);
F.line = 67;F.filename = "nimrod.nim";
if (!(2 <= Gverbosity_45083)) goto LA10;
F.line = 67;F.filename = "nimrod.nim";
LOC12 = 0;
LOC12 = Gcgetstatistics_2682();
rawEcho(LOC12);
rawEchoNL();
LA10: ;
F.line = 71;F.filename = "nimrod.nim";
LOC14 = !(((131104 &(1<<((Gcmd_45082)&31)))!=0));
if (!(LOC14)) goto LA15;
LOC14 = (Gerrorcounter_46540 == 0);
LA15: ;
if (!LOC14) goto LA16;
F.line = 72;F.filename = "nimrod.nim";
memset((void*)&LOC18, 0, sizeof(LOC18));
LOC18[0] = nimIntToStr(Glinescompiled_74285);
LOC19 = Gettime_27616();
LOC20 = ntDiffTime(LOC19, Start_195260);
LOC18[1] = nimInt64ToStr(LOC20);
Rawmessage_46557(((NU8) 223), LOC18, 2);
LA16: ;
F.line = 73;F.filename = "nimrod.nim";
if (!((Gglobaloptions_45077 &(1<<((((NU8) 14))&31)))!=0)) goto LA22;
Prog_195442 = 0;
F.line = 75;F.filename = "nimrod.nim";
LOC24 = 0;
LOC25 = 0;
LOC25 = nosChangeFileExt(Filename_195264, ((NimStringDesc*) &TMP195203));
LOC26 = 0;
LOC26 = Quoteifcontainswhite_25283(LOC25);
LOC24 = rawNewString(LOC26->Sup.len + 2);
appendString(LOC24, ((NimStringDesc*) &TMP195614));
appendString(LOC24, LOC26);
Prog_195442 = LOC24;
F.line = 78;F.filename = "nimrod.nim";
LOC27 = 0;
LOC27 = rawNewString(Prog_195442->Sup.len + Arguments_195201->Sup.len + 1);
appendString(LOC27, Prog_195442);
appendChar(LOC27, 32);
appendString(LOC27, Arguments_195201);
Execexternalprogram_68373(LOC27);
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
timesInit();
posixInit();
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
asgnRefNoCycle((void**) &Arguments_195201, copyString(((NimStringDesc*) &TMP195203)));
F.line = 80;F.filename = "nimrod.nim";
Cmdlineinfo_195202 = Newlineinfo_46574(((NimStringDesc*) &TMP195615), -1, -1);
F.line = 81;F.filename = "nimrod.nim";
Initdefines_62002();
F.line = 82;F.filename = "nimrod.nim";
Handlecmdline_195258();
F.line = 83;F.filename = "nimrod.nim";
exit(((NI) (Gexitcode_45078)));
framePtr = framePtr->prev;
}

