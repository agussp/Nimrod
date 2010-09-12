/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

#include <pthread.h>
typedef struct TY50036 TY50036;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY50448 TY50448;
typedef struct TY10602 TY10602;
typedef struct TNimType TNimType;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10988 TY10988;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY50036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY50036 TY50054[21];
typedef NimStringDesc* TY50457[2];
struct TY50448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY50448 TY50461[12];
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
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
typedef NI TY8614[16];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, Settarget_50574)(NU8 O_50576, NU8 C_50577);
N_NIMCALL(void, internalAssert)(NCSTRING File_5054, NI Line_5055, NIM_BOOL Cond_5056);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, divInt)(NI A_6203, NI B_6204);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819);
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660);
N_NOINLINE(void, Addzct_11025)(TY10618* S_11028, TY10602* C_11029);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17308);
N_NIMCALL(NU8, Nametoos_50564)(NimStringDesc* Name_50566);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_23638, NimStringDesc* B_23639);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(NU8, Nametocpu_50567)(NimStringDesc* Name_50569);
STRING_LITERAL(TMP50384, "DOS", 3);
STRING_LITERAL(TMP50385, "..", 2);
STRING_LITERAL(TMP50386, "$1.dll", 6);
STRING_LITERAL(TMP50387, "/", 1);
STRING_LITERAL(TMP50388, ".obj", 4);
STRING_LITERAL(TMP50389, "\015\012", 2);
STRING_LITERAL(TMP50390, ";", 1);
STRING_LITERAL(TMP50391, "\\", 1);
STRING_LITERAL(TMP50392, ".bat", 4);
STRING_LITERAL(TMP50393, ".", 1);
STRING_LITERAL(TMP50394, ".exe", 4);
STRING_LITERAL(TMP50395, "Windows", 7);
STRING_LITERAL(TMP50396, "OS2", 3);
STRING_LITERAL(TMP50397, "Linux", 5);
STRING_LITERAL(TMP50398, "lib$1.so", 8);
STRING_LITERAL(TMP50399, ".o", 2);
STRING_LITERAL(TMP50400, "\012", 1);
STRING_LITERAL(TMP50401, ":", 1);
STRING_LITERAL(TMP50402, ".sh", 3);
STRING_LITERAL(TMP50403, "", 0);
STRING_LITERAL(TMP50404, "MorphOS", 7);
STRING_LITERAL(TMP50405, "SkyOS", 5);
STRING_LITERAL(TMP50406, "Solaris", 7);
STRING_LITERAL(TMP50407, "Irix", 4);
STRING_LITERAL(TMP50408, "NetBSD", 6);
STRING_LITERAL(TMP50409, "FreeBSD", 7);
STRING_LITERAL(TMP50410, "OpenBSD", 7);
STRING_LITERAL(TMP50411, "AIX", 3);
STRING_LITERAL(TMP50412, "PalmOS", 6);
STRING_LITERAL(TMP50413, "QNX", 3);
STRING_LITERAL(TMP50414, "Amiga", 5);
STRING_LITERAL(TMP50415, "$1.library", 10);
STRING_LITERAL(TMP50416, "Atari", 5);
STRING_LITERAL(TMP50417, ".tpp", 4);
STRING_LITERAL(TMP50418, "Netware", 7);
STRING_LITERAL(TMP50419, "$1.nlm", 6);
STRING_LITERAL(TMP50420, ".nlm", 4);
STRING_LITERAL(TMP50421, "MacOS", 5);
STRING_LITERAL(TMP50422, "::", 2);
STRING_LITERAL(TMP50423, "$1Lib", 5);
STRING_LITERAL(TMP50424, "\015", 1);
STRING_LITERAL(TMP50425, ",", 1);
STRING_LITERAL(TMP50426, "MacOSX", 6);
STRING_LITERAL(TMP50427, "lib$1.dylib", 11);
STRING_LITERAL(TMP50428, "EcmaScript", 10);
STRING_LITERAL(TMP50429, "NimrodVM", 8);
NIM_CONST TY50054 Os_50053 = {{((NimStringDesc*) &TMP50384),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50386),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50388),
((NimStringDesc*) &TMP50389),
((NimStringDesc*) &TMP50390),
((NimStringDesc*) &TMP50391),
((NimStringDesc*) &TMP50392),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50394),
((NimStringDesc*) &TMP50393),
2}
,
{((NimStringDesc*) &TMP50395),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50386),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50388),
((NimStringDesc*) &TMP50389),
((NimStringDesc*) &TMP50390),
((NimStringDesc*) &TMP50391),
((NimStringDesc*) &TMP50392),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50394),
((NimStringDesc*) &TMP50393),
2}
,
{((NimStringDesc*) &TMP50396),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50386),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50388),
((NimStringDesc*) &TMP50389),
((NimStringDesc*) &TMP50390),
((NimStringDesc*) &TMP50391),
((NimStringDesc*) &TMP50392),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50394),
((NimStringDesc*) &TMP50393),
2}
,
{((NimStringDesc*) &TMP50397),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50404),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50405),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50406),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50407),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50408),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50409),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50410),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50411),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50412),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
1}
,
{((NimStringDesc*) &TMP50413),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50414),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50415),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
1}
,
{((NimStringDesc*) &TMP50416),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50386),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50417),
((NimStringDesc*) &TMP50393),
1}
,
{((NimStringDesc*) &TMP50418),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50419),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50389),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50420),
((NimStringDesc*) &TMP50393),
2}
,
{((NimStringDesc*) &TMP50421),
((NimStringDesc*) &TMP50422),
((NimStringDesc*) &TMP50423),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50424),
((NimStringDesc*) &TMP50425),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
2}
,
{((NimStringDesc*) &TMP50426),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50427),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50428),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
0}
,
{((NimStringDesc*) &TMP50429),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
0}
}
;
STRING_LITERAL(TMP50546, "littleEndian", 12);
STRING_LITERAL(TMP50547, "bigEndian", 9);
NIM_CONST TY50457 Endiantostr_50456 = {((NimStringDesc*) &TMP50546),
((NimStringDesc*) &TMP50547)}
;
STRING_LITERAL(TMP50548, "i386", 4);
STRING_LITERAL(TMP50549, "m68k", 4);
STRING_LITERAL(TMP50550, "alpha", 5);
STRING_LITERAL(TMP50551, "powerpc", 7);
STRING_LITERAL(TMP50552, "sparc", 5);
STRING_LITERAL(TMP50553, "vm", 2);
STRING_LITERAL(TMP50554, "ia64", 4);
STRING_LITERAL(TMP50555, "amd64", 5);
STRING_LITERAL(TMP50556, "mips", 4);
STRING_LITERAL(TMP50557, "arm", 3);
STRING_LITERAL(TMP50558, "ecmascript", 10);
STRING_LITERAL(TMP50559, "nimrodvm", 8);
NIM_CONST TY50461 Cpu_50460 = {{((NimStringDesc*) &TMP50548),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP50549),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP50550),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP50551),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP50552),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP50553),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP50554),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP50555),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP50556),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP50557),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP50558),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP50559),
32,
((NU8) 1),
64,
32}
}
;
STRING_LITERAL(TMP50696, "freebsd", 7);
NU8 Targetcpu_50560;
NU8 Hostcpu_50561;
NU8 Targetos_50562;
NU8 Hostos_50563;
NI Intsize_50570;
NI Floatsize_50571;
NI Ptrsize_50572;
NimStringDesc* Tnl_50573;
extern TY10990 Gch_11010;
static N_INLINE(NI, divInt)(NI A_6203, NI B_6204) {
NI Result_6205;
NIM_BOOL LOC5;
Result_6205 = 0;
if (!(B_6204 == 0)) goto LA2;
raiseDivByZero();
LA2: ;
LOC5 = (A_6203 == (-2147483647 -1));
if (!(LOC5)) goto LA6;
LOC5 = (B_6204 == -1);
LA6: ;
if (!LOC5) goto LA7;
raiseOverflow();
LA7: ;
Result_6205 = (NI32)(A_6203 / B_6204);
goto BeforeRet;
BeforeRet: ;
return Result_6205;
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
Result_11039 = ((TY10602*) ((NI32)((NU32)(((NI) (Usr_11038))) - (NU32)(((NI) (((NI)sizeof(TY10602))))))));
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11658(C_11822);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_11818) = Src_11819;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Settarget_50574)(NU8 O_50576, NU8 C_50577) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "setTarget";
F.prev = framePtr;
F.filename = "rod/platform.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 185;F.filename = "platform.nim";
internalAssert("rod/platform.nim", 185, !((C_50577 == ((NU8) 0))));
F.line = 186;F.filename = "platform.nim";
internalAssert("rod/platform.nim", 186, !((O_50576 == ((NU8) 0))));
F.line = 188;F.filename = "platform.nim";
Targetcpu_50560 = C_50577;
F.line = 189;F.filename = "platform.nim";
Targetos_50562 = O_50576;
F.line = 190;F.filename = "platform.nim";
if (C_50577 < 1 || C_50577 > 12) raiseIndexError();
Intsize_50570 = divInt(Cpu_50460[(C_50577)-1].Intsize, 8);
F.line = 191;F.filename = "platform.nim";
if (C_50577 < 1 || C_50577 > 12) raiseIndexError();
Floatsize_50571 = divInt(Cpu_50460[(C_50577)-1].Floatsize, 8);
F.line = 192;F.filename = "platform.nim";
if (C_50577 < 1 || C_50577 > 12) raiseIndexError();
Ptrsize_50572 = divInt(Cpu_50460[(C_50577)-1].Bit, 8);
F.line = 193;F.filename = "platform.nim";
if (O_50576 < 1 || O_50576 > 21) raiseIndexError();
asgnRefNoCycle((void**) &Tnl_50573, copyString(Os_50053[(O_50576)-1].Newline));
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
N_NIMCALL(NU8, Nametoos_50564)(NimStringDesc* Name_50566) {
NU8 Result_50599;
NU8 I_50638;
NU8 Res_50643;
NI LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "NameToOS";
F.prev = framePtr;
F.filename = "rod/platform.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_50599 = 0;
I_50638 = 0;
Res_50643 = 0;
F.line = 1011;F.filename = "system.nim";
Res_50643 = ((NU8) 1);
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_50643 <= ((NU8) 21))) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_50638 = Res_50643;
F.line = 197;F.filename = "platform.nim";
if (I_50638 < 1 || I_50638 > 21) raiseIndexError();
LOC3 = nsuCmpIgnoreStyle(Name_50566, Os_50053[(I_50638)-1].Name);
if (!(LOC3 == 0)) goto LA4;
F.line = 198;F.filename = "platform.nim";
F.line = 198;F.filename = "platform.nim";
Result_50599 = I_50638;
goto BeforeRet;
LA4: ;
F.line = 1014;F.filename = "system.nim";
Res_50643 = addInt(Res_50643, 1);
} LA1: ;
F.line = 199;F.filename = "platform.nim";
Result_50599 = ((NU8) 0);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_50599;
}
N_NIMCALL(NU8, Nametocpu_50567)(NimStringDesc* Name_50569) {
NU8 Result_50649;
NU8 I_50688;
NU8 Res_50693;
NI LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "NameToCPU";
F.prev = framePtr;
F.filename = "rod/platform.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_50649 = 0;
I_50688 = 0;
Res_50693 = 0;
F.line = 1011;F.filename = "system.nim";
Res_50693 = ((NU8) 1);
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_50693 <= ((NU8) 12))) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_50688 = Res_50693;
F.line = 203;F.filename = "platform.nim";
if (I_50688 < 1 || I_50688 > 12) raiseIndexError();
LOC3 = nsuCmpIgnoreStyle(Name_50569, Cpu_50460[(I_50688)-1].Name);
if (!(LOC3 == 0)) goto LA4;
F.line = 204;F.filename = "platform.nim";
F.line = 204;F.filename = "platform.nim";
Result_50649 = I_50688;
goto BeforeRet;
LA4: ;
F.line = 1014;F.filename = "system.nim";
Res_50693 = addInt(Res_50693, 1);
} LA1: ;
F.line = 205;F.filename = "platform.nim";
Result_50649 = ((NU8) 0);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_50649;
}
N_NOINLINE(void, platformInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "platform";
F.prev = framePtr;
F.filename = "rod/platform.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 207;F.filename = "platform.nim";
Hostcpu_50561 = Nametocpu_50567(((NimStringDesc*) &TMP50551));
F.line = 208;F.filename = "platform.nim";
Hostos_50563 = Nametoos_50564(((NimStringDesc*) &TMP50696));
F.line = 210;F.filename = "platform.nim";
Settarget_50574(Hostos_50563, Hostcpu_50561);
framePtr = framePtr->prev;
}

