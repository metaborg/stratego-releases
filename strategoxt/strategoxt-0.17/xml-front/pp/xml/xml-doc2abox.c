#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_QName_2;
static Symbol sym_Prefix_1;
static Symbol sym_PI_2;
static Symbol sym_SystemExternalID_1;
static Symbol sym_PublicExternalID_2;
static Symbol sym_Prologue_3;
static Symbol sym_Epilogue_1;
static Symbol sym_XMLDecl_3;
static Symbol sym_StandaloneDecl_1;
static Symbol sym_VersionDecl_1;
static Symbol sym_EncodingDecl_1;
static Symbol sym_Standalone_1;
static Symbol sym_Encoding_1;
static Symbol sym_Version_1;
static Symbol sym_DocTypePrologue_2;
static Symbol sym_DocTypeDecl_2;
static Symbol sym_Text_1;
static Symbol sym_CDATASection_1;
static Symbol sym_EntityRef_1;
static Symbol sym_Attribute_2;
static Symbol sym_DoubleQuoted_1;
static Symbol sym_SingleQuoted_1;
static Symbol sym_Literal_1;
static Symbol sym_Document_3;
static Symbol sym_EmptyElement_2;
static Symbol sym_Element_4;
static Symbol sym_Comment_1;
static Symbol sym_S_1;
static Symbol sym_H_2;
static Symbol sym_V_2;
static Symbol sym_FBOX_2;
static Symbol sym_C_2;
static Symbol sym_SOpt_2;
static Symbol sym_VS_0;
static Symbol sym_HS_0;
static Symbol sym_KW_0;
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static void init_module_constructors (void)
{
sym_QName_2 = ATmakeSymbol("QName", 2, ATfalse);
ATprotectSymbol(sym_QName_2);
sym_Prefix_1 = ATmakeSymbol("Prefix", 1, ATfalse);
ATprotectSymbol(sym_Prefix_1);
sym_PI_2 = ATmakeSymbol("PI", 2, ATfalse);
ATprotectSymbol(sym_PI_2);
sym_SystemExternalID_1 = ATmakeSymbol("SystemExternalID", 1, ATfalse);
ATprotectSymbol(sym_SystemExternalID_1);
sym_PublicExternalID_2 = ATmakeSymbol("PublicExternalID", 2, ATfalse);
ATprotectSymbol(sym_PublicExternalID_2);
sym_Prologue_3 = ATmakeSymbol("Prologue", 3, ATfalse);
ATprotectSymbol(sym_Prologue_3);
sym_Epilogue_1 = ATmakeSymbol("Epilogue", 1, ATfalse);
ATprotectSymbol(sym_Epilogue_1);
sym_XMLDecl_3 = ATmakeSymbol("XMLDecl", 3, ATfalse);
ATprotectSymbol(sym_XMLDecl_3);
sym_StandaloneDecl_1 = ATmakeSymbol("StandaloneDecl", 1, ATfalse);
ATprotectSymbol(sym_StandaloneDecl_1);
sym_VersionDecl_1 = ATmakeSymbol("VersionDecl", 1, ATfalse);
ATprotectSymbol(sym_VersionDecl_1);
sym_EncodingDecl_1 = ATmakeSymbol("EncodingDecl", 1, ATfalse);
ATprotectSymbol(sym_EncodingDecl_1);
sym_Standalone_1 = ATmakeSymbol("Standalone", 1, ATfalse);
ATprotectSymbol(sym_Standalone_1);
sym_Encoding_1 = ATmakeSymbol("Encoding", 1, ATfalse);
ATprotectSymbol(sym_Encoding_1);
sym_Version_1 = ATmakeSymbol("Version", 1, ATfalse);
ATprotectSymbol(sym_Version_1);
sym_DocTypePrologue_2 = ATmakeSymbol("DocTypePrologue", 2, ATfalse);
ATprotectSymbol(sym_DocTypePrologue_2);
sym_DocTypeDecl_2 = ATmakeSymbol("DocTypeDecl", 2, ATfalse);
ATprotectSymbol(sym_DocTypeDecl_2);
sym_Text_1 = ATmakeSymbol("Text", 1, ATfalse);
ATprotectSymbol(sym_Text_1);
sym_CDATASection_1 = ATmakeSymbol("CDATASection", 1, ATfalse);
ATprotectSymbol(sym_CDATASection_1);
sym_EntityRef_1 = ATmakeSymbol("EntityRef", 1, ATfalse);
ATprotectSymbol(sym_EntityRef_1);
sym_Attribute_2 = ATmakeSymbol("Attribute", 2, ATfalse);
ATprotectSymbol(sym_Attribute_2);
sym_DoubleQuoted_1 = ATmakeSymbol("DoubleQuoted", 1, ATfalse);
ATprotectSymbol(sym_DoubleQuoted_1);
sym_SingleQuoted_1 = ATmakeSymbol("SingleQuoted", 1, ATfalse);
ATprotectSymbol(sym_SingleQuoted_1);
sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
ATprotectSymbol(sym_Literal_1);
sym_Document_3 = ATmakeSymbol("Document", 3, ATfalse);
ATprotectSymbol(sym_Document_3);
sym_EmptyElement_2 = ATmakeSymbol("EmptyElement", 2, ATfalse);
ATprotectSymbol(sym_EmptyElement_2);
sym_Element_4 = ATmakeSymbol("Element", 4, ATfalse);
ATprotectSymbol(sym_Element_4);
sym_Comment_1 = ATmakeSymbol("Comment", 1, ATfalse);
ATprotectSymbol(sym_Comment_1);
sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
ATprotectSymbol(sym_S_1);
sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
ATprotectSymbol(sym_H_2);
sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
ATprotectSymbol(sym_V_2);
sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
ATprotectSymbol(sym_FBOX_2);
sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
ATprotectSymbol(sym_C_2);
sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
ATprotectSymbol(sym_SOpt_2);
sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
ATprotectSymbol(sym_VS_0);
sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
ATprotectSymbol(sym_HS_0);
sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
ATprotectSymbol(sym_KW_0);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
}
static ATerm term129;
static ATerm term128;
static ATerm term127;
static ATerm term126;
static ATerm term125;
static ATerm term124;
static ATerm term123;
static ATerm term122;
static ATerm term121;
static ATerm term120;
static ATerm term119;
static ATerm term118;
static ATerm term117;
static ATerm term116;
static ATerm term115;
static ATerm term114;
static ATerm term113;
static ATerm term112;
static ATerm term111;
static ATerm term110;
static ATerm term109;
static ATerm term108;
static ATerm term107;
static ATerm term106;
static ATerm term105;
static ATerm term104;
static ATerm term103;
static ATerm term102;
static ATerm term101;
static ATerm term100;
static ATerm term99;
static ATerm term98;
static ATerm term97;
static ATerm term96;
static ATerm term95;
static ATerm term94;
static ATerm term93;
static ATerm term92;
static ATerm term91;
static ATerm term90;
static ATerm term89;
static ATerm term88;
static ATerm term87;
static ATerm term86;
static ATerm term85;
static ATerm term84;
static ATerm term83;
static ATerm term82;
static ATerm term81;
static ATerm term80;
static ATerm term79;
static ATerm term78;
static ATerm term77;
static ATerm term76;
static ATerm term75;
static ATerm term74;
static ATerm term73;
static ATerm term72;
static ATerm term71;
static ATerm term70;
static ATerm term69;
static ATerm term68;
static ATerm term67;
static ATerm term66;
static ATerm term65;
static ATerm term64;
static ATerm term63;
static ATerm term62;
static ATerm term61;
static ATerm term60;
static ATerm term59;
static ATerm term58;
static ATerm term57;
static ATerm term56;
static ATerm term55;
static ATerm term54;
static ATerm term53;
static ATerm term52;
static ATerm term51;
static ATerm term50;
static ATerm term49;
static ATerm term48;
static ATerm term47;
static ATerm term46;
static ATerm term45;
static ATerm term44;
static ATerm term43;
static ATerm term42;
static ATerm term41;
static ATerm term40;
static ATerm term39;
static ATerm term38;
static ATerm term37;
static ATerm term36;
static ATerm term35;
static ATerm term34;
static ATerm term33;
static ATerm term32;
static ATerm term31;
static ATerm term30;
static ATerm term29;
static ATerm term28;
static ATerm term27;
static ATerm term26;
static ATerm term25;
static ATerm term24;
static ATerm term23;
static ATerm term22;
static ATerm term21;
static ATerm term20;
static ATerm term19;
static ATerm term18;
static ATerm term17;
static ATerm term16;
static ATerm term15;
static ATerm term14;
static ATerm term13;
static ATerm term12;
static ATerm term11;
static ATerm term10;
static ATerm term9;
static ATerm term8;
static ATerm term7;
static ATerm term6;
static ATerm term5;
static ATerm term4;
static ATerm term3;
static ATerm term2;
static ATerm term1;
static ATerm term0;
static void init_module_constant_terms (void)
{
ATprotect(&(term0));
term0 = (ATerm) ATmakeAppl(sym_VS_0);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_SOpt_2, term1, term3);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_SOpt_2, term1, term7);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_KW_0);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("?>", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym_S_1, term13);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term15);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(sym_HS_0);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym_SOpt_2, term19, term3);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("<?xml", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(sym_S_1, term23);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term25);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(sym_S_1, term29);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term31);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("<!DOCTYPE", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(sym_S_1, term35);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term37);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("SYSTEM", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(sym_S_1, term41);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term43);
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("PUBLIC", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_S_1, term47);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term49);
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("<?", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(sym_S_1, term53);
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term55);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym_SOpt_2, term19, term7);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("]]>", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(sym_S_1, term61);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("<![CDATA[", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym_S_1, term65);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol(";", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(sym_S_1, term69);
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(sym_S_1, term73);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("=", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(sym_S_1, term77);
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term79);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(sym_S_1, term83);
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("\\'", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(sym_S_1, term87);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(sym_S_1, term91);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term93);
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("standalone", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(sym_QName_2, term97, term99);
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(sym_QName_2, term97, term103);
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("encoding", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(sym_QName_2, term97, term107);
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("/>", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(sym_S_1, term111);
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term113);
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(sym_S_1, term117);
ATprotect(&(term119));
term119 = term118;
ATprotect(&(term120));
term120 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term119);
ATprotect(&(term121));
term121 = term120;
ATprotect(&(term122));
term122 = (ATerm) ATmakeAppl(ATmakeSymbol("</", 0, ATtrue));
ATprotect(&(term123));
term123 = term122;
ATprotect(&(term124));
term124 = (ATerm) ATmakeAppl(sym_S_1, term123);
ATprotect(&(term125));
term125 = term124;
ATprotect(&(term126));
term126 = (ATerm) ATmakeAppl(sym_FBOX_2, term11, term125);
ATprotect(&(term127));
term127 = term126;
ATprotect(&(term128));
term128 = (ATerm) ATmakeInt(0);
ATprotect(&(term129));
term129 = term128;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm makeConc_0_0 (StrSL sl, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm length_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL u_50, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL x_49, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL f_32, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL t_28, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL n_25, ATerm t);
ATerm gt_0_0 (StrSL sl, ATerm t);
ATerm double_quote_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL h_17, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm open_tag_to_box_0_0 (StrSL sl, ATerm t);
ATerm element_to_box_0_0 (StrSL sl, ATerm t);
ATerm simple_element_to_box_0_0 (StrSL sl, ATerm t);
ATerm decl_to_attribute_0_0 (StrSL sl, ATerm t);
ATerm get_prolog_lines_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm xml_to_box_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_87 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(v_87);
t = io_wrap_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail7 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_87 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(u_87);
t = topdown_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_87 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(s_87);
t = try_1_0(sl_up(sl_up(sl)), lifted4_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_87 = { &(xml_to_box_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted5_cl = &(r_87);
t = repeat_1_0(sl_up(sl_up(sl_up(sl))), lifted5_cl, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm open_tag_to_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "open_tag_to_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm46 = t;
ATerm f_6 = NULL;
if(match_cons(t, sym__2))
{
f_6 = ATgetArgument(t, 0);
{
ATerm trm47 = ATgetArgument(t, 1);
if(!(((ATgetType(trm47) == AT_LIST) && ATisEmpty(trm47))))
goto label31 ;
}
}
else
goto label31 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term33), f_6), term121));
goto label30 ;
label31 :
t = trm46;
{
ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
if(match_cons(t, sym__2))
{
a_6 = ATgetArgument(t, 0);
b_6 = ATgetArgument(t, 1);
}
else
goto fail6 ;
c_6 = t;
e_6 = t;
t = b_6;
t = length_0_0(sl, t);
if((t == NULL))
goto fail6 ;
d_6 = t;
t = e_6;
t = (ATerm) ATmakeAppl(sym__2, d_6, term129);
t = gt_0_0(sl, t);
if((t == NULL))
goto fail6 ;
t = c_6;
{
ATerm trm48;
trm48 = CheckATermList(b_6);
if((trm48 == NULL))
goto fail6 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term33), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term21), (ATerm) ATinsert((ATermList)trm48, a_6))), term121));
goto label30 ;
}
}
label30 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm element_to_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "element_to_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm42 = t;
ATerm y_5 = NULL,z_5 = NULL;
if(match_cons(t, sym_EmptyElement_2))
{
y_5 = ATgetArgument(t, 0);
z_5 = ATgetArgument(t, 1);
}
else
goto label29 ;
{
ATerm trm43;
trm43 = CheckATermList(z_5);
if((trm43 == NULL))
goto label29 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term115), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term21), (ATerm) ATinsert((ATermList)trm43, y_5))), term121));
}
goto label28 ;
label29 :
t = trm42;
{
ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
if(match_cons(t, sym_Element_4))
{
s_5 = ATgetArgument(t, 0);
t_5 = ATgetArgument(t, 1);
r_5 = ATgetArgument(t, 2);
{
ATerm trm44 = ATgetArgument(t, 3);
}
}
else
goto fail5 ;
v_5 = t;
t = (ATerm) ATmakeAppl(sym__2, s_5, t_5);
t = open_tag_to_box_0_0(sl, t);
if((t == NULL))
goto fail5 ;
u_5 = t;
t = v_5;
x_5 = t;
t = (ATerm) ATmakeAppl(sym__2, r_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term33), s_5), term127));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail5 ;
w_5 = t;
t = x_5;
{
ATerm trm45;
trm45 = CheckATermList(w_5);
if((trm45 == NULL))
goto fail5 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert((ATermList)trm45, u_5));
goto label28 ;
}
}
label28 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm simple_element_to_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "simple_element_to_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_5 = NULL;
if(match_cons(t, sym_EmptyElement_2))
{
q_5 = ATgetArgument(t, 0);
{
ATerm trm41 = ATgetArgument(t, 1);
if(!(((ATgetType(trm41) == AT_LIST) && ATisEmpty(trm41))))
goto fail4 ;
}
}
else
goto fail4 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term115), q_5), term121));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm decl_to_attribute_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "decl_to_attribute_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm36 = t;
ATerm p_5 = NULL;
if(match_cons(t, sym_StandaloneDecl_1))
{
ATerm trm37 = ATgetArgument(t, 0);
if(match_cons(trm37, sym_Standalone_1))
{
p_5 = ATgetArgument(trm37, 0);
}
else
goto label26 ;
}
else
goto label26 ;
t = (ATerm) ATmakeAppl(sym_Attribute_2, term101, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, p_5))));
goto label25 ;
label26 :
t = trm36;
{
ATerm trm38 = t;
ATerm o_5 = NULL;
if(match_cons(t, sym_VersionDecl_1))
{
ATerm trm39 = ATgetArgument(t, 0);
if(match_cons(trm39, sym_Version_1))
{
o_5 = ATgetArgument(trm39, 0);
}
else
goto label27 ;
}
else
goto label27 ;
t = (ATerm) ATmakeAppl(sym_Attribute_2, term105, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, o_5))));
goto label25 ;
label27 :
t = trm38;
{
ATerm n_5 = NULL;
if(match_cons(t, sym_EncodingDecl_1))
{
ATerm trm40 = ATgetArgument(t, 0);
if(match_cons(trm40, sym_Encoding_1))
{
n_5 = ATgetArgument(trm40, 0);
}
else
goto fail3 ;
}
else
goto fail3 ;
t = (ATerm) ATmakeAppl(sym_Attribute_2, term109, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, n_5))));
goto label25 ;
}
}
label25 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_prolog_lines_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_prolog_lines_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm28 = t;
ATerm m_5 = NULL;
if(match_cons(t, sym_Some_1))
{
ATerm trm29 = ATgetArgument(t, 0);
m_5 = trm29;
if(match_cons(trm29, sym_XMLDecl_3))
{
ATerm trm30 = ATgetArgument(trm29, 0);
ATerm trm31 = ATgetArgument(trm29, 1);
ATerm trm32 = ATgetArgument(trm29, 2);
}
else
goto label23 ;
}
else
goto label23 ;
t = (ATerm) ATinsert(ATempty, m_5);
goto label22 ;
label23 :
t = trm28;
{
ATerm trm33 = t;
if(!(match_cons(t, sym_None_0)))
goto label24 ;
t = (ATerm) ATempty;
goto label22 ;
label24 :
t = trm33;
{
ATerm k_5 = NULL,l_5 = NULL;
if(match_cons(t, sym_Some_1))
{
ATerm trm34 = ATgetArgument(t, 0);
if(match_cons(trm34, sym_DocTypePrologue_2))
{
k_5 = ATgetArgument(trm34, 0);
l_5 = ATgetArgument(trm34, 1);
}
else
goto fail2 ;
}
else
goto fail2 ;
{
ATerm trm35;
trm35 = CheckATermList(l_5);
if((trm35 == NULL))
goto fail2 ;
t = (ATerm) ATinsert((ATermList)trm35, k_5);
goto label22 ;
}
}
}
label22 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_to_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_to_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
if(match_cons(t, sym_Document_3))
{
h_5 = ATgetArgument(t, 0);
i_5 = ATgetArgument(t, 1);
j_5 = ATgetArgument(t, 2);
}
else
goto label1 ;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term5), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_5), i_5), h_5));
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,e_5 = NULL,g_5 = NULL;
if(match_cons(t, sym_Prologue_3))
{
y_4 = ATgetArgument(t, 0);
z_4 = ATgetArgument(t, 1);
a_5 = ATgetArgument(t, 2);
}
else
goto label2 ;
c_5 = t;
f_5 = t;
t = y_4;
t = get_prolog_lines_0_0(sl, t);
if((t == NULL))
goto label2 ;
d_5 = t;
t = f_5;
g_5 = t;
t = a_5;
t = get_prolog_lines_0_0(sl, t);
if((t == NULL))
goto label2 ;
e_5 = t;
t = g_5;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_5), z_4), d_5);
t = concat_0_0(sl, t);
if((t == NULL))
goto label2 ;
b_5 = t;
t = c_5;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term9), b_5);
goto label0 ;
label2 :
t = trm1;
{
ATerm trm2 = t;
ATerm x_4 = NULL;
if(match_cons(t, sym_Epilogue_1))
{
x_4 = ATgetArgument(t, 0);
}
else
goto label3 ;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term5), x_4);
goto label0 ;
label3 :
t = trm2;
{
ATerm trm3 = t;
ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL;
if(match_cons(t, sym_XMLDecl_3))
{
q_4 = ATgetArgument(t, 0);
o_4 = ATgetArgument(t, 1);
p_4 = ATgetArgument(t, 2);
}
else
goto label4 ;
t_4 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, p_4), o_4);
{
struct str_closure n_87 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(n_87);
t = filter_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto label4 ;
r_4 = t;
{
ATerm trm4;
trm4 = CheckATermList(r_4);
if((trm4 == NULL))
goto label4 ;
t = (ATerm) ATinsert((ATermList)trm4, q_4);
{
struct str_closure p_87 = { &(decl_to_attribute_0_0) , sl };
StrCL lifted1_cl = &(p_87);
t = map_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto label4 ;
s_4 = t;
t = t_4;
w_4 = t;
t = (ATerm) ATmakeAppl(sym__2, s_4, (ATerm) ATinsert(ATempty, term17));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto label4 ;
v_4 = t;
t = w_4;
{
ATerm trm5;
trm5 = CheckATermList(v_4);
if((trm5 == NULL))
goto label4 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term21), (ATerm) ATinsert((ATermList)trm5, term27));
}
}
}
}
goto label0 ;
label4 :
t = trm3;
{
ATerm trm6 = t;
ATerm m_4 = NULL,n_4 = NULL;
if(match_cons(t, sym_DocTypePrologue_2))
{
m_4 = ATgetArgument(t, 0);
n_4 = ATgetArgument(t, 1);
}
else
goto label5 ;
{
ATerm trm7;
trm7 = CheckATermList(n_4);
if((trm7 == NULL))
goto label5 ;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term5), (ATerm) ATinsert((ATermList)trm7, m_4));
}
goto label0 ;
label5 :
t = trm6;
{
ATerm trm8 = t;
ATerm k_4 = NULL,l_4 = NULL;
if(match_cons(t, sym_DocTypeDecl_2))
{
k_4 = ATgetArgument(t, 0);
l_4 = ATgetArgument(t, 1);
}
else
goto label6 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term21), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term33), l_4), k_4), term39));
goto label0 ;
label6 :
t = trm8;
{
ATerm trm9 = t;
ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
if(match_cons(t, sym_SystemExternalID_1))
{
h_4 = ATgetArgument(t, 0);
}
else
goto label7 ;
j_4 = t;
t = h_4;
t = double_quote_0_0(sl, t);
if((t == NULL))
goto label7 ;
i_4 = t;
t = j_4;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term21), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, i_4)), term45));
goto label0 ;
label7 :
t = trm9;
{
ATerm trm10 = t;
ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL,e_4 = NULL,g_4 = NULL;
if(match_cons(t, sym_PublicExternalID_2))
{
b_4 = ATgetArgument(t, 0);
c_4 = ATgetArgument(t, 1);
}
else
goto label8 ;
f_4 = t;
t = b_4;
t = double_quote_0_0(sl, t);
if((t == NULL))
goto label8 ;
d_4 = t;
t = f_4;
g_4 = t;
t = c_4;
t = double_quote_0_0(sl, t);
if((t == NULL))
goto label8 ;
e_4 = t;
t = g_4;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term21), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, e_4)), (ATerm) ATmakeAppl(sym_S_1, d_4)), term51));
goto label0 ;
label8 :
t = trm10;
{
ATerm trm11 = t;
ATerm z_3 = NULL,a_4 = NULL;
if(match_cons(t, sym_PI_2))
{
z_3 = ATgetArgument(t, 0);
a_4 = ATgetArgument(t, 1);
}
else
goto label9 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term21), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term17), (ATerm) ATmakeAppl(sym_S_1, a_4)), (ATerm) ATmakeAppl(sym_S_1, z_3)), term57));
goto label0 ;
label9 :
t = trm11;
{
ATerm trm12 = t;
ATerm y_3 = NULL;
if(match_cons(t, sym_Comment_1))
{
y_3 = ATgetArgument(t, 0);
}
else
goto label10 ;
t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, y_3)));
goto label0 ;
label10 :
t = trm12;
{
ATerm trm13 = t;
ATerm x_3 = NULL;
if(match_cons(t, sym_Text_1))
{
x_3 = ATgetArgument(t, 0);
}
else
goto label11 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), x_3);
goto label0 ;
label11 :
t = trm13;
{
ATerm trm14 = t;
ATerm w_3 = NULL;
if(match_cons(t, sym_CDATASection_1))
{
w_3 = ATgetArgument(t, 0);
}
else
goto label12 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term63), (ATerm) ATmakeAppl(sym_S_1, w_3)), term67));
goto label0 ;
label12 :
t = trm14;
{
ATerm trm15 = t;
ATerm v_3 = NULL;
if(match_cons(t, sym_EntityRef_1))
{
v_3 = ATgetArgument(t, 0);
}
else
goto label13 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term71), (ATerm) ATmakeAppl(sym_S_1, v_3)), term75));
goto label0 ;
label13 :
t = trm15;
{
ATerm trm16 = t;
ATerm u_3 = NULL;
if(match_cons(t, sym_Literal_1))
{
u_3 = ATgetArgument(t, 0);
}
else
goto label14 ;
t = (ATerm) ATmakeAppl(sym_S_1, u_3);
goto label0 ;
label14 :
t = trm16;
{
ATerm trm17 = t;
ATerm trm18 = t;
t = simple_element_to_box_0_0(sl, t);
if((t == NULL))
goto label17 ;
goto label16 ;
label17 :
t = trm18;
t = element_to_box_0_0(sl, t);
if((t == NULL))
goto label15 ;
else
goto label16 ;
label16 :
;
goto label0 ;
label15 :
t = trm17;
{
ATerm trm19 = t;
ATerm s_3 = NULL,t_3 = NULL;
if(match_cons(t, sym_Attribute_2))
{
s_3 = ATgetArgument(t, 0);
t_3 = ATgetArgument(t, 1);
}
else
goto label18 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_3), term81), s_3));
goto label0 ;
label18 :
t = trm19;
{
ATerm trm20 = t;
ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
if(match_cons(t, sym_DoubleQuoted_1))
{
p_3 = ATgetArgument(t, 0);
}
else
goto label19 ;
r_3 = t;
t = (ATerm) ATmakeAppl(sym__2, p_3, (ATerm) ATinsert(ATempty, term85));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto label19 ;
q_3 = t;
t = r_3;
{
ATerm trm21;
trm21 = CheckATermList(q_3);
if((trm21 == NULL))
goto label19 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert((ATermList)trm21, term85));
}
goto label0 ;
label19 :
t = trm20;
{
ATerm trm22 = t;
ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL;
if(match_cons(t, sym_SingleQuoted_1))
{
m_3 = ATgetArgument(t, 0);
}
else
goto label20 ;
o_3 = t;
t = (ATerm) ATmakeAppl(sym__2, m_3, (ATerm) ATinsert(ATempty, term89));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto label20 ;
n_3 = t;
t = o_3;
{
ATerm trm23;
trm23 = CheckATermList(n_3);
if((trm23 == NULL))
goto label20 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert((ATermList)trm23, term89));
}
goto label0 ;
label20 :
t = trm22;
{
ATerm trm24 = t;
ATerm l_3 = NULL;
if(match_cons(t, sym_QName_2))
{
ATerm trm25 = ATgetArgument(t, 0);
if(!(match_cons(trm25, sym_None_0)))
goto label21 ;
l_3 = ATgetArgument(t, 1);
}
else
goto label21 ;
t = (ATerm) ATmakeAppl(sym_FBOX_2, term11, (ATerm) ATmakeAppl(sym_S_1, l_3));
goto label0 ;
label21 :
t = trm24;
{
ATerm j_3 = NULL,k_3 = NULL;
if(match_cons(t, sym_QName_2))
{
ATerm trm26 = ATgetArgument(t, 0);
if(match_cons(trm26, sym_Some_1))
{
ATerm trm27 = ATgetArgument(trm26, 0);
if(match_cons(trm27, sym_Prefix_1))
{
j_3 = ATgetArgument(trm27, 0);
}
else
goto fail0 ;
}
else
goto fail0 ;
k_3 = ATgetArgument(t, 1);
}
else
goto fail0 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term59), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, k_3)), term95), (ATerm) ATmakeAppl(sym_S_1, j_3)));
goto label0 ;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_4 = NULL;
if(match_cons(t, sym_Some_1))
{
u_4 = ATgetArgument(t, 0);
}
else
goto fail1 ;
t = u_4;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static void register_strategies (void)
{
int initial_size = 117;
int max_load = 75;
struct str_closure * closures;
int closures_index = 0;
if((strategy_table == NULL))
strategy_table = ATtableCreate(initial_size, max_load);
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 22));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(makeConc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("makeConc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(length_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("length_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(gt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("gt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(open_tag_to_box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("open_tag_to_box_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(element_to_box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("element_to_box_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(simple_element_to_box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("simple_element_to_box_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(decl_to_attribute_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("decl_to_attribute_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_prolog_lines_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_prolog_lines_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_to_box_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_to_box_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
}
int main (int argc, char * argv [])
{
ATerm out_term;
ATermList in_term;
int i;
ATinit(argc, argv, &(out_term));
init_constructors();
in_term = ATempty;
for ( i = (argc - 1) ; (i >= 0) ; i-- )
{
in_term = ATinsert(in_term, (ATerm) ATmakeAppl0(ATmakeSymbol(argv[i], 0, ATtrue)));
}
SRTS_stratego_initialize();
memset(__tracing_table, 0, (sizeof(unsigned short) * TRACING_TABLE_SIZE));
__tracing_table_counter = 0;
register_strategies();
out_term = main_0_0(NULL, (ATerm) in_term);
if((out_term != NULL))
{
ATfprintf(stdout, "%t\n", out_term);
exit(0);
}
else
{
ATfprintf(stderr, "%s: rewriting failed, trace:\n", argv[0]);
for ( i = 0 ; (__tracing_table[i] && (i < TRACING_TABLE_SIZE)) ; i++ )
ATfprintf(stderr, "\t%s\n", __tracing_table[i]);
exit(1);
}
}
