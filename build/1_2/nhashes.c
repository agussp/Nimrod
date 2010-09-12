/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
N_NIMCALL(NI, Conchash_38040)(NI H_38042, NI Val_38043);
N_NIMCALL(NI, Finishhash_38044)(NI H_38046);
N_NIMCALL(NI, Getdatahash_38024)(void* Data_38026, NI Size_38027);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NIMCALL(NI, Hashptr_38028)(void* P_38030);
N_NIMCALL(NI, Gethash_38018)(NCSTRING Str_38020);
N_NIMCALL(NI, Gethashstr_38031)(NimStringDesc* S_38033);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NI, Getnormalizedhash_38037)(NimStringDesc* S_38039);
N_NIMCALL(NI, Gethashstrci_38034)(NimStringDesc* S_38036);
N_NIMCALL(NI, Gethashci_38021)(NCSTRING Str_38023);
N_NIMCALL(NI, Conchash_38040)(NI H_38042, NI Val_38043) {
NI Result_38051;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "concHash";
F.prev = framePtr;
F.filename = "rod/nhashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_38051 = 0;
F.line = 36;F.filename = "nhashes.nim";
Result_38051 = (NI64)((NU64)(H_38042) + (NU64)(Val_38043));
F.line = 37;F.filename = "nhashes.nim";
Result_38051 = (NI64)((NU64)(Result_38051) + (NU64)((NI64)((NU64)(Result_38051) << (NU64)(10))));
F.line = 38;F.filename = "nhashes.nim";
Result_38051 = (NI64)(Result_38051 ^ (NI64)((NU64)(Result_38051) >> (NU64)(6)));
framePtr = framePtr->prev;
return Result_38051;
}
N_NIMCALL(NI, Finishhash_38044)(NI H_38046) {
NI Result_38055;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "finishHash";
F.prev = framePtr;
F.filename = "rod/nhashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_38055 = 0;
F.line = 41;F.filename = "nhashes.nim";
Result_38055 = (NI64)((NU64)(H_38046) + (NU64)((NI64)((NU64)(H_38046) << (NU64)(3))));
F.line = 42;F.filename = "nhashes.nim";
Result_38055 = (NI64)(Result_38055 ^ (NI64)((NU64)(Result_38055) >> (NU64)(11)));
F.line = 43;F.filename = "nhashes.nim";
Result_38055 = (NI64)((NU64)(Result_38055) + (NU64)((NI64)((NU64)(Result_38055) << (NU64)(15))));
framePtr = framePtr->prev;
return Result_38055;
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
N_NIMCALL(NI, Getdatahash_38024)(void* Data_38026, NI Size_38027) {
NI Result_38060;
NI H_38061;
NCSTRING P_38062;
NI I_38063;
NI S_38064;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "GetDataHash";
F.prev = framePtr;
F.filename = "rod/nhashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_38060 = 0;
H_38061 = 0;
P_38062 = 0;
I_38063 = 0;
S_38064 = 0;
F.line = 50;F.filename = "nhashes.nim";
H_38061 = 0;
F.line = 51;F.filename = "nhashes.nim";
P_38062 = ((NCSTRING) (Data_38026));
F.line = 52;F.filename = "nhashes.nim";
I_38063 = 0;
F.line = 53;F.filename = "nhashes.nim";
S_38064 = Size_38027;
F.line = 54;F.filename = "nhashes.nim";
while (1) {
if (!(0 < S_38064)) goto LA1;
F.line = 55;F.filename = "nhashes.nim";
H_38061 = (NI64)((NU64)(H_38061) + (NU64)(((NU8)(P_38062[I_38063]))));
F.line = 56;F.filename = "nhashes.nim";
H_38061 = (NI64)((NU64)(H_38061) + (NU64)((NI64)((NU64)(H_38061) << (NU64)(10))));
F.line = 57;F.filename = "nhashes.nim";
H_38061 = (NI64)(H_38061 ^ (NI64)((NU64)(H_38061) >> (NU64)(6)));
F.line = 58;F.filename = "nhashes.nim";
I_38063 = addInt(I_38063, 1);
F.line = 59;F.filename = "nhashes.nim";
S_38064 = subInt(S_38064, 1);
} LA1: ;
F.line = 60;F.filename = "nhashes.nim";
H_38061 = (NI64)((NU64)(H_38061) + (NU64)((NI64)((NU64)(H_38061) << (NU64)(3))));
F.line = 61;F.filename = "nhashes.nim";
H_38061 = (NI64)(H_38061 ^ (NI64)((NU64)(H_38061) >> (NU64)(11)));
F.line = 62;F.filename = "nhashes.nim";
H_38061 = (NI64)((NU64)(H_38061) + (NU64)((NI64)((NU64)(H_38061) << (NU64)(15))));
F.line = 63;F.filename = "nhashes.nim";
Result_38060 = ((NI) (H_38061));
framePtr = framePtr->prev;
return Result_38060;
}
N_NIMCALL(NI, Hashptr_38028)(void* P_38030) {
NI Result_38100;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hashPtr";
F.prev = framePtr;
F.filename = "rod/nhashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_38100 = 0;
F.line = 66;F.filename = "nhashes.nim";
Result_38100 = (NI64)((NU64)(((NI) (P_38030))) >> (NU64)(3));
framePtr = framePtr->prev;
return Result_38100;
}
N_NIMCALL(NI, Gethash_38018)(NCSTRING Str_38020) {
NI Result_38104;
NI H_38105;
NI I_38106;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "GetHash";
F.prev = framePtr;
F.filename = "rod/nhashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_38104 = 0;
H_38105 = 0;
I_38106 = 0;
F.line = 72;F.filename = "nhashes.nim";
H_38105 = 0;
F.line = 73;F.filename = "nhashes.nim";
I_38106 = 0;
F.line = 74;F.filename = "nhashes.nim";
while (1) {
if (!!(((NU8)(Str_38020[I_38106]) == (NU8)(0)))) goto LA1;
F.line = 75;F.filename = "nhashes.nim";
H_38105 = (NI64)((NU64)(H_38105) + (NU64)(((NU8)(Str_38020[I_38106]))));
F.line = 76;F.filename = "nhashes.nim";
H_38105 = (NI64)((NU64)(H_38105) + (NU64)((NI64)((NU64)(H_38105) << (NU64)(10))));
F.line = 77;F.filename = "nhashes.nim";
H_38105 = (NI64)(H_38105 ^ (NI64)((NU64)(H_38105) >> (NU64)(6)));
F.line = 78;F.filename = "nhashes.nim";
I_38106 = addInt(I_38106, 1);
} LA1: ;
F.line = 79;F.filename = "nhashes.nim";
H_38105 = (NI64)((NU64)(H_38105) + (NU64)((NI64)((NU64)(H_38105) << (NU64)(3))));
F.line = 80;F.filename = "nhashes.nim";
H_38105 = (NI64)(H_38105 ^ (NI64)((NU64)(H_38105) >> (NU64)(11)));
F.line = 81;F.filename = "nhashes.nim";
H_38105 = (NI64)((NU64)(H_38105) + (NU64)((NI64)((NU64)(H_38105) << (NU64)(15))));
F.line = 82;F.filename = "nhashes.nim";
Result_38104 = ((NI) (H_38105));
framePtr = framePtr->prev;
return Result_38104;
}
N_NIMCALL(NI, Gethashstr_38031)(NimStringDesc* S_38033) {
NI Result_38130;
NI H_38131;
NI I_38156;
NI HEX3Atmp_38163;
NI Res_38165;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "GetHashStr";
F.prev = framePtr;
F.filename = "rod/nhashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_38130 = 0;
H_38131 = 0;
F.line = 86;F.filename = "nhashes.nim";
H_38131 = 0;
I_38156 = 0;
HEX3Atmp_38163 = 0;
F.line = 87;F.filename = "nhashes.nim";
HEX3Atmp_38163 = S_38033->Sup.len;
Res_38165 = 0;
F.line = 1011;F.filename = "system.nim";
Res_38165 = 1;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_38165 <= HEX3Atmp_38163)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_38156 = Res_38165;
F.line = 88;F.filename = "nhashes.nim";
if ((NU)(I_38156) > (NU)(S_38033->Sup.len)) raiseIndexError();
H_38131 = (NI64)((NU64)(H_38131) + (NU64)(((NU8)(S_38033->data[I_38156]))));
F.line = 89;F.filename = "nhashes.nim";
H_38131 = (NI64)((NU64)(H_38131) + (NU64)((NI64)((NU64)(H_38131) << (NU64)(10))));
F.line = 90;F.filename = "nhashes.nim";
H_38131 = (NI64)(H_38131 ^ (NI64)((NU64)(H_38131) >> (NU64)(6)));
F.line = 1014;F.filename = "system.nim";
Res_38165 = addInt(Res_38165, 1);
} LA1: ;
F.line = 91;F.filename = "nhashes.nim";
H_38131 = (NI64)((NU64)(H_38131) + (NU64)((NI64)((NU64)(H_38131) << (NU64)(3))));
F.line = 92;F.filename = "nhashes.nim";
H_38131 = (NI64)(H_38131 ^ (NI64)((NU64)(H_38131) >> (NU64)(11)));
F.line = 93;F.filename = "nhashes.nim";
H_38131 = (NI64)((NU64)(H_38131) + (NU64)((NI64)((NU64)(H_38131) << (NU64)(15))));
F.line = 94;F.filename = "nhashes.nim";
Result_38130 = ((NI) (H_38131));
framePtr = framePtr->prev;
return Result_38130;
}
N_NIMCALL(NI, Getnormalizedhash_38037)(NimStringDesc* S_38039) {
NI Result_38171;
NI H_38172;
NIM_CHAR C_38173;
NI I_38183;
NI HEX3Atmp_38219;
NI Res_38221;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getNormalizedHash";
F.prev = framePtr;
F.filename = "rod/nhashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_38171 = 0;
H_38172 = 0;
C_38173 = 0;
F.line = 100;F.filename = "nhashes.nim";
H_38172 = 0;
I_38183 = 0;
HEX3Atmp_38219 = 0;
F.line = 101;F.filename = "nhashes.nim";
HEX3Atmp_38219 = subInt(addInt(S_38039->Sup.len, 0), 1);
Res_38221 = 0;
F.line = 1011;F.filename = "system.nim";
Res_38221 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_38221 <= HEX3Atmp_38219)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_38183 = Res_38221;
F.line = 102;F.filename = "nhashes.nim";
if ((NU)(I_38183) > (NU)(S_38039->Sup.len)) raiseIndexError();
C_38173 = S_38039->data[I_38183];
F.line = 103;F.filename = "nhashes.nim";
if (!((NU8)(C_38173) == (NU8)(95))) goto LA4;
F.line = 104;F.filename = "nhashes.nim";
goto LA2;
LA4: ;
F.line = 105;F.filename = "nhashes.nim";
if (!(((NU8)(C_38173)) >= ((NU8)(65)) && ((NU8)(C_38173)) <= ((NU8)(90)))) goto LA7;
F.line = 106;F.filename = "nhashes.nim";
C_38173 = ((NIM_CHAR) (((NI) (addInt(((NU8)(C_38173)), 32)))));
LA7: ;
F.line = 107;F.filename = "nhashes.nim";
H_38172 = (NI64)((NU64)(H_38172) + (NU64)(((NU8)(C_38173))));
F.line = 108;F.filename = "nhashes.nim";
H_38172 = (NI64)((NU64)(H_38172) + (NU64)((NI64)((NU64)(H_38172) << (NU64)(10))));
F.line = 109;F.filename = "nhashes.nim";
H_38172 = (NI64)(H_38172 ^ (NI64)((NU64)(H_38172) >> (NU64)(6)));
LA2: ;
F.line = 1014;F.filename = "system.nim";
Res_38221 = addInt(Res_38221, 1);
} LA1: ;
F.line = 110;F.filename = "nhashes.nim";
H_38172 = (NI64)((NU64)(H_38172) + (NU64)((NI64)((NU64)(H_38172) << (NU64)(3))));
F.line = 111;F.filename = "nhashes.nim";
H_38172 = (NI64)(H_38172 ^ (NI64)((NU64)(H_38172) >> (NU64)(11)));
F.line = 112;F.filename = "nhashes.nim";
H_38172 = (NI64)((NU64)(H_38172) + (NU64)((NI64)((NU64)(H_38172) << (NU64)(15))));
F.line = 113;F.filename = "nhashes.nim";
Result_38171 = ((NI) (H_38172));
framePtr = framePtr->prev;
return Result_38171;
}
N_NIMCALL(NI, Gethashstrci_38034)(NimStringDesc* S_38036) {
NI Result_38227;
NI H_38228;
NIM_CHAR C_38229;
NI I_38239;
NI HEX3Atmp_38273;
NI Res_38275;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "GetHashStrCI";
F.prev = framePtr;
F.filename = "rod/nhashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_38227 = 0;
H_38228 = 0;
C_38229 = 0;
F.line = 119;F.filename = "nhashes.nim";
H_38228 = 0;
I_38239 = 0;
HEX3Atmp_38273 = 0;
F.line = 120;F.filename = "nhashes.nim";
HEX3Atmp_38273 = subInt(addInt(S_38036->Sup.len, 0), 1);
Res_38275 = 0;
F.line = 1011;F.filename = "system.nim";
Res_38275 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_38275 <= HEX3Atmp_38273)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_38239 = Res_38275;
F.line = 121;F.filename = "nhashes.nim";
if ((NU)(I_38239) > (NU)(S_38036->Sup.len)) raiseIndexError();
C_38229 = S_38036->data[I_38239];
F.line = 122;F.filename = "nhashes.nim";
if (!(((NU8)(C_38229)) >= ((NU8)(65)) && ((NU8)(C_38229)) <= ((NU8)(90)))) goto LA3;
F.line = 123;F.filename = "nhashes.nim";
C_38229 = ((NIM_CHAR) (((NI) (addInt(((NU8)(C_38229)), 32)))));
LA3: ;
F.line = 124;F.filename = "nhashes.nim";
H_38228 = (NI64)((NU64)(H_38228) + (NU64)(((NU8)(C_38229))));
F.line = 125;F.filename = "nhashes.nim";
H_38228 = (NI64)((NU64)(H_38228) + (NU64)((NI64)((NU64)(H_38228) << (NU64)(10))));
F.line = 126;F.filename = "nhashes.nim";
H_38228 = (NI64)(H_38228 ^ (NI64)((NU64)(H_38228) >> (NU64)(6)));
F.line = 1014;F.filename = "system.nim";
Res_38275 = addInt(Res_38275, 1);
} LA1: ;
F.line = 127;F.filename = "nhashes.nim";
H_38228 = (NI64)((NU64)(H_38228) + (NU64)((NI64)((NU64)(H_38228) << (NU64)(3))));
F.line = 128;F.filename = "nhashes.nim";
H_38228 = (NI64)(H_38228 ^ (NI64)((NU64)(H_38228) >> (NU64)(11)));
F.line = 129;F.filename = "nhashes.nim";
H_38228 = (NI64)((NU64)(H_38228) + (NU64)((NI64)((NU64)(H_38228) << (NU64)(15))));
F.line = 130;F.filename = "nhashes.nim";
Result_38227 = ((NI) (H_38228));
framePtr = framePtr->prev;
return Result_38227;
}
N_NIMCALL(NI, Gethashci_38021)(NCSTRING Str_38023) {
NI Result_38281;
NI H_38282;
NIM_CHAR C_38283;
NI I_38284;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "GetHashCI";
F.prev = framePtr;
F.filename = "rod/nhashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_38281 = 0;
H_38282 = 0;
C_38283 = 0;
I_38284 = 0;
F.line = 137;F.filename = "nhashes.nim";
H_38282 = 0;
F.line = 138;F.filename = "nhashes.nim";
I_38284 = 0;
F.line = 139;F.filename = "nhashes.nim";
while (1) {
if (!!(((NU8)(Str_38023[I_38284]) == (NU8)(0)))) goto LA1;
F.line = 140;F.filename = "nhashes.nim";
C_38283 = Str_38023[I_38284];
F.line = 141;F.filename = "nhashes.nim";
if (!(((NU8)(C_38283)) >= ((NU8)(65)) && ((NU8)(C_38283)) <= ((NU8)(90)))) goto LA3;
F.line = 142;F.filename = "nhashes.nim";
C_38283 = ((NIM_CHAR) (((NI) (addInt(((NU8)(C_38283)), 32)))));
LA3: ;
F.line = 143;F.filename = "nhashes.nim";
H_38282 = (NI64)((NU64)(H_38282) + (NU64)(((NU8)(C_38283))));
F.line = 144;F.filename = "nhashes.nim";
H_38282 = (NI64)((NU64)(H_38282) + (NU64)((NI64)((NU64)(H_38282) << (NU64)(10))));
F.line = 145;F.filename = "nhashes.nim";
H_38282 = (NI64)(H_38282 ^ (NI64)((NU64)(H_38282) >> (NU64)(6)));
F.line = 146;F.filename = "nhashes.nim";
I_38284 = addInt(I_38284, 1);
} LA1: ;
F.line = 147;F.filename = "nhashes.nim";
H_38282 = (NI64)((NU64)(H_38282) + (NU64)((NI64)((NU64)(H_38282) << (NU64)(3))));
F.line = 148;F.filename = "nhashes.nim";
H_38282 = (NI64)(H_38282 ^ (NI64)((NU64)(H_38282) >> (NU64)(11)));
F.line = 149;F.filename = "nhashes.nim";
H_38282 = (NI64)((NU64)(H_38282) + (NU64)((NI64)((NU64)(H_38282) << (NU64)(15))));
F.line = 150;F.filename = "nhashes.nim";
Result_38281 = ((NI) (H_38282));
framePtr = framePtr->prev;
return Result_38281;
}
N_NOINLINE(void, nhashesInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "nhashes";
F.prev = framePtr;
F.filename = "rod/nhashes.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

