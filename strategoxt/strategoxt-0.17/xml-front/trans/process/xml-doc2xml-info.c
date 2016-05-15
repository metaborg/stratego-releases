#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
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
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
}
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
term36 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term37));
term37 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term38));
term38 = term37;
ATprotect(&(term39));
term39 = (ATerm) ATmakeAppl(ATmakeSymbol("631e4cf4a3bba97a1bc0d7064ea6206e", 0, ATtrue));
ATprotect(&(term40));
term40 = term39;
ATprotect(&(term41));
term41 = (ATerm) ATmakeAppl(ATmakeSymbol("ResolvePrefix", 0, ATtrue));
ATprotect(&(term42));
term42 = term41;
ATprotect(&(term43));
term43 = (ATerm) ATmakeAppl(ATmakeSymbol("xml", 0, ATtrue));
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("6f0185abd1e576732fc20640db670c73", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("debug: found namespace declaration", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("71ee60403e203dcc516502fc050dac8e", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("debug: default namespace declaration", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("9ad0dc74b1a5294706a7dc5e5d1e11fd", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = term36;
ATprotect(&(term57));
term57 = (ATerm) ATmakeAppl(ATmakeSymbol("error: cannot resolve the namespace of prefix ", 0, ATtrue));
ATprotect(&(term58));
term58 = term57;
ATprotect(&(term59));
term59 = (ATerm) ATmakeAppl(ATmakeSymbol("http://www.w3.org/XML/1998/namespace", 0, ATtrue));
ATprotect(&(term60));
term60 = term59;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm fetch_elem_1_0 (StrSL sl, StrCL x_67, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL q_67, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL v_64, ATerm t);
ATerm getfirst_1_0 (StrSL sl, StrCL d_64, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm f_49, ATerm g_49, ATerm h_49, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm y_48, ATerm z_48, ATerm t);
ATerm dr_scope_1_1 (StrSL sl, StrCL f_48, ATerm e_48, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL u_45, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL c_39, ATerm t);
ATerm fatal_error_0_0 (StrSL sl, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL m_36, ATerm t);
ATerm dec_chars_to_int_0_0 (StrSL sl, ATerm t);
ATerm hex_chars_to_int_0_0 (StrSL sl, ATerm t);
ATerm is_num_0_0 (StrSL sl, ATerm t);
ATerm is_hexnum_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL m_33, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL w_30, ATerm t);
ATerm if_verbose3_1_0 (StrSL sl, StrCL w_27, ATerm t);
ATerm aux_DefaultNamespace_0_1 (StrSL sl, ATerm f_23, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
ATerm DefaultNamespace_0_0 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
ATerm ResolvePrefix_0_0 (StrSL sl, ATerm t);
ATerm Attribute_2_0 (StrSL sl, StrCL i_8, StrCL j_8, ATerm t);
ATerm Element_3_0 (StrSL sl, StrCL e_8, StrCL f_8, StrCL g_8, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm apply_prefix_namespace_0_0 (StrSL sl, ATerm t);
ATerm apply_default_namespace_0_0 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
ATerm remember_default_namespace_0_0 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm collect_namespace_decls_0_0 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
ATerm xml_apply_namespaces_element_1_0 (StrSL sl, StrCL t_6, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm s_6 (StrSL sl, ATerm t);
ATerm xml_apply_namespaces_element_0_0 (StrSL sl, ATerm t);
ATerm xml_apply_namespaces_0_0 (StrSL sl, ATerm t);
ATerm rewrite_Attribute_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm rewrite_well_formed_Element_0_0 (StrSL sl, ATerm t);
ATerm rewrite_Element_0_0 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm xml_doc2xml_info_0_0 (StrSL sl, ATerm t);
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
static ATerm n_4 (StrSL sl, ATerm t);
ATerm xml_unescape_chars_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm xml_unescape_0_0 (StrSL sl, ATerm t);
ATerm aux_DefaultNamespace_0_1 (StrSL sl, ATerm f_23, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aux_DefaultNamespace_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm148 = t;
ATerm t_22 = NULL;
if(!((ATgetSymbol(t) == ATmakeSymbol("631e4cf4a3bba97a1bc0d7064ea6206e", 0, ATtrue))))
goto label60 ;
t_22 = t;
t = f_23;
t = t_22;
t = term51;
goto label59 ;
label60 :
t = trm148;
{
ATerm q_22 = NULL,r_22 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm149 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm149) == ATmakeSymbol("9ad0dc74b1a5294706a7dc5e5d1e11fd", 0, ATtrue))))
goto fail59 ;
q_22 = ATgetArgument(t, 1);
}
else
goto fail59 ;
r_22 = t;
t = f_23;
t = r_22;
t = q_22;
goto label59 ;
}
label59 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
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
ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
sl_init_var(0, i_22);
{
struct str_closure n_103 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(n_103);
if((i_22 == NULL))
{
i_22 = t;
}
else
if((i_22 != t))
goto fail57 ;
if(!(match_cons(t, sym__0)))
goto fail57 ;
k_22 = t;
n_22 = t;
t = term35;
l_22 = t;
t = n_22;
o_22 = t;
t = (ATerm) SRTS_setAnnotations(term36, (ATerm) ATinsert(ATempty, term38));
m_22 = t;
t = o_22;
t = dr_lookup_rule_0_2(sl, l_22, m_22, t);
if((t == NULL))
goto fail57 ;
j_22 = t;
t = k_22;
t = j_22;
t = fetch_elem_1_0(sl, lifted43_cl, t);
if((t == NULL))
goto fail57 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail58 ;
else
{
t = aux_DefaultNamespace_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
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
ATerm trm146 = t;
ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
sl_init_var(0, c_18);
{
struct str_closure l_103 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(l_103);
if((c_18 == NULL))
{
c_18 = t;
}
else
if((c_18 != t))
goto label58 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("xml", 0, ATtrue))))
goto label58 ;
e_18 = t;
h_18 = t;
t = term42;
f_18 = t;
t = h_18;
i_18 = t;
t = (ATerm) SRTS_setAnnotations(term43, (ATerm) ATinsert(ATempty, term38));
g_18 = t;
t = i_18;
t = dr_lookup_rule_0_2(sl, f_18, g_18, t);
if((t == NULL))
goto label58 ;
d_18 = t;
t = e_18;
t = d_18;
t = fetch_elem_1_0(sl, lifted41_cl, t);
if((t == NULL))
goto label58 ;
}
goto label57 ;
label58 :
t = trm146;
{
ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
sl_init_var(1, w_17);
sl_init_var(2, x_17);
{
struct str_closure m_103 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(m_103);
if((x_17 == NULL))
{
x_17 = t;
}
else
if((x_17 != t))
goto fail54 ;
if((w_17 == NULL))
{
w_17 = t;
}
else
if((w_17 != t))
goto fail54 ;
z_17 = t;
b_18 = t;
t = term42;
a_18 = t;
t = b_18;
if((x_17 == NULL))
goto fail54 ;
else
{
t = dr_lookup_rule_0_2(sl, a_18, x_17, t);
if((t == NULL))
goto fail54 ;
}
y_17 = t;
t = z_17;
t = y_17;
t = fetch_elem_1_0(sl, lifted42_cl, t);
if((t == NULL))
goto fail54 ;
else
goto label57 ;
}
}
label57 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_101 = NULL,o_101 = NULL,r_101 = NULL,s_101 = NULL,p_101 = NULL,q_101 = NULL;
r_101 = t;
if((sl_readvar(1, sl) == NULL))
goto fail56 ;
else
{
t = sl_readvar(1, sl);
}
n_101 = t;
t = r_101;
s_101 = t;
if((sl_readvar(2, sl) == NULL))
goto fail56 ;
else
{
t = sl_readvar(2, sl);
}
o_101 = t;
t = s_101;
if(match_cons(t, sym__2))
{
ATerm trm147 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm147) == ATmakeSymbol("71ee60403e203dcc516502fc050dac8e", 0, ATtrue))))
goto fail56 ;
p_101 = ATgetArgument(t, 1);
}
else
goto fail56 ;
q_101 = t;
t = o_101;
t = q_101;
t = p_101;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_101 = NULL,m_101 = NULL,l_101 = NULL;
m_101 = t;
if((sl_readvar(0, sl) == NULL))
goto fail55 ;
else
{
t = sl_readvar(0, sl);
}
k_101 = t;
t = m_101;
if(!((ATgetSymbol(t) == ATmakeSymbol("6f0185abd1e576732fc20640db670c73", 0, ATtrue))))
goto fail55 ;
l_101 = t;
t = k_101;
t = l_101;
t = term60;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
ATerm Attribute_2_0 (StrSL sl, StrCL i_8, StrCL j_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Attribute_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_94 = NULL,e_94 = NULL,f_94 = NULL,h_94 = NULL,i_94 = NULL;
ATerm trm145;
trm145 = (ATerm) ATgetAnnotations(t);
if((trm145 == NULL))
trm145 = (ATerm) ATempty;
if(match_cons(t, sym_Attribute_2))
{
e_94 = ATgetArgument(t, 0);
f_94 = ATgetArgument(t, 1);
}
else
goto fail53 ;
g_94 = trm145;
t = e_94;
t = cl_fun(i_8)(cl_sl(i_8), t);
if((t == NULL))
goto fail53 ;
h_94 = t;
t = f_94;
t = cl_fun(j_8)(cl_sl(j_8), t);
if((t == NULL))
goto fail53 ;
i_94 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Attribute_2, h_94, i_94), g_94);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm Element_3_0 (StrSL sl, StrCL e_8, StrCL f_8, StrCL g_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Element_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL;
ATerm trm144;
trm144 = (ATerm) ATgetAnnotations(t);
if((trm144 == NULL))
trm144 = (ATerm) ATempty;
if(match_cons(t, sym_Element_3))
{
u_93 = ATgetArgument(t, 0);
v_93 = ATgetArgument(t, 1);
w_93 = ATgetArgument(t, 2);
}
else
goto fail52 ;
x_93 = trm144;
t = u_93;
t = cl_fun(e_8)(cl_sl(e_8), t);
if((t == NULL))
goto fail52 ;
y_93 = t;
t = v_93;
t = cl_fun(f_8)(cl_sl(f_8), t);
if((t == NULL))
goto fail52 ;
z_93 = t;
t = w_93;
t = cl_fun(g_8)(cl_sl(g_8), t);
if((t == NULL))
goto fail52 ;
a_94 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Element_3, y_93, z_93, a_94), x_93);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_103 = { &(xml_doc2xml_info_0_0) , sl };
StrCL lifted40_cl = &(k_103);
t = io_wrap_1_0(sl, lifted40_cl, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm apply_prefix_namespace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "apply_prefix_namespace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
if(match_cons(t, sym_Name_2))
{
ATerm trm141 = ATgetArgument(t, 0);
if(match_cons(trm141, sym_Some_1))
{
ATerm trm142 = ATgetArgument(trm141, 0);
if(match_cons(trm142, sym_Prefix_1))
{
y_7 = ATgetArgument(trm142, 0);
}
else
goto fail50 ;
}
else
goto fail50 ;
x_7 = ATgetArgument(t, 1);
}
else
goto fail50 ;
a_8 = t;
t = y_7;
{
ATerm trm143 = t;
t = ResolvePrefix_0_0(sl, t);
if((t == NULL))
goto label56 ;
goto label55 ;
label56 :
t = trm143;
{
ATerm b_8 = NULL,c_8 = NULL;
c_8 = t;
b_8 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, b_8), term58);
t = fatal_error_0_0(sl, t);
if((t == NULL))
goto fail50 ;
else
goto label55 ;
}
label55 :
;
z_7 = t;
t = a_8;
t = (ATerm) ATmakeAppl(sym_Name_2, (ATerm)ATmakeAppl(sym_Some_1, z_7), x_7);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm apply_default_namespace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "apply_default_namespace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
if(match_cons(t, sym_Name_2))
{
ATerm trm140 = ATgetArgument(t, 0);
if(!(match_cons(trm140, sym_None_0)))
goto fail49 ;
u_7 = ATgetArgument(t, 1);
}
else
goto fail49 ;
w_7 = t;
t = term56;
t = DefaultNamespace_0_0(sl, t);
if((t == NULL))
goto fail49 ;
v_7 = t;
t = w_7;
t = (ATerm) ATmakeAppl(sym_Name_2, v_7, u_7);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm remember_default_namespace_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "remember_default_namespace_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_7 = NULL,l_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
ATerm trm139 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto label54 ;
t = term51;
goto label53 ;
label54 :
t = trm139;
{
ATerm m_7 = NULL,n_7 = NULL;
n_7 = t;
m_7 = t;
t = (ATerm) ATmakeAppl(sym_Some_1, m_7);
goto label53 ;
}
label53 :
;
k_7 = t;
{
struct str_closure j_103 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(j_103);
t = if_verbose3_1_0(sl, lifted38_cl, t);
if((t == NULL))
goto fail46 ;
l_7 = t;
r_7 = t;
t = term35;
o_7 = t;
t = r_7;
s_7 = t;
t = (ATerm) SRTS_setAnnotations(term36, (ATerm) ATinsert(ATempty, term38));
p_7 = t;
t = s_7;
t_7 = t;
t = (ATerm) ATmakeAppl(sym__2, term55, k_7);
q_7 = t;
t = t_7;
t = dr_set_rule_0_3(sl, o_7, p_7, q_7, t);
if((t == NULL))
goto fail46 ;
t = l_7;
}
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
struct str_closure h_103 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(h_103);
t = debug_1_0(sl_up(sl), lifted39_cl, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm collect_namespace_decls_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "collect_namespace_decls_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_7 = NULL,b_7 = NULL;
a_7 = t;
{
struct str_closure c_103 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(c_103);
t = try_1_0(sl, lifted30_cl, t);
if((t == NULL))
goto fail39 ;
t = a_7;
b_7 = t;
{
struct str_closure d_103 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(d_103);
t = filter_1_0(sl, lifted34_cl, t);
if((t == NULL))
goto fail39 ;
{
struct str_closure g_103 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(g_103);
t = map_1_0(sl, lifted35_cl, t);
if((t == NULL))
goto fail39 ;
t = b_7;
}
}
}
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
sl_vars(2);
{
ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
sl_init_var(0, c_7);
sl_init_var(1, d_7);
if(match_cons(t, sym_Attribute_2))
{
ATerm trm135 = ATgetArgument(t, 0);
if(match_cons(trm135, sym_Name_2))
{
ATerm trm136 = ATgetArgument(trm135, 0);
if(match_cons(trm136, sym_Some_1))
{
ATerm trm137 = ATgetArgument(trm136, 0);
if(match_cons(trm137, sym_Prefix_1))
{
ATerm trm138 = ATgetArgument(trm137, 0);
if(!((ATgetSymbol(trm138) == ATmakeSymbol("xmlns", 0, ATtrue))))
goto fail43 ;
}
else
goto fail43 ;
}
else
goto fail43 ;
if((c_7 == NULL))
{
c_7 = ATgetArgument(trm135, 1);
}
else
if((c_7 != ATgetArgument(trm135, 1)))
goto fail43 ;
}
else
goto fail43 ;
if((d_7 == NULL))
{
d_7 = ATgetArgument(t, 1);
}
else
if((d_7 != ATgetArgument(t, 1)))
goto fail43 ;
}
else
goto fail43 ;
{
struct str_closure f_103 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(f_103);
t = if_verbose3_1_0(sl_up(sl), lifted36_cl, t);
if((t == NULL))
goto fail43 ;
e_7 = t;
h_7 = t;
t = term42;
f_7 = t;
t = h_7;
i_7 = t;
if((d_7 == NULL))
goto fail43 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term49, d_7);
}
g_7 = t;
t = i_7;
if((c_7 == NULL))
goto fail43 ;
else
{
t = dr_set_rule_0_3(sl_up(sl), f_7, c_7, g_7, t);
if((t == NULL))
goto fail43 ;
}
t = e_7;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_103 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(e_103);
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail44 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl));
}
t = debug_1_0(sl_up(sl_up(sl)), lifted37_cl, t);
if((t == NULL))
goto fail44 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Attribute_2))
{
ATerm trm129 = ATgetArgument(t, 0);
if(match_cons(trm129, sym_Name_2))
{
ATerm trm130 = ATgetArgument(trm129, 0);
if(match_cons(trm130, sym_Some_1))
{
ATerm trm131 = ATgetArgument(trm130, 0);
if(match_cons(trm131, sym_Prefix_1))
{
ATerm trm132 = ATgetArgument(trm131, 0);
if(!((ATgetSymbol(trm132) == ATmakeSymbol("xmlns", 0, ATtrue))))
goto fail42 ;
}
else
goto fail42 ;
}
else
goto fail42 ;
{
ATerm trm133 = ATgetArgument(trm129, 1);
}
}
else
goto fail42 ;
{
ATerm trm134 = ATgetArgument(t, 1);
}
}
else
goto fail42 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_102 = { &(_Id) , sl_up(sl) };
StrCL lifted32_cl = &(z_102);
struct str_closure a_103 = { &(remember_default_namespace_0_0) , sl_up(sl) };
StrCL lifted33_cl = &(a_103);
struct str_closure b_103 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(b_103);
t = getfirst_1_0(sl_up(sl), lifted31_cl, t);
if((t == NULL))
goto fail40 ;
t = Attribute_2_0(sl_up(sl), lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_Attribute_2))
{
ATerm trm125 = ATgetArgument(t, 0);
if(match_cons(trm125, sym_Name_2))
{
ATerm trm126 = ATgetArgument(trm125, 0);
if(!(match_cons(trm126, sym_None_0)))
goto fail41 ;
{
ATerm trm127 = ATgetArgument(trm125, 1);
if(!((ATgetSymbol(trm127) == ATmakeSymbol("xmlns", 0, ATtrue))))
goto fail41 ;
}
}
else
goto fail41 ;
{
ATerm trm128 = ATgetArgument(t, 1);
}
}
else
goto fail41 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_apply_namespaces_element_1_0 (StrSL sl, StrCL t_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_apply_namespaces_element_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, t_6);
{
ATerm u_6 = NULL,v_6 = NULL;
struct str_closure y_102 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(y_102);
v_6 = t;
t = term42;
u_6 = t;
t = v_6;
t = dr_scope_1_1(sl, lifted18_cl, u_6, t);
if((t == NULL))
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_6 = NULL,x_6 = NULL;
struct str_closure x_102 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(x_102);
x_6 = t;
t = term35;
w_6 = t;
t = x_6;
t = dr_scope_1_1(sl_up(sl), lifted19_cl, w_6, t);
if((t == NULL))
goto fail31 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_102 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(r_102);
struct str_closure s_102 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(s_102);
struct str_closure u_102 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted20_cl = &(u_102);
struct str_closure v_102 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(v_102);
struct str_closure w_102 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted23_cl = &(w_102);
t = Element_3_0(sl_up(sl_up(sl)), lifted20_cl, lifted21_cl, lifted23_cl, t);
if((t == NULL))
goto fail32 ;
t = Element_3_0(sl_up(sl_up(sl)), lifted24_cl, lifted25_cl, sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail32 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_102 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(t_102);
t = collect_namespace_decls_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail37 ;
t = filter_1_0(sl_up(sl_up(sl_up(sl))), lifted22_cl, t);
if((t == NULL))
goto fail37 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm113 = t;
ATerm trm114 = t;
if(match_cons(t, sym_Attribute_2))
{
ATerm trm115 = ATgetArgument(t, 0);
if(match_cons(trm115, sym_Name_2))
{
ATerm trm116 = ATgetArgument(trm115, 0);
if(match_cons(trm116, sym_Some_1))
{
ATerm trm117 = ATgetArgument(trm116, 0);
if(match_cons(trm117, sym_Prefix_1))
{
ATerm trm118 = ATgetArgument(trm117, 0);
if(!((ATgetSymbol(trm118) == ATmakeSymbol("xmlns", 0, ATtrue))))
goto label52 ;
}
else
goto label52 ;
}
else
goto label52 ;
{
ATerm trm119 = ATgetArgument(trm115, 1);
}
}
else
goto label52 ;
{
ATerm trm120 = ATgetArgument(t, 1);
}
}
else
goto label52 ;
goto label51 ;
label52 :
t = trm114;
if(match_cons(t, sym_Attribute_2))
{
ATerm trm121 = ATgetArgument(t, 0);
if(match_cons(trm121, sym_Name_2))
{
ATerm trm122 = ATgetArgument(trm121, 0);
if(!(match_cons(trm122, sym_None_0)))
goto label50 ;
{
ATerm trm123 = ATgetArgument(trm121, 1);
if(!((ATgetSymbol(trm123) == ATmakeSymbol("xmlns", 0, ATtrue))))
goto label50 ;
}
}
else
goto label50 ;
{
ATerm trm124 = ATgetArgument(t, 1);
}
goto label51 ;
}
else
goto label50 ;
label51 :
;
goto fail38 ;
label50 :
t = trm113;
goto label49 ;
label49 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_102 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(q_102);
t = map_1_0(sl_up(sl_up(sl_up(sl))), lifted26_cl, t);
if((t == NULL))
goto fail34 ;
}
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
struct str_closure o_102 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(o_102);
struct str_closure p_102 = { &(_Id) , sl_up(sl_up(sl_up(sl_up(sl)))) };
StrCL lifted29_cl = &(p_102);
t = Attribute_2_0(sl_up(sl_up(sl_up(sl_up(sl)))), lifted27_cl, lifted29_cl, t);
if((t == NULL))
goto fail35 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_102 = { &(apply_prefix_namespace_0_0) , sl_up(sl_up(sl_up(sl_up(sl_up(sl))))) };
StrCL lifted28_cl = &(n_102);
t = try_1_0(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))), lifted28_cl, t);
if((t == NULL))
goto fail36 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm112 = t;
t = apply_default_namespace_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label48 ;
goto label47 ;
label48 :
t = trm112;
t = apply_prefix_namespace_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail33 ;
else
goto label47 ;
label47 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_apply_namespaces_element_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_apply_namespaces_element_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = s_6(&(frame), t);
if((t == NULL))
goto fail26 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm s_6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "s_6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_102 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(m_102);
t = xml_apply_namespaces_element_1_0(sl_up(sl), lifted16_cl, t);
if((t == NULL))
goto fail27 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_102 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(k_102);
t = map_1_0(sl_up(sl_up(sl)), lifted17_cl, t);
if((t == NULL))
goto fail28 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm108 = t;
if(match_cons(t, sym_Element_3))
{
ATerm trm109 = ATgetArgument(t, 0);
ATerm trm110 = ATgetArgument(t, 1);
ATerm trm111 = ATgetArgument(t, 2);
}
else
goto label46 ;
t = s_6(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail29 ;
else
goto label45 ;
label46 :
t = trm108;
goto label45 ;
label45 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_apply_namespaces_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_apply_namespaces_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,f_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL;
e_6 = t;
j_6 = t;
t = term35;
g_6 = t;
t = j_6;
k_6 = t;
t = (ATerm) SRTS_setAnnotations(term36, (ATerm) ATinsert(ATempty, term38));
h_6 = t;
t = k_6;
l_6 = t;
t = term40;
i_6 = t;
t = l_6;
t = dr_set_rule_0_3(sl, g_6, h_6, i_6, t);
if((t == NULL))
goto fail25 ;
t = e_6;
f_6 = t;
p_6 = t;
t = term42;
m_6 = t;
t = p_6;
q_6 = t;
t = (ATerm) SRTS_setAnnotations(term43, (ATerm) ATinsert(ATempty, term38));
n_6 = t;
t = q_6;
r_6 = t;
t = term45;
o_6 = t;
t = r_6;
t = dr_set_rule_0_3(sl, m_6, n_6, o_6, t);
if((t == NULL))
goto fail25 ;
t = f_6;
{
ATerm trm107;
trm107 = (ATerm) ATgetAnnotations(t);
if((trm107 == NULL))
trm107 = (ATerm) ATempty;
if(match_cons(t, sym_Document_1))
{
g_101 = ATgetArgument(t, 0);
}
else
goto fail25 ;
f_101 = trm107;
t = g_101;
t = xml_apply_namespaces_element_0_0(sl, t);
if((t == NULL))
goto fail25 ;
h_101 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Document_1, h_101), f_101);
}
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
ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL;
if(match_cons(t, sym_Attribute_2))
{
ATerm trm106 = ATgetArgument(t, 0);
if(match_cons(trm106, sym_QName_2))
{
v_5 = ATgetArgument(trm106, 0);
w_5 = ATgetArgument(trm106, 1);
}
else
goto fail24 ;
x_5 = ATgetArgument(t, 1);
}
else
goto fail24 ;
z_5 = t;
t = x_5;
t = xml_attr_value2string_0_0(sl, t);
if((t == NULL))
goto fail24 ;
y_5 = t;
t = z_5;
t = (ATerm) ATmakeAppl(sym_Attribute_2, (ATerm)ATmakeAppl(sym_Name_2, v_5, w_5), y_5);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm rewrite_well_formed_Element_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_well_formed_Element_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
if(match_cons(t, sym_Element_4))
{
ATerm trm95 = ATgetArgument(t, 0);
if(match_cons(trm95, sym_QName_2))
{
p_5 = ATgetArgument(trm95, 0);
q_5 = ATgetArgument(trm95, 1);
}
else
goto fail21 ;
r_5 = ATgetArgument(t, 1);
s_5 = ATgetArgument(t, 2);
{
ATerm trm96 = ATgetArgument(t, 3);
if(match_cons(trm96, sym_QName_2))
{
if(!((p_5 == ATgetArgument(trm96, 0))))
goto fail21 ;
if(!((q_5 == ATgetArgument(trm96, 1))))
goto fail21 ;
}
else
goto fail21 ;
}
}
else
goto fail21 ;
u_5 = t;
t = s_5;
{
struct str_closure j_102 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(j_102);
t = try_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail21 ;
t_5 = t;
t = u_5;
t = (ATerm) ATmakeAppl(sym_Element_3, (ATerm)ATmakeAppl(sym_Name_2, p_5, q_5), r_5, t_5);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_102 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(i_102);
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail22 ;
t = filter_1_0(sl_up(sl), lifted15_cl, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm97 = t;
if(match_cons(t, sym_Element_4))
{
ATerm trm98 = ATgetArgument(t, 0);
ATerm trm99 = ATgetArgument(t, 1);
ATerm trm100 = ATgetArgument(t, 2);
ATerm trm101 = ATgetArgument(t, 3);
}
else
goto label43 ;
goto label42 ;
label43 :
t = trm97;
{
ATerm trm102 = t;
if(match_cons(t, sym_Text_1))
{
ATerm trm103 = ATgetArgument(t, 0);
}
else
goto label44 ;
goto label42 ;
label44 :
t = trm102;
if(match_cons(t, sym_EmptyElement_2))
{
ATerm trm104 = ATgetArgument(t, 0);
ATerm trm105 = ATgetArgument(t, 1);
goto label42 ;
}
else
goto fail23 ;
}
label42 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm rewrite_Element_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rewrite_Element_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm88 = t;
ATerm n_5 = NULL,o_5 = NULL;
ATerm trm89 = t;
if(match_cons(t, sym_Element_4))
{
n_5 = ATgetArgument(t, 0);
{
ATerm trm90 = ATgetArgument(t, 1);
}
{
ATerm trm91 = ATgetArgument(t, 2);
}
if(!((n_5 == ATgetArgument(t, 3))))
goto label41 ;
}
else
goto label41 ;
t = rewrite_well_formed_Element_0_0(sl, t);
if((t == NULL))
goto label39 ;
else
goto label40 ;
label41 :
t = trm89;
if(match_cons(t, sym_Element_4))
{
n_5 = ATgetArgument(t, 0);
{
ATerm trm92 = ATgetArgument(t, 1);
}
{
ATerm trm93 = ATgetArgument(t, 2);
}
o_5 = ATgetArgument(t, 3);
}
else
goto label39 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_5), term31), n_5), term33);
t = fatal_error_0_0(sl, t);
if((t == NULL))
goto label39 ;
else
goto label40 ;
label40 :
;
goto label38 ;
label39 :
t = trm88;
{
ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
if(match_cons(t, sym_EmptyElement_2))
{
ATerm trm94 = ATgetArgument(t, 0);
if(match_cons(trm94, sym_QName_2))
{
k_5 = ATgetArgument(trm94, 0);
l_5 = ATgetArgument(trm94, 1);
}
else
goto fail20 ;
m_5 = ATgetArgument(t, 1);
}
else
goto fail20 ;
t = (ATerm) ATmakeAppl(sym_Element_3, (ATerm)ATmakeAppl(sym_Name_2, k_5, l_5), m_5, (ATerm) ATempty);
goto label38 ;
}
label38 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm xml_doc2xml_info_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xml_doc2xml_info_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_101 = NULL;
if(match_cons(t, sym_Document_3))
{
ATerm trm83 = ATgetArgument(t, 0);
c_101 = ATgetArgument(t, 1);
{
ATerm trm84 = ATgetArgument(t, 2);
}
}
else
goto fail17 ;
t = (ATerm) ATmakeAppl(sym_Document_1, c_101);
{
struct str_closure h_102 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(h_102);
t = topdown_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail17 ;
t = xml_apply_namespaces_0_0(sl, t);
if((t == NULL))
goto fail17 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_102 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(g_102);
t = try_1_0(sl_up(sl), lifted13_cl, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm85 = t;
t = rewrite_Element_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label36 ;
goto label35 ;
label36 :
t = trm85;
{
ATerm trm86 = t;
t = rewrite_Attribute_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label37 ;
goto label35 ;
label37 :
t = trm86;
{
ATerm d_101 = NULL,e_101 = NULL;
if(match_cons(t, sym_Text_1))
{
ATerm trm87 = ATgetArgument(t, 0);
}
else
goto fail19 ;
t = xml_unescape_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail19 ;
e_101 = t;
t = chardata2string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail19 ;
d_101 = t;
t = e_101;
t = (ATerm) ATmakeAppl(sym_Text_1, d_101);
goto label35 ;
}
}
label35 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm chardata2string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "chardata2string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_5 = NULL;
t = xml_unescape_0_0(sl, t);
if((t == NULL))
goto fail15 ;
if(match_cons(t, sym_Text_1))
{
f_5 = ATgetArgument(t, 0);
}
else
goto fail15 ;
t = f_5;
{
struct str_closure f_102 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(f_102);
t = map_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail15 ;
{
ATerm trm81 = t;
ATerm i_5 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
i_5 = ATgetFirst((ATermList) t);
{
ATerm trm82 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm82) == AT_LIST) && ATisEmpty(trm82))))
goto label34 ;
}
}
else
goto label34 ;
t = i_5;
goto label33 ;
label34 :
t = trm81;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail15 ;
else
goto label33 ;
label33 :
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
ATerm trm80 = t;
ATerm g_5 = NULL;
if(match_cons(t, sym_Literal_1))
{
g_5 = ATgetArgument(t, 0);
}
else
goto label32 ;
t = g_5;
goto label31 ;
label32 :
t = trm80;
{
ATerm h_5 = NULL;
if(match_cons(t, sym_CDATASection_1))
{
h_5 = ATgetArgument(t, 0);
}
else
goto fail16 ;
t = h_5;
goto label31 ;
}
label31 :
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
ATerm d_5 = NULL;
if(match_cons(t, sym_DoubleQuoted_1))
{
d_5 = ATgetArgument(t, 0);
}
else
goto label30 ;
t = (ATerm) ATmakeAppl(sym_Text_1, d_5);
goto label29 ;
label30 :
t = trm79;
{
ATerm e_5 = NULL;
if(match_cons(t, sym_SingleQuoted_1))
{
e_5 = ATgetArgument(t, 0);
}
else
goto fail14 ;
t = (ATerm) ATmakeAppl(sym_Text_1, e_5);
goto label29 ;
}
label29 :
;
t = chardata2string_0_0(sl, t);
if((t == NULL))
goto fail14 ;
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
ATerm s_4 = NULL;
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
s_4 = (ATerm) ATgetNext((ATermList) trm75);
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
trm77 = CheckATermList(s_4);
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
ATerm r_4 = NULL;
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
r_4 = (ATerm) ATgetNext((ATermList) trm61);
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
trm63 = CheckATermList(r_4);
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
ATerm q_4 = NULL;
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
q_4 = (ATerm) ATgetNext((ATermList) trm47);
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
trm49 = CheckATermList(q_4);
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
ATerm p_4 = NULL;
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
p_4 = (ATerm) ATgetNext((ATermList) trm37);
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
trm39 = CheckATermList(p_4);
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
ATerm o_4 = NULL;
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
o_4 = (ATerm) ATgetNext((ATermList) trm27);
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
trm29 = CheckATermList(o_4);
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
t = n_4(&(frame), t);
if((t == NULL))
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm n_4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "n_4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_102 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(e_102);
t = try_1_0(sl_up(sl), lifted6_cl, t);
if((t == NULL))
goto fail5 ;
{
ATerm trm16 = t;
ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
ATerm trm17;
trm17 = (ATerm) ATgetAnnotations(t);
if((trm17 == NULL))
trm17 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
i_4 = ATgetFirst((ATermList) t);
j_4 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label18 ;
m_4 = trm17;
t = i_4;
k_4 = t;
t = j_4;
t = n_4(sl, t);
if((t == NULL))
goto label18 ;
l_4 = t;
{
ATerm trm18;
trm18 = CheckATermList(l_4);
if((trm18 == NULL))
goto label18 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm18, k_4), m_4);
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
ATerm n_100 = NULL,o_100 = NULL,p_100 = NULL;
if(match_cons(t, sym_DecCharRef_1))
{
n_100 = ATgetArgument(t, 0);
}
else
goto label16 ;
p_100 = t;
t = n_100;
{
struct str_closure a_102 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(a_102);
t = string_as_chars_1_0(sl_up(sl_up(sl)), lifted7_cl, t);
if((t == NULL))
goto label16 ;
o_100 = t;
t = p_100;
t = (ATerm) ATmakeAppl(sym_Literal_1, o_100);
}
goto label10 ;
label16 :
t = trm15;
{
ATerm t_100 = NULL,u_100 = NULL,v_100 = NULL;
if(match_cons(t, sym_HexCharRef_1))
{
t_100 = ATgetArgument(t, 0);
}
else
goto fail6 ;
v_100 = t;
t = t_100;
{
struct str_closure d_102 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(d_102);
t = string_as_chars_1_0(sl_up(sl_up(sl)), lifted9_cl, t);
if((t == NULL))
goto fail6 ;
u_100 = t;
t = v_100;
t = (ATerm) ATmakeAppl(sym_Literal_1, u_100);
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
ATerm w_100 = NULL,x_100 = NULL;
struct str_closure c_102 = { &(is_hexnum_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted10_cl = &(c_102);
t = SRTS_all(sl_up(sl_up(sl_up(sl))), lifted10_cl, t);
if((t == NULL))
goto fail8 ;
t = hex_chars_to_int_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail8 ;
x_100 = t;
w_100 = t;
t = (ATerm) ATinsert(ATempty, w_100);
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
ATerm q_100 = NULL,s_100 = NULL;
struct str_closure z_101 = { &(is_num_0_0) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted8_cl = &(z_101);
t = SRTS_all(sl_up(sl_up(sl_up(sl))), lifted8_cl, t);
if((t == NULL))
goto fail7 ;
t = dec_chars_to_int_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail7 ;
s_100 = t;
q_100 = t;
t = (ATerm) ATinsert(ATempty, q_100);
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
struct str_closure t_101 = { &(xml_unescape_chars_0_0) , sl };
StrCL lifted0_cl = &(t_101);
t = string_as_chars_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL;
ATerm trm1;
trm1 = (ATerm) ATgetAnnotations(t);
if((trm1 == NULL))
trm1 = (ATerm) ATempty;
if(match_cons(t, sym_Text_1))
{
y_99 = ATgetArgument(t, 0);
}
else
goto fail0 ;
x_99 = trm1;
t = y_99;
{
struct str_closure y_101 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(y_101);
t = map_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail0 ;
z_99 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Text_1, z_99), x_99);
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
ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
if(match_cons(t, sym_DecCharRef_1))
{
b_100 = ATgetArgument(t, 0);
}
else
goto label9 ;
d_100 = t;
t = b_100;
{
struct str_closure v_101 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(v_101);
t = string_as_chars_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto label9 ;
c_100 = t;
t = d_100;
t = (ATerm) ATmakeAppl(sym_Literal_1, c_100);
}
goto label2 ;
label9 :
t = trm9;
{
ATerm g_100 = NULL,h_100 = NULL,i_100 = NULL;
if(match_cons(t, sym_HexCharRef_1))
{
g_100 = ATgetArgument(t, 0);
}
else
goto fail1 ;
i_100 = t;
t = g_100;
{
struct str_closure x_101 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(x_101);
t = string_as_chars_1_0(sl_up(sl), lifted4_cl, t);
if((t == NULL))
goto fail1 ;
h_100 = t;
t = i_100;
t = (ATerm) ATmakeAppl(sym_Literal_1, h_100);
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
ATerm k_100 = NULL,m_100 = NULL;
struct str_closure w_101 = { &(is_hexnum_0_0) , sl_up(sl_up(sl)) };
StrCL lifted5_cl = &(w_101);
t = SRTS_all(sl_up(sl_up(sl)), lifted5_cl, t);
if((t == NULL))
goto fail3 ;
t = hex_chars_to_int_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
m_100 = t;
k_100 = t;
t = (ATerm) ATinsert(ATempty, k_100);
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
ATerm e_100 = NULL,f_100 = NULL;
struct str_closure u_101 = { &(is_num_0_0) , sl_up(sl_up(sl)) };
StrCL lifted3_cl = &(u_101);
t = SRTS_all(sl_up(sl_up(sl)), lifted3_cl, t);
if((t == NULL))
goto fail2 ;
t = dec_chars_to_int_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail2 ;
f_100 = t;
e_100 = t;
t = (ATerm) ATinsert(ATempty, e_100);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 80));
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
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(DefaultNamespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DefaultNamespace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ResolvePrefix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ResolvePrefix_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(apply_prefix_namespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_prefix_namespace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_default_namespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_default_namespace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remember_default_namespace_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remember_default_namespace_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_namespace_decls_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_namespace_decls_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted22);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted22", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_apply_namespaces_element_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_apply_namespaces_element_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(s_6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("s_6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_apply_namespaces_element_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_apply_namespaces_element_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_apply_namespaces_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_apply_namespaces_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_Attribute_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_Attribute_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_well_formed_Element_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_well_formed_Element_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rewrite_Element_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rewrite_Element_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xml_doc2xml_info_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xml_doc2xml_info_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(n_4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("n_4", 0, ATtrue)), &(closures[closures_index]));
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
