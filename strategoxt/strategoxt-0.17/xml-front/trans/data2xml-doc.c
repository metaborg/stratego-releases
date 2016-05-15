#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_QName_2;
static Symbol sym_Prefix_1;
static Symbol sym_Prologue_3;
static Symbol sym_Epilogue_1;
static Symbol sym_XMLDecl_3;
static Symbol sym_VersionDecl_1;
static Symbol sym_Version_1;
static Symbol sym_DoubleQuoted_1;
static Symbol sym_Literal_1;
static Symbol sym_Document_3;
static Symbol sym_EmptyElement_2;
static Symbol sym_Element_4;
static Symbol sym_Attribute_2;
static Symbol sym_Text_1;
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
sym_Prologue_3 = ATmakeSymbol("Prologue", 3, ATfalse);
ATprotectSymbol(sym_Prologue_3);
sym_Epilogue_1 = ATmakeSymbol("Epilogue", 1, ATfalse);
ATprotectSymbol(sym_Epilogue_1);
sym_XMLDecl_3 = ATmakeSymbol("XMLDecl", 3, ATfalse);
ATprotectSymbol(sym_XMLDecl_3);
sym_VersionDecl_1 = ATmakeSymbol("VersionDecl", 1, ATfalse);
ATprotectSymbol(sym_VersionDecl_1);
sym_Version_1 = ATmakeSymbol("Version", 1, ATfalse);
ATprotectSymbol(sym_Version_1);
sym_DoubleQuoted_1 = ATmakeSymbol("DoubleQuoted", 1, ATfalse);
ATprotectSymbol(sym_DoubleQuoted_1);
sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
ATprotectSymbol(sym_Literal_1);
sym_Document_3 = ATmakeSymbol("Document", 3, ATfalse);
ATprotectSymbol(sym_Document_3);
sym_EmptyElement_2 = ATmakeSymbol("EmptyElement", 2, ATfalse);
ATprotectSymbol(sym_EmptyElement_2);
sym_Element_4 = ATmakeSymbol("Element", 4, ATfalse);
ATprotectSymbol(sym_Element_4);
sym_Attribute_2 = ATmakeSymbol("Attribute", 2, ATfalse);
ATprotectSymbol(sym_Attribute_2);
sym_Text_1 = ATmakeSymbol("Text", 1, ATfalse);
ATprotectSymbol(sym_Text_1);
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("--explicit-mode", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("--explicit", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym__2, term1, term3);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("--explicit       Use explicit XML elements for strings, lists, integers, and tuples (default)", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("--very-explicit", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym__2, term1, term9);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("--very-explicit  Use explicit XML elements for applications, strings, lists, integers, and tuples", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("--implicit", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym__2, term1, term15);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("--implicit       Don't use any explicit XML elements. This results in the most attractive XML, but it lacks structure.", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeInt(59);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeInt(112);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeInt(109);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeInt(97);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeInt(38);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeInt(116);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeInt(108);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeInt(103);
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeInt(115);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeInt(111);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeInt(117);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeInt(113);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("1.0", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_Version_1, term47);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(sym_VersionDecl_1, term49);
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym_XMLDecl_3, term51, term45, term45);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(sym_Some_1, term53);
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(sym_Prologue_3, term55, (ATerm)ATempty, term45);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym_Epilogue_1, (ATerm) ATempty);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("error: resulting top-level is not an element", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeInt(1);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("xmlns", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym_Prefix_1, term65);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym_Some_1, term67);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("at", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(sym_QName_2, term69, term71);
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("http://aterm.org", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(sym_Literal_1, term75);
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(sym_Prefix_1, term71);
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(sym_Some_1, term79);
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("list", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(sym_QName_2, term81, term83);
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(sym_QName_2, term81, term87);
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(sym_QName_2, term81, term91);
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(sym_QName_2, term81, term95);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("value", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(sym_QName_2, term81, term99);
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("appl", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(sym_QName_2, term81, term103);
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("fun", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(sym_QName_2, term81, term107);
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("anno", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(sym_QName_2, term81, term111);
ATprotect(&(term113));
term113 = term112;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm flatten_list_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL g_52, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL r_33, ATerm t);
ATerm bottomup_1_0 (StrSL sl, StrCL a_27, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm say_1_0 (StrSL sl, StrCL n_24, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm is_int_0_0 (StrSL sl, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL j_21, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_2_0 (StrSL sl, StrCL u_18, StrCL v_18, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL r_16, StrCL s_16, StrCL t_16, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm add_to_nonempty_elem_0_1 (StrSL sl, ATerm r_8, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
ATerm data2xml_doc_anno_wrap_2_0 (StrSL sl, StrCL j_8, StrCL k_8, ATerm t);
ATerm VeryExplicitExplode_Appl_0_0 (StrSL sl, ATerm t);
ATerm VeryExplicitExplode_String_0_0 (StrSL sl, ATerm t);
ATerm VeryExplicitExplode_Int_0_0 (StrSL sl, ATerm t);
ATerm ExplicitExplode_String_0_0 (StrSL sl, ATerm t);
ATerm ExplicitExplode_Int_0_0 (StrSL sl, ATerm t);
ATerm ExplicitExplode_Tuple_0_0 (StrSL sl, ATerm t);
ATerm ExplicitExplode_List_0_0 (StrSL sl, ATerm t);
ATerm Explode_Int_0_0 (StrSL sl, ATerm t);
ATerm Explode_String_0_0 (StrSL sl, ATerm t);
ATerm Explode_NotEmptyAppl_0_0 (StrSL sl, ATerm t);
ATerm add_aterm_namespace_0_0 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
ATerm data2xml_finish_0_0 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm very_explicit_data2xml_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
ATerm explicit_data2xml_0_0 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm implicit_data2xml_0_0 (StrSL sl, ATerm t);
ATerm escape_quot_0_0 (StrSL sl, ATerm t);
ATerm escape_apos_0_0 (StrSL sl, ATerm t);
ATerm escape_gt_0_0 (StrSL sl, ATerm t);
ATerm escape_lt_0_0 (StrSL sl, ATerm t);
ATerm escape_amp_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm e_3 (StrSL sl, ATerm t);
ATerm xml_escape_chars_0_0 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm explicit_mode_option_0_0 (StrSL sl, ATerm t);
ATerm use_very_explicit_mode_0_0 (StrSL sl, ATerm t);
ATerm use_explicit_mode_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_88 = { &(explicit_mode_option_0_0) , sl };
StrCL lifted22_cl = &(r_88);
struct str_closure t_88 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(t_88);
t = io_wrap_2_0(sl, lifted22_cl, lifted23_cl, t);
if((t == NULL))
goto fail45 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm58 = t;
ATerm d_87 = NULL;
d_87 = t;
t = use_explicit_mode_0_0(sl_up(sl), t);
if((t == NULL))
goto label41 ;
t = d_87;
t = explicit_data2xml_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
else
goto label40 ;
label41 :
t = trm58;
{
ATerm trm59 = t;
ATerm e_87 = NULL;
e_87 = t;
t = use_very_explicit_mode_0_0(sl_up(sl), t);
if((t == NULL))
goto label42 ;
t = e_87;
t = very_explicit_data2xml_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
else
goto label40 ;
label42 :
t = trm59;
t = implicit_data2xml_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
else
goto label40 ;
}
label40 :
;
t = data2xml_finish_0_0(sl_up(sl), t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_to_nonempty_elem_0_1 (StrSL sl, ATerm r_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_to_nonempty_elem_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
if(match_cons(t, sym_Element_4))
{
u_8 = ATgetArgument(t, 0);
s_8 = ATgetArgument(t, 1);
t_8 = ATgetArgument(t, 2);
if(!((u_8 == ATgetArgument(t, 3))))
goto fail44 ;
}
else
goto fail44 ;
w_8 = t;
t = (ATerm) ATmakeAppl(sym__2, r_8, t_8);
t = conc_0_0(sl, t);
if((t == NULL))
goto fail44 ;
v_8 = t;
t = w_8;
t = (ATerm) ATmakeAppl(sym_Element_4, u_8, s_8, v_8, u_8);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm data2xml_doc_anno_wrap_2_0 (StrSL sl, StrCL j_8, StrCL k_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "data2xml_doc_anno_wrap_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, j_8);
{
ATerm e_8 = NULL,f_8 = NULL;
ATerm trm52;
trm52 = (ATerm) ATgetAnnotations(t);
if((trm52 == NULL))
trm52 = (ATerm) ATempty;
e_8 = trm52;
t = cl_fun(k_8)(cl_sl(k_8), t);
if((t == NULL))
goto fail42 ;
{
ATerm trm53 = t;
ATerm h_8 = NULL;
h_8 = t;
t = (ATerm) SRTS_setAnnotations(e_8, (ATerm) ATempty);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm54 = ATgetFirst((ATermList) t);
ATerm trm55 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label36 ;
t = h_8;
{
ATerm i_8 = NULL,q_86 = NULL,r_86 = NULL;
i_8 = t;
t = (ATerm) SRTS_setAnnotations(e_8, (ATerm) ATempty);
{
struct str_closure n_88 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(n_88);
t = map_1_0(sl, lifted21_cl, t);
if((t == NULL))
goto fail42 ;
f_8 = t;
t = i_8;
r_86 = t;
t = f_8;
q_86 = t;
t = r_86;
{
ATerm trm57 = t;
t = add_to_nonempty_elem_0_1(sl, q_86, t);
if((t == NULL))
goto label39 ;
goto label35 ;
label39 :
t = trm57;
{
ATerm s_86 = NULL,v_86 = NULL,t_86 = NULL,u_86 = NULL;
v_86 = t;
t = q_86;
s_86 = t;
t = v_86;
if(match_cons(t, sym_EmptyElement_2))
{
u_86 = ATgetArgument(t, 0);
t_86 = ATgetArgument(t, 1);
}
else
goto fail42 ;
t = (ATerm) ATmakeAppl(sym_Element_4, u_86, t_86, s_86, u_86);
goto label35 ;
}
}
}
}
label36 :
t = trm53;
goto label35 ;
label35 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_8 = NULL,p_8 = NULL;
p_8 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail43 ;
{
ATerm trm56 = t;
ATerm n_86 = NULL;
n_86 = t;
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto label38 ;
t = n_86;
t = flatten_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail43 ;
else
goto label37 ;
label38 :
t = trm56;
{
ATerm o_86 = NULL,p_86 = NULL;
p_86 = t;
o_86 = t;
t = (ATerm) ATinsert(ATempty, o_86);
goto label37 ;
}
label37 :
;
o_8 = t;
t = p_8;
t = (ATerm) ATmakeAppl(sym_Element_4, term113, (ATerm)ATempty, o_8, term113);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm VeryExplicitExplode_Appl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "VeryExplicitExplode_Appl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,c_8 = NULL,b_8 = NULL,d_8 = NULL;
ATerm trm50,trm51;
trm50 = SSL_get_constructor(t);
trm51 = SSL_get_arguments(t);
y_7 = trm50;
z_7 = trm51;
c_8 = t;
t = y_7;
a_8 = t;
t = c_8;
d_8 = t;
t = z_7;
t = flatten_list_0_0(sl, t);
if((t == NULL))
goto fail41 ;
b_8 = t;
t = d_8;
t = (ATerm) ATmakeAppl(sym_Element_4, term105, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Attribute_2, term109, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, a_8))))), b_8, term105);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm VeryExplicitExplode_String_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "VeryExplicitExplode_String_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
v_7 = t;
x_7 = t;
t = Explode_String_0_0(sl, t);
if((t == NULL))
goto fail40 ;
w_7 = t;
t = x_7;
t = (ATerm) ATmakeAppl(sym_Element_4, term97, (ATerm)ATempty, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Element_4, term101, (ATerm)ATempty, (ATerm)ATinsert(ATempty, w_7), term101)), term97);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm VeryExplicitExplode_Int_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "VeryExplicitExplode_Int_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
s_7 = t;
u_7 = t;
t = Explode_Int_0_0(sl, t);
if((t == NULL))
goto fail39 ;
t_7 = t;
t = u_7;
t = (ATerm) ATmakeAppl(sym_Element_4, term93, (ATerm)ATempty, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Element_4, term101, (ATerm)ATempty, (ATerm)ATinsert(ATempty, t_7), term101)), term93);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm ExplicitExplode_String_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ExplicitExplode_String_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_7 = NULL,r_7 = NULL;
r_7 = t;
t = Explode_String_0_0(sl, t);
if((t == NULL))
goto fail38 ;
q_7 = t;
t = r_7;
t = (ATerm) ATmakeAppl(sym_Element_4, term97, (ATerm)ATempty, (ATerm)ATinsert(ATempty, q_7), term97);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm ExplicitExplode_Int_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ExplicitExplode_Int_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_7 = NULL,p_7 = NULL;
p_7 = t;
t = Explode_Int_0_0(sl, t);
if((t == NULL))
goto fail37 ;
o_7 = t;
t = p_7;
t = (ATerm) ATmakeAppl(sym_Element_4, term93, (ATerm)ATempty, (ATerm)ATinsert(ATempty, o_7), term93);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm ExplicitExplode_Tuple_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ExplicitExplode_Tuple_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_7 = NULL,n_7 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL;
n_7 = t;
{
ATerm trm48,trm49;
trm48 = SSL_get_constructor(t);
trm49 = SSL_get_arguments(t);
if(!((ATgetSymbol(trm48) == ATmakeSymbol("", 0, ATtrue))))
goto fail36 ;
k_86 = trm49;
m_86 = t;
t = k_86;
l_86 = t;
t = m_86;
t = l_86;
m_7 = t;
t = n_7;
t = (ATerm) ATmakeAppl(sym_Element_4, term89, (ATerm)ATempty, m_7, term89);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm ExplicitExplode_List_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ExplicitExplode_List_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_7 = NULL,l_7 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL;
l_7 = t;
g_86 = t;
h_86 = t;
t = is_list_0_0(sl, t);
if((t == NULL))
goto fail35 ;
t = h_86;
j_86 = t;
t = g_86;
i_86 = t;
t = j_86;
t = i_86;
k_7 = t;
t = l_7;
t = (ATerm) ATmakeAppl(sym_Element_4, term85, (ATerm)ATempty, k_7, term85);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm Explode_Int_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Explode_Int_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
f_7 = t;
h_7 = t;
t = is_int_0_0(sl, t);
if((t == NULL))
goto fail34 ;
t = f_7;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail34 ;
g_7 = t;
t = h_7;
j_7 = t;
t = g_7;
i_7 = t;
t = j_7;
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, i_7)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm Explode_String_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Explode_String_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
t_6 = t;
v_6 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto fail33 ;
{
struct str_closure m_88 = { &(xml_escape_chars_0_0) , sl };
StrCL lifted20_cl = &(m_88);
t = string_as_chars_1_0(sl, lifted20_cl, t);
if((t == NULL))
goto fail33 ;
u_6 = t;
t = v_6;
x_6 = t;
t = u_6;
w_6 = t;
t = x_6;
t = (ATerm) ATmakeAppl(sym_Text_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Literal_1, w_6)));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm Explode_NotEmptyAppl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Explode_NotEmptyAppl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
ATerm trm46,trm47;
trm46 = SSL_get_constructor(t);
trm47 = SSL_get_arguments(t);
m_6 = trm46;
l_6 = trm47;
o_6 = t;
t = l_6;
t = flatten_list_0_0(sl, t);
if((t == NULL))
goto fail32 ;
n_6 = t;
t = o_6;
t = (ATerm) ATmakeAppl(sym_Element_4, (ATerm)ATmakeAppl(sym_QName_2, term45, m_6), (ATerm)ATempty, n_6, (ATerm) ATmakeAppl(sym_QName_2, term45, m_6));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_aterm_namespace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_aterm_namespace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm43 = t;
ATerm i_6 = NULL,j_6 = NULL;
if(match_cons(t, sym_EmptyElement_2))
{
i_6 = ATgetArgument(t, 0);
j_6 = ATgetArgument(t, 1);
}
else
goto label34 ;
{
ATerm trm44;
trm44 = CheckATermList(j_6);
if((trm44 == NULL))
goto label34 ;
t = (ATerm) ATmakeAppl(sym_EmptyElement_2, i_6, (ATerm) ATinsert((ATermList)trm44, (ATerm) ATmakeAppl(sym_Attribute_2, term73, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term77)))));
}
goto label33 ;
label34 :
t = trm43;
{
ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
if(match_cons(t, sym_Element_4))
{
h_6 = ATgetArgument(t, 0);
f_6 = ATgetArgument(t, 1);
g_6 = ATgetArgument(t, 2);
if(!((h_6 == ATgetArgument(t, 3))))
goto fail31 ;
}
else
goto fail31 ;
{
ATerm trm45;
trm45 = CheckATermList(f_6);
if((trm45 == NULL))
goto fail31 ;
t = (ATerm) ATmakeAppl(sym_Element_4, h_6, (ATerm)ATinsert((ATermList)trm45, (ATerm) ATmakeAppl(sym_Attribute_2, term73, (ATerm) ATmakeAppl(sym_DoubleQuoted_1, (ATerm) ATinsert(ATempty, term77)))), g_6, h_6);
goto label33 ;
}
}
label33 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm data2xml_finish_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "data2xml_finish_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm42 = t;
ATerm d_6 = NULL,e_6 = NULL;
t = add_aterm_namespace_0_0(sl, t);
if((t == NULL))
goto label32 ;
e_6 = t;
d_6 = t;
t = (ATerm) ATmakeAppl(sym_Document_3, term57, d_6, term59);
goto label31 ;
label32 :
t = trm42;
{
struct str_closure k_88 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(k_88);
t = say_1_0(sl, lifted19_cl, t);
if((t == NULL))
goto fail29 ;
t = term63;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail29 ;
else
goto label31 ;
}
label31 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm very_explicit_data2xml_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "very_explicit_data2xml_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_88 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(j_88);
t = bottomup_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_88 = { &(very_explicit_data2xml_0_0) , sl_up(sl) };
StrCL lifted17_cl = &(g_88);
struct str_closure h_88 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(h_88);
t = data2xml_doc_anno_wrap_2_0(sl_up(sl), lifted17_cl, lifted18_cl, t);
if((t == NULL))
goto fail27 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm38 = t;
t = ExplicitExplode_List_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label27 ;
goto label26 ;
label27 :
t = trm38;
{
ATerm trm39 = t;
t = ExplicitExplode_Tuple_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label28 ;
goto label26 ;
label28 :
t = trm39;
{
ATerm trm40 = t;
t = VeryExplicitExplode_Int_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label29 ;
goto label26 ;
label29 :
t = trm40;
{
ATerm trm41 = t;
t = VeryExplicitExplode_String_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label30 ;
goto label26 ;
label30 :
t = trm41;
t = VeryExplicitExplode_Appl_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail28 ;
else
goto label26 ;
}
}
}
label26 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm explicit_data2xml_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "explicit_data2xml_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_88 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(e_88);
t = bottomup_1_0(sl, lifted13_cl, t);
if((t == NULL))
goto fail23 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_88 = { &(explicit_data2xml_0_0) , sl_up(sl) };
StrCL lifted14_cl = &(b_88);
struct str_closure d_88 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(d_88);
t = data2xml_doc_anno_wrap_2_0(sl_up(sl), lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm31 = t;
t = ExplicitExplode_String_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label21 ;
goto label20 ;
label21 :
t = trm31;
{
ATerm trm32 = t;
t = ExplicitExplode_Int_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label22 ;
goto label20 ;
label22 :
t = trm32;
{
ATerm trm33 = t;
t = ExplicitExplode_List_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label23 ;
goto label20 ;
label23 :
t = trm33;
{
ATerm trm34 = t;
t = ExplicitExplode_Tuple_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label24 ;
goto label20 ;
label24 :
t = trm34;
{
ATerm trm35 = t;
ATerm t_85 = NULL;
ATerm trm36,trm37;
trm36 = SSL_get_constructor(t);
trm37 = SSL_get_arguments(t);
t_85 = trm36;
if(!(((ATgetType(trm37) == AT_LIST) && ATisEmpty(trm37))))
goto label25 ;
t = (ATerm) ATmakeAppl(sym_EmptyElement_2, (ATerm)ATmakeAppl(sym_QName_2, term45, t_85), (ATerm) ATempty);
goto label20 ;
label25 :
t = trm35;
t = Explode_NotEmptyAppl_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail25 ;
else
goto label20 ;
}
}
}
}
label20 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm implicit_data2xml_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "implicit_data2xml_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_88 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(a_88);
t = bottomup_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_87 = { &(implicit_data2xml_0_0) , sl_up(sl) };
StrCL lifted11_cl = &(x_87);
struct str_closure y_87 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(y_87);
t = data2xml_doc_anno_wrap_2_0(sl_up(sl), lifted11_cl, lifted12_cl, t);
if((t == NULL))
goto fail21 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm20 = t;
if(!(match_cons(t, sym_None_0)))
goto label13 ;
t = (ATerm) ATempty;
goto label12 ;
label13 :
t = trm20;
{
ATerm trm21 = t;
ATerm c_6 = NULL;
if(match_cons(t, sym_Some_1))
{
c_6 = ATgetArgument(t, 0);
}
else
goto label14 ;
t = c_6;
goto label12 ;
label14 :
t = trm21;
{
ATerm trm22 = t;
t = Explode_String_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label15 ;
goto label12 ;
label15 :
t = trm22;
{
ATerm trm23 = t;
t = Explode_Int_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label16 ;
goto label12 ;
label16 :
t = trm23;
{
ATerm trm24 = t;
ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL;
k_85 = t;
l_85 = t;
t = is_list_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label17 ;
t = l_85;
n_85 = t;
t = k_85;
m_85 = t;
t = n_85;
t = m_85;
goto label12 ;
label17 :
t = trm24;
{
ATerm trm25 = t;
ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
ATerm trm26,trm27;
trm26 = SSL_get_constructor(t);
trm27 = SSL_get_arguments(t);
if(!((ATgetSymbol(trm26) == ATmakeSymbol("", 0, ATtrue))))
goto label18 ;
p_85 = trm27;
r_85 = t;
t = p_85;
q_85 = t;
t = r_85;
t = q_85;
goto label12 ;
label18 :
t = trm25;
{
ATerm trm28 = t;
ATerm s_85 = NULL;
ATerm trm29,trm30;
trm29 = SSL_get_constructor(t);
trm30 = SSL_get_arguments(t);
s_85 = trm29;
if(!(((ATgetType(trm30) == AT_LIST) && ATisEmpty(trm30))))
goto label19 ;
t = (ATerm) ATmakeAppl(sym_EmptyElement_2, (ATerm)ATmakeAppl(sym_QName_2, term45, s_85), (ATerm) ATempty);
goto label12 ;
label19 :
t = trm28;
t = Explode_NotEmptyAppl_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail22 ;
else
goto label12 ;
}
}
}
}
}
}
label12 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_quot_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_quot_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_3 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm18 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm18) == AT_INT) && (ATgetInt((ATermInt) trm18) == 34))))
goto fail19 ;
j_3 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail19 ;
{
ATerm trm19;
trm19 = CheckATermList(j_3);
if((trm19 == NULL))
goto fail19 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm19, term21), term31), term39), term41), term43), term29);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_apos_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_apos_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_3 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm16 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm16) == AT_INT) && (ATgetInt((ATermInt) trm16) == 39))))
goto fail18 ;
i_3 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail18 ;
{
ATerm trm17;
trm17 = CheckATermList(i_3);
if((trm17 == NULL))
goto fail18 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm17, term21), term37), term39), term23), term27), term29);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_gt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_gt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_3 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm14 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm14) == AT_INT) && (ATgetInt((ATermInt) trm14) == 62))))
goto fail17 ;
h_3 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail17 ;
{
ATerm trm15;
trm15 = CheckATermList(h_3);
if((trm15 == NULL))
goto fail17 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm15, term21), term31), term35), term29);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_lt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_lt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_3 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm12 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm12) == AT_INT) && (ATgetInt((ATermInt) trm12) == 60))))
goto fail16 ;
g_3 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail16 ;
{
ATerm trm13;
trm13 = CheckATermList(g_3);
if((trm13 == NULL))
goto fail16 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm13, term21), term31), term33), term29);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm escape_amp_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "escape_amp_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_3 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm10 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm10) == AT_INT) && (ATgetInt((ATermInt) trm10) == 38))))
goto fail15 ;
f_3 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail15 ;
{
ATerm trm11;
trm11 = CheckATermList(f_3);
if((trm11 == NULL))
goto fail15 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm11, term21), term23), term25), term27), term29);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_escape_chars_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_escape_chars_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = e_3(&(frame), t);
if((t == NULL))
goto fail12 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm e_3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "e_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_87 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(v_87);
t = try_1_0(sl_up(sl), lifted9_cl, t);
if((t == NULL))
goto fail13 ;
{
ATerm trm7 = t;
ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
ATerm trm8;
trm8 = (ATerm) ATgetAnnotations(t);
if((trm8 == NULL))
trm8 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
z_2 = ATgetFirst((ATermList) t);
a_3 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label11 ;
d_3 = trm8;
t = z_2;
b_3 = t;
t = a_3;
t = e_3(sl, t);
if((t == NULL))
goto label11 ;
c_3 = t;
{
ATerm trm9;
trm9 = CheckATermList(c_3);
if((trm9 == NULL))
goto label11 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm9, b_3), d_3);
}
goto label10 ;
label11 :
t = trm7;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label10 ;
else
goto fail13 ;
label10 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3 = t;
t = escape_amp_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label6 ;
goto label5 ;
label6 :
t = trm3;
{
ATerm trm4 = t;
t = escape_lt_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label7 ;
goto label5 ;
label7 :
t = trm4;
{
ATerm trm5 = t;
t = escape_gt_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label8 ;
goto label5 ;
label8 :
t = trm5;
{
ATerm trm6 = t;
t = escape_apos_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label9 ;
goto label5 ;
label9 :
t = trm6;
t = escape_quot_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail14 ;
else
goto label5 ;
}
}
}
label5 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm explicit_mode_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "explicit_mode_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
struct str_closure j_87 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(j_87);
struct str_closure k_87 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(k_87);
struct str_closure l_87 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(l_87);
t = Option_3_0(sl, lifted0_cl, lifted1_cl, lifted2_cl, t);
if((t == NULL))
goto label3 ;
goto label2 ;
label3 :
t = trm1;
{
ATerm trm2 = t;
struct str_closure m_87 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(m_87);
struct str_closure n_87 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(n_87);
struct str_closure p_87 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(p_87);
t = Option_3_0(sl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto label4 ;
goto label2 ;
label4 :
t = trm2;
{
struct str_closure r_87 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(r_87);
struct str_closure s_87 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(s_87);
struct str_closure u_87 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(u_87);
t = Option_3_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail2 ;
else
goto label2 ;
}
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term17;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail10 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--implicit", 0, ATtrue))))
goto fail9 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail7 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--very-explicit", 0, ATtrue))))
goto fail6 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--explicit", 0, ATtrue))))
goto fail3 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm use_very_explicit_mode_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "use_very_explicit_mode_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term1;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail1 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("--very-explicit", 0, ATtrue))))
goto fail1 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
ATerm use_explicit_mode_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "use_explicit_mode_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm y_2 = NULL;
y_2 = t;
t = term1;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label1 ;
t = y_2;
t = term1;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail0 ;
if((ATgetSymbol(t) == ATmakeSymbol("--explicit", 0, ATtrue)))
goto label0 ;
else
goto fail0 ;
label1 :
t = trm0;
goto label0 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 63));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(flatten_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("flatten_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bottomup_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bottomup_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(say_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("say_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_as_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_as_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_to_nonempty_elem_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_to_nonempty_elem_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(data2xml_doc_anno_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("data2xml_doc_anno_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(VeryExplicitExplode_Appl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("VeryExplicitExplode_Appl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(VeryExplicitExplode_String_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("VeryExplicitExplode_String_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(VeryExplicitExplode_Int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("VeryExplicitExplode_Int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ExplicitExplode_String_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ExplicitExplode_String_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ExplicitExplode_Int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ExplicitExplode_Int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ExplicitExplode_Tuple_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ExplicitExplode_Tuple_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ExplicitExplode_List_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ExplicitExplode_List_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Explode_Int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Explode_Int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Explode_String_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Explode_String_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Explode_NotEmptyAppl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Explode_NotEmptyAppl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_aterm_namespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_aterm_namespace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(data2xml_finish_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("data2xml_finish_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(very_explicit_data2xml_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("very_explicit_data2xml_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explicit_data2xml_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explicit_data2xml_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(implicit_data2xml_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("implicit_data2xml_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_quot_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_quot_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_apos_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_apos_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_gt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_gt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_lt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_lt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_amp_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_amp_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(e_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("e_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_escape_chars_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_escape_chars_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explicit_mode_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explicit_mode_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(use_very_explicit_mode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("use_very_explicit_mode_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(use_explicit_mode_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("use_explicit_mode_0_0", 0, ATtrue)), &(closures[closures_index]));
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
