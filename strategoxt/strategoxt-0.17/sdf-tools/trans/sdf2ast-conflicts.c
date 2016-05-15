#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_parse_table_5;
static Symbol sym_arg_gtr_prio_3;
static Symbol sym_gtr_prio_2;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Error_0;
static Symbol sym_fun_1;
static Symbol sym_appl_2;
static Symbol sym_priorities_1;
static Symbol sym_term_1;
static Symbol sym_attrs_1;
static Symbol sym_prod_3;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_layout_0;
static Symbol sym_opt_1;
static Symbol sym_lit_1;
static Symbol sym_ci_lit_1;
static Symbol sym_label_2;
static Symbol sym_default_1;
static Symbol sym_quoted_1;
static Symbol sym_unquoted_1;
static Symbol sym_Symbol_2;
static Symbol sym_SubtermConflict_3;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_cons_1;
static Symbol sym_SdfMainModuleFlag_0;
static Symbol sym_cilit_1;
static void init_module_constructors (void)
{
sym_parse_table_5 = ATmakeSymbol("parse-table", 5, ATfalse);
ATprotectSymbol(sym_parse_table_5);
sym_arg_gtr_prio_3 = ATmakeSymbol("arg-gtr-prio", 3, ATfalse);
ATprotectSymbol(sym_arg_gtr_prio_3);
sym_gtr_prio_2 = ATmakeSymbol("gtr-prio", 2, ATfalse);
ATprotectSymbol(sym_gtr_prio_2);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
ATprotectSymbol(sym_fun_1);
sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
ATprotectSymbol(sym_appl_2);
sym_priorities_1 = ATmakeSymbol("priorities", 1, ATfalse);
ATprotectSymbol(sym_priorities_1);
sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
ATprotectSymbol(sym_term_1);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
ATprotectSymbol(sym_cf_1);
sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
ATprotectSymbol(sym_lex_1);
sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
ATprotectSymbol(sym_layout_0);
sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
ATprotectSymbol(sym_opt_1);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_ci_lit_1 = ATmakeSymbol("ci-lit", 1, ATfalse);
ATprotectSymbol(sym_ci_lit_1);
sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
ATprotectSymbol(sym_label_2);
sym_default_1 = ATmakeSymbol("default", 1, ATfalse);
ATprotectSymbol(sym_default_1);
sym_quoted_1 = ATmakeSymbol("quoted", 1, ATfalse);
ATprotectSymbol(sym_quoted_1);
sym_unquoted_1 = ATmakeSymbol("unquoted", 1, ATfalse);
ATprotectSymbol(sym_unquoted_1);
sym_Symbol_2 = ATmakeSymbol("Symbol", 2, ATfalse);
ATprotectSymbol(sym_Symbol_2);
sym_SubtermConflict_3 = ATmakeSymbol("SubtermConflict", 3, ATfalse);
ATprotectSymbol(sym_SubtermConflict_3);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
ATprotectSymbol(sym_cons_1);
sym_SdfMainModuleFlag_0 = ATmakeSymbol("SdfMainModuleFlag", 0, ATfalse);
ATprotectSymbol(sym_SdfMainModuleFlag_0);
sym_cilit_1 = ATmakeSymbol("cilit", 1, ATfalse);
ATprotectSymbol(sym_cilit_1);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym_SdfMainModuleFlag_0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [Main]", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("-m mod | --main mod   ", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("Main", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("Specify main module in sdf definition", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("--tbl", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym__2, term15, term5);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("--tbl            Input is a parse table", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("Could not handle priority", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("No priorities in parse table. Did you specify the right main module?", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeInt(1);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("Could not find labels for priority", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("LookupLabel", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("9cf94c3f8d3251c4a6429482a531a24e", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeInt(0);
ATprotect(&(term41));
term41 = term40;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _2_0 (StrSL sl, StrCL s_111, StrCL t_111, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL g_102, ATerm t);
ATerm length_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL y_101, ATerm t);
ATerm retain_all_1_0 (StrSL sl, StrCL h_101, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL e_101, ATerm t);
ATerm add_indices_0_0 (StrSL sl, ATerm t);
ATerm get_index_0_0 (StrSL sl, ATerm t);
ATerm range_0_0 (StrSL sl, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm b_83, ATerm d_83, ATerm e_83, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm r_82, ATerm s_82, ATerm t);
ATerm dr_scope_1_1 (StrSL sl, StrCL p_81, ATerm o_81, ATerm t);
ATerm has_extension_0_1 (StrSL sl, ATerm y_67, ATerm t);
ATerm dec_0_0 (StrSL sl, ATerm t);
ATerm inc_0_0 (StrSL sl, ATerm t);
ATerm un_double_quote_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL s_57, StrCL t_57, StrCL u_57, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL n_57, StrCL o_57, StrCL p_57, ATerm t);
ATerm if_verbose3_1_0 (StrSL sl, StrCL i_56, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm o_55, ATerm p_55, ATerm t);
ATerm log_0_3 (StrSL sl, ATerm l_55, ATerm m_55, ATerm n_55, ATerm t);
ATerm FILE_1_0 (StrSL sl, StrCL v_50, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL w_49, StrCL x_49, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL r_48, StrCL s_48, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
ATerm LookupLabel_0_0 (StrSL sl, ATerm t);
ATerm arg_gtr_prio_3_0 (StrSL sl, StrCL d_38, StrCL e_38, StrCL f_38, ATerm t);
ATerm gtr_prio_2_0 (StrSL sl, StrCL b_38, StrCL c_38, ATerm t);
ATerm label_2_0 (StrSL sl, StrCL n_26, StrCL o_26, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
ATerm arg_for_symbol_0_1 (StrSL sl, ATerm s_23, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
ATerm Prod2Symbol_0_0 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
ATerm Priority2Conflicts_0_0 (StrSL sl, ATerm t);
ATerm all_prods_have_cons_0_0 (StrSL sl, ATerm t);
ATerm define_label_0_0 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
ATerm lookup_labels_0_1 (StrSL sl, ATerm x_21, ATerm t);
ATerm check_empty_table_0_0 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm core_sdf2conflicts_0_1 (StrSL sl, ATerm j_21, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
ATerm main_sdf2ast_conflicts_0_0 (StrSL sl, ATerm t);
ATerm cons_of_prod_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm get_cnstr_name_0_0 (StrSL sl, ATerm t);
ATerm get_sdf_main_module_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm sdf_main_module_option_1_0 (StrSL sl, StrCL v_19, ATerm t);
ATerm is_empty_sym_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t);
ATerm LookupLabel_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "LookupLabel_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
sl_init_var(0, f_48);
sl_init_var(1, g_48);
{
struct str_closure a_180 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(a_180);
if((g_48 == NULL))
{
g_48 = t;
}
else
if((g_48 != t))
goto fail40 ;
if((f_48 == NULL))
{
f_48 = t;
}
else
if((f_48 != t))
goto fail40 ;
i_48 = t;
k_48 = t;
t = term37;
j_48 = t;
t = k_48;
if((g_48 == NULL))
goto fail40 ;
else
{
t = dr_lookup_rule_0_2(sl, j_48, g_48, t);
if((t == NULL))
goto fail40 ;
}
h_48 = t;
t = i_48;
t = h_48;
t = fetch_elem_1_0(sl, lifted31_cl, t);
if((t == NULL))
goto fail40 ;
}
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
{
ATerm l_178 = NULL,m_178 = NULL,p_178 = NULL,q_178 = NULL,n_178 = NULL,o_178 = NULL;
p_178 = t;
if((sl_readvar(0, sl) == NULL))
goto fail41 ;
else
{
t = sl_readvar(0, sl);
}
l_178 = t;
t = p_178;
q_178 = t;
if((sl_readvar(1, sl) == NULL))
goto fail41 ;
else
{
t = sl_readvar(1, sl);
}
m_178 = t;
t = q_178;
if(match_cons(t, sym__2))
{
ATerm trm85 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm85) == ATmakeSymbol("9cf94c3f8d3251c4a6429482a531a24e", 0, ATtrue))))
goto fail41 ;
n_178 = ATgetArgument(t, 1);
}
else
goto fail41 ;
o_178 = t;
t = m_178;
t = o_178;
t = n_178;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm arg_gtr_prio_3_0 (StrSL sl, StrCL d_38, StrCL e_38, StrCL f_38, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "arg_gtr_prio_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_177 = NULL,z_176 = NULL,a_177 = NULL,b_177 = NULL,d_177 = NULL,e_177 = NULL,i_177 = NULL;
ATerm trm84;
trm84 = (ATerm) ATgetAnnotations(t);
if((trm84 == NULL))
trm84 = (ATerm) ATempty;
if(match_cons(t, sym_arg_gtr_prio_3))
{
z_176 = ATgetArgument(t, 0);
a_177 = ATgetArgument(t, 1);
b_177 = ATgetArgument(t, 2);
}
else
goto fail39 ;
c_177 = trm84;
t = z_176;
t = cl_fun(d_38)(cl_sl(d_38), t);
if((t == NULL))
goto fail39 ;
d_177 = t;
t = a_177;
t = cl_fun(e_38)(cl_sl(e_38), t);
if((t == NULL))
goto fail39 ;
e_177 = t;
t = b_177;
t = cl_fun(f_38)(cl_sl(f_38), t);
if((t == NULL))
goto fail39 ;
i_177 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_arg_gtr_prio_3, d_177, e_177, i_177), c_177);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm gtr_prio_2_0 (StrSL sl, StrCL b_38, StrCL c_38, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "gtr_prio_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_176 = NULL,u_176 = NULL,v_176 = NULL,x_176 = NULL,y_176 = NULL;
ATerm trm83;
trm83 = (ATerm) ATgetAnnotations(t);
if((trm83 == NULL))
trm83 = (ATerm) ATempty;
if(match_cons(t, sym_gtr_prio_2))
{
u_176 = ATgetArgument(t, 0);
v_176 = ATgetArgument(t, 1);
}
else
goto fail38 ;
w_176 = trm83;
t = u_176;
t = cl_fun(b_38)(cl_sl(b_38), t);
if((t == NULL))
goto fail38 ;
x_176 = t;
t = v_176;
t = cl_fun(c_38)(cl_sl(c_38), t);
if((t == NULL))
goto fail38 ;
y_176 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_gtr_prio_2, x_176, y_176), w_176);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm label_2_0 (StrSL sl, StrCL n_26, StrCL o_26, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "label_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_135 = NULL,z_134 = NULL,a_135 = NULL,f_135 = NULL,g_135 = NULL;
ATerm trm82;
trm82 = (ATerm) ATgetAnnotations(t);
if((trm82 == NULL))
trm82 = (ATerm) ATempty;
if(match_cons(t, sym_label_2))
{
z_134 = ATgetArgument(t, 0);
a_135 = ATgetArgument(t, 1);
}
else
goto fail37 ;
b_135 = trm82;
t = z_134;
t = cl_fun(n_26)(cl_sl(n_26), t);
if((t == NULL))
goto fail37 ;
f_135 = t;
t = a_135;
t = cl_fun(o_26)(cl_sl(o_26), t);
if((t == NULL))
goto fail37 ;
g_135 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_label_2, f_135, g_135), b_135);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_sdf2ast_conflicts_0_0(sl, t);
if((t == NULL))
goto fail36 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm arg_for_symbol_0_1 (StrSL sl, ATerm s_23, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "arg_for_symbol_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
u_23 = t;
t = s_23;
if(match_cons(t, sym_prod_3))
{
t_23 = ATgetArgument(t, 0);
{
ATerm trm77 = ATgetArgument(t, 1);
}
{
ATerm trm78 = ATgetArgument(t, 2);
}
}
else
goto fail33 ;
t = t_23;
t = add_indices_0_0(sl, t);
if((t == NULL))
goto fail33 ;
{
struct str_closure x_179 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(x_179);
t = retain_all_1_0(sl, lifted28_cl, t);
if((t == NULL))
goto fail33 ;
v_23 = t;
{
ATerm trm81 = t;
ATerm x_23 = NULL,y_23 = NULL;
y_23 = t;
t = u_23;
t = inc_0_0(sl, t);
if((t == NULL))
goto label42 ;
x_23 = t;
t = y_23;
t = (ATerm) ATmakeAppl(sym__2, x_23, v_23);
t = get_index_0_0(sl, t);
if((t == NULL))
goto label42 ;
t = dec_0_0(sl, t);
if((t == NULL))
goto label42 ;
goto label41 ;
label42 :
t = trm81;
t = term5;
goto label41 ;
label41 :
;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_23 = NULL;
struct str_closure v_179 = { &(_Id) , sl_up(sl) };
StrCL lifted29_cl = &(v_179);
struct str_closure w_179 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(w_179);
t = _2_0(sl_up(sl), lifted29_cl, lifted30_cl, t);
if((t == NULL))
goto fail34 ;
if(match_cons(t, sym__2))
{
w_23 = ATgetArgument(t, 0);
{
ATerm trm80 = ATgetArgument(t, 1);
}
}
else
goto fail34 ;
t = w_23;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm79 = t;
t = is_empty_sym_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label40 ;
goto fail35 ;
label40 :
t = trm79;
goto label39 ;
label39 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm Prod2Symbol_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Prod2Symbol_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,i_178 = NULL,j_178 = NULL,k_178 = NULL;
p_23 = t;
if(match_cons(t, sym_prod_3))
{
n_23 = ATgetArgument(t, 0);
{
ATerm trm73 = ATgetArgument(t, 1);
}
{
ATerm trm74 = ATgetArgument(t, 2);
}
}
else
goto fail31 ;
r_23 = t;
t = n_23;
{
struct str_closure u_179 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(u_179);
t = filter_1_0(sl, lifted27_cl, t);
if((t == NULL))
goto fail31 ;
t = length_0_0(sl, t);
if((t == NULL))
goto fail31 ;
o_23 = t;
t = p_23;
if(match_cons(t, sym_prod_3))
{
i_178 = ATgetArgument(t, 0);
j_178 = ATgetArgument(t, 1);
{
ATerm trm76 = ATgetArgument(t, 2);
if(match_cons(trm76, sym_attrs_1))
{
k_178 = ATgetArgument(trm76, 0);
}
else
goto fail31 ;
}
}
else
goto fail31 ;
t = k_178;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto fail31 ;
q_23 = t;
t = r_23;
t = (ATerm) ATmakeAppl(sym_Symbol_2, q_23, o_23);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm75 = t;
t = is_empty_sym_0_0(sl_up(sl), t);
if((t == NULL))
goto label38 ;
goto fail32 ;
label38 :
t = trm75;
goto label37 ;
label37 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
ATerm Priority2Conflicts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Priority2Conflicts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm trm70 = t;
ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
sl_init_var(0, f_23);
sl_init_var(1, h_23);
{
struct str_closure t_179 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(t_179);
if(match_cons(t, sym_gtr_prio_2))
{
e_23 = ATgetArgument(t, 0);
g_23 = ATgetArgument(t, 1);
}
else
goto label35 ;
k_23 = t;
t = e_23;
t = Prod2Symbol_0_0(sl, t);
if((t == NULL))
goto label35 ;
if((f_23 == NULL))
{
f_23 = t;
}
else
if((f_23 != t))
goto label35 ;
if(match_cons(t, sym_Symbol_2))
{
ATerm trm71 = ATgetArgument(t, 0);
i_23 = ATgetArgument(t, 1);
}
else
goto label35 ;
t = g_23;
t = Prod2Symbol_0_0(sl, t);
if((t == NULL))
goto label35 ;
if((h_23 == NULL))
{
h_23 = t;
}
else
if((h_23 != t))
goto label35 ;
t = (ATerm) ATmakeAppl(sym__2, term41, i_23);
t = range_0_0(sl, t);
if((t == NULL))
goto label35 ;
j_23 = t;
t = k_23;
t = j_23;
t = map_1_0(sl, lifted26_cl, t);
if((t == NULL))
goto label35 ;
}
goto label34 ;
label35 :
t = trm70;
{
ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
if(match_cons(t, sym_arg_gtr_prio_3))
{
y_22 = ATgetArgument(t, 0);
z_22 = ATgetArgument(t, 1);
x_22 = ATgetArgument(t, 2);
}
else
goto fail29 ;
t = y_22;
t = Prod2Symbol_0_0(sl, t);
if((t == NULL))
goto fail29 ;
a_23 = t;
t = x_22;
t = Prod2Symbol_0_0(sl, t);
if((t == NULL))
goto fail29 ;
c_23 = t;
t = z_22;
t = arg_for_symbol_0_1(sl, y_22, t);
if((t == NULL))
goto fail29 ;
b_23 = t;
{
ATerm trm72 = t;
ATerm d_23 = NULL;
d_23 = t;
t = term5;
if(!((b_23 == t)))
goto label36 ;
t = d_23;
t = (ATerm) ATempty;
goto label34 ;
label36 :
t = trm72;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SubtermConflict_3, a_23, b_23, c_23));
goto label34 ;
}
}
label34 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_23 = NULL,m_23 = NULL;
m_23 = t;
l_23 = t;
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail30 ;
else
{
t = (ATerm) ATmakeAppl(sym_SubtermConflict_3, sl_readvar(0, sl), l_23, sl_readvar(1, sl));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm all_prods_have_cons_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "all_prods_have_cons_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm67 = t;
ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,f_178 = NULL,g_178 = NULL,h_178 = NULL;
if(match_cons(t, sym_arg_gtr_prio_3))
{
u_22 = ATgetArgument(t, 0);
{
ATerm trm68 = ATgetArgument(t, 1);
}
v_22 = ATgetArgument(t, 2);
}
else
goto label33 ;
w_22 = t;
t = u_22;
if(match_cons(t, sym_prod_3))
{
f_178 = ATgetArgument(t, 0);
g_178 = ATgetArgument(t, 1);
{
ATerm trm69 = ATgetArgument(t, 2);
if(match_cons(trm69, sym_attrs_1))
{
h_178 = ATgetArgument(trm69, 0);
}
else
goto label33 ;
}
}
else
goto label33 ;
t = h_178;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label33 ;
t = v_22;
t = cons_of_prod_0_0(sl, t);
if((t == NULL))
goto label33 ;
t = w_22;
goto label32 ;
label33 :
t = trm67;
{
ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
if(match_cons(t, sym_gtr_prio_2))
{
r_22 = ATgetArgument(t, 0);
s_22 = ATgetArgument(t, 1);
}
else
goto fail28 ;
t_22 = t;
t = r_22;
t = cons_of_prod_0_0(sl, t);
if((t == NULL))
goto fail28 ;
t = s_22;
t = cons_of_prod_0_0(sl, t);
if((t == NULL))
goto fail28 ;
t = t_22;
goto label32 ;
}
label32 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm define_label_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "define_label_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
if(match_cons(t, sym_label_2))
{
l_22 = ATgetArgument(t, 0);
k_22 = ATgetArgument(t, 1);
}
else
goto fail27 ;
m_22 = t;
p_22 = t;
t = term37;
n_22 = t;
t = p_22;
q_22 = t;
t = (ATerm) ATmakeAppl(sym__2, term39, l_22);
o_22 = t;
t = q_22;
t = dr_set_rule_0_3(sl, n_22, k_22, o_22, t);
if((t == NULL))
goto fail27 ;
t = m_22;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm lookup_labels_0_1 (StrSL sl, ATerm x_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lookup_labels_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, x_21);
{
ATerm z_21 = NULL,a_22 = NULL;
struct str_closure s_179 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(s_179);
a_22 = t;
t = term37;
z_21 = t;
t = a_22;
t = dr_scope_1_1(sl, lifted18_cl, z_21, t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_21 = NULL;
struct str_closure q_179 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(q_179);
y_21 = t;
if((sl_readvar(0, sl) == NULL))
goto fail25 ;
else
{
t = sl_readvar(0, sl);
}
{
struct str_closure r_179 = { &(define_label_0_0) , sl_up(sl) };
StrCL lifted19_cl = &(r_179);
t = map_1_0(sl_up(sl), lifted19_cl, t);
if((t == NULL))
goto fail25 ;
t = y_21;
t = map_1_0(sl_up(sl), lifted20_cl, t);
if((t == NULL))
goto fail25 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm65 = t;
ATerm trm66 = t;
struct str_closure j_179 = { &(LookupLabel_0_0) , sl_up(sl_up(sl)) };
StrCL lifted21_cl = &(j_179);
struct str_closure k_179 = { &(LookupLabel_0_0) , sl_up(sl_up(sl)) };
StrCL lifted22_cl = &(k_179);
t = gtr_prio_2_0(sl_up(sl_up(sl)), lifted21_cl, lifted22_cl, t);
if((t == NULL))
goto label31 ;
goto label30 ;
label31 :
t = trm66;
{
struct str_closure l_179 = { &(LookupLabel_0_0) , sl_up(sl_up(sl)) };
StrCL lifted23_cl = &(l_179);
struct str_closure m_179 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted24_cl = &(m_179);
struct str_closure p_179 = { &(LookupLabel_0_0) , sl_up(sl_up(sl)) };
StrCL lifted25_cl = &(p_179);
t = arg_gtr_prio_3_0(sl_up(sl_up(sl)), lifted23_cl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto label29 ;
else
goto label30 ;
}
label30 :
;
goto label28 ;
label29 :
t = trm65;
{
ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
e_22 = t;
t = term27;
b_22 = t;
t = e_22;
f_22 = t;
t = term35;
c_22 = t;
t = f_22;
g_22 = t;
i_22 = t;
h_22 = t;
d_22 = t;
t = g_22;
t = log_0_3(sl_up(sl_up(sl)), b_22, c_22, d_22, t);
if((t == NULL))
goto fail26 ;
goto fail26 ;
}
label28 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm check_empty_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "check_empty_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm39 = t;
ATerm s_21 = NULL;
s_21 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm40 = ATgetFirst((ATermList) t);
if(match_cons(trm40, sym_arg_gtr_prio_3))
{
ATerm trm41 = ATgetArgument(trm40, 0);
if(match_cons(trm41, sym_prod_3))
{
ATerm trm42 = ATgetArgument(trm41, 0);
if(((ATgetType(trm42) == AT_LIST) && !(ATisEmpty(trm42))))
{
ATerm trm43 = ATgetFirst((ATermList) trm42);
if(match_cons(trm43, sym_cf_1))
{
ATerm trm44 = ATgetArgument(trm43, 0);
if(!(match_cons(trm44, sym_layout_0)))
goto label27 ;
}
else
goto label27 ;
{
ATerm trm45 = (ATerm) ATgetNext((ATermList) trm42);
if(((ATgetType(trm45) == AT_LIST) && !(ATisEmpty(trm45))))
{
ATerm trm46 = ATgetFirst((ATermList) trm45);
if(match_cons(trm46, sym_cf_1))
{
ATerm trm47 = ATgetArgument(trm46, 0);
if(!(match_cons(trm47, sym_layout_0)))
goto label27 ;
}
else
goto label27 ;
{
ATerm trm48 = (ATerm) ATgetNext((ATermList) trm45);
if(!(((ATgetType(trm48) == AT_LIST) && ATisEmpty(trm48))))
goto label27 ;
}
}
else
goto label27 ;
}
}
else
goto label27 ;
{
ATerm trm49 = ATgetArgument(trm41, 1);
if(match_cons(trm49, sym_cf_1))
{
ATerm trm50 = ATgetArgument(trm49, 0);
if(!(match_cons(trm50, sym_layout_0)))
goto label27 ;
}
else
goto label27 ;
}
{
ATerm trm51 = ATgetArgument(trm41, 2);
}
}
else
goto label27 ;
{
ATerm trm52 = ATgetArgument(trm40, 1);
if(!(((ATgetType(trm52) == AT_INT) && (ATgetInt((ATermInt) trm52) == 1))))
goto label27 ;
}
{
ATerm trm53 = ATgetArgument(trm40, 2);
if(match_cons(trm53, sym_prod_3))
{
ATerm trm54 = ATgetArgument(trm53, 0);
if(((ATgetType(trm54) == AT_LIST) && !(ATisEmpty(trm54))))
{
ATerm trm55 = ATgetFirst((ATermList) trm54);
if(match_cons(trm55, sym_cf_1))
{
ATerm trm56 = ATgetArgument(trm55, 0);
if(!(match_cons(trm56, sym_layout_0)))
goto label27 ;
}
else
goto label27 ;
{
ATerm trm57 = (ATerm) ATgetNext((ATermList) trm54);
if(((ATgetType(trm57) == AT_LIST) && !(ATisEmpty(trm57))))
{
ATerm trm58 = ATgetFirst((ATermList) trm57);
if(match_cons(trm58, sym_cf_1))
{
ATerm trm59 = ATgetArgument(trm58, 0);
if(!(match_cons(trm59, sym_layout_0)))
goto label27 ;
}
else
goto label27 ;
{
ATerm trm60 = (ATerm) ATgetNext((ATermList) trm57);
if(!(((ATgetType(trm60) == AT_LIST) && ATisEmpty(trm60))))
goto label27 ;
}
}
else
goto label27 ;
}
}
else
goto label27 ;
{
ATerm trm61 = ATgetArgument(trm53, 1);
if(match_cons(trm61, sym_cf_1))
{
ATerm trm62 = ATgetArgument(trm61, 0);
if(!(match_cons(trm62, sym_layout_0)))
goto label27 ;
}
else
goto label27 ;
}
{
ATerm trm63 = ATgetArgument(trm53, 2);
}
}
else
goto label27 ;
}
}
else
goto label27 ;
{
ATerm trm64 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm64) == AT_LIST) && ATisEmpty(trm64))))
goto label27 ;
}
}
else
goto label27 ;
{
ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
v_21 = t;
t = term27;
t_21 = t;
t = v_21;
w_21 = t;
t = term31;
u_21 = t;
t = w_21;
t = log_0_2(sl, t_21, u_21, t);
if((t == NULL))
goto fail23 ;
t = term33;
t = xtc_exit_0_0(sl, t);
if((t == NULL))
goto fail23 ;
else
goto label26 ;
}
label27 :
t = trm39;
goto label26 ;
label26 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm core_sdf2conflicts_0_1 (StrSL sl, ATerm j_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "core_sdf2conflicts_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = lookup_labels_0_1(sl, j_21, t);
if((t == NULL))
goto fail21 ;
t = check_empty_table_0_0(sl, t);
if((t == NULL))
goto fail21 ;
{
struct str_closure h_179 = { &(all_prods_have_cons_0_0) , sl };
StrCL lifted16_cl = &(h_179);
t = retain_all_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail21 ;
{
struct str_closure i_179 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(i_179);
t = map_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto fail21 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail21 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm38 = t;
t = Priority2Conflicts_0_0(sl_up(sl), t);
if((t == NULL))
goto label25 ;
goto label24 ;
label25 :
t = trm38;
{
ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
n_21 = t;
t = term27;
k_21 = t;
t = n_21;
o_21 = t;
t = term29;
l_21 = t;
t = o_21;
p_21 = t;
r_21 = t;
q_21 = t;
m_21 = t;
t = p_21;
t = log_0_3(sl_up(sl), k_21, l_21, m_21, t);
if((t == NULL))
goto fail22 ;
goto fail22 ;
}
label24 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_sdf2ast_conflicts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_sdf2ast_conflicts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm a_21 = NULL;
sl_init_var(0, a_21);
{
struct str_closure f_179 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(f_179);
struct str_closure g_179 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(g_179);
t = xtc_io_wrap_2_0(sl, lifted7_cl, lifted12_cl, t);
if((t == NULL))
goto fail11 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_21 = NULL;
ATerm trm30 = t;
ATerm b_21 = NULL;
b_21 = t;
{
ATerm trm31 = t;
ATerm trm32 = t;
t = term15;
t = get_config_0_0(sl_up(sl), t);
if((t == NULL))
goto label23 ;
goto label22 ;
label23 :
t = trm32;
{
struct str_closure c_179 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(c_179);
t = FILE_1_0(sl_up(sl), lifted13_cl, t);
if((t == NULL))
goto label21 ;
else
goto label22 ;
}
label22 :
;
goto label19 ;
label21 :
t = trm31;
goto label20 ;
label20 :
;
t = b_21;
}
{
struct str_closure d_179 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(d_179);
struct str_closure e_179 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(e_179);
t = xtc_transform_2_0(sl_up(sl), lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto fail17 ;
else
goto label18 ;
}
label19 :
t = trm30;
goto label18 ;
label18 :
;
t = read_from_0_0(sl_up(sl), t);
if((t == NULL))
goto fail17 ;
if(match_cons(t, sym_parse_table_5))
{
ATerm trm34 = ATgetArgument(t, 0);
ATerm trm35 = ATgetArgument(t, 1);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 2);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 2)))
goto fail17 ;
{
ATerm trm36 = ATgetArgument(t, 3);
}
{
ATerm trm37 = ATgetArgument(t, 4);
if(match_cons(trm37, sym_priorities_1))
{
i_21 = ATgetArgument(trm37, 0);
}
else
goto fail17 ;
}
}
else
goto fail17 ;
t = i_21;
if((sl_readvar(0, sl) == NULL))
goto fail17 ;
else
{
t = core_sdf2conflicts_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail17 ;
}
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail17 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_21 = NULL,g_21 = NULL,f_21 = NULL,h_21 = NULL;
g_21 = t;
t = get_sdf_main_module_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail20 ;
e_21 = t;
t = g_21;
h_21 = t;
t = pass_v_verbose_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail20 ;
f_21 = t;
t = h_21;
{
ATerm trm33;
trm33 = CheckATermList(f_21);
if((trm33 == NULL))
goto fail20 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm33, e_21), term25);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
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
ATerm c_21 = NULL,d_21 = NULL;
d_21 = t;
t = term21;
c_21 = t;
t = d_21;
t = has_extension_0_1(sl_up(sl_up(sl)), c_21, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm29 = t;
struct str_closure y_178 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(y_178);
t = sdf_main_module_option_1_0(sl_up(sl), lifted8_cl, t);
if((t == NULL))
goto label17 ;
goto label16 ;
label17 :
t = trm29;
{
struct str_closure z_178 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(z_178);
struct str_closure a_179 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(a_179);
struct str_closure b_179 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(b_179);
t = Option_3_0(sl_up(sl), lifted9_cl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail12 ;
else
goto label16 ;
}
label16 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term17;
t = set_config_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail15 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--tbl", 0, ATtrue))))
goto fail14 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm cons_of_prod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "cons_of_prod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
if(match_cons(t, sym_prod_3))
{
x_20 = ATgetArgument(t, 0);
y_20 = ATgetArgument(t, 1);
{
ATerm trm28 = ATgetArgument(t, 2);
if(match_cons(trm28, sym_attrs_1))
{
z_20 = ATgetArgument(trm28, 0);
}
else
goto fail10 ;
}
}
else
goto fail10 ;
t = z_20;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_cnstr_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_cnstr_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_178 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(x_178);
t = fetch_elem_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm15 = t;
ATerm e_20 = NULL;
if(match_cons(t, sym_term_1))
{
ATerm trm16 = ATgetArgument(t, 0);
if(match_cons(trm16, sym_appl_2))
{
ATerm trm17 = ATgetArgument(trm16, 0);
if(match_cons(trm17, sym_unquoted_1))
{
ATerm trm18 = ATgetArgument(trm17, 0);
if(!((ATgetSymbol(trm18) == ATmakeSymbol("cons", 0, ATtrue))))
goto label13 ;
}
else
goto label13 ;
{
ATerm trm19 = ATgetArgument(trm16, 1);
if(((ATgetType(trm19) == AT_LIST) && !(ATisEmpty(trm19))))
{
ATerm trm20 = ATgetFirst((ATermList) trm19);
if(match_cons(trm20, sym_fun_1))
{
ATerm trm21 = ATgetArgument(trm20, 0);
if(match_cons(trm21, sym_quoted_1))
{
e_20 = ATgetArgument(trm21, 0);
}
else
goto label13 ;
}
else
goto label13 ;
{
ATerm trm22 = (ATerm) ATgetNext((ATermList) trm19);
if(!(((ATgetType(trm22) == AT_LIST) && ATisEmpty(trm22))))
goto label13 ;
}
}
else
goto label13 ;
}
}
else
goto label13 ;
}
else
goto label13 ;
t = e_20;
t = un_double_quote_0_0(sl_up(sl), t);
if((t == NULL))
goto label13 ;
goto label12 ;
label13 :
t = trm15;
{
ATerm trm23 = t;
ATerm f_20 = NULL;
if(match_cons(t, sym_term_1))
{
ATerm trm24 = ATgetArgument(t, 0);
if(match_cons(trm24, sym_cons_1))
{
f_20 = ATgetArgument(trm24, 0);
}
else
goto label14 ;
}
else
goto label14 ;
t = f_20;
goto label12 ;
label14 :
t = trm23;
{
ATerm trm25 = t;
ATerm g_20 = NULL;
if(match_cons(t, sym_default_1))
{
ATerm trm26 = ATgetArgument(t, 0);
if(match_cons(trm26, sym_term_1))
{
ATerm trm27 = ATgetArgument(trm26, 0);
if(match_cons(trm27, sym_cons_1))
{
g_20 = ATgetArgument(trm27, 0);
}
else
goto label15 ;
}
else
goto label15 ;
}
else
goto label15 ;
t = g_20;
goto label12 ;
label15 :
t = trm25;
{
ATerm h_20 = NULL;
if(match_cons(t, sym_cons_1))
{
h_20 = ATgetArgument(t, 0);
}
else
goto fail9 ;
t = h_20;
goto label12 ;
}
}
}
label12 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_sdf_main_module_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_sdf_main_module_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm14 = t;
t = term3;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm14;
t = term11;
goto label10 ;
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_main_module_option_1_0 (StrSL sl, StrCL v_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_main_module_option_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, v_19);
{
struct str_closure u_178 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(u_178);
struct str_closure v_178 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(v_178);
struct str_closure w_178 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(w_178);
t = ArgOption_3_0(sl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_19 = NULL,z_19 = NULL;
z_19 = t;
t = term5;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail6 ;
y_19 = t;
t = z_19;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term7), y_19), term9);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail6 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_19 = NULL,w_19 = NULL,x_19 = NULL;
u_19 = t;
x_19 = t;
w_19 = t;
t = (ATerm) ATmakeAppl(sym__2, term3, w_19);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
t = u_19;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm13 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-m", 0, ATtrue))))
goto label9 ;
goto label8 ;
label9 :
t = trm13;
if((ATgetSymbol(t) == ATmakeSymbol("--main", 0, ATtrue)))
goto label8 ;
else
goto fail4 ;
label8 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_empty_sym_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_empty_sym_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
if(match_cons(t, sym_lit_1))
{
ATerm trm1 = ATgetArgument(t, 0);
}
else
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm2 = t;
if(match_cons(t, sym_cilit_1))
{
ATerm trm3 = ATgetArgument(t, 0);
}
else
goto label2 ;
goto label0 ;
label2 :
t = trm2;
{
ATerm trm4 = t;
if(match_cons(t, sym_ci_lit_1))
{
ATerm trm5 = ATgetArgument(t, 0);
}
else
goto label3 ;
goto label0 ;
label3 :
t = trm4;
{
ATerm trm6 = t;
if(!(match_cons(t, sym_layout_0)))
goto label4 ;
goto label0 ;
label4 :
t = trm6;
{
ATerm trm7 = t;
ATerm t_177 = NULL,u_177 = NULL,v_177 = NULL;
ATerm trm8;
trm8 = (ATerm) ATgetAnnotations(t);
if((trm8 == NULL))
trm8 = (ATerm) ATempty;
if(match_cons(t, sym_opt_1))
{
u_177 = ATgetArgument(t, 0);
}
else
goto label5 ;
t_177 = trm8;
t = u_177;
t = is_empty_sym_0_0(sl, t);
if((t == NULL))
goto label5 ;
v_177 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_opt_1, v_177), t_177);
goto label0 ;
label5 :
t = trm7;
{
ATerm trm9 = t;
ATerm x_177 = NULL,y_177 = NULL,z_177 = NULL;
ATerm trm10;
trm10 = (ATerm) ATgetAnnotations(t);
if((trm10 == NULL))
trm10 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
y_177 = ATgetArgument(t, 0);
}
else
goto label6 ;
x_177 = trm10;
t = y_177;
t = is_empty_sym_0_0(sl, t);
if((t == NULL))
goto label6 ;
z_177 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, z_177), x_177);
goto label0 ;
label6 :
t = trm9;
{
ATerm trm11 = t;
ATerm b_178 = NULL,c_178 = NULL,d_178 = NULL;
ATerm trm12;
trm12 = (ATerm) ATgetAnnotations(t);
if((trm12 == NULL))
trm12 = (ATerm) ATempty;
if(match_cons(t, sym_lex_1))
{
c_178 = ATgetArgument(t, 0);
}
else
goto label7 ;
b_178 = trm12;
t = c_178;
t = is_empty_sym_0_0(sl, t);
if((t == NULL))
goto label7 ;
d_178 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lex_1, d_178), b_178);
goto label0 ;
label7 :
t = trm11;
{
struct str_closure s_178 = { &(_Id) , sl };
StrCL lifted1_cl = &(s_178);
struct str_closure t_178 = { &(is_empty_sym_0_0) , sl };
StrCL lifted2_cl = &(t_178);
t = label_2_0(sl, lifted1_cl, lifted2_cl, t);
if((t == NULL))
goto fail2 ;
else
goto label0 ;
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
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pass_v_verbose_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_178 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(r_178);
t = (ATerm) ATempty;
t = if_verbose3_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
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
t = (ATerm) ATinsert(ATempty, term1);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 73));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(length_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("length_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(retain_all_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("retain_all_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_indices_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_indices_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_index_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_index_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(range_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("range_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(has_extension_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("has_extension_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dec_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dec_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(inc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("inc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(un_double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("un_double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose3_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose3_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(FILE_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("FILE_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(LookupLabel_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("LookupLabel_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(arg_gtr_prio_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("arg_gtr_prio_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(gtr_prio_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("gtr_prio_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(label_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("label_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(arg_for_symbol_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("arg_for_symbol_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Prod2Symbol_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Prod2Symbol_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Priority2Conflicts_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Priority2Conflicts_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(all_prods_have_cons_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("all_prods_have_cons_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(define_label_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("define_label_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lookup_labels_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lookup_labels_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(check_empty_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("check_empty_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(core_sdf2conflicts_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("core_sdf2conflicts_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted13);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted13", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_sdf2ast_conflicts_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_sdf2ast_conflicts_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(cons_of_prod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("cons_of_prod_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_cnstr_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_cnstr_name_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_sdf_main_module_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_sdf_main_module_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(sdf_main_module_option_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_main_module_option_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_empty_sym_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_empty_sym_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_v_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_v_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
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
