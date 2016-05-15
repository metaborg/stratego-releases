#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Module_3;
static Symbol sym_QName_2;
static Symbol sym_Prefix_1;
static Symbol sym_CDATASection_1;
static Symbol sym_DecCharRef_1;
static Symbol sym_HexCharRef_1;
static Symbol sym_EntityRef_1;
static Symbol sym_DoubleQuoted_1;
static Symbol sym_SingleQuoted_1;
static Symbol sym_Literal_1;
static Symbol sym_Document_3;
static Symbol sym_EmptyElement_2;
static Symbol sym_Element_4;
static Symbol sym_Name_2;
static Symbol sym_Attribute_2;
static Symbol sym_Text_1;
static Symbol sym_Element_3;
static Symbol sym_Document_1;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_DR__DUMMY_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_None_0;
static Symbol sym_Tuple_1;
static Symbol sym_NoAnnoList_1;
static Symbol sym_SVar_1;
static Symbol sym_Some_1;
static Symbol sym_BA_2;
static Symbol sym_CallNoArgs_1;
static Symbol sym_Module_2;
static Symbol sym_Conc_2;
static Symbol sym_meta_listvar_1;
static Symbol sym_meta_var_1;
static Symbol sym_FromStrategy_1;
static Symbol sym_ToStrategy_1;
static Symbol sym_FromApp_1;
static Symbol sym_ToBuild_1;
static Symbol sym_FromTerm_1;
static Symbol sym_ToTerm_1;
static void init_module_constructors (void)
{
sym_Module_3 = ATmakeSymbol("Module", 3, ATfalse);
ATprotectSymbol(sym_Module_3);
sym_QName_2 = ATmakeSymbol("QName", 2, ATfalse);
ATprotectSymbol(sym_QName_2);
sym_Prefix_1 = ATmakeSymbol("Prefix", 1, ATfalse);
ATprotectSymbol(sym_Prefix_1);
sym_CDATASection_1 = ATmakeSymbol("CDATASection", 1, ATfalse);
ATprotectSymbol(sym_CDATASection_1);
sym_DecCharRef_1 = ATmakeSymbol("DecCharRef", 1, ATfalse);
ATprotectSymbol(sym_DecCharRef_1);
sym_HexCharRef_1 = ATmakeSymbol("HexCharRef", 1, ATfalse);
ATprotectSymbol(sym_HexCharRef_1);
sym_EntityRef_1 = ATmakeSymbol("EntityRef", 1, ATfalse);
ATprotectSymbol(sym_EntityRef_1);
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
sym_Name_2 = ATmakeSymbol("Name", 2, ATfalse);
ATprotectSymbol(sym_Name_2);
sym_Attribute_2 = ATmakeSymbol("Attribute", 2, ATfalse);
ATprotectSymbol(sym_Attribute_2);
sym_Text_1 = ATmakeSymbol("Text", 1, ATfalse);
ATprotectSymbol(sym_Text_1);
sym_Element_3 = ATmakeSymbol("Element", 3, ATfalse);
ATprotectSymbol(sym_Element_3);
sym_Document_1 = ATmakeSymbol("Document", 1, ATfalse);
ATprotectSymbol(sym_Document_1);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_DR__DUMMY_0 = ATmakeSymbol("DR_DUMMY", 0, ATfalse);
ATprotectSymbol(sym_DR__DUMMY_0);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
ATprotectSymbol(sym_Tuple_1);
sym_NoAnnoList_1 = ATmakeSymbol("NoAnnoList", 1, ATfalse);
ATprotectSymbol(sym_NoAnnoList_1);
sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
ATprotectSymbol(sym_SVar_1);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
ATprotectSymbol(sym_BA_2);
sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
ATprotectSymbol(sym_CallNoArgs_1);
sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
ATprotectSymbol(sym_Module_2);
sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
ATprotectSymbol(sym_Conc_2);
sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
ATprotectSymbol(sym_meta_listvar_1);
sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
ATprotectSymbol(sym_meta_var_1);
sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
ATprotectSymbol(sym_FromStrategy_1);
sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
ATprotectSymbol(sym_ToStrategy_1);
sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
ATprotectSymbol(sym_FromApp_1);
sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
ATprotectSymbol(sym_ToBuild_1);
sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
ATprotectSymbol(sym_FromTerm_1);
sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
ATprotectSymbol(sym_ToTerm_1);
}
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
term0 = (ATerm) ATmakeInt(38);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("&", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_Literal_1, term3);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeInt(60);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_Literal_1, term9);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeInt(62);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_Literal_1, term15);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(39);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym_Literal_1, term21);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeInt(34);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym_Literal_1, term27);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol(" doesn't match end tag ", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("error: start tag ", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("DefaultNamespace", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("ResolvePrefix", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("debug: found namespace declaration", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("71ee60403e203dcc516502fc050dac8e", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("debug: default namespace declaration", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term47));
term47 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term48));
term48 = term47;
ATprotect(&(term49));
term49 = (ATerm) ATmakeAppl(ATmakeSymbol("9ad0dc74b1a5294706a7dc5e5d1e11fd", 0, ATtrue));
ATprotect(&(term50));
term50 = term49;
ATprotect(&(term51));
term51 = term46;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("error: cannot resolve the namespace of prefix ", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("conc", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(sym_SVar_1, term55);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term57);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("631e4cf4a3bba97a1bc0d7064ea6206e", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("xml", 0, ATtrue));
ATprotect(&(term63));
term63 = (ATerm) ATmakeAppl(ATmakeSymbol("6f0185abd1e576732fc20640db670c73", 0, ATtrue));
ATprotect(&(term64));
term64 = term63;
ATprotect(&(term65));
term65 = (ATerm) ATmakeAppl(ATmakeSymbol("http://www.w3.org/XML/1998/namespace", 0, ATtrue));
ATprotect(&(term66));
term66 = term65;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm fetch_elem_1_0 (StrSL sl, StrCL k_94, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL d_94, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL h_93, ATerm t);
ATerm getfirst_1_0 (StrSL sl, StrCL n_92, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm b_74, ATerm c_74, ATerm d_74, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm u_73, ATerm v_73, ATerm t);
ATerm dr_scope_1_1 (StrSL sl, StrCL b_73, ATerm a_73, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL h_70, ATerm t);
ATerm alltd_1_0 (StrSL sl, StrCL d_62, ATerm t);
ATerm topdownS_2_0 (StrSL sl, StrCL e_61, StrCL f_61, ATerm t);
ATerm fatal_error_0_0 (StrSL sl, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL e_58, ATerm t);
ATerm dec_chars_to_int_0_0 (StrSL sl, ATerm t);
ATerm hex_chars_to_int_0_0 (StrSL sl, ATerm t);
ATerm is_num_0_0 (StrSL sl, ATerm t);
ATerm is_hexnum_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL q_54, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL o_51, ATerm t);
ATerm if_verbose3_1_0 (StrSL sl, StrCL g_48, ATerm t);
ATerm aux_DefaultNamespace_0_1 (StrSL sl, ATerm p_43, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
ATerm DefaultNamespace_0_0 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
ATerm ResolvePrefix_0_0 (StrSL sl, ATerm t);
ATerm Module_3_0 (StrSL sl, StrCL n_30, StrCL o_30, StrCL p_30, ATerm t);
ATerm Attribute_2_0 (StrSL sl, StrCL p_28, StrCL q_28, ATerm t);
ATerm Element_3_0 (StrSL sl, StrCL l_28, StrCL m_28, StrCL n_28, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm e_18 (StrSL sl, ATerm t);
ATerm stratego_xml_apply_namespaces_0_0 (StrSL sl, ATerm t);
ATerm rewrite_Conc_0_0 (StrSL sl, ATerm t);
ATerm is_anti_quotation_helper_1_0 (StrSL sl, StrCL x_17, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
ATerm xml_fragment2xml_info_0_0 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm w_17 (StrSL sl, ATerm t);
ATerm xml_fragments2xml_info_0_0 (StrSL sl, ATerm t);
ATerm stratego_xml2xml_info_0_0 (StrSL sl, ATerm t);
ATerm apply_prefix_namespace_0_0 (StrSL sl, ATerm t);
ATerm apply_default_namespace_0_0 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
ATerm remember_default_namespace_0_0 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
ATerm collect_namespace_decls_0_0 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm xml_apply_namespaces_element_1_0 (StrSL sl, StrCL m_16, ATerm t);
ATerm rewrite_Attribute_0_0 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm rewrite_well_formed_Element_0_0 (StrSL sl, ATerm t);
ATerm rewrite_Element_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm chardata2string_0_0 (StrSL sl, ATerm t);
ATerm xml_attr_value2string_0_0 (StrSL sl, ATerm t);
ATerm unescape_quot_0_0 (StrSL sl, ATerm t);
ATerm unescape_apos_0_0 (StrSL sl, ATerm t);
ATerm unescape_gt_0_0 (StrSL sl, ATerm t);
ATerm unescape_lt_0_0 (StrSL sl, ATerm t);
ATerm unescape_amp_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm f_14 (StrSL sl, ATerm t);
ATerm xml_unescape_chars_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm xml_unescape_0_0 (StrSL sl, ATerm t);
ATerm aux_DefaultNamespace_0_1 (StrSL sl, ATerm p_43, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aux_DefaultNamespace_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm188 = t;
ATerm d_43 = NULL;
if(!((ATgetSymbol(t) == ATmakeSymbol("631e4cf4a3bba97a1bc0d7064ea6206e", 0, ATtrue))))
goto label86 ;
d_43 = t;
t = p_43;
t = d_43;
t = term43;
goto label85 ;
label86 :
t = trm188;
{
ATerm a_43 = NULL,b_43 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm189 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm189) == ATmakeSymbol("9ad0dc74b1a5294706a7dc5e5d1e11fd", 0, ATtrue))))
goto fail67 ;
a_43 = ATgetArgument(t, 1);
}
else
goto fail67 ;
b_43 = t;
t = p_43;
t = b_43;
t = a_43;
goto label85 ;
}
label85 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
ATerm DefaultNamespace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DefaultNamespace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
sl_init_var(0, s_42);
{
struct str_closure g_166 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(g_166);
if((s_42 == NULL))
{
s_42 = t;
}
else
if((s_42 != t))
goto fail65 ;
if(!(match_cons(t, sym__0)))
goto fail65 ;
u_42 = t;
x_42 = t;
t = term35;
v_42 = t;
t = x_42;
y_42 = t;
t = (ATerm) SRTS_setAnnotations(term46, (ATerm) ATinsert(ATempty, term48));
w_42 = t;
t = y_42;
t = dr_lookup_rule_0_2(sl, v_42, w_42, t);
if((t == NULL))
goto fail65 ;
t_42 = t;
t = u_42;
t = t_42;
t = fetch_elem_1_0(sl, lifted49_cl, t);
if((t == NULL))
goto fail65 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail66 ;
else
{
t = aux_DefaultNamespace_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail66 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
ATerm ResolvePrefix_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ResolvePrefix_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm trm186 = t;
ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
sl_init_var(0, m_38);
{
struct str_closure e_166 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(e_166);
if((m_38 == NULL))
{
m_38 = t;
}
else
if((m_38 != t))
goto label84 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("xml", 0, ATtrue))))
goto label84 ;
o_38 = t;
r_38 = t;
t = term37;
p_38 = t;
t = r_38;
s_38 = t;
t = (ATerm) SRTS_setAnnotations(term62, (ATerm) ATinsert(ATempty, term48));
q_38 = t;
t = s_38;
t = dr_lookup_rule_0_2(sl, p_38, q_38, t);
if((t == NULL))
goto label84 ;
n_38 = t;
t = o_38;
t = n_38;
t = fetch_elem_1_0(sl, lifted47_cl, t);
if((t == NULL))
goto label84 ;
}
goto label83 ;
label84 :
t = trm186;
{
ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
sl_init_var(1, g_38);
sl_init_var(2, h_38);
{
struct str_closure f_166 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(f_166);
if((h_38 == NULL))
{
h_38 = t;
}
else
if((h_38 != t))
goto fail62 ;
if((g_38 == NULL))
{
g_38 = t;
}
else
if((g_38 != t))
goto fail62 ;
j_38 = t;
l_38 = t;
t = term37;
k_38 = t;
t = l_38;
if((h_38 == NULL))
goto fail62 ;
else
{
t = dr_lookup_rule_0_2(sl, k_38, h_38, t);
if((t == NULL))
goto fail62 ;
}
i_38 = t;
t = j_38;
t = i_38;
t = fetch_elem_1_0(sl, lifted48_cl, t);
if((t == NULL))
goto fail62 ;
else
goto label83 ;
}
}
label83 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_163 = NULL,q_163 = NULL,t_163 = NULL,u_163 = NULL,r_163 = NULL,s_163 = NULL;
t_163 = t;
if((sl_readvar(1, sl) == NULL))
goto fail64 ;
else
{
t = sl_readvar(1, sl);
}
p_163 = t;
t = t_163;
u_163 = t;
if((sl_readvar(2, sl) == NULL))
goto fail64 ;
else
{
t = sl_readvar(2, sl);
}
q_163 = t;
t = u_163;
if(match_cons(t, sym__2))
{
ATerm trm187 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm187) == ATmakeSymbol("71ee60403e203dcc516502fc050dac8e", 0, ATtrue))))
goto fail64 ;
r_163 = ATgetArgument(t, 1);
}
else
goto fail64 ;
s_163 = t;
t = q_163;
t = s_163;
t = r_163;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_163 = NULL,o_163 = NULL,n_163 = NULL;
o_163 = t;
if((sl_readvar(0, sl) == NULL))
goto fail63 ;
else
{
t = sl_readvar(0, sl);
}
m_163 = t;
t = o_163;
if(!((ATgetSymbol(t) == ATmakeSymbol("6f0185abd1e576732fc20640db670c73", 0, ATtrue))))
goto fail63 ;
n_163 = t;
t = m_163;
t = n_163;
t = term66;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
ATerm Module_3_0 (StrSL sl, StrCL n_30, StrCL o_30, StrCL p_30, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Module_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_160 = NULL,v_160 = NULL,w_160 = NULL,x_160 = NULL,z_160 = NULL,a_161 = NULL,b_161 = NULL;
ATerm trm185;
trm185 = (ATerm) ATgetAnnotations(t);
if((trm185 == NULL))
trm185 = (ATerm) ATempty;
if(match_cons(t, sym_Module_3))
{
v_160 = ATgetArgument(t, 0);
w_160 = ATgetArgument(t, 1);
x_160 = ATgetArgument(t, 2);
}
else
goto fail61 ;
y_160 = trm185;
t = v_160;
t = cl_fun(n_30)(cl_sl(n_30), t);
if((t == NULL))
goto fail61 ;
z_160 = t;
t = w_160;
t = cl_fun(o_30)(cl_sl(o_30), t);
if((t == NULL))
goto fail61 ;
a_161 = t;
t = x_160;
t = cl_fun(p_30)(cl_sl(p_30), t);
if((t == NULL))
goto fail61 ;
b_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Module_3, z_160, a_161, b_161), y_160);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
ATerm Attribute_2_0 (StrSL sl, StrCL p_28, StrCL q_28, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Attribute_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_152 = NULL,d_152 = NULL,e_152 = NULL,g_152 = NULL,h_152 = NULL;
ATerm trm184;
trm184 = (ATerm) ATgetAnnotations(t);
if((trm184 == NULL))
trm184 = (ATerm) ATempty;
if(match_cons(t, sym_Attribute_2))
{
d_152 = ATgetArgument(t, 0);
e_152 = ATgetArgument(t, 1);
}
else
goto fail60 ;
f_152 = trm184;
t = d_152;
t = cl_fun(p_28)(cl_sl(p_28), t);
if((t == NULL))
goto fail60 ;
g_152 = t;
t = e_152;
t = cl_fun(q_28)(cl_sl(q_28), t);
if((t == NULL))
goto fail60 ;
h_152 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Attribute_2, g_152, h_152), f_152);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
ATerm Element_3_0 (StrSL sl, StrCL l_28, StrCL m_28, StrCL n_28, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Element_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_151 = NULL,q_151 = NULL,t_151 = NULL,u_151 = NULL,w_151 = NULL,x_151 = NULL,z_151 = NULL;
ATerm trm183;
trm183 = (ATerm) ATgetAnnotations(t);
if((trm183 == NULL))
trm183 = (ATerm) ATempty;
if(match_cons(t, sym_Element_3))
{
q_151 = ATgetArgument(t, 0);
t_151 = ATgetArgument(t, 1);
u_151 = ATgetArgument(t, 2);
}
else
goto fail59 ;
v_151 = trm183;
t = q_151;
t = cl_fun(l_28)(cl_sl(l_28), t);
if((t == NULL))
goto fail59 ;
w_151 = t;
t = t_151;
t = cl_fun(m_28)(cl_sl(m_28), t);
if((t == NULL))
goto fail59 ;
x_151 = t;
t = u_151;
t = cl_fun(n_28)(cl_sl(n_28), t);
if((t == NULL))
goto fail59 ;
z_151 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Element_3, w_151, x_151, z_151), v_151);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_166 = { &(stratego_xml2xml_info_0_0) , sl };
StrCL lifted46_cl = &(d_166);
t = io_wrap_1_0(sl, lifted46_cl, t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm stratego_xml_apply_namespaces_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "stratego_xml_apply_namespaces_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure c_166 = { &(e_18) , &(frame) };
StrCL e_18_cl = &(c_166);
sl_init_fun(0, e_18_cl);
{
ATerm c_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,d_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
c_18 = t;
i_18 = t;
t = term35;
f_18 = t;
t = i_18;
j_18 = t;
t = (ATerm) SRTS_setAnnotations(term46, (ATerm) ATinsert(ATempty, term48));
g_18 = t;
t = j_18;
k_18 = t;
t = term61;
h_18 = t;
t = k_18;
t = dr_set_rule_0_3(sl, f_18, g_18, h_18, t);
if((t == NULL))
goto fail53 ;
t = c_18;
d_18 = t;
o_18 = t;
t = term37;
l_18 = t;
t = o_18;
p_18 = t;
t = (ATerm) SRTS_setAnnotations(term62, (ATerm) ATinsert(ATempty, term48));
m_18 = t;
t = p_18;
q_18 = t;
t = term64;
n_18 = t;
t = q_18;
t = dr_set_rule_0_3(sl, l_18, m_18, n_18, t);
if((t == NULL))
goto fail53 ;
t = d_18;
t = e_18(&(frame), t);
if((t == NULL))
goto fail53 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm e_18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "e_18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_18 = NULL,s_18 = NULL;
struct str_closure b_166 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(b_166);
s_18 = t;
t = term37;
r_18 = t;
t = s_18;
t = dr_scope_1_1(sl_up(sl), lifted43_cl, r_18, t);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_18 = NULL,u_18 = NULL;
struct str_closure a_166 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(a_166);
u_18 = t;
t = term35;
t_18 = t;
t = u_18;
t = dr_scope_1_1(sl_up(sl_up(sl)), lifted44_cl, t_18, t);
if((t == NULL))
goto fail55 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm179 = t;
if(match_cons(t, sym_Element_3))
{
ATerm trm180 = ATgetArgument(t, 0);
ATerm trm181 = ATgetArgument(t, 1);
ATerm trm182 = ATgetArgument(t, 2);
}
else
goto label82 ;
t = xml_apply_namespaces_element_1_0(sl_up(sl_up(sl_up(sl))), sl_fun_cl(0, sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail56 ;
else
goto label81 ;
label82 :
t = trm179;
{
struct str_closure z_165 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(z_165);
t = try_1_0(sl_up(sl_up(sl_up(sl))), lifted45_cl, t);
if((t == NULL))
goto fail56 ;
t = SRTS_all(sl_up(sl_up(sl_up(sl))), sl_fun_cl(0, sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail56 ;
else
goto label81 ;
}
label81 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_163 = NULL,j_163 = NULL,k_163 = NULL,l_163 = NULL;
if(match_cons(t, sym_Module_3))
{
i_163 = ATgetArgument(t, 0);
k_163 = ATgetArgument(t, 1);
j_163 = ATgetArgument(t, 2);
}
else
goto fail57 ;
l_163 = t;
t = k_163;
t = collect_namespace_decls_0_0(sl_up(sl_up(sl_up(sl_up(sl)))), t);
if((t == NULL))
goto fail57 ;
t = l_163;
t = (ATerm) ATmakeAppl(sym_Module_2, i_163, j_163);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
ATerm rewrite_Conc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_Conc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_17 = NULL,z_17 = NULL;
if(match_cons(t, sym_Conc_2))
{
y_17 = ATgetArgument(t, 0);
z_17 = ATgetArgument(t, 1);
}
else
goto fail52 ;
t = (ATerm) ATmakeAppl(sym_FromApp_1, (ATerm) ATmakeAppl(sym_BA_2, term59, (ATerm) ATmakeAppl(sym_NoAnnoList_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ToTerm_1, z_17)), (ATerm) ATmakeAppl(sym_ToTerm_1, y_17))))));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_anti_quotation_helper_1_0 (StrSL sl, StrCL x_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_anti_quotation_helper_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm170 = t;
if(match_cons(t, sym_FromTerm_1))
{
ATerm trm171 = ATgetArgument(t, 0);
}
else
goto label77 ;
goto label76 ;
label77 :
t = trm170;
{
ATerm trm172 = t;
if(match_cons(t, sym_FromStrategy_1))
{
ATerm trm173 = ATgetArgument(t, 0);
}
else
goto label78 ;
goto label76 ;
label78 :
t = trm172;
{
ATerm trm174 = t;
if(match_cons(t, sym_FromApp_1))
{
ATerm trm175 = ATgetArgument(t, 0);
}
else
goto label79 ;
goto label76 ;
label79 :
t = trm174;
{
ATerm trm176 = t;
if(match_cons(t, sym_meta_var_1))
{
ATerm trm177 = ATgetArgument(t, 0);
}
else
goto label80 ;
goto label76 ;
label80 :
t = trm176;
if(match_cons(t, sym_meta_listvar_1))
{
ATerm trm178 = ATgetArgument(t, 0);
goto label76 ;
}
else
goto fail51 ;
}
}
}
label76 :
;
t = xml_fragments2xml_info_0_0(sl, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_fragment2xml_info_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_fragment2xml_info_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_165 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(u_165);
struct str_closure v_165 = { &(is_anti_quotation_helper_1_0) , sl };
StrCL lifted42_cl = &(v_165);
ATerm trm164 = t;
if(match_cons(t, sym_Document_3))
{
ATerm trm165 = ATgetArgument(t, 0);
ATerm trm166 = ATgetArgument(t, 1);
ATerm trm167 = ATgetArgument(t, 2);
}
else
goto label75 ;
{
ATerm f_163 = NULL;
if(match_cons(t, sym_Document_3))
{
ATerm trm168 = ATgetArgument(t, 0);
f_163 = ATgetArgument(t, 1);
{
ATerm trm169 = ATgetArgument(t, 2);
}
}
else
goto fail48 ;
t = (ATerm) ATmakeAppl(sym_Document_1, f_163);
goto label74 ;
}
label75 :
t = trm164;
goto label74 ;
label74 :
;
t = topdownS_2_0(sl, lifted40_cl, lifted42_cl, t);
if((t == NULL))
goto fail48 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_165 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(t_165);
t = try_1_0(sl_up(sl), lifted41_cl, t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm160 = t;
t = rewrite_Element_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label71 ;
goto label70 ;
label71 :
t = trm160;
{
ATerm trm161 = t;
t = rewrite_Attribute_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label72 ;
goto label70 ;
label72 :
t = trm161;
{
ATerm trm162 = t;
ATerm g_163 = NULL,h_163 = NULL;
if(match_cons(t, sym_Text_1))
{
ATerm trm163 = ATgetArgument(t, 0);
}
else
goto label73 ;
t = xml_unescape_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label73 ;
h_163 = t;
t = chardata2string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label73 ;
g_163 = t;
t = h_163;
t = (ATerm) ATmakeAppl(sym_Text_1, g_163);
goto label70 ;
label73 :
t = trm162;
t = rewrite_Conc_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail50 ;
else
goto label70 ;
}
}
label70 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_fragments2xml_info_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_fragments2xml_info_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure s_165 = { &(w_17) , &(frame) };
StrCL w_17_cl = &(s_165);
sl_init_fun(0, w_17_cl);
t = w_17(&(frame), t);
if((t == NULL))
goto fail44 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm w_17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "w_17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_165 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(r_165);
t = alltd_1_0(sl_up(sl), lifted36_cl, t);
if((t == NULL))
goto fail45 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm154 = t;
ATerm trm155 = t;
ATerm t_162 = NULL,u_162 = NULL,v_162 = NULL;
ATerm trm156;
trm156 = (ATerm) ATgetAnnotations(t);
if((trm156 == NULL))
trm156 = (ATerm) ATempty;
if(match_cons(t, sym_ToTerm_1))
{
u_162 = ATgetArgument(t, 0);
}
else
goto label68 ;
t_162 = trm156;
t = u_162;
t = xml_fragment2xml_info_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label68 ;
v_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToTerm_1, v_162), t_162);
goto label67 ;
label68 :
t = trm155;
{
ATerm trm157 = t;
ATerm x_162 = NULL,y_162 = NULL,z_162 = NULL;
ATerm trm158;
trm158 = (ATerm) ATgetAnnotations(t);
if((trm158 == NULL))
trm158 = (ATerm) ATempty;
if(match_cons(t, sym_ToBuild_1))
{
y_162 = ATgetArgument(t, 0);
}
else
goto label69 ;
x_162 = trm158;
t = y_162;
t = xml_fragment2xml_info_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label69 ;
z_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToBuild_1, z_162), x_162);
goto label67 ;
label69 :
t = trm157;
{
ATerm b_163 = NULL,c_163 = NULL,d_163 = NULL;
ATerm trm159;
trm159 = (ATerm) ATgetAnnotations(t);
if((trm159 == NULL))
trm159 = (ATerm) ATempty;
if(match_cons(t, sym_ToStrategy_1))
{
c_163 = ATgetArgument(t, 0);
}
else
goto label66 ;
b_163 = trm159;
t = c_163;
t = xml_fragment2xml_info_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label66 ;
d_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToStrategy_1, d_163), b_163);
goto label67 ;
}
}
label67 :
;
goto label65 ;
label66 :
t = trm154;
{
struct str_closure p_165 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted37_cl = &(p_165);
struct str_closure q_165 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(q_165);
t = Module_3_0(sl_up(sl_up(sl)), lifted37_cl, lifted38_cl, sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail46 ;
else
goto label65 ;
}
label65 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_165 = { &(rewrite_Attribute_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted39_cl = &(o_165);
t = map_1_0(sl_up(sl_up(sl_up(sl))), lifted39_cl, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm stratego_xml2xml_info_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "stratego_xml2xml_info_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = xml_fragments2xml_info_0_0(sl, t);
if((t == NULL))
goto fail43 ;
t = stratego_xml_apply_namespaces_0_0(sl, t);
if((t == NULL))
goto fail43 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm apply_prefix_namespace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "apply_prefix_namespace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
if(match_cons(t, sym_Name_2))
{
ATerm trm151 = ATgetArgument(t, 0);
if(match_cons(trm151, sym_Some_1))
{
ATerm trm152 = ATgetArgument(trm151, 0);
if(match_cons(trm152, sym_Prefix_1))
{
r_17 = ATgetArgument(trm152, 0);
}
else
goto fail42 ;
}
else
goto fail42 ;
q_17 = ATgetArgument(t, 1);
}
else
goto fail42 ;
t_17 = t;
t = r_17;
{
ATerm trm153 = t;
t = ResolvePrefix_0_0(sl, t);
if((t == NULL))
goto label64 ;
goto label63 ;
label64 :
t = trm153;
{
ATerm u_17 = NULL,v_17 = NULL;
v_17 = t;
u_17 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, u_17), term53);
t = fatal_error_0_0(sl, t);
if((t == NULL))
goto fail42 ;
else
goto label63 ;
}
label63 :
;
s_17 = t;
t = t_17;
t = (ATerm) ATmakeAppl(sym_Name_2, (ATerm)ATmakeAppl(sym_Some_1, s_17), q_17);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm apply_default_namespace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "apply_default_namespace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
if(match_cons(t, sym_Name_2))
{
ATerm trm150 = ATgetArgument(t, 0);
if(!(match_cons(trm150, sym_None_0)))
goto fail41 ;
n_17 = ATgetArgument(t, 1);
}
else
goto fail41 ;
p_17 = t;
t = term51;
t = DefaultNamespace_0_0(sl, t);
if((t == NULL))
goto fail41 ;
o_17 = t;
t = p_17;
t = (ATerm) ATmakeAppl(sym_Name_2, o_17, n_17);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm remember_default_namespace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "remember_default_namespace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_17 = NULL,e_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
ATerm trm149 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto label62 ;
t = term43;
goto label61 ;
label62 :
t = trm149;
{
ATerm f_17 = NULL,g_17 = NULL;
g_17 = t;
f_17 = t;
t = (ATerm) ATmakeAppl(sym_Some_1, f_17);
goto label61 ;
}
label61 :
;
d_17 = t;
{
struct str_closure n_165 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(n_165);
t = if_verbose3_1_0(sl, lifted34_cl, t);
if((t == NULL))
goto fail38 ;
e_17 = t;
k_17 = t;
t = term35;
h_17 = t;
t = k_17;
l_17 = t;
t = (ATerm) SRTS_setAnnotations(term46, (ATerm) ATinsert(ATempty, term48));
i_17 = t;
t = l_17;
m_17 = t;
t = (ATerm) ATmakeAppl(sym__2, term50, d_17);
j_17 = t;
t = m_17;
t = dr_set_rule_0_3(sl, h_17, i_17, j_17, t);
if((t == NULL))
goto fail38 ;
t = e_17;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_165 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(m_165);
t = debug_1_0(sl_up(sl), lifted35_cl, t);
if((t == NULL))
goto fail39 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm collect_namespace_decls_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "collect_namespace_decls_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_16 = NULL,u_16 = NULL;
t_16 = t;
{
struct str_closure b_165 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(b_165);
t = try_1_0(sl, lifted26_cl, t);
if((t == NULL))
goto fail31 ;
t = t_16;
u_16 = t;
{
struct str_closure c_165 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(c_165);
t = filter_1_0(sl, lifted30_cl, t);
if((t == NULL))
goto fail31 ;
{
struct str_closure f_165 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(f_165);
t = map_1_0(sl, lifted31_cl, t);
if((t == NULL))
goto fail31 ;
t = u_16;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
sl_init_var(0, v_16);
sl_init_var(1, w_16);
if(match_cons(t, sym_Attribute_2))
{
ATerm trm145 = ATgetArgument(t, 0);
if(match_cons(trm145, sym_Name_2))
{
ATerm trm146 = ATgetArgument(trm145, 0);
if(match_cons(trm146, sym_Some_1))
{
ATerm trm147 = ATgetArgument(trm146, 0);
if(match_cons(trm147, sym_Prefix_1))
{
ATerm trm148 = ATgetArgument(trm147, 0);
if(!((ATgetSymbol(trm148) == ATmakeSymbol("xmlns", 0, ATtrue))))
goto fail35 ;
}
else
goto fail35 ;
}
else
goto fail35 ;
if((v_16 == NULL))
{
v_16 = ATgetArgument(trm145, 1);
}
else
if((v_16 != ATgetArgument(trm145, 1)))
goto fail35 ;
}
else
goto fail35 ;
if((w_16 == NULL))
{
w_16 = ATgetArgument(t, 1);
}
else
if((w_16 != ATgetArgument(t, 1)))
goto fail35 ;
}
else
goto fail35 ;
{
struct str_closure e_165 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(e_165);
t = if_verbose3_1_0(sl_up(sl), lifted32_cl, t);
if((t == NULL))
goto fail35 ;
x_16 = t;
a_17 = t;
t = term37;
y_16 = t;
t = a_17;
b_17 = t;
if((w_16 == NULL))
goto fail35 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term41, w_16);
}
z_16 = t;
t = b_17;
if((v_16 == NULL))
goto fail35 ;
else
{
t = dr_set_rule_0_3(sl_up(sl), y_16, v_16, z_16, t);
if((t == NULL))
goto fail35 ;
}
t = x_16;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_165 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(d_165);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail36 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
t = debug_1_0(sl_up(sl_up(sl)), lifted33_cl, t);
if((t == NULL))
goto fail36 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Attribute_2))
{
ATerm trm139 = ATgetArgument(t, 0);
if(match_cons(trm139, sym_Name_2))
{
ATerm trm140 = ATgetArgument(trm139, 0);
if(match_cons(trm140, sym_Some_1))
{
ATerm trm141 = ATgetArgument(trm140, 0);
if(match_cons(trm141, sym_Prefix_1))
{
ATerm trm142 = ATgetArgument(trm141, 0);
if(!((ATgetSymbol(trm142) == ATmakeSymbol("xmlns", 0, ATtrue))))
goto fail34 ;
}
else
goto fail34 ;
}
else
goto fail34 ;
{
ATerm trm143 = ATgetArgument(trm139, 1);
}
}
else
goto fail34 ;
{
ATerm trm144 = ATgetArgument(t, 1);
}
}
else
goto fail34 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_164 = { &(_Id) , sl_up(sl) };
StrCL lifted28_cl = &(x_164);
struct str_closure y_164 = { &(remember_default_namespace_0_0) , sl_up(sl) };
StrCL lifted29_cl = &(y_164);
struct str_closure a_165 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(a_165);
t = getfirst_1_0(sl_up(sl), lifted27_cl, t);
if((t == NULL))
goto fail32 ;
t = Attribute_2_0(sl_up(sl), lifted28_cl, lifted29_cl, t);
if((t == NULL))
goto fail32 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Attribute_2))
{
ATerm trm135 = ATgetArgument(t, 0);
if(match_cons(trm135, sym_Name_2))
{
ATerm trm136 = ATgetArgument(trm135, 0);
if(!(match_cons(trm136, sym_None_0)))
goto fail33 ;
{
ATerm trm137 = ATgetArgument(trm135, 1);
if(!((ATgetSymbol(trm137) == ATmakeSymbol("xmlns", 0, ATtrue))))
goto fail33 ;
}
}
else
goto fail33 ;
{
ATerm trm138 = ATgetArgument(t, 1);
}
}
else
goto fail33 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_apply_namespaces_element_1_0 (StrSL sl, StrCL m_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_apply_namespaces_element_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, m_16);
{
ATerm n_16 = NULL,o_16 = NULL;
struct str_closure w_164 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(w_164);
o_16 = t;
t = term37;
n_16 = t;
t = o_16;
t = dr_scope_1_1(sl, lifted14_cl, n_16, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_16 = NULL,q_16 = NULL;
struct str_closure v_164 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(v_164);
q_16 = t;
t = term35;
p_16 = t;
t = q_16;
t = dr_scope_1_1(sl_up(sl), lifted15_cl, p_16, t);
if((t == NULL))
goto fail23 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_164 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(o_164);
struct str_closure p_164 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(p_164);
struct str_closure r_164 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted16_cl = &(r_164);
struct str_closure s_164 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(s_164);
struct str_closure u_164 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted19_cl = &(u_164);
t = Element_3_0(sl_up(sl_up(sl)), lifted16_cl, lifted17_cl, lifted19_cl, t);
if((t == NULL))
goto fail24 ;
t = Element_3_0(sl_up(sl_up(sl)), lifted20_cl, lifted21_cl, sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_164 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(q_164);
t = collect_namespace_decls_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail29 ;
t = filter_1_0(sl_up(sl_up(sl_up(sl))), lifted18_cl, t);
if((t == NULL))
goto fail29 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm123 = t;
ATerm trm124 = t;
if(match_cons(t, sym_Attribute_2))
{
ATerm trm125 = ATgetArgument(t, 0);
if(match_cons(trm125, sym_Name_2))
{
ATerm trm126 = ATgetArgument(trm125, 0);
if(match_cons(trm126, sym_Some_1))
{
ATerm trm127 = ATgetArgument(trm126, 0);
if(match_cons(trm127, sym_Prefix_1))
{
ATerm trm128 = ATgetArgument(trm127, 0);
if(!((ATgetSymbol(trm128) == ATmakeSymbol("xmlns", 0, ATtrue))))
goto label60 ;
}
else
goto label60 ;
}
else
goto label60 ;
{
ATerm trm129 = ATgetArgument(trm125, 1);
}
}
else
goto label60 ;
{
ATerm trm130 = ATgetArgument(t, 1);
}
}
else
goto label60 ;
goto label59 ;
label60 :
t = trm124;
if(match_cons(t, sym_Attribute_2))
{
ATerm trm131 = ATgetArgument(t, 0);
if(match_cons(trm131, sym_Name_2))
{
ATerm trm132 = ATgetArgument(trm131, 0);
if(!(match_cons(trm132, sym_None_0)))
goto label58 ;
{
ATerm trm133 = ATgetArgument(trm131, 1);
if(!((ATgetSymbol(trm133) == ATmakeSymbol("xmlns", 0, ATtrue))))
goto label58 ;
}
}
else
goto label58 ;
{
ATerm trm134 = ATgetArgument(t, 1);
}
goto label59 ;
}
else
goto label58 ;
label59 :
;
goto fail30 ;
label58 :
t = trm123;
goto label57 ;
label57 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_164 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(n_164);
t = map_1_0(sl_up(sl_up(sl_up(sl))), lifted22_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_164 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(l_164);
struct str_closure m_164 = { &(_Id) , sl_up(sl_up(sl_up(sl_up(sl)))) };
StrCL lifted25_cl = &(m_164);
t = Attribute_2_0(sl_up(sl_up(sl_up(sl_up(sl)))), lifted23_cl, lifted25_cl, t);
if((t == NULL))
goto fail27 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_164 = { &(apply_prefix_namespace_0_0) , sl_up(sl_up(sl_up(sl_up(sl_up(sl))))) };
StrCL lifted24_cl = &(k_164);
t = try_1_0(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))), lifted24_cl, t);
if((t == NULL))
goto fail28 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm122 = t;
t = apply_default_namespace_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label56 ;
goto label55 ;
label56 :
t = trm122;
t = apply_prefix_namespace_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail25 ;
else
goto label55 ;
label55 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm rewrite_Attribute_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_Attribute_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
if(match_cons(t, sym_Attribute_2))
{
ATerm trm121 = ATgetArgument(t, 0);
if(match_cons(trm121, sym_QName_2))
{
o_15 = ATgetArgument(trm121, 0);
p_15 = ATgetArgument(trm121, 1);
}
else
goto fail21 ;
q_15 = ATgetArgument(t, 1);
}
else
goto fail21 ;
s_15 = t;
t = q_15;
t = xml_attr_value2string_0_0(sl, t);
if((t == NULL))
goto fail21 ;
r_15 = t;
t = s_15;
t = (ATerm) ATmakeAppl(sym_Attribute_2, (ATerm)ATmakeAppl(sym_Name_2, o_15, p_15), r_15);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm rewrite_well_formed_Element_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_well_formed_Element_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
if(match_cons(t, sym_Element_4))
{
ATerm trm100 = ATgetArgument(t, 0);
if(match_cons(trm100, sym_QName_2))
{
i_15 = ATgetArgument(trm100, 0);
j_15 = ATgetArgument(trm100, 1);
}
else
goto fail18 ;
k_15 = ATgetArgument(t, 1);
l_15 = ATgetArgument(t, 2);
{
ATerm trm101 = ATgetArgument(t, 3);
if(match_cons(trm101, sym_QName_2))
{
if(!((i_15 == ATgetArgument(trm101, 0))))
goto fail18 ;
if(!((j_15 == ATgetArgument(trm101, 1))))
goto fail18 ;
}
else
goto fail18 ;
}
}
else
goto fail18 ;
n_15 = t;
t = l_15;
{
struct str_closure j_164 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(j_164);
t = try_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail18 ;
m_15 = t;
t = n_15;
t = (ATerm) ATmakeAppl(sym_Element_3, (ATerm)ATmakeAppl(sym_Name_2, i_15, j_15), k_15, m_15);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_164 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(h_164);
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail19 ;
t = filter_1_0(sl_up(sl), lifted13_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm102 = t;
ATerm trm103 = t;
if(match_cons(t, sym_Element_4))
{
ATerm trm104 = ATgetArgument(t, 0);
ATerm trm105 = ATgetArgument(t, 1);
ATerm trm106 = ATgetArgument(t, 2);
ATerm trm107 = ATgetArgument(t, 3);
}
else
goto label49 ;
goto label48 ;
label49 :
t = trm103;
{
ATerm trm108 = t;
if(match_cons(t, sym_Text_1))
{
ATerm trm109 = ATgetArgument(t, 0);
}
else
goto label50 ;
goto label48 ;
label50 :
t = trm108;
if(match_cons(t, sym_EmptyElement_2))
{
ATerm trm110 = ATgetArgument(t, 0);
ATerm trm111 = ATgetArgument(t, 1);
goto label48 ;
}
else
goto label47 ;
}
label48 :
;
goto label46 ;
label47 :
t = trm102;
{
ATerm trm112 = t;
if(match_cons(t, sym_FromTerm_1))
{
ATerm trm113 = ATgetArgument(t, 0);
}
else
goto label51 ;
goto label46 ;
label51 :
t = trm112;
{
ATerm trm114 = t;
if(match_cons(t, sym_FromStrategy_1))
{
ATerm trm115 = ATgetArgument(t, 0);
}
else
goto label52 ;
goto label46 ;
label52 :
t = trm114;
{
ATerm trm116 = t;
if(match_cons(t, sym_FromApp_1))
{
ATerm trm117 = ATgetArgument(t, 0);
}
else
goto label53 ;
goto label46 ;
label53 :
t = trm116;
{
ATerm trm118 = t;
if(match_cons(t, sym_meta_var_1))
{
ATerm trm119 = ATgetArgument(t, 0);
}
else
goto label54 ;
goto label46 ;
label54 :
t = trm118;
if(match_cons(t, sym_meta_listvar_1))
{
ATerm trm120 = ATgetArgument(t, 0);
goto label46 ;
}
else
goto fail20 ;
}
}
}
}
label46 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm rewrite_Element_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_Element_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm93 = t;
ATerm g_15 = NULL,h_15 = NULL;
ATerm trm94 = t;
if(match_cons(t, sym_Element_4))
{
g_15 = ATgetArgument(t, 0);
{
ATerm trm95 = ATgetArgument(t, 1);
}
{
ATerm trm96 = ATgetArgument(t, 2);
}
if(!((g_15 == ATgetArgument(t, 3))))
goto label45 ;
}
else
goto label45 ;
t = rewrite_well_formed_Element_0_0(sl, t);
if((t == NULL))
goto label43 ;
else
goto label44 ;
label45 :
t = trm94;
if(match_cons(t, sym_Element_4))
{
g_15 = ATgetArgument(t, 0);
{
ATerm trm97 = ATgetArgument(t, 1);
}
{
ATerm trm98 = ATgetArgument(t, 2);
}
h_15 = ATgetArgument(t, 3);
}
else
goto label43 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_15), term31), g_15), term33);
t = fatal_error_0_0(sl, t);
if((t == NULL))
goto label43 ;
else
goto label44 ;
label44 :
;
goto label42 ;
label43 :
t = trm93;
{
ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
if(match_cons(t, sym_EmptyElement_2))
{
ATerm trm99 = ATgetArgument(t, 0);
if(match_cons(trm99, sym_QName_2))
{
d_15 = ATgetArgument(trm99, 0);
e_15 = ATgetArgument(trm99, 1);
}
else
goto fail17 ;
f_15 = ATgetArgument(t, 1);
}
else
goto fail17 ;
t = (ATerm) ATmakeAppl(sym_Element_3, (ATerm)ATmakeAppl(sym_Name_2, d_15, e_15), f_15, (ATerm) ATempty);
goto label42 ;
}
label42 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm chardata2string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "chardata2string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_14 = NULL;
t = xml_unescape_0_0(sl, t);
if((t == NULL))
goto fail15 ;
if(match_cons(t, sym_Text_1))
{
y_14 = ATgetArgument(t, 0);
}
else
goto fail15 ;
t = y_14;
{
struct str_closure g_164 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(g_164);
t = map_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail15 ;
{
ATerm trm91 = t;
ATerm b_15 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
b_15 = ATgetFirst((ATermList) t);
{
ATerm trm92 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm92) == AT_LIST) && ATisEmpty(trm92))))
goto label41 ;
}
}
else
goto label41 ;
t = b_15;
goto label40 ;
label41 :
t = trm91;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail15 ;
else
goto label40 ;
label40 :
;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm90 = t;
ATerm z_14 = NULL;
if(match_cons(t, sym_Literal_1))
{
z_14 = ATgetArgument(t, 0);
}
else
goto label39 ;
t = z_14;
goto label38 ;
label39 :
t = trm90;
{
ATerm a_15 = NULL;
if(match_cons(t, sym_CDATASection_1))
{
a_15 = ATgetArgument(t, 0);
}
else
goto fail16 ;
t = a_15;
goto label38 ;
}
label38 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_attr_value2string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_attr_value2string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm79 = t;
ATerm trm80 = t;
ATerm w_14 = NULL;
if(match_cons(t, sym_DoubleQuoted_1))
{
w_14 = ATgetArgument(t, 0);
}
else
goto label32 ;
t = (ATerm) ATmakeAppl(sym_Text_1, w_14);
goto label31 ;
label32 :
t = trm80;
{
ATerm x_14 = NULL;
if(match_cons(t, sym_SingleQuoted_1))
{
x_14 = ATgetArgument(t, 0);
}
else
goto label30 ;
t = (ATerm) ATmakeAppl(sym_Text_1, x_14);
goto label31 ;
}
label31 :
;
t = chardata2string_0_0(sl, t);
if((t == NULL))
goto label30 ;
goto label29 ;
label30 :
t = trm79;
{
ATerm v_14 = NULL;
v_14 = t;
{
ATerm trm81 = t;
if(match_cons(t, sym_FromTerm_1))
{
ATerm trm82 = ATgetArgument(t, 0);
}
else
goto label34 ;
goto label33 ;
label34 :
t = trm81;
{
ATerm trm83 = t;
if(match_cons(t, sym_FromStrategy_1))
{
ATerm trm84 = ATgetArgument(t, 0);
}
else
goto label35 ;
goto label33 ;
label35 :
t = trm83;
{
ATerm trm85 = t;
if(match_cons(t, sym_FromApp_1))
{
ATerm trm86 = ATgetArgument(t, 0);
}
else
goto label36 ;
goto label33 ;
label36 :
t = trm85;
{
ATerm trm87 = t;
if(match_cons(t, sym_meta_var_1))
{
ATerm trm88 = ATgetArgument(t, 0);
}
else
goto label37 ;
goto label33 ;
label37 :
t = trm87;
if(match_cons(t, sym_meta_listvar_1))
{
ATerm trm89 = ATgetArgument(t, 0);
goto label33 ;
}
else
goto fail14 ;
}
}
}
label33 :
;
t = v_14;
goto label29 ;
}
}
label29 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm unescape_quot_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unescape_quot_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm65 = t;
ATerm k_14 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm66 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm66) == AT_INT) && (ATgetInt((ATermInt) trm66) == 38))))
goto label28 ;
{
ATerm trm67 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm67) == AT_LIST) && !(ATisEmpty(trm67))))
{
ATerm trm68 = ATgetFirst((ATermList) trm67);
if(!(((ATgetType(trm68) == AT_INT) && (ATgetInt((ATermInt) trm68) == 113))))
goto label28 ;
{
ATerm trm69 = (ATerm) ATgetNext((ATermList) trm67);
if(((ATgetType(trm69) == AT_LIST) && !(ATisEmpty(trm69))))
{
ATerm trm70 = ATgetFirst((ATermList) trm69);
if(!(((ATgetType(trm70) == AT_INT) && (ATgetInt((ATermInt) trm70) == 117))))
goto label28 ;
{
ATerm trm71 = (ATerm) ATgetNext((ATermList) trm69);
if(((ATgetType(trm71) == AT_LIST) && !(ATisEmpty(trm71))))
{
ATerm trm72 = ATgetFirst((ATermList) trm71);
if(!(((ATgetType(trm72) == AT_INT) && (ATgetInt((ATermInt) trm72) == 111))))
goto label28 ;
{
ATerm trm73 = (ATerm) ATgetNext((ATermList) trm71);
if(((ATgetType(trm73) == AT_LIST) && !(ATisEmpty(trm73))))
{
ATerm trm74 = ATgetFirst((ATermList) trm73);
if(!(((ATgetType(trm74) == AT_INT) && (ATgetInt((ATermInt) trm74) == 116))))
goto label28 ;
{
ATerm trm75 = (ATerm) ATgetNext((ATermList) trm73);
if(((ATgetType(trm75) == AT_LIST) && !(ATisEmpty(trm75))))
{
ATerm trm76 = ATgetFirst((ATermList) trm75);
if(!(((ATgetType(trm76) == AT_INT) && (ATgetInt((ATermInt) trm76) == 59))))
goto label28 ;
k_14 = (ATerm) ATgetNext((ATermList) trm75);
}
else
goto label28 ;
}
}
else
goto label28 ;
}
}
else
goto label28 ;
}
}
else
goto label28 ;
}
}
else
goto label28 ;
}
}
else
goto label28 ;
{
ATerm trm77;
trm77 = CheckATermList(k_14);
if((trm77 == NULL))
goto label28 ;
t = (ATerm) ATinsert((ATermList)trm77, term25);
}
goto label27 ;
label28 :
t = trm65;
if(match_cons(t, sym_EntityRef_1))
{
ATerm trm78 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm78) == ATmakeSymbol("quot", 0, ATtrue))))
goto fail13 ;
}
else
goto fail13 ;
t = term29;
goto label27 ;
label27 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm unescape_apos_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unescape_apos_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm51 = t;
ATerm j_14 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm52 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm52) == AT_INT) && (ATgetInt((ATermInt) trm52) == 38))))
goto label26 ;
{
ATerm trm53 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm53) == AT_LIST) && !(ATisEmpty(trm53))))
{
ATerm trm54 = ATgetFirst((ATermList) trm53);
if(!(((ATgetType(trm54) == AT_INT) && (ATgetInt((ATermInt) trm54) == 97))))
goto label26 ;
{
ATerm trm55 = (ATerm) ATgetNext((ATermList) trm53);
if(((ATgetType(trm55) == AT_LIST) && !(ATisEmpty(trm55))))
{
ATerm trm56 = ATgetFirst((ATermList) trm55);
if(!(((ATgetType(trm56) == AT_INT) && (ATgetInt((ATermInt) trm56) == 112))))
goto label26 ;
{
ATerm trm57 = (ATerm) ATgetNext((ATermList) trm55);
if(((ATgetType(trm57) == AT_LIST) && !(ATisEmpty(trm57))))
{
ATerm trm58 = ATgetFirst((ATermList) trm57);
if(!(((ATgetType(trm58) == AT_INT) && (ATgetInt((ATermInt) trm58) == 111))))
goto label26 ;
{
ATerm trm59 = (ATerm) ATgetNext((ATermList) trm57);
if(((ATgetType(trm59) == AT_LIST) && !(ATisEmpty(trm59))))
{
ATerm trm60 = ATgetFirst((ATermList) trm59);
if(!(((ATgetType(trm60) == AT_INT) && (ATgetInt((ATermInt) trm60) == 115))))
goto label26 ;
{
ATerm trm61 = (ATerm) ATgetNext((ATermList) trm59);
if(((ATgetType(trm61) == AT_LIST) && !(ATisEmpty(trm61))))
{
ATerm trm62 = ATgetFirst((ATermList) trm61);
if(!(((ATgetType(trm62) == AT_INT) && (ATgetInt((ATermInt) trm62) == 59))))
goto label26 ;
j_14 = (ATerm) ATgetNext((ATermList) trm61);
}
else
goto label26 ;
}
}
else
goto label26 ;
}
}
else
goto label26 ;
}
}
else
goto label26 ;
}
}
else
goto label26 ;
}
}
else
goto label26 ;
{
ATerm trm63;
trm63 = CheckATermList(j_14);
if((trm63 == NULL))
goto label26 ;
t = (ATerm) ATinsert((ATermList)trm63, term19);
}
goto label25 ;
label26 :
t = trm51;
if(match_cons(t, sym_EntityRef_1))
{
ATerm trm64 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm64) == ATmakeSymbol("apos", 0, ATtrue))))
goto fail12 ;
}
else
goto fail12 ;
t = term23;
goto label25 ;
label25 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm unescape_gt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unescape_gt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm41 = t;
ATerm i_14 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm42 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm42) == AT_INT) && (ATgetInt((ATermInt) trm42) == 38))))
goto label24 ;
{
ATerm trm43 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm43) == AT_LIST) && !(ATisEmpty(trm43))))
{
ATerm trm44 = ATgetFirst((ATermList) trm43);
if(!(((ATgetType(trm44) == AT_INT) && (ATgetInt((ATermInt) trm44) == 103))))
goto label24 ;
{
ATerm trm45 = (ATerm) ATgetNext((ATermList) trm43);
if(((ATgetType(trm45) == AT_LIST) && !(ATisEmpty(trm45))))
{
ATerm trm46 = ATgetFirst((ATermList) trm45);
if(!(((ATgetType(trm46) == AT_INT) && (ATgetInt((ATermInt) trm46) == 116))))
goto label24 ;
{
ATerm trm47 = (ATerm) ATgetNext((ATermList) trm45);
if(((ATgetType(trm47) == AT_LIST) && !(ATisEmpty(trm47))))
{
ATerm trm48 = ATgetFirst((ATermList) trm47);
if(!(((ATgetType(trm48) == AT_INT) && (ATgetInt((ATermInt) trm48) == 59))))
goto label24 ;
i_14 = (ATerm) ATgetNext((ATermList) trm47);
}
else
goto label24 ;
}
}
else
goto label24 ;
}
}
else
goto label24 ;
}
}
else
goto label24 ;
{
ATerm trm49;
trm49 = CheckATermList(i_14);
if((trm49 == NULL))
goto label24 ;
t = (ATerm) ATinsert((ATermList)trm49, term13);
}
goto label23 ;
label24 :
t = trm41;
if(match_cons(t, sym_EntityRef_1))
{
ATerm trm50 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm50) == ATmakeSymbol("gt", 0, ATtrue))))
goto fail11 ;
}
else
goto fail11 ;
t = term17;
goto label23 ;
label23 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm unescape_lt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unescape_lt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm31 = t;
ATerm h_14 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm32 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm32) == AT_INT) && (ATgetInt((ATermInt) trm32) == 38))))
goto label22 ;
{
ATerm trm33 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm33) == AT_LIST) && !(ATisEmpty(trm33))))
{
ATerm trm34 = ATgetFirst((ATermList) trm33);
if(!(((ATgetType(trm34) == AT_INT) && (ATgetInt((ATermInt) trm34) == 108))))
goto label22 ;
{
ATerm trm35 = (ATerm) ATgetNext((ATermList) trm33);
if(((ATgetType(trm35) == AT_LIST) && !(ATisEmpty(trm35))))
{
ATerm trm36 = ATgetFirst((ATermList) trm35);
if(!(((ATgetType(trm36) == AT_INT) && (ATgetInt((ATermInt) trm36) == 116))))
goto label22 ;
{
ATerm trm37 = (ATerm) ATgetNext((ATermList) trm35);
if(((ATgetType(trm37) == AT_LIST) && !(ATisEmpty(trm37))))
{
ATerm trm38 = ATgetFirst((ATermList) trm37);
if(!(((ATgetType(trm38) == AT_INT) && (ATgetInt((ATermInt) trm38) == 59))))
goto label22 ;
h_14 = (ATerm) ATgetNext((ATermList) trm37);
}
else
goto label22 ;
}
}
else
goto label22 ;
}
}
else
goto label22 ;
}
}
else
goto label22 ;
{
ATerm trm39;
trm39 = CheckATermList(h_14);
if((trm39 == NULL))
goto label22 ;
t = (ATerm) ATinsert((ATermList)trm39, term7);
}
goto label21 ;
label22 :
t = trm31;
if(match_cons(t, sym_EntityRef_1))
{
ATerm trm40 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm40) == ATmakeSymbol("lt", 0, ATtrue))))
goto fail10 ;
}
else
goto fail10 ;
t = term11;
goto label21 ;
label21 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm unescape_amp_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unescape_amp_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm19 = t;
ATerm g_14 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm20 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm20) == AT_INT) && (ATgetInt((ATermInt) trm20) == 38))))
goto label20 ;
{
ATerm trm21 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm21) == AT_LIST) && !(ATisEmpty(trm21))))
{
ATerm trm22 = ATgetFirst((ATermList) trm21);
if(!(((ATgetType(trm22) == AT_INT) && (ATgetInt((ATermInt) trm22) == 97))))
goto label20 ;
{
ATerm trm23 = (ATerm) ATgetNext((ATermList) trm21);
if(((ATgetType(trm23) == AT_LIST) && !(ATisEmpty(trm23))))
{
ATerm trm24 = ATgetFirst((ATermList) trm23);
if(!(((ATgetType(trm24) == AT_INT) && (ATgetInt((ATermInt) trm24) == 109))))
goto label20 ;
{
ATerm trm25 = (ATerm) ATgetNext((ATermList) trm23);
if(((ATgetType(trm25) == AT_LIST) && !(ATisEmpty(trm25))))
{
ATerm trm26 = ATgetFirst((ATermList) trm25);
if(!(((ATgetType(trm26) == AT_INT) && (ATgetInt((ATermInt) trm26) == 112))))
goto label20 ;
{
ATerm trm27 = (ATerm) ATgetNext((ATermList) trm25);
if(((ATgetType(trm27) == AT_LIST) && !(ATisEmpty(trm27))))
{
ATerm trm28 = ATgetFirst((ATermList) trm27);
if(!(((ATgetType(trm28) == AT_INT) && (ATgetInt((ATermInt) trm28) == 59))))
goto label20 ;
g_14 = (ATerm) ATgetNext((ATermList) trm27);
}
else
goto label20 ;
}
}
else
goto label20 ;
}
}
else
goto label20 ;
}
}
else
goto label20 ;
}
}
else
goto label20 ;
{
ATerm trm29;
trm29 = CheckATermList(g_14);
if((trm29 == NULL))
goto label20 ;
t = (ATerm) ATinsert((ATermList)trm29, term1);
}
goto label19 ;
label20 :
t = trm19;
if(match_cons(t, sym_EntityRef_1))
{
ATerm trm30 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm30) == ATmakeSymbol("amp", 0, ATtrue))))
goto fail9 ;
}
else
goto fail9 ;
t = term5;
goto label19 ;
label19 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_unescape_chars_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_unescape_chars_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = f_14(&(frame), t);
if((t == NULL))
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm f_14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "f_14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_164 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(f_164);
t = try_1_0(sl_up(sl), lifted6_cl, t);
if((t == NULL))
goto fail5 ;
{
ATerm trm16 = t;
ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
ATerm trm17;
trm17 = (ATerm) ATgetAnnotations(t);
if((trm17 == NULL))
trm17 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
a_14 = ATgetFirst((ATermList) t);
b_14 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label18 ;
e_14 = trm17;
t = a_14;
c_14 = t;
t = b_14;
t = f_14(sl, t);
if((t == NULL))
goto label18 ;
d_14 = t;
{
ATerm trm18;
trm18 = CheckATermList(d_14);
if((trm18 == NULL))
goto label18 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm18, c_14), e_14);
}
goto label17 ;
label18 :
t = trm16;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label17 ;
else
goto fail5 ;
label17 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm10 = t;
t = unescape_amp_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm10;
{
ATerm trm11 = t;
t = unescape_lt_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label12 ;
goto label10 ;
label12 :
t = trm11;
{
ATerm trm12 = t;
t = unescape_gt_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label13 ;
goto label10 ;
label13 :
t = trm12;
{
ATerm trm13 = t;
t = unescape_apos_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label14 ;
goto label10 ;
label14 :
t = trm13;
{
ATerm trm14 = t;
t = unescape_quot_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label15 ;
goto label10 ;
label15 :
t = trm14;
{
ATerm trm15 = t;
ATerm e_162 = NULL,f_162 = NULL,g_162 = NULL;
if(match_cons(t, sym_DecCharRef_1))
{
e_162 = ATgetArgument(t, 0);
}
else
goto label16 ;
g_162 = t;
t = e_162;
{
struct str_closure c_164 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(c_164);
t = string_as_chars_1_0(sl_up(sl_up(sl)), lifted7_cl, t);
if((t == NULL))
goto label16 ;
f_162 = t;
t = g_162;
t = (ATerm) ATmakeAppl(sym_Literal_1, f_162);
}
goto label10 ;
label16 :
t = trm15;
{
ATerm j_162 = NULL,k_162 = NULL,l_162 = NULL;
if(match_cons(t, sym_HexCharRef_1))
{
j_162 = ATgetArgument(t, 0);
}
else
goto fail6 ;
l_162 = t;
t = j_162;
{
struct str_closure e_164 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(e_164);
t = string_as_chars_1_0(sl_up(sl_up(sl)), lifted9_cl, t);
if((t == NULL))
goto fail6 ;
k_162 = t;
t = l_162;
t = (ATerm) ATmakeAppl(sym_Literal_1, k_162);
goto label10 ;
}
}
}
}
}
}
}
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_162 = NULL,n_162 = NULL;
struct str_closure d_164 = { &(is_hexnum_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted10_cl = &(d_164);
t = SRTS_all(sl_up(sl_up(sl_up(sl))), lifted10_cl, t);
if((t == NULL))
goto fail8 ;
t = hex_chars_to_int_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail8 ;
n_162 = t;
m_162 = t;
t = (ATerm) ATinsert(ATempty, m_162);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_162 = NULL,i_162 = NULL;
struct str_closure b_164 = { &(is_num_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted8_cl = &(b_164);
t = SRTS_all(sl_up(sl_up(sl_up(sl))), lifted8_cl, t);
if((t == NULL))
goto fail7 ;
t = dec_chars_to_int_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail7 ;
i_162 = t;
h_162 = t;
t = (ATerm) ATinsert(ATempty, h_162);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_unescape_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_unescape_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
struct str_closure v_163 = { &(xml_unescape_chars_0_0) , sl };
StrCL lifted0_cl = &(v_163);
t = string_as_chars_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm o_161 = NULL,p_161 = NULL,q_161 = NULL;
ATerm trm1;
trm1 = (ATerm) ATgetAnnotations(t);
if((trm1 == NULL))
trm1 = (ATerm) ATempty;
if(match_cons(t, sym_Text_1))
{
p_161 = ATgetArgument(t, 0);
}
else
goto fail0 ;
o_161 = trm1;
t = p_161;
{
struct str_closure a_164 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(a_164);
t = map_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail0 ;
q_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Text_1, q_161), o_161);
goto label0 ;
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
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm2 = t;
if(match_cons(t, sym_Literal_1))
{
ATerm trm3 = ATgetArgument(t, 0);
}
else
goto label3 ;
goto label2 ;
label3 :
t = trm2;
{
ATerm trm4 = t;
t = unescape_amp_0_0(sl_up(sl), t);
if((t == NULL))
goto label4 ;
goto label2 ;
label4 :
t = trm4;
{
ATerm trm5 = t;
t = unescape_lt_0_0(sl_up(sl), t);
if((t == NULL))
goto label5 ;
goto label2 ;
label5 :
t = trm5;
{
ATerm trm6 = t;
t = unescape_gt_0_0(sl_up(sl), t);
if((t == NULL))
goto label6 ;
goto label2 ;
label6 :
t = trm6;
{
ATerm trm7 = t;
t = unescape_apos_0_0(sl_up(sl), t);
if((t == NULL))
goto label7 ;
goto label2 ;
label7 :
t = trm7;
{
ATerm trm8 = t;
t = unescape_quot_0_0(sl_up(sl), t);
if((t == NULL))
goto label8 ;
goto label2 ;
label8 :
t = trm8;
{
ATerm trm9 = t;
ATerm t_161 = NULL,u_161 = NULL,v_161 = NULL;
if(match_cons(t, sym_DecCharRef_1))
{
t_161 = ATgetArgument(t, 0);
}
else
goto label9 ;
v_161 = t;
t = t_161;
{
struct str_closure x_163 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(x_163);
t = string_as_chars_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto label9 ;
u_161 = t;
t = v_161;
t = (ATerm) ATmakeAppl(sym_Literal_1, u_161);
}
goto label2 ;
label9 :
t = trm9;
{
ATerm y_161 = NULL,a_162 = NULL,b_162 = NULL;
if(match_cons(t, sym_HexCharRef_1))
{
y_161 = ATgetArgument(t, 0);
}
else
goto fail1 ;
b_162 = t;
t = y_161;
{
struct str_closure z_163 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(z_163);
t = string_as_chars_1_0(sl_up(sl), lifted4_cl, t);
if((t == NULL))
goto fail1 ;
a_162 = t;
t = b_162;
t = (ATerm) ATmakeAppl(sym_Literal_1, a_162);
goto label2 ;
}
}
}
}
}
}
}
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_162 = NULL,d_162 = NULL;
struct str_closure y_163 = { &(is_hexnum_0_0) , sl_up(sl_up(sl)) };
StrCL lifted5_cl = &(y_163);
t = SRTS_all(sl_up(sl_up(sl)), lifted5_cl, t);
if((t == NULL))
goto fail3 ;
t = hex_chars_to_int_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
d_162 = t;
c_162 = t;
t = (ATerm) ATinsert(ATempty, c_162);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_161 = NULL,x_161 = NULL;
struct str_closure w_163 = { &(is_num_0_0) , sl_up(sl_up(sl)) };
StrCL lifted3_cl = &(w_163);
t = SRTS_all(sl_up(sl_up(sl)), lifted3_cl, t);
if((t == NULL))
goto fail2 ;
t = dec_chars_to_int_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail2 ;
x_161 = t;
w_161 = t;
t = (ATerm) ATinsert(ATempty, w_161);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 89));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(getfirst_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("getfirst_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_lookup_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_lookup_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_scope_1_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_scope_1_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(alltd_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alltd_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdownS_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdownS_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fatal_error_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fatal_error_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dec_chars_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dec_chars_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hex_chars_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hex_chars_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_num_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_num_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_hexnum_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_hexnum_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_as_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_as_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose3_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose3_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aux_DefaultNamespace_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aux_DefaultNamespace_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(DefaultNamespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DefaultNamespace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ResolvePrefix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ResolvePrefix_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Module_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Module_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Attribute_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Attribute_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Element_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Element_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(e_18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("e_18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(stratego_xml_apply_namespaces_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stratego_xml_apply_namespaces_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_Conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_Conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_anti_quotation_helper_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_anti_quotation_helper_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_fragment2xml_info_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_fragment2xml_info_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(w_17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("w_17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_fragments2xml_info_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_fragments2xml_info_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(stratego_xml2xml_info_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stratego_xml2xml_info_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_prefix_namespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_prefix_namespace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_default_namespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_default_namespace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remember_default_namespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remember_default_namespace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted33);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted33", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted32);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted32", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_namespace_decls_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_namespace_decls_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_apply_namespaces_element_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_apply_namespaces_element_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_Attribute_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_Attribute_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_well_formed_Element_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_well_formed_Element_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_Element_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_Element_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(chardata2string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("chardata2string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_attr_value2string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_attr_value2string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unescape_quot_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unescape_quot_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unescape_apos_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unescape_apos_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unescape_gt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unescape_gt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unescape_lt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unescape_lt_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unescape_amp_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unescape_amp_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(f_14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("f_14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_unescape_chars_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_unescape_chars_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_unescape_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_unescape_0_0", 0, ATtrue)), &(closures[closures_index]));
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
