/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY100008 TY100008;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI space;
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
struct TY100008 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, Bitsetin_100045)(TY100008* X_100047, NI64 E_100048);
static N_INLINE(NI64, divInt64)(NI64 A_5561, NI64 B_5562);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI64, modInt64)(NI64 A_5572, NI64 B_5573);
N_NIMCALL(NI64, chckRange64)(NI64 I_5323, NI64 A_5324, NI64 B_5325);
N_NIMCALL(void, Bitsetincl_100035)(TY100008** X_100038, NI64 Elem_100039);
N_NIMCALL(void, internalAssert)(NCSTRING File_5054, NI Line_5055, NIM_BOOL Cond_5056);
N_NIMCALL(void, Bitsetexcl_100040)(TY100008** X_100043, NI64 Elem_100044);
N_NIMCALL(void, Bitsetinit_100010)(TY100008** B_100013, NI Length_100014);
N_NIMCALL(void*, newSeq)(TNimType* Typ_12804, NI Len_12805);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11826, void* Src_11827);
N_NIMCALL(void, Bitsetunion_100015)(TY100008** X_100018, TY100008* Y_100019);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(void, Bitsetdiff_100020)(TY100008** X_100023, TY100008* Y_100024);
N_NIMCALL(void, Bitsetsymdiff_100025)(TY100008** X_100028, TY100008* Y_100029);
N_NIMCALL(void, Bitsetintersect_100030)(TY100008** X_100033, TY100008* Y_100034);
N_NIMCALL(NIM_BOOL, Bitsetequals_100049)(TY100008* X_100051, TY100008* Y_100052);
N_NIMCALL(NIM_BOOL, Bitsetcontains_100053)(TY100008* X_100055, TY100008* Y_100056);
extern TNimType* NTI100008; /* TBitSet */
static N_INLINE(NI64, divInt64)(NI64 A_5561, NI64 B_5562) {
NI64 Result_5563;
NIM_BOOL LOC5;
Result_5563 = 0;
if (!(B_5562 == 0)) goto LA2;
raiseDivByZero();
LA2: ;
LOC5 = (A_5561 == (IL64(-9223372036854775807) - IL64(1)));
if (!(LOC5)) goto LA6;
LOC5 = (B_5562 == -1);
LA6: ;
if (!LOC5) goto LA7;
raiseOverflow();
LA7: ;
Result_5563 = (NI64)(A_5561 / B_5562);
goto BeforeRet;
BeforeRet: ;
return Result_5563;
}
static N_INLINE(NI64, modInt64)(NI64 A_5572, NI64 B_5573) {
NI64 Result_5574;
Result_5574 = 0;
if (!(B_5573 == 0)) goto LA2;
raiseDivByZero();
LA2: ;
Result_5574 = (NI64)(A_5572 % B_5573);
goto BeforeRet;
BeforeRet: ;
return Result_5574;
}
N_NIMCALL(NIM_BOOL, Bitsetin_100045)(TY100008* X_100047, NI64 E_100048) {
NIM_BOOL Result_100061;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "BitSetIn";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100061 = 0;
F.line = 34;F.filename = "bitsets.nim";
if ((NU)(divInt64(E_100048, 8)) >= (NU)(X_100047->Sup.len)) raiseIndexError();
Result_100061 = !(((NI8)(X_100047->data[divInt64(E_100048, 8)] & ((NI8)(NU8)(NU)(((NI)chckRange64((NI64)((NU64)(1) << (NU64)(modInt64(E_100048, 8))), (-2147483647 -1), 2147483647))))) == ((NI8) 0)));
framePtr = framePtr->prev;
return Result_100061;
}
N_NIMCALL(void, Bitsetincl_100035)(TY100008** X_100038, NI64 Elem_100039) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "BitSetIncl";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 38;F.filename = "bitsets.nim";
internalAssert("rod/bitsets.nim", 38, (0 <= Elem_100039));
F.line = 39;F.filename = "bitsets.nim";
if ((NU)(divInt64(Elem_100039, 8)) >= (NU)((*X_100038)->Sup.len)) raiseIndexError();
if ((NU)(divInt64(Elem_100039, 8)) >= (NU)((*X_100038)->Sup.len)) raiseIndexError();
(*X_100038)->data[divInt64(Elem_100039, 8)] = (NI8)((*X_100038)->data[divInt64(Elem_100039, 8)] | ((NI8)(NU8)(NU)(((NI)chckRange64((NI64)((NU64)(1) << (NU64)(modInt64(Elem_100039, 8))), (-2147483647 -1), 2147483647)))));
framePtr = framePtr->prev;
}
N_NIMCALL(void, Bitsetexcl_100040)(TY100008** X_100043, NI64 Elem_100044) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "BitSetExcl";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 43;F.filename = "bitsets.nim";
if ((NU)(divInt64(Elem_100044, 8)) >= (NU)((*X_100043)->Sup.len)) raiseIndexError();
if ((NU)(divInt64(Elem_100044, 8)) >= (NU)((*X_100043)->Sup.len)) raiseIndexError();
(*X_100043)->data[divInt64(Elem_100044, 8)] = (NI8)((*X_100043)->data[divInt64(Elem_100044, 8)] & (NI8)((NU8) ~(((NI8)(NU8)(NU)(((NI)chckRange64((NI64)((NU64)(1) << (NU64)(modInt64(Elem_100044, 8))), (-2147483647 -1), 2147483647)))))));
framePtr = framePtr->prev;
}
N_NIMCALL(void, Bitsetinit_100010)(TY100008** B_100013, NI Length_100014) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "BitSetInit";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 47;F.filename = "bitsets.nim";
unsureAsgnRef((void**) &(*B_100013), (TY100008*) newSeq(NTI100008, Length_100014));
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
N_NIMCALL(void, Bitsetunion_100015)(TY100008** X_100018, TY100008* Y_100019) {
NI I_100120;
NI HEX3Atmp_100122;
NI Res_100124;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "BitSetUnion";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_100120 = 0;
HEX3Atmp_100122 = 0;
F.line = 50;F.filename = "bitsets.nim";
HEX3Atmp_100122 = ((*X_100018)->Sup.len-1);
Res_100124 = 0;
F.line = 1011;F.filename = "system.nim";
Res_100124 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_100124 <= HEX3Atmp_100122)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_100120 = Res_100124;
F.line = 50;F.filename = "bitsets.nim";
if ((NU)(I_100120) >= (NU)((*X_100018)->Sup.len)) raiseIndexError();
if ((NU)(I_100120) >= (NU)((*X_100018)->Sup.len)) raiseIndexError();
if ((NU)(I_100120) >= (NU)(Y_100019->Sup.len)) raiseIndexError();
(*X_100018)->data[I_100120] = (NI8)((*X_100018)->data[I_100120] | Y_100019->data[I_100120]);
F.line = 1014;F.filename = "system.nim";
Res_100124 = addInt(Res_100124, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Bitsetdiff_100020)(TY100008** X_100023, TY100008* Y_100024) {
NI I_100139;
NI HEX3Atmp_100141;
NI Res_100143;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "BitSetDiff";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_100139 = 0;
HEX3Atmp_100141 = 0;
F.line = 53;F.filename = "bitsets.nim";
HEX3Atmp_100141 = ((*X_100023)->Sup.len-1);
Res_100143 = 0;
F.line = 1011;F.filename = "system.nim";
Res_100143 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_100143 <= HEX3Atmp_100141)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_100139 = Res_100143;
F.line = 53;F.filename = "bitsets.nim";
if ((NU)(I_100139) >= (NU)((*X_100023)->Sup.len)) raiseIndexError();
if ((NU)(I_100139) >= (NU)((*X_100023)->Sup.len)) raiseIndexError();
if ((NU)(I_100139) >= (NU)(Y_100024->Sup.len)) raiseIndexError();
(*X_100023)->data[I_100139] = (NI8)((*X_100023)->data[I_100139] & (NI8)((NU8) ~(Y_100024->data[I_100139])));
F.line = 1014;F.filename = "system.nim";
Res_100143 = addInt(Res_100143, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Bitsetsymdiff_100025)(TY100008** X_100028, TY100008* Y_100029) {
NI I_100158;
NI HEX3Atmp_100160;
NI Res_100162;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "BitSetSymDiff";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_100158 = 0;
HEX3Atmp_100160 = 0;
F.line = 56;F.filename = "bitsets.nim";
HEX3Atmp_100160 = ((*X_100028)->Sup.len-1);
Res_100162 = 0;
F.line = 1011;F.filename = "system.nim";
Res_100162 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_100162 <= HEX3Atmp_100160)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_100158 = Res_100162;
F.line = 56;F.filename = "bitsets.nim";
if ((NU)(I_100158) >= (NU)((*X_100028)->Sup.len)) raiseIndexError();
if ((NU)(I_100158) >= (NU)((*X_100028)->Sup.len)) raiseIndexError();
if ((NU)(I_100158) >= (NU)(Y_100029->Sup.len)) raiseIndexError();
(*X_100028)->data[I_100158] = (NI8)((*X_100028)->data[I_100158] ^ Y_100029->data[I_100158]);
F.line = 1014;F.filename = "system.nim";
Res_100162 = addInt(Res_100162, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Bitsetintersect_100030)(TY100008** X_100033, TY100008* Y_100034) {
NI I_100177;
NI HEX3Atmp_100179;
NI Res_100181;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "BitSetIntersect";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
I_100177 = 0;
HEX3Atmp_100179 = 0;
F.line = 59;F.filename = "bitsets.nim";
HEX3Atmp_100179 = ((*X_100033)->Sup.len-1);
Res_100181 = 0;
F.line = 1011;F.filename = "system.nim";
Res_100181 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_100181 <= HEX3Atmp_100179)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_100177 = Res_100181;
F.line = 59;F.filename = "bitsets.nim";
if ((NU)(I_100177) >= (NU)((*X_100033)->Sup.len)) raiseIndexError();
if ((NU)(I_100177) >= (NU)((*X_100033)->Sup.len)) raiseIndexError();
if ((NU)(I_100177) >= (NU)(Y_100034->Sup.len)) raiseIndexError();
(*X_100033)->data[I_100177] = (NI8)((*X_100033)->data[I_100177] & Y_100034->data[I_100177]);
F.line = 1014;F.filename = "system.nim";
Res_100181 = addInt(Res_100181, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(NIM_BOOL, Bitsetequals_100049)(TY100008* X_100051, TY100008* Y_100052) {
NIM_BOOL Result_100188;
NI I_100196;
NI HEX3Atmp_100200;
NI Res_100202;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "BitSetEquals";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100188 = 0;
I_100196 = 0;
HEX3Atmp_100200 = 0;
F.line = 62;F.filename = "bitsets.nim";
HEX3Atmp_100200 = (X_100051->Sup.len-1);
Res_100202 = 0;
F.line = 1011;F.filename = "system.nim";
Res_100202 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_100202 <= HEX3Atmp_100200)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_100196 = Res_100202;
F.line = 63;F.filename = "bitsets.nim";
if ((NU)(I_100196) >= (NU)(X_100051->Sup.len)) raiseIndexError();
if ((NU)(I_100196) >= (NU)(Y_100052->Sup.len)) raiseIndexError();
if (!!((X_100051->data[I_100196] == Y_100052->data[I_100196]))) goto LA3;
F.line = 64;F.filename = "bitsets.nim";
F.line = 64;F.filename = "bitsets.nim";
Result_100188 = NIM_FALSE;
goto BeforeRet;
LA3: ;
F.line = 1014;F.filename = "system.nim";
Res_100202 = addInt(Res_100202, 1);
} LA1: ;
F.line = 65;F.filename = "bitsets.nim";
Result_100188 = NIM_TRUE;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_100188;
}
N_NIMCALL(NIM_BOOL, Bitsetcontains_100053)(TY100008* X_100055, TY100008* Y_100056) {
NIM_BOOL Result_100209;
NI I_100217;
NI HEX3Atmp_100221;
NI Res_100223;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "BitSetContains";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_100209 = 0;
I_100217 = 0;
HEX3Atmp_100221 = 0;
F.line = 68;F.filename = "bitsets.nim";
HEX3Atmp_100221 = (X_100055->Sup.len-1);
Res_100223 = 0;
F.line = 1011;F.filename = "system.nim";
Res_100223 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_100223 <= HEX3Atmp_100221)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_100217 = Res_100223;
F.line = 69;F.filename = "bitsets.nim";
if ((NU)(I_100217) >= (NU)(X_100055->Sup.len)) raiseIndexError();
if ((NU)(I_100217) >= (NU)(Y_100056->Sup.len)) raiseIndexError();
if (!!(((NI8)(X_100055->data[I_100217] & (NI8)((NU8) ~(Y_100056->data[I_100217]))) == ((NI8) 0)))) goto LA3;
F.line = 70;F.filename = "bitsets.nim";
F.line = 70;F.filename = "bitsets.nim";
Result_100209 = NIM_FALSE;
goto BeforeRet;
LA3: ;
F.line = 1014;F.filename = "system.nim";
Res_100223 = addInt(Res_100223, 1);
} LA1: ;
F.line = 71;F.filename = "bitsets.nim";
Result_100209 = NIM_TRUE;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_100209;
}
N_NOINLINE(void, bitsetsInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "bitsets";
F.prev = framePtr;
F.filename = "rod/bitsets.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

