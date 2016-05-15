#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_module_3;
static Symbol sym_MixLayout_0;
static Symbol sym_SdfResultModuleFlag_0;
static Symbol sym_syntax_1;
static Symbol sym_prod_3;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_layout_0;
static Symbol sym_opt_1;
static Symbol sym_sort_1;
static Symbol sym_parameterized_sort_2;
static Symbol sym_file_start_0;
static Symbol sym_renamings_1;
static Symbol sym_symbol_2;
static Symbol sym_unparameterized_1;
static Symbol sym_parameterized_2;
static Symbol sym_imports_1;
static Symbol sym_renamed_module_2;
static Symbol sym_definition_1;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Error_0;
static Symbol sym_SdfMainModuleFlag_0;
static void init_module_constructors (void)
{
sym_module_3 = ATmakeSymbol("module", 3, ATfalse);
ATprotectSymbol(sym_module_3);
sym_MixLayout_0 = ATmakeSymbol("MixLayout", 0, ATfalse);
ATprotectSymbol(sym_MixLayout_0);
sym_SdfResultModuleFlag_0 = ATmakeSymbol("SdfResultModuleFlag", 0, ATfalse);
ATprotectSymbol(sym_SdfResultModuleFlag_0);
sym_syntax_1 = ATmakeSymbol("syntax", 1, ATfalse);
ATprotectSymbol(sym_syntax_1);
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
sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
ATprotectSymbol(sym_sort_1);
sym_parameterized_sort_2 = ATmakeSymbol("parameterized-sort", 2, ATfalse);
ATprotectSymbol(sym_parameterized_sort_2);
sym_file_start_0 = ATmakeSymbol("file-start", 0, ATfalse);
ATprotectSymbol(sym_file_start_0);
sym_renamings_1 = ATmakeSymbol("renamings", 1, ATfalse);
ATprotectSymbol(sym_renamings_1);
sym_symbol_2 = ATmakeSymbol("symbol", 2, ATfalse);
ATprotectSymbol(sym_symbol_2);
sym_unparameterized_1 = ATmakeSymbol("unparameterized", 1, ATfalse);
ATprotectSymbol(sym_unparameterized_1);
sym_parameterized_2 = ATmakeSymbol("parameterized", 2, ATfalse);
ATprotectSymbol(sym_parameterized_2);
sym_imports_1 = ATmakeSymbol("imports", 1, ATfalse);
ATprotectSymbol(sym_imports_1);
sym_renamed_module_2 = ATmakeSymbol("renamed-module", 2, ATfalse);
ATprotectSymbol(sym_renamed_module_2);
sym_definition_1 = ATmakeSymbol("definition", 1, ATfalse);
ATprotectSymbol(sym_definition_1);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_SdfMainModuleFlag_0 = ATmakeSymbol("SdfMainModuleFlag", 0, ATfalse);
ATprotectSymbol(sym_SdfMainModuleFlag_0);
}
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
term0 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("No production rules in RTG. Did you specify the right main module?", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_SdfMainModuleFlag_0);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [Main]", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("-m mod | --main mod   ", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("Main", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("sglri", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-desugar", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.baf", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("core-sdf-parenthesize", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("-n", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("implodePT", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("Specify main module in sdf definition", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeInt(1);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_MixLayout_0);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("Ctx", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("SDF", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("Main module not found in syntax definition", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(sym_layout_0);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym_lex_1, term57);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(sym_cf_1, term57);
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(sym_opt_1, term57);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(sym_lex_1, term63);
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym_cf_1, term63);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym_SdfResultModuleFlag_0);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("Name of the resulting module (required)", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("--name mod       ", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(sym__2, term49, term7);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("--include-layout        Rename layout", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm hashtable_pushlist_0_2 (StrSL sl, ATerm k_70, ATerm l_70, ATerm t);
ATerm hashtable_get_0_1 (StrSL sl, ATerm x_69, ATerm t);
ATerm new_hashtable_0_0 (StrSL sl, ATerm t);
ATerm separate_by_0_0 (StrSL sl, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL k_63, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL j_63, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL d_63, ATerm t);
ATerm remove_all_1_0 (StrSL sl, StrCL m_62, ATerm t);
ATerm retain_all_1_0 (StrSL sl, StrCL l_62, ATerm t);
ATerm iset_fixpoint_1_0 (StrSL sl, StrCL j_59, ATerm t);
ATerm iset_elements_0_0 (StrSL sl, ATerm t);
ATerm iset_add_0_1 (StrSL sl, ATerm b_59, ATerm t);
ATerm new_iset_0_0 (StrSL sl, ATerm t);
ATerm collect_1_0 (StrSL sl, StrCL k_44, ATerm t);
ATerm collect_om_1_0 (StrSL sl, StrCL j_44, ATerm t);
ATerm diff_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm newname_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL n_26, StrCL o_26, StrCL p_26, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL i_26, StrCL j_26, StrCL k_26, ATerm t);
ATerm if_verbose3_1_0 (StrSL sl, StrCL k_25, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm t_24, ATerm u_24, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL u_19, StrCL v_19, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm xtc_ensure_file_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_transform_1_0 (StrSL sl, StrCL b_19, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL u_18, StrCL v_18, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
ATerm include_layout_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
ATerm sdf_result_module_option_0_0 (StrSL sl, ATerm t);
ATerm create_module_0_2 (StrSL sl, ATerm q_18, ATerm r_18, ATerm t);
ATerm rename_sort_0_1 (StrSL sl, ATerm p_18, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
ATerm collect_sorts_0_0 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
ATerm collect_layout_sorts_0_0 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
ATerm lookup_sdf_module_0_1 (StrSL sl, ATerm l_9, ATerm t);
ATerm get_main_module_parameters_0_0 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
ATerm main_gen_sdf_mix_0_0 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
ATerm xtc_sdf2_normalize_0_1 (StrSL sl, ATerm n_8, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm xtc_parse_sdf2_0_1 (StrSL sl, ATerm k_8, ATerm t);
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm xtc_sglri_0_2 (StrSL sl, ATerm s_7, ATerm t_7, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL l_6, ATerm t);
ATerm get_sdf_main_module_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm sdf_main_module_option_1_0 (StrSL sl, StrCL c_6, ATerm t);
ATerm error_if_empty_grammar_1_0 (StrSL sl, StrCL w_5, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm is_empty_grammar_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_gen_sdf_mix_0_0(sl, t);
if((t == NULL))
goto fail60 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
ATerm include_layout_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "include_layout_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_107 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(v_107);
struct str_closure w_107 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(w_107);
struct str_closure x_107 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(x_107);
t = Option_3_0(sl, lifted44_cl, lifted45_cl, lifted46_cl, t);
if((t == NULL))
goto fail56 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term77;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_13 = NULL;
g_13 = t;
t = term75;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail58 ;
t = g_13;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--include-layout", 0, ATtrue))))
goto fail57 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_result_module_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_result_module_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_107 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(s_107);
struct str_closure t_107 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(t_107);
struct str_closure u_107 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(u_107);
t = ArgOption_3_0(sl, lifted41_cl, lifted42_cl, lifted43_cl, t);
if((t == NULL))
goto fail52 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term71), term73);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail55 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
d_13 = t;
f_13 = t;
e_13 = t;
t = (ATerm) ATmakeAppl(sym__2, term69, e_13);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail54 ;
t = d_13;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--name", 0, ATtrue))))
goto fail53 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm create_module_0_2 (StrSL sl, ATerm q_18, ATerm r_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "create_module_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm67 = t;
ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
z_12 = t;
c_13 = t;
t = r_18;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm68 = ATgetFirst((ATermList) t);
ATerm trm69 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label35 ;
t = get_sdf_main_module_0_0(sl, t);
if((t == NULL))
goto label35 ;
a_13 = t;
t = term69;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label35 ;
b_13 = t;
t = c_13;
{
ATerm trm70;
trm70 = CheckATermList(r_18);
if((trm70 == NULL))
goto label35 ;
t = (ATerm) ATmakeAppl(sym_module_3, (ATerm)ATmakeAppl(sym_parameterized_2, b_13, (ATerm) ATinsert((ATermList)trm70, (ATerm) ATmakeAppl(sym_sort_1, q_18))), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_imports_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_renamed_module_2, (ATerm)ATmakeAppl(sym_parameterized_2, a_13, r_18), (ATerm) ATmakeAppl(sym_renamings_1, z_12))))), (ATerm) ATempty);
}
goto label34 ;
label35 :
t = trm67;
{
ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
t_12 = t;
w_12 = t;
t = r_18;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail51 ;
t = get_sdf_main_module_0_0(sl, t);
if((t == NULL))
goto fail51 ;
u_12 = t;
t = term69;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail51 ;
v_12 = t;
t = w_12;
{
ATerm trm71;
trm71 = CheckATermList(r_18);
if((trm71 == NULL))
goto fail51 ;
t = (ATerm) ATmakeAppl(sym_module_3, (ATerm)ATmakeAppl(sym_parameterized_2, v_12, (ATerm) ATinsert((ATermList)trm71, (ATerm) ATmakeAppl(sym_sort_1, q_18))), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_imports_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_renamed_module_2, (ATerm)ATmakeAppl(sym_unparameterized_1, u_12), (ATerm) ATmakeAppl(sym_renamings_1, t_12))))), (ATerm) ATempty);
goto label34 ;
}
}
label34 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm rename_sort_0_1 (StrSL sl, ATerm p_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rename_sort_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm65 = t;
ATerm o_12 = NULL;
if(match_cons(t, sym_sort_1))
{
o_12 = ATgetArgument(t, 0);
}
else
goto label33 ;
t = (ATerm) ATmakeAppl(sym_symbol_2, (ATerm)ATmakeAppl(sym_sort_1, o_12), (ATerm) ATmakeAppl(sym_parameterized_sort_2, o_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_sort_1, p_18))));
goto label32 ;
label33 :
t = trm65;
{
ATerm l_12 = NULL,m_12 = NULL;
if(match_cons(t, sym_parameterized_sort_2))
{
l_12 = ATgetArgument(t, 0);
m_12 = ATgetArgument(t, 1);
}
else
goto fail50 ;
{
ATerm trm66;
trm66 = CheckATermList(m_12);
if((trm66 == NULL))
goto fail50 ;
t = (ATerm) ATmakeAppl(sym_symbol_2, (ATerm)ATmakeAppl(sym_parameterized_sort_2, l_12, m_12), (ATerm) ATmakeAppl(sym_parameterized_sort_2, l_12, (ATerm) ATinsert((ATermList)trm66, (ATerm) ATmakeAppl(sym_sort_1, p_18))));
goto label32 ;
}
}
label32 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm collect_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "collect_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_10 = NULL;
struct str_closure r_107 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(r_107);
t = collect_1_0(sl, lifted40_cl, t);
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
ATerm trm50 = t;
ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
if(match_cons(t, sym_prod_3))
{
q_10 = ATgetArgument(t, 0);
{
ATerm trm51 = ATgetArgument(t, 1);
if(match_cons(trm51, sym_sort_1))
{
r_10 = ATgetArgument(trm51, 0);
}
else
goto label27 ;
}
s_10 = ATgetArgument(t, 2);
}
else
goto label27 ;
t = (ATerm) ATmakeAppl(sym_sort_1, r_10);
goto label26 ;
label27 :
t = trm50;
{
ATerm trm52 = t;
ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
if(match_cons(t, sym_prod_3))
{
t_10 = ATgetArgument(t, 0);
{
ATerm trm53 = ATgetArgument(t, 1);
if(match_cons(trm53, sym_cf_1))
{
ATerm trm54 = ATgetArgument(trm53, 0);
if(match_cons(trm54, sym_sort_1))
{
u_10 = ATgetArgument(trm54, 0);
}
else
goto label28 ;
}
else
goto label28 ;
}
v_10 = ATgetArgument(t, 2);
}
else
goto label28 ;
t = (ATerm) ATmakeAppl(sym_sort_1, u_10);
goto label26 ;
label28 :
t = trm52;
{
ATerm trm55 = t;
ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
if(match_cons(t, sym_prod_3))
{
w_10 = ATgetArgument(t, 0);
{
ATerm trm56 = ATgetArgument(t, 1);
if(match_cons(trm56, sym_lex_1))
{
ATerm trm57 = ATgetArgument(trm56, 0);
if(match_cons(trm57, sym_sort_1))
{
x_10 = ATgetArgument(trm57, 0);
}
else
goto label29 ;
}
else
goto label29 ;
}
y_10 = ATgetArgument(t, 2);
}
else
goto label29 ;
t = (ATerm) ATmakeAppl(sym_sort_1, x_10);
goto label26 ;
label29 :
t = trm55;
{
ATerm trm58 = t;
ATerm z_10 = NULL,a_11 = NULL,c_11 = NULL,d_11 = NULL;
if(match_cons(t, sym_prod_3))
{
z_10 = ATgetArgument(t, 0);
{
ATerm trm59 = ATgetArgument(t, 1);
if(match_cons(trm59, sym_parameterized_sort_2))
{
a_11 = ATgetArgument(trm59, 0);
c_11 = ATgetArgument(trm59, 1);
}
else
goto label30 ;
}
d_11 = ATgetArgument(t, 2);
}
else
goto label30 ;
t = (ATerm) ATmakeAppl(sym_parameterized_sort_2, a_11, c_11);
goto label26 ;
label30 :
t = trm58;
{
ATerm trm60 = t;
ATerm e_11 = NULL,f_11 = NULL,h_11 = NULL,i_11 = NULL;
if(match_cons(t, sym_prod_3))
{
e_11 = ATgetArgument(t, 0);
{
ATerm trm61 = ATgetArgument(t, 1);
if(match_cons(trm61, sym_cf_1))
{
ATerm trm62 = ATgetArgument(trm61, 0);
if(match_cons(trm62, sym_parameterized_sort_2))
{
f_11 = ATgetArgument(trm62, 0);
h_11 = ATgetArgument(trm62, 1);
}
else
goto label31 ;
}
else
goto label31 ;
}
i_11 = ATgetArgument(t, 2);
}
else
goto label31 ;
t = (ATerm) ATmakeAppl(sym_parameterized_sort_2, f_11, h_11);
goto label26 ;
label31 :
t = trm60;
{
ATerm k_11 = NULL,l_11 = NULL,h_12 = NULL,j_12 = NULL;
if(match_cons(t, sym_prod_3))
{
k_11 = ATgetArgument(t, 0);
{
ATerm trm63 = ATgetArgument(t, 1);
if(match_cons(trm63, sym_lex_1))
{
ATerm trm64 = ATgetArgument(trm63, 0);
if(match_cons(trm64, sym_parameterized_sort_2))
{
l_11 = ATgetArgument(trm64, 0);
h_12 = ATgetArgument(trm64, 1);
}
else
goto fail49 ;
}
else
goto fail49 ;
}
j_12 = ATgetArgument(t, 2);
}
else
goto fail49 ;
t = (ATerm) ATmakeAppl(sym_parameterized_sort_2, l_11, h_12);
goto label26 ;
}
}
}
}
}
label26 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm collect_layout_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "collect_layout_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
sl_init_var(0, w_9);
{
struct str_closure h_107 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(h_107);
u_9 = t;
t = new_hashtable_0_0(sl, t);
if((t == NULL))
goto fail43 ;
if((w_9 == NULL))
{
w_9 = t;
}
else
if((w_9 != t))
goto fail43 ;
t = u_9;
{
struct str_closure n_107 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(n_107);
t = collect_om_1_0(sl, lifted36_cl, t);
if((t == NULL))
goto fail43 ;
{
struct str_closure p_107 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(p_107);
t = map_1_0(sl, lifted37_cl, t);
if((t == NULL))
goto fail43 ;
t = new_iset_0_0(sl, t);
if((t == NULL))
goto fail43 ;
v_9 = t;
b_10 = t;
t = term57;
a_10 = t;
t = b_10;
t = iset_add_0_1(sl, a_10, t);
if((t == NULL))
goto fail43 ;
d_10 = t;
t = term59;
c_10 = t;
t = d_10;
t = iset_add_0_1(sl, c_10, t);
if((t == NULL))
goto fail43 ;
f_10 = t;
t = term61;
e_10 = t;
t = f_10;
t = iset_add_0_1(sl, e_10, t);
if((t == NULL))
goto fail43 ;
h_10 = t;
t = term63;
g_10 = t;
t = h_10;
t = iset_add_0_1(sl, g_10, t);
if((t == NULL))
goto fail43 ;
j_10 = t;
t = term65;
i_10 = t;
t = j_10;
t = iset_add_0_1(sl, i_10, t);
if((t == NULL))
goto fail43 ;
l_10 = t;
t = term67;
k_10 = t;
t = l_10;
t = iset_add_0_1(sl, k_10, t);
if((t == NULL))
goto fail43 ;
{
struct str_closure q_107 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(q_107);
t = iset_fixpoint_1_0(sl, lifted38_cl, t);
if((t == NULL))
goto fail43 ;
t = iset_elements_0_0(sl, t);
if((t == NULL))
goto fail43 ;
t = retain_all_1_0(sl, lifted39_cl, t);
if((t == NULL))
goto fail43 ;
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_9 = NULL;
z_9 = t;
if((sl_readvar(0, sl) == NULL))
goto fail47 ;
else
{
t = sl_readvar(0, sl);
}
t = hashtable_get_0_1(sl_up(sl), z_9, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_9 = NULL,y_9 = NULL;
if(match_cons(t, sym_prod_3))
{
x_9 = ATgetArgument(t, 0);
y_9 = ATgetArgument(t, 1);
{
ATerm trm49 = ATgetArgument(t, 2);
}
}
else
goto fail46 ;
if((sl_readvar(0, sl) == NULL))
goto fail46 ;
else
{
t = sl_readvar(0, sl);
}
t = hashtable_pushlist_0_2(sl_up(sl), y_9, x_9, t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_prod_3))
{
ATerm trm46 = ATgetArgument(t, 0);
ATerm trm47 = ATgetArgument(t, 1);
ATerm trm48 = ATgetArgument(t, 2);
}
else
goto fail45 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm40 = t;
if(match_cons(t, sym_sort_1))
{
ATerm trm41 = ATgetArgument(t, 0);
}
else
goto label24 ;
goto label23 ;
label24 :
t = trm40;
{
ATerm trm42 = t;
ATerm m_10 = NULL;
if(match_cons(t, sym_lex_1))
{
ATerm trm43 = ATgetArgument(t, 0);
if(match_cons(trm43, sym_sort_1))
{
ATerm trm44 = ATgetArgument(trm43, 0);
}
else
goto label25 ;
}
else
goto label25 ;
if(match_cons(t, sym_lex_1))
{
m_10 = ATgetArgument(t, 0);
}
else
goto label25 ;
t = m_10;
goto label23 ;
label25 :
t = trm42;
{
ATerm n_10 = NULL,o_10 = NULL;
if(match_cons(t, sym_cf_1))
{
ATerm trm45 = ATgetArgument(t, 0);
if(match_cons(trm45, sym_sort_1))
{
n_10 = ATgetArgument(trm45, 0);
}
else
goto fail44 ;
}
else
goto fail44 ;
t = n_10;
if(match_cons(t, sym_lex_1))
{
o_10 = ATgetArgument(t, 0);
}
else
goto fail44 ;
t = o_10;
goto label23 ;
}
}
label23 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm lookup_sdf_module_0_1 (StrSL sl, ATerm l_9, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lookup_sdf_module_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, l_9);
{
ATerm m_9 = NULL,s_105 = NULL,t_105 = NULL;
t_105 = t;
t = term53;
s_105 = t;
t = t_105;
t = xtc_parse_sdf2_0_1(sl, s_105, t);
if((t == NULL))
goto fail41 ;
t = read_from_0_0(sl, t);
if((t == NULL))
goto fail41 ;
if(match_cons(t, sym_definition_1))
{
m_9 = ATgetArgument(t, 0);
}
else
goto fail41 ;
t = m_9;
{
ATerm trm31 = t;
struct str_closure g_107 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(g_107);
t = fetch_elem_1_0(sl, lifted35_cl, t);
if((t == NULL))
goto label20 ;
goto label19 ;
label20 :
t = trm31;
{
ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
p_9 = t;
t = term1;
n_9 = t;
t = p_9;
q_9 = t;
t = term55;
o_9 = t;
t = q_9;
t = log_0_2(sl, n_9, o_9, t);
if((t == NULL))
goto fail41 ;
else
goto label19 ;
}
label19 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm32 = t;
if(match_cons(t, sym_module_3))
{
ATerm trm33 = ATgetArgument(t, 0);
if(match_cons(trm33, sym_parameterized_2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm33, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm33, 0)))
goto label22 ;
{
ATerm trm34 = ATgetArgument(trm33, 1);
}
}
else
goto label22 ;
{
ATerm trm35 = ATgetArgument(t, 1);
}
{
ATerm trm36 = ATgetArgument(t, 2);
}
}
else
goto label22 ;
goto label21 ;
label22 :
t = trm32;
if(match_cons(t, sym_module_3))
{
ATerm trm37 = ATgetArgument(t, 0);
if(match_cons(trm37, sym_unparameterized_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm37, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm37, 0)))
goto fail42 ;
}
else
goto fail42 ;
{
ATerm trm38 = ATgetArgument(t, 1);
}
{
ATerm trm39 = ATgetArgument(t, 2);
}
goto label21 ;
}
else
goto fail42 ;
label21 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_main_module_parameters_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_main_module_parameters_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
i_9 = t;
k_9 = t;
t = get_sdf_main_module_0_0(sl, t);
if((t == NULL))
goto fail40 ;
j_9 = t;
t = k_9;
t = j_9;
h_9 = t;
t = i_9;
t = lookup_sdf_module_0_1(sl, h_9, t);
if((t == NULL))
goto fail40 ;
{
ATerm trm22 = t;
if(match_cons(t, sym_module_3))
{
ATerm trm23 = ATgetArgument(t, 0);
if(match_cons(trm23, sym_unparameterized_1))
{
ATerm trm24 = ATgetArgument(trm23, 0);
}
else
goto label18 ;
{
ATerm trm25 = ATgetArgument(t, 1);
}
{
ATerm trm26 = ATgetArgument(t, 2);
}
}
else
goto label18 ;
t = (ATerm) ATempty;
goto label17 ;
label18 :
t = trm22;
{
ATerm g_9 = NULL;
if(match_cons(t, sym_module_3))
{
ATerm trm27 = ATgetArgument(t, 0);
if(match_cons(trm27, sym_parameterized_2))
{
ATerm trm28 = ATgetArgument(trm27, 0);
g_9 = ATgetArgument(trm27, 1);
}
else
goto fail40 ;
{
ATerm trm29 = ATgetArgument(t, 1);
}
{
ATerm trm30 = ATgetArgument(t, 2);
}
}
else
goto fail40 ;
t = g_9;
goto label17 ;
}
label17 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_gen_sdf_mix_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_gen_sdf_mix_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
sl_init_var(0, q_8);
sl_init_var(1, r_8);
sl_init_var(2, s_8);
{
struct str_closure e_107 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(e_107);
struct str_closure f_107 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(f_107);
t = xtc_io_wrap_2_0(sl, lifted27_cl, lifted29_cl, t);
if((t == NULL))
goto fail31 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
t = xtc_ensure_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail34 ;
t_8 = t;
y_8 = t;
t = get_main_module_parameters_0_0(sl_up(sl), t);
if((t == NULL))
goto fail34 ;
x_8 = t;
t = y_8;
t = x_8;
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = t;
}
else
if((sl_readvar(2, sl) != t))
goto fail34 ;
t = t_8;
a_9 = t;
c_9 = t;
t = get_sdf_main_module_0_0(sl_up(sl), t);
if((t == NULL))
goto fail34 ;
b_9 = t;
t = c_9;
t = b_9;
z_8 = t;
t = a_9;
t = xtc_sdf2_normalize_0_1(sl_up(sl), z_8, t);
if((t == NULL))
goto fail34 ;
{
struct str_closure d_107 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(d_107);
t = xtc_io_transform_1_0(sl_up(sl), lifted30_cl, t);
if((t == NULL))
goto fail34 ;
t = xtc_pp_sdf2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail34 ;
}
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
ATerm u_8 = NULL,w_8 = NULL;
struct str_closure z_106 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(z_106);
t = error_if_empty_grammar_1_0(sl_up(sl_up(sl)), lifted31_cl, t);
if((t == NULL))
goto fail35 ;
u_8 = t;
t = collect_layout_sorts_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail35 ;
if((sl_readvar(0, sl_up(sl)) == NULL))
{
sl_readvar(0, sl_up(sl)) = t;
}
else
if((sl_readvar(0, sl_up(sl)) != t))
goto fail35 ;
t = u_8;
t = collect_sorts_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail35 ;
{
ATerm trm20 = t;
ATerm v_8 = NULL;
v_8 = t;
{
ATerm trm21 = t;
t = term49;
t = get_config_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label16 ;
goto label14 ;
label16 :
t = trm21;
goto label15 ;
label15 :
;
t = v_8;
}
{
ATerm d_9 = NULL,e_9 = NULL;
e_9 = t;
d_9 = t;
if((sl_readvar(0, sl_up(sl)) == NULL))
goto fail35 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, d_9, sl_readvar(0, sl_up(sl)));
}
t = diff_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail35 ;
else
goto label13 ;
}
label14 :
t = trm20;
goto label13 ;
label13 :
;
{
struct str_closure b_107 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(b_107);
t = remove_all_1_0(sl_up(sl_up(sl)), lifted32_cl, t);
if((t == NULL))
goto fail35 ;
w_8 = t;
t = term51;
t = newname_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail35 ;
if((sl_readvar(1, sl_up(sl)) == NULL))
{
sl_readvar(1, sl_up(sl)) = t;
}
else
if((sl_readvar(1, sl_up(sl)) != t))
goto fail35 ;
t = w_8;
{
struct str_closure c_107 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(c_107);
t = map_1_0(sl_up(sl_up(sl)), lifted34_cl, t);
if((t == NULL))
goto fail35 ;
if(((sl_readvar(1, sl_up(sl)) == NULL) || (sl_readvar(2, sl_up(sl)) == NULL)))
goto fail35 ;
else
{
t = create_module_0_2(sl_up(sl_up(sl)), sl_readvar(1, sl_up(sl)), sl_readvar(2, sl_up(sl)), t);
if((t == NULL))
goto fail35 ;
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl_up(sl_up(sl))) == NULL))
goto fail39 ;
else
{
t = rename_sort_0_1(sl_up(sl_up(sl_up(sl))), sl_readvar(1, sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail39 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm o_105 = NULL,r_105 = NULL,p_105 = NULL,q_105 = NULL;
sl_init_var(0, p_105);
r_105 = t;
if((sl_readvar(2, sl_up(sl_up(sl))) == NULL))
goto fail37 ;
else
{
t = sl_readvar(2, sl_up(sl_up(sl)));
}
o_105 = t;
t = r_105;
q_105 = t;
if((p_105 == NULL))
{
p_105 = t;
}
else
if((p_105 != t))
goto fail37 ;
t = o_105;
{
struct str_closure a_107 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(a_107);
t = fetch_1_0(sl_up(sl_up(sl_up(sl))), lifted33_cl, t);
if((t == NULL))
goto fail37 ;
t = q_105;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail38 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
t = xtc_exit_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail36 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm18 = t;
struct str_closure y_106 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(y_106);
t = sdf_main_module_option_1_0(sl_up(sl), lifted28_cl, t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm18;
{
ATerm trm19 = t;
t = sdf_result_module_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label12 ;
goto label10 ;
label12 :
t = trm19;
t = include_layout_option_0_0(sl_up(sl), t);
if((t == NULL))
goto fail32 ;
else
goto label10 ;
}
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_sdf2_normalize_0_1 (StrSL sl, ATerm n_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_sdf2_normalize_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, n_8);
{
struct str_closure s_106 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(s_106);
struct str_closure t_106 = { &(pass_verbose_0_0) , sl };
StrCL lifted26_cl = &(t_106);
struct str_closure u_106 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(u_106);
struct str_closure v_106 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(v_106);
t = xtc_transform_2_0(sl, lifted21_cl, lifted22_cl, t);
if((t == NULL))
goto fail26 ;
{
struct str_closure w_106 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(w_106);
struct str_closure x_106 = { &(pass_v_verbose_0_0) , sl };
StrCL lifted24_cl = &(x_106);
t = xtc_transform_2_0(sl, lifted23_cl, lifted24_cl, t);
if((t == NULL))
goto fail26 ;
t = xtc_transform_2_0(sl, lifted25_cl, lifted26_cl, t);
if((t == NULL))
goto fail26 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_8 = NULL,p_8 = NULL;
p_8 = t;
t = pass_v_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
o_8 = t;
t = p_8;
if((sl_readvar(0, sl) == NULL))
goto fail29 ;
else
{
ATerm trm17;
trm17 = CheckATermList(o_8);
if((trm17 == NULL))
goto fail29 ;
t = (ATerm) ATinsert(ATinsert(ATinsert((ATermList)trm17, sl_readvar(0, sl)), term39), term41);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_sdf2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_106 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(l_106);
struct str_closure m_106 = { &(pass_verbose_0_0) , sl };
StrCL lifted20_cl = &(m_106);
struct str_closure n_106 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(n_106);
struct str_closure o_106 = { &(pass_verbose_0_0) , sl };
StrCL lifted15_cl = &(o_106);
t = xtc_transform_2_0(sl, lifted14_cl, lifted15_cl, t);
if((t == NULL))
goto fail21 ;
{
struct str_closure p_106 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(p_106);
struct str_closure q_106 = { &(pass_verbose_0_0) , sl };
StrCL lifted17_cl = &(q_106);
t = xtc_transform_2_0(sl, lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto fail21 ;
{
struct str_closure r_106 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(r_106);
t = xtc_ast2abox_1_0(sl, lifted18_cl, t);
if((t == NULL))
goto fail21 ;
t = xtc_transform_2_0(sl, lifted19_cl, lifted20_cl, t);
if((t == NULL))
goto fail21 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term35);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_parse_sdf2_0_1 (StrSL sl, ATerm k_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_parse_sdf2_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_8 = NULL,m_8 = NULL;
struct str_closure j_106 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(j_106);
struct str_closure k_106 = { &(pass_verbose_0_0) , sl };
StrCL lifted13_cl = &(k_106);
m_8 = t;
t = term27;
l_8 = t;
t = m_8;
t = xtc_sglri_0_2(sl, l_8, k_8, t);
if((t == NULL))
goto fail19 ;
t = xtc_transform_2_0(sl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_arg_flags_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm13 = t;
if(match_cons(t, sym__2))
{
ATerm trm14 = ATgetArgument(t, 0);
ATerm trm15 = ATgetArgument(t, 1);
if(!(((ATgetType(trm15) == AT_LIST) && ATisEmpty(trm15))))
goto label9 ;
}
else
goto label9 ;
t = (ATerm) ATempty;
goto label8 ;
label9 :
t = trm13;
{
ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
if(match_cons(t, sym__2))
{
y_7 = ATgetArgument(t, 0);
z_7 = ATgetArgument(t, 1);
}
else
goto fail18 ;
b_8 = t;
t = z_7;
d_8 = t;
c_8 = t;
t = (ATerm) ATmakeAppl(sym__2, y_7, c_8);
t = separate_by_0_0(sl, t);
if((t == NULL))
goto fail18 ;
a_8 = t;
t = b_8;
{
ATerm trm16;
trm16 = CheckATermList(a_8);
if((trm16 == NULL))
goto fail18 ;
t = (ATerm) ATinsert((ATermList)trm16, y_7);
goto label8 ;
}
}
label8 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pass_v_verbose_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_106 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(i_106);
t = (ATerm) ATempty;
t = if_verbose3_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail16 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term23);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_sglri_0_2 (StrSL sl, ATerm s_7, ATerm t_7, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_sglri_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, s_7);
sl_init_var(1, t_7);
{
struct str_closure g_106 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(g_106);
struct str_closure h_106 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(h_106);
t = xtc_transform_2_0(sl, lifted9_cl, lifted10_cl, t);
if((t == NULL))
goto fail13 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_7 = NULL,w_7 = NULL,v_7 = NULL,x_7 = NULL;
w_7 = t;
if((sl_readvar(0, sl) == NULL))
goto fail15 ;
else
{
t = sl_readvar(0, sl);
}
t = xtc_find_0_0(sl_up(sl), t);
if((t == NULL))
goto fail15 ;
u_7 = t;
t = w_7;
x_7 = t;
t = term7;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail15 ;
v_7 = t;
t = x_7;
if((sl_readvar(1, sl) == NULL))
goto fail15 ;
else
{
ATerm trm12;
trm12 = CheckATermList(v_7);
if((trm12 == NULL))
goto fail15 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm12, sl_readvar(1, sl)), term21), u_7), term17);
}
}
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
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL l_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_ast2abox_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, l_6);
{
struct str_closure e_106 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(e_106);
struct str_closure f_106 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(f_106);
t = xtc_transform_2_0(sl, lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_6 = NULL,o_6 = NULL,n_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
o_6 = t;
t = term7;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail12 ;
m_6 = t;
t = o_6;
p_6 = t;
t = term7;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail12 ;
{
struct str_closure d_106 = { &(xtc_find_0_0) , sl_up(sl) };
StrCL lifted8_cl = &(d_106);
t = map_1_0(sl_up(sl), lifted8_cl, t);
if((t == NULL))
goto fail12 ;
r_6 = t;
q_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term17, q_6);
t = add_arg_flags_0_0(sl_up(sl), t);
if((t == NULL))
goto fail12 ;
n_6 = t;
t = p_6;
t = (ATerm) ATmakeAppl(sym__2, m_6, n_6);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail12 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_sdf_main_module_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_sdf_main_module_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm11 = t;
t = term5;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label7 ;
goto label6 ;
label7 :
t = trm11;
t = term13;
goto label6 ;
label6 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_main_module_option_1_0 (StrSL sl, StrCL c_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_main_module_option_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, c_6);
{
struct str_closure y_105 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(y_105);
struct str_closure z_105 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(z_105);
struct str_closure a_106 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(a_106);
t = ArgOption_3_0(sl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_6 = NULL,g_6 = NULL;
g_6 = t;
t = term7;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail8 ;
f_6 = t;
t = g_6;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term9), f_6), term11);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail8 ;
}
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
{
ATerm b_6 = NULL,d_6 = NULL,e_6 = NULL;
b_6 = t;
e_6 = t;
d_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term5, d_6);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail7 ;
t = b_6;
}
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
{
ATerm trm10 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-m", 0, ATtrue))))
goto label5 ;
goto label4 ;
label5 :
t = trm10;
if((ATgetSymbol(t) == ATmakeSymbol("--main", 0, ATtrue)))
goto label4 ;
else
goto fail6 ;
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm error_if_empty_grammar_1_0 (StrSL sl, StrCL w_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "error_if_empty_grammar_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm9 = t;
ATerm v_5 = NULL;
v_5 = t;
t = is_empty_grammar_0_0(sl, t);
if((t == NULL))
goto label3 ;
t = v_5;
{
ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
z_5 = t;
t = term1;
x_5 = t;
t = z_5;
a_6 = t;
t = term3;
y_5 = t;
t = a_6;
t = log_0_2(sl, x_5, y_5, t);
if((t == NULL))
goto fail4 ;
t = cl_fun(w_5)(cl_sl(w_5), t);
if((t == NULL))
goto fail4 ;
else
goto label2 ;
}
label3 :
t = trm9;
goto label2 ;
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_empty_grammar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_empty_grammar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_105 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(u_105);
struct str_closure v_105 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(v_105);
t = collect_om_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
{
struct str_closure x_105 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(x_105);
t = map_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail0 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail0 ;
t = map_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail0 ;
}
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
ATerm u_5 = NULL;
if(match_cons(t, sym_syntax_1))
{
u_5 = ATgetArgument(t, 0);
}
else
goto fail3 ;
t = u_5;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_syntax_1))
{
ATerm trm8 = ATgetArgument(t, 0);
}
else
goto fail2 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1 = ATgetArgument(t, 0);
ATerm trm2 = ATgetArgument(t, 1);
if(match_cons(trm2, sym_cf_1))
{
ATerm trm3 = ATgetArgument(trm2, 0);
if(!(match_cons(trm3, sym_layout_0)))
goto label1 ;
}
else
goto label1 ;
{
ATerm trm4 = ATgetArgument(t, 2);
}
}
else
goto label1 ;
goto label0 ;
label1 :
t = trm0;
if(match_cons(t, sym_prod_3))
{
ATerm trm5 = ATgetArgument(t, 0);
ATerm trm6 = ATgetArgument(t, 1);
if(!(match_cons(trm6, sym_file_start_0)))
goto fail1 ;
{
ATerm trm7 = ATgetArgument(t, 2);
}
goto label0 ;
}
else
goto fail1 ;
label0 :
;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 95));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(hashtable_pushlist_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_pushlist_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_get_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_get_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(new_hashtable_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_hashtable_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(separate_by_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("separate_by_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remove_all_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remove_all_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(retain_all_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("retain_all_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_fixpoint_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_fixpoint_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_elements_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_elements_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iset_add_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iset_add_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(new_iset_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("new_iset_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_om_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_om_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(diff_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("diff_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(newname_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("newname_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ensure_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ensure_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_transform_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_transform_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted45);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted45", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted44);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted44", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(include_layout_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("include_layout_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted43);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted43", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf_result_module_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_result_module_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(create_module_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("create_module_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rename_sort_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rename_sort_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_sorts_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_sorts_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted36);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted36", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_layout_sorts_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_layout_sorts_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lookup_sdf_module_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lookup_sdf_module_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_main_module_parameters_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_main_module_parameters_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_gen_sdf_mix_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_gen_sdf_mix_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_sdf2_normalize_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_sdf2_normalize_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_sdf2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_sdf2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_parse_sdf2_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_parse_sdf2_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_arg_flags_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_arg_flags_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_v_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_v_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_sglri_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_sglri_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ast2abox_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ast2abox_1_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(error_if_empty_grammar_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("error_if_empty_grammar_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_empty_grammar_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_empty_grammar_0_0", 0, ATtrue)), &(closures[closures_index]));
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
