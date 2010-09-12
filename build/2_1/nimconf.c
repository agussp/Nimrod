/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

#include <pthread.h>
typedef struct TY74267 TY74267;
typedef struct TY74263 TY74263;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY53011 TY53011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY73015 TY73015;
typedef struct TNimObject TNimObject;
typedef struct TY72013 TY72013;
typedef struct TY74434 TY74434;
typedef struct TY53005 TY53005;
typedef struct TY77137 TY77137;
typedef struct TY10602 TY10602;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10988 TY10988;
typedef struct TY46532 TY46532;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY74263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY53011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY74263* Next;
};
struct TNimObject {
TNimType* m_type;
};
struct TY73015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY72013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY74267 {
  TY73015 Sup;
NimStringDesc* Filename;
TY74434* Indentstack;
NI Dedent;
NI Indentahead;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NimStringDesc* TY45273[3];
struct TY72013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
typedef NI TY8614[16];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY74434 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY77137 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Ppgettok_77010)(TY74267* L_77013, TY74263* Tok_77014);
N_NIMCALL(void, Rawgettok_74304)(TY74267* L_74307, TY74263* Tok_74309);
N_NIMCALL(NIM_BOOL, Parseatom_77059)(TY74267* L_77062, TY74263* Tok_77063);
N_NIMCALL(void, Lexmessage_74326)(TY74267* L_74328, NU8 Msg_74329, NimStringDesc* Arg_74330);
N_NIMCALL(NIM_BOOL, Isdefined_62012)(TY53011* Symbol_62014);
N_NIMCALL(NIM_BOOL, Parseandexpr_77091)(TY74267* L_77094, TY74263* Tok_77095);
N_NIMCALL(NIM_BOOL, Parseexpr_77054)(TY74267* L_77057, TY74263* Tok_77058);
N_NIMCALL(NIM_BOOL, Evalppif_77121)(TY74267* L_77124, TY74263* Tok_77125);
N_NIMCALL(void*, newSeq)(TNimType* Typ_12804, NI Len_12805);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819);
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660);
N_NOINLINE(void, Addzct_11025)(TY10618* S_11028, TY10602* C_11029);
N_NIMCALL(void, Doend_77155)(TY74267* L_77158, TY74263* Tok_77159);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_17603, NI Elemsize_17604, NI Newlen_17605);
N_NIMCALL(void, Doelse_77185)(TY74267* L_77188, TY74263* Tok_77189);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, Doelif_77201)(TY74267* L_77204, TY74263* Tok_77205);
N_NIMCALL(void, Jumptodirective_77179)(TY74267* L_77182, TY74263* Tok_77183, NU8 Dest_77184);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17247, NimStringDesc* B_17248);
N_NIMCALL(NU8, Whichkeyword_70465)(TY53011* Id_70467);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NIMCALL(void, Parsedirective_77289)(TY74267* L_77292, TY74263* Tok_77293);
N_NIMCALL(void, Messageout_46550)(NimStringDesc* S_46552);
N_NIMCALL(NimStringDesc*, Toktostr_74323)(TY74263* Tok_74325);
N_NIMCALL(void, Putenv_38639)(NimStringDesc* Key_38641, NimStringDesc* Val_38642);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17392, NimStringDesc* Src_17393);
N_NIMCALL(NimStringDesc*, Getenv_38625)(NimStringDesc* Key_38627);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17287);
N_NIMCALL(void, Conftok_77334)(TY74267* L_77337, TY74263* Tok_77338);
N_NIMCALL(void, Checksymbol_77351)(TY74267* L_77353, TY74263* Tok_77354);
N_NIMCALL(void, Parseassignment_77376)(TY74267* L_77379, TY74263* Tok_77380);
N_NIMCALL(TY53011*, Getident_53016)(NimStringDesc* Identifier_53018);
N_NIMCALL(TY46532, Getlineinfo_74313)(TY74267* L_74315);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17308);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_17382, NI Addlen_17383);
N_NIMCALL(void, Processswitch_71012)(NimStringDesc* Switch_71014, NimStringDesc* Arg_71015, NU8 Pass_71016, TY46532 Info_71017);
N_NIMCALL(void, Readconfigfile_77457)(NimStringDesc* Filename_77459);
N_NIMCALL(void*, newObj)(TNimType* Typ_12307, NI Size_12308);
N_NIMCALL(TY72013*, Llstreamopen_72032)(NimStringDesc* Filename_72034, NU8 Mode_72035);
N_NIMCALL(void, Openlexer_74298)(TY74267* Lex_74301, NimStringDesc* Filename_74302, TY72013* Inputstream_74303);
N_NIMCALL(void, Closelexer_74316)(TY74267* Lex_74319);
N_NIMCALL(void, Rawmessage_46553)(NU8 Msg_46555, NimStringDesc* Arg_46556);
N_NIMCALL(NimStringDesc*, Getconfigpath_77519)(NimStringDesc* Filename_77521);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_37403, NimStringDesc* Tail_37404);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_36003);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_37487, NI Parts_37487Len0);
N_NIMCALL(NimStringDesc*, Getprefixdir_45106)(void);
N_NIMCALL(void, Loadspecialconfig_77007)(NimStringDesc* Configfilename_77009);
N_NIMCALL(void, Loadconfig_77004)(NimStringDesc* Project_77006);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_38020, NimStringDesc* Ext_38021);
STRING_LITERAL(TMP77090, "\')\'", 3);
STRING_LITERAL(TMP77136, "\':\'", 3);
STRING_LITERAL(TMP77174, "@if", 3);
STRING_LITERAL(TMP77287, "@", 1);
STRING_LITERAL(TMP77288, "@end", 4);
STRING_LITERAL(TMP77452, "-", 1);
STRING_LITERAL(TMP77453, "--", 2);
STRING_LITERAL(TMP77454, "", 0);
STRING_LITERAL(TMP77455, "\']\'", 3);
STRING_LITERAL(TMP77456, "&", 1);
STRING_LITERAL(TMP77537, "config", 6);
STRING_LITERAL(TMP77538, "/etc/", 5);
STRING_LITERAL(TMP77569, "/usr", 4);
STRING_LITERAL(TMP77570, "/usr/lib/nimrod", 15);
STRING_LITERAL(TMP77571, "/usr/local", 10);
STRING_LITERAL(TMP77572, "/usr/local/lib/nimrod", 21);
STRING_LITERAL(TMP77573, "lib", 3);
STRING_LITERAL(TMP77574, "nimrod.cfg", 10);
STRING_LITERAL(TMP77575, "cfg", 3);
TY77137* Condstack_77138;
extern TNimType* NTI77137; /* seq[bool] */
extern TY10990 Gch_11010;
extern TNimType* NTI74267; /* TLexer */
extern TNimType* NTI74261; /* PToken */
extern TNimType* NTI74263; /* TToken */
extern NI Gverbosity_45083;
extern NU32 Gglobaloptions_45077;
extern NimStringDesc* Libpath_45109;
N_NIMCALL(void, Ppgettok_77010)(TY74267* L_77013, TY74263* Tok_77014) {
NIM_BOOL LOC2;
NIM_BOOL LOC3;
NIM_BOOL LOC4;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ppGetTok";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 24;F.filename = "nimconf.nim";
Rawgettok_74304(L_77013, Tok_77014);
F.line = 25;F.filename = "nimconf.nim";
while (1) {
LOC4 = ((*Tok_77014).Toktype == ((NU8) 102));
if (LOC4) goto LA5;
LOC4 = ((*Tok_77014).Toktype == ((NU8) 103));
LA5: ;
LOC3 = LOC4;
if (LOC3) goto LA6;
LOC3 = ((*Tok_77014).Toktype == ((NU8) 104));
LA6: ;
LOC2 = LOC3;
if (LOC2) goto LA7;
LOC2 = ((*Tok_77014).Toktype == ((NU8) 100));
LA7: ;
if (!LOC2) goto LA1;
F.line = 27;F.filename = "nimconf.nim";
Rawgettok_74304(L_77013, Tok_77014);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(NIM_BOOL, Parseatom_77059)(TY74267* L_77062, TY74263* Tok_77063) {
NIM_BOOL Result_77064;
NIM_BOOL LOC9;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parseAtom";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_77064 = 0;
F.line = 31;F.filename = "nimconf.nim";
if (!((*Tok_77063).Toktype == ((NU8) 80))) goto LA2;
F.line = 32;F.filename = "nimconf.nim";
Ppgettok_77010(L_77062, Tok_77063);
F.line = 33;F.filename = "nimconf.nim";
Result_77064 = Parseexpr_77054(L_77062, Tok_77063);
F.line = 34;F.filename = "nimconf.nim";
if (!((*Tok_77063).Toktype == ((NU8) 81))) goto LA5;
F.line = 34;F.filename = "nimconf.nim";
Ppgettok_77010(L_77062, Tok_77063);
goto LA4;
LA5: ;
F.line = 35;F.filename = "nimconf.nim";
Lexmessage_74326(&(*L_77062), ((NU8) 21), ((NimStringDesc*) &TMP77090));
LA4: ;
goto LA1;
LA2: ;
if (!((*(*Tok_77063).Ident).Sup.Id == 40)) goto LA7;
F.line = 37;F.filename = "nimconf.nim";
Ppgettok_77010(L_77062, Tok_77063);
F.line = 38;F.filename = "nimconf.nim";
LOC9 = Parseatom_77059(L_77062, Tok_77063);
Result_77064 = !(LOC9);
goto LA1;
LA7: ;
F.line = 40;F.filename = "nimconf.nim";
Result_77064 = Isdefined_62012((*Tok_77063).Ident);
F.line = 42;F.filename = "nimconf.nim";
Ppgettok_77010(L_77062, Tok_77063);
LA1: ;
framePtr = framePtr->prev;
return Result_77064;
}
N_NIMCALL(NIM_BOOL, Parseandexpr_77091)(TY74267* L_77094, TY74263* Tok_77095) {
NIM_BOOL Result_77096;
NIM_BOOL B_77097;
NIM_BOOL LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parseAndExpr";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_77096 = 0;
B_77097 = 0;
F.line = 46;F.filename = "nimconf.nim";
Result_77096 = Parseatom_77059(L_77094, Tok_77095);
F.line = 47;F.filename = "nimconf.nim";
while (1) {
if (!((*(*Tok_77095).Ident).Sup.Id == 2)) goto LA1;
F.line = 48;F.filename = "nimconf.nim";
Ppgettok_77010(L_77094, Tok_77095);
F.line = 49;F.filename = "nimconf.nim";
B_77097 = Parseatom_77059(L_77094, Tok_77095);
F.line = 50;F.filename = "nimconf.nim";
LOC2 = Result_77096;
if (!(LOC2)) goto LA3;
LOC2 = B_77097;
LA3: ;
Result_77096 = LOC2;
} LA1: ;
framePtr = framePtr->prev;
return Result_77096;
}
N_NIMCALL(NIM_BOOL, Parseexpr_77054)(TY74267* L_77057, TY74263* Tok_77058) {
NIM_BOOL Result_77111;
NIM_BOOL B_77112;
NIM_BOOL LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parseExpr";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_77111 = 0;
B_77112 = 0;
F.line = 54;F.filename = "nimconf.nim";
Result_77111 = Parseandexpr_77091(L_77057, Tok_77058);
F.line = 55;F.filename = "nimconf.nim";
while (1) {
if (!((*(*Tok_77058).Ident).Sup.Id == 44)) goto LA1;
F.line = 56;F.filename = "nimconf.nim";
Ppgettok_77010(L_77057, Tok_77058);
F.line = 57;F.filename = "nimconf.nim";
B_77112 = Parseandexpr_77091(L_77057, Tok_77058);
F.line = 58;F.filename = "nimconf.nim";
LOC2 = Result_77111;
if (LOC2) goto LA3;
LOC2 = B_77112;
LA3: ;
Result_77111 = LOC2;
} LA1: ;
framePtr = framePtr->prev;
return Result_77111;
}
N_NIMCALL(NIM_BOOL, Evalppif_77121)(TY74267* L_77124, TY74263* Tok_77125) {
NIM_BOOL Result_77126;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "EvalppIf";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_77126 = 0;
F.line = 61;F.filename = "nimconf.nim";
Ppgettok_77010(L_77124, Tok_77125);
F.line = 62;F.filename = "nimconf.nim";
Result_77126 = Parseexpr_77054(L_77124, Tok_77125);
F.line = 63;F.filename = "nimconf.nim";
if (!((*Tok_77125).Toktype == ((NU8) 94))) goto LA2;
F.line = 63;F.filename = "nimconf.nim";
Ppgettok_77010(L_77124, Tok_77125);
goto LA1;
LA2: ;
F.line = 64;F.filename = "nimconf.nim";
Lexmessage_74326(&(*L_77124), ((NU8) 21), ((NimStringDesc*) &TMP77136));
LA1: ;
framePtr = framePtr->prev;
return Result_77126;
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
N_NIMCALL(void, Doend_77155)(TY74267* L_77158, TY74263* Tok_77159) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "doEnd";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 70;F.filename = "nimconf.nim";
if (!((Condstack_77138->Sup.len-1) < 0)) goto LA2;
F.line = 70;F.filename = "nimconf.nim";
Lexmessage_74326(&(*L_77158), ((NU8) 21), ((NimStringDesc*) &TMP77174));
LA2: ;
F.line = 71;F.filename = "nimconf.nim";
Ppgettok_77010(L_77158, Tok_77159);
F.line = 72;F.filename = "nimconf.nim";
Condstack_77138 = (TY77137*) setLengthSeq(&(Condstack_77138)->Sup, sizeof(NIM_BOOL), (Condstack_77138->Sup.len-1));
framePtr = framePtr->prev;
}
N_NIMCALL(void, Doelse_77185)(TY74267* L_77188, TY74263* Tok_77189) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "doElse";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 80;F.filename = "nimconf.nim";
if (!((Condstack_77138->Sup.len-1) < 0)) goto LA2;
F.line = 80;F.filename = "nimconf.nim";
Lexmessage_74326(&(*L_77188), ((NU8) 21), ((NimStringDesc*) &TMP77174));
LA2: ;
F.line = 81;F.filename = "nimconf.nim";
Ppgettok_77010(L_77188, Tok_77189);
F.line = 82;F.filename = "nimconf.nim";
if (!((*Tok_77189).Toktype == ((NU8) 94))) goto LA5;
F.line = 82;F.filename = "nimconf.nim";
Ppgettok_77010(L_77188, Tok_77189);
LA5: ;
F.line = 83;F.filename = "nimconf.nim";
if ((NU)((Condstack_77138->Sup.len-1)) >= (NU)(Condstack_77138->Sup.len)) raiseIndexError();
if (!Condstack_77138->data[(Condstack_77138->Sup.len-1)]) goto LA8;
F.line = 83;F.filename = "nimconf.nim";
Jumptodirective_77179(L_77188, Tok_77189, ((NU8) 0));
LA8: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Doelif_77201)(TY74267* L_77204, TY74263* Tok_77205) {
NIM_BOOL Res_77206;
NIM_BOOL LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "doElif";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Res_77206 = 0;
F.line = 87;F.filename = "nimconf.nim";
if (!((Condstack_77138->Sup.len-1) < 0)) goto LA2;
F.line = 87;F.filename = "nimconf.nim";
Lexmessage_74326(&(*L_77204), ((NU8) 21), ((NimStringDesc*) &TMP77174));
LA2: ;
F.line = 88;F.filename = "nimconf.nim";
Res_77206 = Evalppif_77121(L_77204, Tok_77205);
F.line = 89;F.filename = "nimconf.nim";
if ((NU)((Condstack_77138->Sup.len-1)) >= (NU)(Condstack_77138->Sup.len)) raiseIndexError();
LOC5 = Condstack_77138->data[(Condstack_77138->Sup.len-1)];
if (LOC5) goto LA6;
LOC5 = !(Res_77206);
LA6: ;
if (!LOC5) goto LA7;
F.line = 89;F.filename = "nimconf.nim";
Jumptodirective_77179(L_77204, Tok_77205, ((NU8) 1));
goto LA4;
LA7: ;
F.line = 90;F.filename = "nimconf.nim";
if ((NU)((Condstack_77138->Sup.len-1)) >= (NU)(Condstack_77138->Sup.len)) raiseIndexError();
Condstack_77138->data[(Condstack_77138->Sup.len-1)] = NIM_TRUE;
LA4: ;
framePtr = framePtr->prev;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17247, NimStringDesc* B_17248) {
NIM_BOOL Result_17249;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
int LOC11;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "eqStrings";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_17249 = 0;
F.line = 32;F.filename = "sysstr.nim";
if (!(A_17247 == B_17248)) goto LA2;
F.line = 32;F.filename = "sysstr.nim";
F.line = 32;F.filename = "sysstr.nim";
Result_17249 = NIM_TRUE;
goto BeforeRet;
LA2: ;
F.line = 33;F.filename = "sysstr.nim";
LOC5 = (A_17247 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_17248 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
F.line = 33;F.filename = "sysstr.nim";
F.line = 33;F.filename = "sysstr.nim";
Result_17249 = NIM_FALSE;
goto BeforeRet;
LA7: ;
F.line = 34;F.filename = "sysstr.nim";
F.line = 34;F.filename = "sysstr.nim";
LOC9 = ((*A_17247).Sup.len == (*B_17248).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_17247).data)), ((NCSTRING) ((*B_17248).data)), ((int) ((NI32)((*A_17247).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_17249 = LOC9;
goto BeforeRet;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_17249;
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
N_NIMCALL(void, Jumptodirective_77179)(TY74267* L_77182, TY74263* Tok_77183, NU8 Dest_77184) {
NI Nestedifs_77215;
NIM_BOOL LOC3;
NU8 LOC7;
NIM_BOOL LOC9;
NIM_BOOL LOC14;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "jumpToDirective";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Nestedifs_77215 = 0;
F.line = 94;F.filename = "nimconf.nim";
Nestedifs_77215 = 0;
F.line = 95;F.filename = "nimconf.nim";
while (1) {
F.line = 96;F.filename = "nimconf.nim";
LOC3 = !(((*Tok_77183).Ident == NIM_NIL));
if (!(LOC3)) goto LA4;
LOC3 = eqStrings((*(*Tok_77183).Ident).S, ((NimStringDesc*) &TMP77287));
LA4: ;
if (!LOC3) goto LA5;
F.line = 97;F.filename = "nimconf.nim";
Ppgettok_77010(L_77182, Tok_77183);
F.line = 98;F.filename = "nimconf.nim";
LOC7 = Whichkeyword_70465((*Tok_77183).Ident);
switch (LOC7) {
case ((NU8) 26):
F.line = 100;F.filename = "nimconf.nim";
Nestedifs_77215 = addInt(Nestedifs_77215, 1);
break;
case ((NU8) 18):
F.line = 102;F.filename = "nimconf.nim";
LOC9 = (Dest_77184 == ((NU8) 1));
if (!(LOC9)) goto LA10;
LOC9 = (Nestedifs_77215 == 0);
LA10: ;
if (!LOC9) goto LA11;
F.line = 103;F.filename = "nimconf.nim";
Doelse_77185(L_77182, Tok_77183);
F.line = 104;F.filename = "nimconf.nim";
goto LA1;
LA11: ;
break;
case ((NU8) 17):
F.line = 106;F.filename = "nimconf.nim";
LOC14 = (Dest_77184 == ((NU8) 1));
if (!(LOC14)) goto LA15;
LOC14 = (Nestedifs_77215 == 0);
LA15: ;
if (!LOC14) goto LA16;
F.line = 107;F.filename = "nimconf.nim";
Doelif_77201(L_77182, Tok_77183);
F.line = 108;F.filename = "nimconf.nim";
goto LA1;
LA16: ;
break;
case ((NU8) 19):
F.line = 110;F.filename = "nimconf.nim";
if (!(Nestedifs_77215 == 0)) goto LA19;
F.line = 111;F.filename = "nimconf.nim";
Doend_77155(L_77182, Tok_77183);
F.line = 112;F.filename = "nimconf.nim";
goto LA1;
LA19: ;
F.line = 113;F.filename = "nimconf.nim";
if (!(0 < Nestedifs_77215)) goto LA22;
F.line = 113;F.filename = "nimconf.nim";
Nestedifs_77215 = subInt(Nestedifs_77215, 1);
LA22: ;
break;
default:
break;
}
F.line = 116;F.filename = "nimconf.nim";
Ppgettok_77010(L_77182, Tok_77183);
goto LA2;
LA5: ;
if (!((*Tok_77183).Toktype == ((NU8) 1))) goto LA24;
F.line = 118;F.filename = "nimconf.nim";
Lexmessage_74326(&(*L_77182), ((NU8) 21), ((NimStringDesc*) &TMP77288));
goto LA2;
LA24: ;
F.line = 120;F.filename = "nimconf.nim";
Ppgettok_77010(L_77182, Tok_77183);
LA2: ;
} LA1: ;
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
memcpy(((NCSTRING) (&(*Dest_17392).data[((*Dest_17392).Sup.len)-0])), ((NCSTRING) ((*Src_17393).data)), ((int) ((NI32)((NI32)((*Src_17393).Sup.len + 1) * 1))));
F.line = 151;F.filename = "sysstr.nim";
(*Dest_17392).Sup.len += (*Src_17393).Sup.len;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Parsedirective_77289)(TY74267* L_77292, TY74263* Tok_77293) {
NIM_BOOL Res_77294;
NimStringDesc* Key_77295;
NU8 LOC1;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NimStringDesc* LOC9;
NimStringDesc* LOC10;
NimStringDesc* LOC11;
NimStringDesc* LOC12;
NimStringDesc* LOC13;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parseDirective";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Res_77294 = 0;
Key_77295 = 0;
F.line = 126;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
F.line = 127;F.filename = "nimconf.nim";
LOC1 = Whichkeyword_70465((*Tok_77293).Ident);
switch (LOC1) {
case ((NU8) 26):
F.line = 129;F.filename = "nimconf.nim";
Condstack_77138 = (TY77137*) setLengthSeq(&(Condstack_77138)->Sup, sizeof(NIM_BOOL), addInt(Condstack_77138->Sup.len, 1));
F.line = 130;F.filename = "nimconf.nim";
Res_77294 = Evalppif_77121(L_77292, Tok_77293);
F.line = 131;F.filename = "nimconf.nim";
if ((NU)((Condstack_77138->Sup.len-1)) >= (NU)(Condstack_77138->Sup.len)) raiseIndexError();
Condstack_77138->data[(Condstack_77138->Sup.len-1)] = Res_77294;
F.line = 132;F.filename = "nimconf.nim";
if (!!(Res_77294)) goto LA3;
F.line = 133;F.filename = "nimconf.nim";
Jumptodirective_77179(L_77292, Tok_77293, ((NU8) 1));
LA3: ;
break;
case ((NU8) 17):
F.line = 135;F.filename = "nimconf.nim";
Doelif_77201(L_77292, Tok_77293);
break;
case ((NU8) 18):
F.line = 137;F.filename = "nimconf.nim";
Doelse_77185(L_77292, Tok_77293);
break;
case ((NU8) 19):
F.line = 139;F.filename = "nimconf.nim";
Doend_77155(L_77292, Tok_77293);
break;
case ((NU8) 215):
F.line = 141;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
F.line = 142;F.filename = "nimconf.nim";
LOC5 = 0;
LOC5 = Toktostr_74323(Tok_77293);
Messageout_46550(LOC5);
F.line = 143;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
break;
case ((NU8) 216):
F.line = 145;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
F.line = 146;F.filename = "nimconf.nim";
Key_77295 = Toktostr_74323(Tok_77293);
F.line = 147;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
F.line = 148;F.filename = "nimconf.nim";
LOC6 = 0;
LOC6 = Toktostr_74323(Tok_77293);
Putenv_38639(Key_77295, LOC6);
F.line = 149;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
break;
case ((NU8) 217):
F.line = 151;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
F.line = 152;F.filename = "nimconf.nim";
Key_77295 = Toktostr_74323(Tok_77293);
F.line = 153;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
F.line = 154;F.filename = "nimconf.nim";
LOC7 = 0;
LOC8 = 0;
LOC8 = Toktostr_74323(Tok_77293);
LOC9 = 0;
LOC9 = Getenv_38625(Key_77295);
LOC7 = rawNewString(LOC8->Sup.len + LOC9->Sup.len + 0);
appendString(LOC7, LOC8);
appendString(LOC7, LOC9);
Putenv_38639(Key_77295, LOC7);
F.line = 155;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
break;
case ((NU8) 218):
F.line = 157;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
F.line = 158;F.filename = "nimconf.nim";
Key_77295 = Toktostr_74323(Tok_77293);
F.line = 159;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
F.line = 160;F.filename = "nimconf.nim";
LOC10 = 0;
LOC11 = 0;
LOC11 = Getenv_38625(Key_77295);
LOC12 = 0;
LOC12 = Toktostr_74323(Tok_77293);
LOC10 = rawNewString(LOC11->Sup.len + LOC12->Sup.len + 0);
appendString(LOC10, LOC11);
appendString(LOC10, LOC12);
Putenv_38639(Key_77295, LOC10);
F.line = 161;F.filename = "nimconf.nim";
Ppgettok_77010(L_77292, Tok_77293);
break;
default:
F.line = 162;F.filename = "nimconf.nim";
LOC13 = 0;
LOC13 = Toktostr_74323(Tok_77293);
Lexmessage_74326(&(*L_77292), ((NU8) 28), LOC13);
break;
}
framePtr = framePtr->prev;
}
N_NIMCALL(void, Conftok_77334)(TY74267* L_77337, TY74263* Tok_77338) {
NIM_BOOL LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "confTok";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 165;F.filename = "nimconf.nim";
Ppgettok_77010(L_77337, Tok_77338);
F.line = 166;F.filename = "nimconf.nim";
while (1) {
LOC2 = !(((*Tok_77338).Ident == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC2 = eqStrings((*(*Tok_77338).Ident).S, ((NimStringDesc*) &TMP77287));
LA3: ;
if (!LOC2) goto LA1;
F.line = 167;F.filename = "nimconf.nim";
Parsedirective_77289(L_77337, Tok_77338);
} LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Checksymbol_77351)(TY74267* L_77353, TY74263* Tok_77354) {
NimStringDesc* LOC4;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "checkSymbol";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 170;F.filename = "nimconf.nim";
if (!!(((*Tok_77354).Toktype >= ((NU8) 2) && (*Tok_77354).Toktype <= ((NU8) 65) || (*Tok_77354).Toktype >= ((NU8) 74) && (*Tok_77354).Toktype <= ((NU8) 76)))) goto LA2;
F.line = 171;F.filename = "nimconf.nim";
LOC4 = 0;
LOC4 = Toktostr_74323(Tok_77354);
Lexmessage_74326(L_77353, ((NU8) 19), LOC4);
LA2: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Parseassignment_77376)(TY74267* L_77379, TY74263* Tok_77380) {
NimStringDesc* S_77381;
NimStringDesc* Val_77382;
TY46532 Info_77383;
NIM_BOOL LOC2;
TY53011* LOC3;
TY53011* LOC5;
NimStringDesc* LOC9;
NimStringDesc* LOC13;
NIM_BOOL LOC18;
NimStringDesc* LOC25;
NIM_BOOL LOC27;
TY53011* LOC29;
NimStringDesc* LOC30;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "parseAssignment";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
S_77381 = 0;
Val_77382 = 0;
memset((void*)&Info_77383, 0, sizeof(Info_77383));
F.line = 177;F.filename = "nimconf.nim";
LOC3 = 0;
LOC3 = Getident_53016(((NimStringDesc*) &TMP77452));
LOC2 = ((*(*Tok_77380).Ident).Sup.Id == (*LOC3).Sup.Id);
if (LOC2) goto LA4;
LOC5 = 0;
LOC5 = Getident_53016(((NimStringDesc*) &TMP77453));
LOC2 = ((*(*Tok_77380).Ident).Sup.Id == (*LOC5).Sup.Id);
LA4: ;
if (!LOC2) goto LA6;
F.line = 178;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
LA6: ;
F.line = 179;F.filename = "nimconf.nim";
Info_77383 = Getlineinfo_74313(&(*L_77379));
F.line = 180;F.filename = "nimconf.nim";
Checksymbol_77351(&(*L_77379), Tok_77380);
F.line = 181;F.filename = "nimconf.nim";
S_77381 = Toktostr_74323(Tok_77380);
F.line = 182;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
F.line = 183;F.filename = "nimconf.nim";
Val_77382 = copyString(((NimStringDesc*) &TMP77454));
F.line = 184;F.filename = "nimconf.nim";
while (1) {
if (!((*Tok_77380).Toktype == ((NU8) 96))) goto LA8;
F.line = 185;F.filename = "nimconf.nim";
S_77381 = addChar(S_77381, 46);
F.line = 186;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
F.line = 187;F.filename = "nimconf.nim";
Checksymbol_77351(&(*L_77379), Tok_77380);
F.line = 188;F.filename = "nimconf.nim";
LOC9 = 0;
LOC9 = Toktostr_74323(Tok_77380);
S_77381 = resizeString(S_77381, LOC9->Sup.len + 0);
appendString(S_77381, LOC9);
F.line = 189;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
} LA8: ;
F.line = 190;F.filename = "nimconf.nim";
if (!((*Tok_77380).Toktype == ((NU8) 82))) goto LA11;
F.line = 193;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
F.line = 194;F.filename = "nimconf.nim";
Checksymbol_77351(&(*L_77379), Tok_77380);
F.line = 195;F.filename = "nimconf.nim";
LOC13 = 0;
LOC13 = Toktostr_74323(Tok_77380);
Val_77382 = resizeString(Val_77382, LOC13->Sup.len + 0);
appendString(Val_77382, LOC13);
F.line = 196;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
F.line = 197;F.filename = "nimconf.nim";
if (!((*Tok_77380).Toktype == ((NU8) 83))) goto LA15;
F.line = 197;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
goto LA14;
LA15: ;
F.line = 198;F.filename = "nimconf.nim";
Lexmessage_74326(&(*L_77379), ((NU8) 21), ((NimStringDesc*) &TMP77455));
LA14: ;
F.line = 199;F.filename = "nimconf.nim";
Val_77382 = addChar(Val_77382, 93);
LA11: ;
F.line = 200;F.filename = "nimconf.nim";
LOC18 = ((*Tok_77380).Toktype == ((NU8) 94));
if (LOC18) goto LA19;
LOC18 = ((*Tok_77380).Toktype == ((NU8) 95));
LA19: ;
if (!LOC18) goto LA20;
F.line = 201;F.filename = "nimconf.nim";
if (!(0 < Val_77382->Sup.len)) goto LA23;
F.line = 202;F.filename = "nimconf.nim";
Val_77382 = addChar(Val_77382, 58);
LA23: ;
F.line = 203;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
F.line = 204;F.filename = "nimconf.nim";
Checksymbol_77351(&(*L_77379), Tok_77380);
F.line = 205;F.filename = "nimconf.nim";
LOC25 = 0;
LOC25 = Toktostr_74323(Tok_77380);
Val_77382 = resizeString(Val_77382, LOC25->Sup.len + 0);
appendString(Val_77382, LOC25);
F.line = 206;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
F.line = 207;F.filename = "nimconf.nim";
while (1) {
LOC27 = !(((*Tok_77380).Ident == NIM_NIL));
if (!(LOC27)) goto LA28;
LOC29 = 0;
LOC29 = Getident_53016(((NimStringDesc*) &TMP77456));
LOC27 = ((*(*Tok_77380).Ident).Sup.Id == (*LOC29).Sup.Id);
LA28: ;
if (!LOC27) goto LA26;
F.line = 208;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
F.line = 209;F.filename = "nimconf.nim";
Checksymbol_77351(&(*L_77379), Tok_77380);
F.line = 210;F.filename = "nimconf.nim";
LOC30 = 0;
LOC30 = Toktostr_74323(Tok_77380);
Val_77382 = resizeString(Val_77382, LOC30->Sup.len + 0);
appendString(Val_77382, LOC30);
F.line = 211;F.filename = "nimconf.nim";
Conftok_77334(L_77379, Tok_77380);
} LA26: ;
LA20: ;
F.line = 212;F.filename = "nimconf.nim";
Processswitch_71012(S_77381, Val_77382, ((NU8) 2), Info_77383);
framePtr = framePtr->prev;
}
N_NIMCALL(void, Readconfigfile_77457)(NimStringDesc* Filename_77459) {
TY74267 L_77460;
TY74263* Tok_77461;
TY72013* Stream_77462;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readConfigFile";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
memset((void*)&L_77460, 0, sizeof(L_77460));
L_77460.Sup.Sup.m_type = NTI74267;
Tok_77461 = 0;
Stream_77462 = 0;
F.line = 219;F.filename = "nimconf.nim";
Tok_77461 = (TY74263*) newObj(NTI74261, sizeof(TY74263));
(*Tok_77461).m_type = NTI74263;
F.line = 220;F.filename = "nimconf.nim";
Stream_77462 = Llstreamopen_72032(Filename_77459, ((NU8) 0));
F.line = 221;F.filename = "nimconf.nim";
if (!!((Stream_77462 == NIM_NIL))) goto LA2;
F.line = 222;F.filename = "nimconf.nim";
Openlexer_74298(&L_77460, Filename_77459, Stream_77462);
F.line = 223;F.filename = "nimconf.nim";
(*Tok_77461).Toktype = ((NU8) 1);
F.line = 224;F.filename = "nimconf.nim";
Conftok_77334(&L_77460, Tok_77461);
F.line = 225;F.filename = "nimconf.nim";
while (1) {
if (!!(((*Tok_77461).Toktype == ((NU8) 1)))) goto LA4;
F.line = 225;F.filename = "nimconf.nim";
Parseassignment_77376(&L_77460, Tok_77461);
} LA4: ;
F.line = 226;F.filename = "nimconf.nim";
if (!(0 < Condstack_77138->Sup.len)) goto LA6;
F.line = 226;F.filename = "nimconf.nim";
Lexmessage_74326(&L_77460, ((NU8) 21), ((NimStringDesc*) &TMP77288));
LA6: ;
F.line = 227;F.filename = "nimconf.nim";
Closelexer_74316(&L_77460);
F.line = 228;F.filename = "nimconf.nim";
if (!(1 <= Gverbosity_45083)) goto LA9;
F.line = 228;F.filename = "nimconf.nim";
Rawmessage_46553(((NU8) 233), Filename_77459);
LA9: ;
LA2: ;
framePtr = framePtr->prev;
}
N_NIMCALL(NimStringDesc*, Getconfigpath_77519)(NimStringDesc* Filename_77521) {
NimStringDesc* Result_77522;
NimStringDesc* LOC1;
NIM_BOOL LOC3;
TY45273 LOC6;
NIM_BOOL LOC8;
NimStringDesc* LOC11;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getConfigPath";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_77522 = 0;
F.line = 232;F.filename = "nimconf.nim";
LOC1 = 0;
LOC1 = nosgetConfigDir();
Result_77522 = nosJoinPath(LOC1, Filename_77521);
F.line = 233;F.filename = "nimconf.nim";
LOC3 = nosexistsFile(Result_77522);
if (!!(LOC3)) goto LA4;
F.line = 236;F.filename = "nimconf.nim";
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = Getprefixdir_45106();
LOC6[1] = copyString(((NimStringDesc*) &TMP77537));
LOC6[2] = copyString(Filename_77521);
Result_77522 = nosJoinPathOpenArray(LOC6, 3);
F.line = 237;F.filename = "nimconf.nim";
LOC8 = nosexistsFile(Result_77522);
if (!!(LOC8)) goto LA9;
F.line = 238;F.filename = "nimconf.nim";
LOC11 = 0;
LOC11 = rawNewString(Filename_77521->Sup.len + 5);
appendString(LOC11, ((NimStringDesc*) &TMP77538));
appendString(LOC11, Filename_77521);
Result_77522 = LOC11;
LA9: ;
LA4: ;
framePtr = framePtr->prev;
return Result_77522;
}
N_NIMCALL(void, Loadspecialconfig_77007)(NimStringDesc* Configfilename_77009) {
NimStringDesc* LOC4;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LoadSpecialConfig";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 241;F.filename = "nimconf.nim";
if (!!(((Gglobaloptions_45077 &(1<<((((NU8) 16))&31)))!=0))) goto LA2;
F.line = 242;F.filename = "nimconf.nim";
LOC4 = 0;
LOC4 = Getconfigpath_77519(Configfilename_77009);
Readconfigfile_77457(LOC4);
LA2: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Loadconfig_77004)(NimStringDesc* Project_77006) {
NimStringDesc* Conffile_77556;
NimStringDesc* Prefix_77557;
NIM_BOOL LOC10;
NIM_BOOL LOC15;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LoadConfig";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Conffile_77556 = 0;
Prefix_77557 = 0;
F.line = 247;F.filename = "nimconf.nim";
if (!((Libpath_45109) && (Libpath_45109)->Sup.len == 0)) goto LA2;
F.line = 249;F.filename = "nimconf.nim";
Prefix_77557 = Getprefixdir_45106();
F.line = 250;F.filename = "nimconf.nim";
if (!eqStrings(Prefix_77557, ((NimStringDesc*) &TMP77569))) goto LA5;
F.line = 250;F.filename = "nimconf.nim";
asgnRefNoCycle((void**) &Libpath_45109, copyString(((NimStringDesc*) &TMP77570)));
goto LA4;
LA5: ;
if (!eqStrings(Prefix_77557, ((NimStringDesc*) &TMP77571))) goto LA7;
F.line = 251;F.filename = "nimconf.nim";
asgnRefNoCycle((void**) &Libpath_45109, copyString(((NimStringDesc*) &TMP77572)));
goto LA4;
LA7: ;
F.line = 252;F.filename = "nimconf.nim";
asgnRefNoCycle((void**) &Libpath_45109, nosJoinPath(Prefix_77557, ((NimStringDesc*) &TMP77573)));
LA4: ;
LA2: ;
F.line = 253;F.filename = "nimconf.nim";
Loadspecialconfig_77007(((NimStringDesc*) &TMP77574));
F.line = 254;F.filename = "nimconf.nim";
LOC10 = !(((Gglobaloptions_45077 &(1<<((((NU8) 17))&31)))!=0));
if (!(LOC10)) goto LA11;
LOC10 = !(((Project_77006) && (Project_77006)->Sup.len == 0));
LA11: ;
if (!LOC10) goto LA12;
F.line = 255;F.filename = "nimconf.nim";
Conffile_77556 = nosChangeFileExt(Project_77006, ((NimStringDesc*) &TMP77575));
F.line = 256;F.filename = "nimconf.nim";
LOC15 = nosexistsFile(Conffile_77556);
if (!LOC15) goto LA16;
F.line = 256;F.filename = "nimconf.nim";
Readconfigfile_77457(Conffile_77556);
LA16: ;
LA12: ;
framePtr = framePtr->prev;
}
N_NOINLINE(void, nimconfInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "nimconf";
F.prev = framePtr;
F.filename = "rod/nimconf.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 68;F.filename = "nimconf.nim";
asgnRefNoCycle((void**) &Condstack_77138, (TY77137*) newSeq(NTI77137, 0));
framePtr = framePtr->prev;
}

