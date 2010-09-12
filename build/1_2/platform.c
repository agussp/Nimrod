/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY45036 TY45036;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY45448 TY45448;
typedef struct TY10402 TY10402;
typedef struct TNimType TNimType;
typedef struct TY7804 TY7804;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
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
struct TY45036 {
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
typedef TY45036 TY45054[21];
typedef NimStringDesc* TY45457[2];
struct TY45448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY45448 TY45461[12];
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
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, Settarget_45574)(NU8 O_45576, NU8 C_45577);
N_NIMCALL(void, internalAssert)(NCSTRING File_5054, NI Line_5055, NIM_BOOL Cond_5056);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, divInt)(NI A_6203, NI B_6204);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619);
static N_INLINE(TY10402*, Usrtocell_10836)(void* Usr_10838);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11458)(TY10402* C_11460);
N_NOINLINE(void, Addzct_10825)(TY10418* S_10828, TY10402* C_10829);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(NU8, Nametoos_45564)(NimStringDesc* Name_45566);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_22638, NimStringDesc* B_22639);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(NU8, Nametocpu_45567)(NimStringDesc* Name_45569);
STRING_LITERAL(TMP45384, "DOS", 3);
STRING_LITERAL(TMP45385, "..", 2);
STRING_LITERAL(TMP45386, "$1.dll", 6);
STRING_LITERAL(TMP45387, "/", 1);
STRING_LITERAL(TMP45388, ".obj", 4);
STRING_LITERAL(TMP45389, "\015\012", 2);
STRING_LITERAL(TMP45390, ";", 1);
STRING_LITERAL(TMP45391, "\\", 1);
STRING_LITERAL(TMP45392, ".bat", 4);
STRING_LITERAL(TMP45393, ".", 1);
STRING_LITERAL(TMP45394, ".exe", 4);
STRING_LITERAL(TMP45395, "Windows", 7);
STRING_LITERAL(TMP45396, "OS2", 3);
STRING_LITERAL(TMP45397, "Linux", 5);
STRING_LITERAL(TMP45398, "lib$1.so", 8);
STRING_LITERAL(TMP45399, ".o", 2);
STRING_LITERAL(TMP45400, "\012", 1);
STRING_LITERAL(TMP45401, ":", 1);
STRING_LITERAL(TMP45402, ".sh", 3);
STRING_LITERAL(TMP45403, "", 0);
STRING_LITERAL(TMP45404, "MorphOS", 7);
STRING_LITERAL(TMP45405, "SkyOS", 5);
STRING_LITERAL(TMP45406, "Solaris", 7);
STRING_LITERAL(TMP45407, "Irix", 4);
STRING_LITERAL(TMP45408, "NetBSD", 6);
STRING_LITERAL(TMP45409, "FreeBSD", 7);
STRING_LITERAL(TMP45410, "OpenBSD", 7);
STRING_LITERAL(TMP45411, "AIX", 3);
STRING_LITERAL(TMP45412, "PalmOS", 6);
STRING_LITERAL(TMP45413, "QNX", 3);
STRING_LITERAL(TMP45414, "Amiga", 5);
STRING_LITERAL(TMP45415, "$1.library", 10);
STRING_LITERAL(TMP45416, "Atari", 5);
STRING_LITERAL(TMP45417, ".tpp", 4);
STRING_LITERAL(TMP45418, "Netware", 7);
STRING_LITERAL(TMP45419, "$1.nlm", 6);
STRING_LITERAL(TMP45420, ".nlm", 4);
STRING_LITERAL(TMP45421, "MacOS", 5);
STRING_LITERAL(TMP45422, "::", 2);
STRING_LITERAL(TMP45423, "$1Lib", 5);
STRING_LITERAL(TMP45424, "\015", 1);
STRING_LITERAL(TMP45425, ",", 1);
STRING_LITERAL(TMP45426, "MacOSX", 6);
STRING_LITERAL(TMP45427, "lib$1.dylib", 11);
STRING_LITERAL(TMP45428, "EcmaScript", 10);
STRING_LITERAL(TMP45429, "NimrodVM", 8);
NIM_CONST TY45054 Os_45053 = {{((NimStringDesc*) &TMP45384),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45386),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45388),
((NimStringDesc*) &TMP45389),
((NimStringDesc*) &TMP45390),
((NimStringDesc*) &TMP45391),
((NimStringDesc*) &TMP45392),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45394),
((NimStringDesc*) &TMP45393),
2}
,
{((NimStringDesc*) &TMP45395),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45386),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45388),
((NimStringDesc*) &TMP45389),
((NimStringDesc*) &TMP45390),
((NimStringDesc*) &TMP45391),
((NimStringDesc*) &TMP45392),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45394),
((NimStringDesc*) &TMP45393),
2}
,
{((NimStringDesc*) &TMP45396),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45386),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45388),
((NimStringDesc*) &TMP45389),
((NimStringDesc*) &TMP45390),
((NimStringDesc*) &TMP45391),
((NimStringDesc*) &TMP45392),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45394),
((NimStringDesc*) &TMP45393),
2}
,
{((NimStringDesc*) &TMP45397),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45404),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45405),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45406),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45407),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45408),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45409),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45410),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45411),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45412),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
1}
,
{((NimStringDesc*) &TMP45413),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45414),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45415),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
1}
,
{((NimStringDesc*) &TMP45416),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45386),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45417),
((NimStringDesc*) &TMP45393),
1}
,
{((NimStringDesc*) &TMP45418),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45419),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45389),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45420),
((NimStringDesc*) &TMP45393),
2}
,
{((NimStringDesc*) &TMP45421),
((NimStringDesc*) &TMP45422),
((NimStringDesc*) &TMP45423),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45424),
((NimStringDesc*) &TMP45425),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
2}
,
{((NimStringDesc*) &TMP45426),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45427),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
5}
,
{((NimStringDesc*) &TMP45428),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
0}
,
{((NimStringDesc*) &TMP45429),
((NimStringDesc*) &TMP45385),
((NimStringDesc*) &TMP45398),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45399),
((NimStringDesc*) &TMP45400),
((NimStringDesc*) &TMP45401),
((NimStringDesc*) &TMP45387),
((NimStringDesc*) &TMP45402),
((NimStringDesc*) &TMP45393),
((NimStringDesc*) &TMP45403),
((NimStringDesc*) &TMP45393),
0}
}
;
STRING_LITERAL(TMP45546, "littleEndian", 12);
STRING_LITERAL(TMP45547, "bigEndian", 9);
NIM_CONST TY45457 Endiantostr_45456 = {((NimStringDesc*) &TMP45546),
((NimStringDesc*) &TMP45547)}
;
STRING_LITERAL(TMP45548, "i386", 4);
STRING_LITERAL(TMP45549, "m68k", 4);
STRING_LITERAL(TMP45550, "alpha", 5);
STRING_LITERAL(TMP45551, "powerpc", 7);
STRING_LITERAL(TMP45552, "sparc", 5);
STRING_LITERAL(TMP45553, "vm", 2);
STRING_LITERAL(TMP45554, "ia64", 4);
STRING_LITERAL(TMP45555, "amd64", 5);
STRING_LITERAL(TMP45556, "mips", 4);
STRING_LITERAL(TMP45557, "arm", 3);
STRING_LITERAL(TMP45558, "ecmascript", 10);
STRING_LITERAL(TMP45559, "nimrodvm", 8);
NIM_CONST TY45461 Cpu_45460 = {{((NimStringDesc*) &TMP45548),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP45549),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP45550),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP45551),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP45552),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP45553),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP45554),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP45555),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP45556),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP45557),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP45558),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP45559),
32,
((NU8) 1),
64,
32}
}
;
STRING_LITERAL(TMP45696, "windows", 7);
NU8 Targetcpu_45560;
NU8 Hostcpu_45561;
NU8 Targetos_45562;
NU8 Hostos_45563;
NI Intsize_45570;
NI Floatsize_45571;
NI Ptrsize_45572;
NimStringDesc* Tnl_45573;
extern TY7816 Dl_7815;
extern TY10790 Gch_10810;
extern TY7820 Dl_7819;
static N_INLINE(NI, divInt)(NI A_6203, NI B_6204) {
NI Result_6205;
NIM_BOOL LOC5;
Result_6205 = 0;
if (!(B_6204 == 0)) goto LA2;
raiseDivByZero();
LA2: ;
LOC5 = (A_6203 == (IL64(-9223372036854775807) - IL64(1)));
if (!(LOC5)) goto LA6;
LOC5 = (B_6204 == -1);
LA6: ;
if (!LOC5) goto LA7;
raiseOverflow();
LA7: ;
Result_6205 = (NI64)(A_6203 / B_6204);
goto BeforeRet;
BeforeRet: ;
return Result_6205;
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
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11458(C_11622);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_11618) = Src_11619;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Settarget_45574)(NU8 O_45576, NU8 C_45577) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "setTarget";
F.prev = framePtr;
F.filename = "rod/platform.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 185;F.filename = "platform.nim";
internalAssert("rod/platform.nim", 185, !((C_45577 == ((NU8) 0))));
F.line = 186;F.filename = "platform.nim";
internalAssert("rod/platform.nim", 186, !((O_45576 == ((NU8) 0))));
F.line = 188;F.filename = "platform.nim";
Targetcpu_45560 = C_45577;
F.line = 189;F.filename = "platform.nim";
Targetos_45562 = O_45576;
F.line = 190;F.filename = "platform.nim";
if (C_45577 < 1 || C_45577 > 12) raiseIndexError();
Intsize_45570 = divInt(Cpu_45460[(C_45577)-1].Intsize, 8);
F.line = 191;F.filename = "platform.nim";
if (C_45577 < 1 || C_45577 > 12) raiseIndexError();
Floatsize_45571 = divInt(Cpu_45460[(C_45577)-1].Floatsize, 8);
F.line = 192;F.filename = "platform.nim";
if (C_45577 < 1 || C_45577 > 12) raiseIndexError();
Ptrsize_45572 = divInt(Cpu_45460[(C_45577)-1].Bit, 8);
F.line = 193;F.filename = "platform.nim";
if (O_45576 < 1 || O_45576 > 21) raiseIndexError();
asgnRefNoCycle((void**) &Tnl_45573, copyString(Os_45053[(O_45576)-1].Newline));
framePtr = framePtr->prev;
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
N_NIMCALL(NU8, Nametoos_45564)(NimStringDesc* Name_45566) {
NU8 Result_45599;
NU8 I_45638;
NU8 Res_45643;
NI LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "NameToOS";
F.prev = framePtr;
F.filename = "rod/platform.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45599 = 0;
I_45638 = 0;
Res_45643 = 0;
F.line = 1011;F.filename = "system.nim";
Res_45643 = ((NU8) 1);
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_45643 <= ((NU8) 21))) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_45638 = Res_45643;
F.line = 197;F.filename = "platform.nim";
if (I_45638 < 1 || I_45638 > 21) raiseIndexError();
LOC3 = nsuCmpIgnoreStyle(Name_45566, Os_45053[(I_45638)-1].Name);
if (!(LOC3 == 0)) goto LA4;
F.line = 198;F.filename = "platform.nim";
F.line = 198;F.filename = "platform.nim";
Result_45599 = I_45638;
goto BeforeRet;
LA4: ;
F.line = 1014;F.filename = "system.nim";
Res_45643 = addInt(Res_45643, 1);
} LA1: ;
F.line = 199;F.filename = "platform.nim";
Result_45599 = ((NU8) 0);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_45599;
}
N_NIMCALL(NU8, Nametocpu_45567)(NimStringDesc* Name_45569) {
NU8 Result_45649;
NU8 I_45688;
NU8 Res_45693;
NI LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "NameToCPU";
F.prev = framePtr;
F.filename = "rod/platform.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_45649 = 0;
I_45688 = 0;
Res_45693 = 0;
F.line = 1011;F.filename = "system.nim";
Res_45693 = ((NU8) 1);
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_45693 <= ((NU8) 12))) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_45688 = Res_45693;
F.line = 203;F.filename = "platform.nim";
if (I_45688 < 1 || I_45688 > 12) raiseIndexError();
LOC3 = nsuCmpIgnoreStyle(Name_45569, Cpu_45460[(I_45688)-1].Name);
if (!(LOC3 == 0)) goto LA4;
F.line = 204;F.filename = "platform.nim";
F.line = 204;F.filename = "platform.nim";
Result_45649 = I_45688;
goto BeforeRet;
LA4: ;
F.line = 1014;F.filename = "system.nim";
Res_45693 = addInt(Res_45693, 1);
} LA1: ;
F.line = 205;F.filename = "platform.nim";
Result_45649 = ((NU8) 0);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_45649;
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
Hostcpu_45561 = Nametocpu_45567(((NimStringDesc*) &TMP45555));
F.line = 208;F.filename = "platform.nim";
Hostos_45563 = Nametoos_45564(((NimStringDesc*) &TMP45696));
F.line = 210;F.filename = "platform.nim";
Settarget_45574(Hostos_45563, Hostcpu_45561);
framePtr = framePtr->prev;
}

