#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_AST_0;
static Symbol sym_ParseTree_0;
static Symbol sym_PlainText_0;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_FILE_1;
static Symbol sym_S_1;
static Symbol sym_H_2;
static Symbol sym_V_2;
static Symbol sym_FBOX_2;
static Symbol sym_Arg_1;
static Symbol sym_SOpt_2;
static Symbol sym_VS_0;
static Symbol sym_KW_0;
static Symbol sym_PP_Table_1;
static Symbol sym_PP_Entry_2;
static Symbol sym_Path1_1;
static Symbol sym_Path_2;
static Symbol sym_selector_2;
static Symbol sym_cons_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_fun_1;
static Symbol sym_appl_2;
static Symbol sym_context_free_syntax_1;
static Symbol sym_term_1;
static Symbol sym_bracket_0;
static Symbol sym_reject_0;
static Symbol sym_attrs_1;
static Symbol sym_prod_3;
static Symbol sym_cf_1;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_sort_1;
static Symbol sym_lit_1;
static Symbol sym_label_2;
static Symbol sym_default_1;
static Symbol sym_quoted_1;
static Symbol sym_unquoted_1;
static Symbol sym_char_class_1;
static Symbol sym_alt_2;
static Symbol sym_bracket_symbol_1;
static void init_module_constructors (void)
{
sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
ATprotectSymbol(sym_AST_0);
sym_ParseTree_0 = ATmakeSymbol("ParseTree", 0, ATfalse);
ATprotectSymbol(sym_ParseTree_0);
sym_PlainText_0 = ATmakeSymbol("PlainText", 0, ATfalse);
ATprotectSymbol(sym_PlainText_0);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
ATprotectSymbol(sym_S_1);
sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
ATprotectSymbol(sym_H_2);
sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
ATprotectSymbol(sym_V_2);
sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
ATprotectSymbol(sym_FBOX_2);
sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
ATprotectSymbol(sym_Arg_1);
sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
ATprotectSymbol(sym_SOpt_2);
sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
ATprotectSymbol(sym_VS_0);
sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
ATprotectSymbol(sym_KW_0);
sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
ATprotectSymbol(sym_PP_Table_1);
sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
ATprotectSymbol(sym_PP_Entry_2);
sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
ATprotectSymbol(sym_Path1_1);
sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
ATprotectSymbol(sym_Path_2);
sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
ATprotectSymbol(sym_selector_2);
sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
ATprotectSymbol(sym_cons_1);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
ATprotectSymbol(sym_fun_1);
sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
ATprotectSymbol(sym_appl_2);
sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
ATprotectSymbol(sym_context_free_syntax_1);
sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
ATprotectSymbol(sym_term_1);
sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
ATprotectSymbol(sym_bracket_0);
sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
ATprotectSymbol(sym_reject_0);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
ATprotectSymbol(sym_cf_1);
sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
ATprotectSymbol(sym_iter_1);
sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
ATprotectSymbol(sym_iter_star_1);
sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
ATprotectSymbol(sym_iter_sep_2);
sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
ATprotectSymbol(sym_iter_star_sep_2);
sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
ATprotectSymbol(sym_sort_1);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
ATprotectSymbol(sym_label_2);
sym_default_1 = ATmakeSymbol("default", 1, ATfalse);
ATprotectSymbol(sym_default_1);
sym_quoted_1 = ATmakeSymbol("quoted", 1, ATfalse);
ATprotectSymbol(sym_quoted_1);
sym_unquoted_1 = ATmakeSymbol("unquoted", 1, ATfalse);
ATprotectSymbol(sym_unquoted_1);
sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
ATprotectSymbol(sym_char_class_1);
sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
ATprotectSymbol(sym_alt_2);
sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
ATprotectSymbol(sym_bracket_symbol_1);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("sglri", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-desugar", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.baf", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("core-sdf-parenthesize", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeInt(1);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(sym_Arg_1, term29);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_VS_0);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(sym_SOpt_2, term33, term35);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym_KW_0);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-type", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("SDF", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(sym_PlainText_0);
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym_ParseTree_0);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(sym__2, term49, term53);
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(sym_AST_0);
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(sym__2, term49, term59);
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(sym__2, term41, term59);
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("-t          Output is abstract syntax tree.", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _2_0 (StrSL sl, StrCL r_82, StrCL s_82, ATerm t);
ATerm separate_by_0_0 (StrSL sl, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL g_72, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL f_72, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL y_71, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL a_71, ATerm t);
ATerm split_2_0 (StrSL sl, StrCL n_64, StrCL o_64, ATerm t);
ATerm collect_1_0 (StrSL sl, StrCL t_50, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL k_49, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL r_42, ATerm t);
ATerm read_text_file_0_0 (StrSL sl, ATerm t);
ATerm say_1_0 (StrSL sl, StrCL f_40, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL b_40, ATerm t);
ATerm mkterm_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm add_0_0 (StrSL sl, ATerm t);
ATerm trim_chars_1_0 (StrSL sl, StrCL k_38, ATerm t);
ATerm un_double_quote_0_0 (StrSL sl, ATerm t);
ATerm double_quote_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL j_32, StrCL k_32, StrCL l_32, ATerm t);
ATerm if_verbose1_1_0 (StrSL sl, StrCL j_31, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL v_25, StrCL w_25, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL q_25, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL v_24, StrCL w_24, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm selector_2_0 (StrSL sl, StrCL v_22, StrCL w_22, ATerm t);
ATerm iter_1_0 (StrSL sl, StrCL q_20, ATerm t);
ATerm iter_star_1_0 (StrSL sl, StrCL p_20, ATerm t);
ATerm iter_sep_2_0 (StrSL sl, StrCL n_20, StrCL o_20, ATerm t);
ATerm iter_star_sep_2_0 (StrSL sl, StrCL l_20, StrCL m_20, ATerm t);
ATerm lit_1_0 (StrSL sl, StrCL a_20, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
ATerm ppgen_options_0_0 (StrSL sl, ATerm t);
ATerm get_input_type_0_0 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
ATerm pre_process_sdf_0_0 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
ATerm ppgen_0_0 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
ATerm ppgenerate_0_0 (StrSL sl, ATerm t);
ATerm Make_0_0 (StrSL sl, ATerm t);
static ATerm u_16 (StrSL sl, ATerm t);
ATerm pair_0_0 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
ATerm make_0_0 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm m_15 (StrSL sl, ATerm t);
ATerm number_node_1_0 (StrSL sl, StrCL l_15, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
ATerm argument_list_0_0 (StrSL sl, ATerm t);
static ATerm b_15 (StrSL sl, ATerm t);
ATerm flat_alt_0_0 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm w_14 (StrSL sl, ATerm t);
ATerm symbol2abox_1_0 (StrSL sl, StrCL v_14, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
ATerm symbols2pp_entries_1_0 (StrSL sl, StrCL c_13, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
ATerm number_nonterminals_0_0 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
ATerm ignore_prod_0_0 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
ATerm missing_constructor_warning_0_0 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
ATerm generate_pp_entries_0_0 (StrSL sl, ATerm t);
ATerm is_inject_prod_0_0 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm get_cnstr_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm xtc_parse_sdf2_0_1 (StrSL sl, ATerm v_10, ATerm t);
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm xtc_sglri_0_2 (StrSL sl, ATerm d_10, ATerm e_10, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL z_8, ATerm t);
ATerm selector_2_0 (StrSL sl, StrCL v_22, StrCL w_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "selector_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_113 = NULL,i_113 = NULL,j_113 = NULL,l_113 = NULL,m_113 = NULL;
ATerm trm139;
trm139 = (ATerm) ATgetAnnotations(t);
if((trm139 == NULL))
trm139 = (ATerm) ATempty;
if(match_cons(t, sym_selector_2))
{
i_113 = ATgetArgument(t, 0);
j_113 = ATgetArgument(t, 1);
}
else
goto fail88 ;
k_113 = trm139;
t = i_113;
t = cl_fun(v_22)(cl_sl(v_22), t);
if((t == NULL))
goto fail88 ;
l_113 = t;
t = j_113;
t = cl_fun(w_22)(cl_sl(w_22), t);
if((t == NULL))
goto fail88 ;
m_113 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_selector_2, l_113, m_113), k_113);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_1_0 (StrSL sl, StrCL q_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_106 = NULL,o_106 = NULL,q_106 = NULL;
ATerm trm138;
trm138 = (ATerm) ATgetAnnotations(t);
if((trm138 == NULL))
trm138 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
o_106 = ATgetArgument(t, 0);
}
else
goto fail87 ;
p_106 = trm138;
t = o_106;
t = cl_fun(q_20)(cl_sl(q_20), t);
if((t == NULL))
goto fail87 ;
q_106 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, q_106), p_106);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_star_1_0 (StrSL sl, StrCL p_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_star_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_106 = NULL,l_106 = NULL,n_106 = NULL;
ATerm trm137;
trm137 = (ATerm) ATgetAnnotations(t);
if((trm137 == NULL))
trm137 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
l_106 = ATgetArgument(t, 0);
}
else
goto fail86 ;
m_106 = trm137;
t = l_106;
t = cl_fun(p_20)(cl_sl(p_20), t);
if((t == NULL))
goto fail86 ;
n_106 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, n_106), m_106);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_sep_2_0 (StrSL sl, StrCL n_20, StrCL o_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_sep_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_106 = NULL,g_106 = NULL,h_106 = NULL,j_106 = NULL,k_106 = NULL;
ATerm trm136;
trm136 = (ATerm) ATgetAnnotations(t);
if((trm136 == NULL))
trm136 = (ATerm) ATempty;
if(match_cons(t, sym_iter_sep_2))
{
g_106 = ATgetArgument(t, 0);
h_106 = ATgetArgument(t, 1);
}
else
goto fail85 ;
i_106 = trm136;
t = g_106;
t = cl_fun(n_20)(cl_sl(n_20), t);
if((t == NULL))
goto fail85 ;
j_106 = t;
t = h_106;
t = cl_fun(o_20)(cl_sl(o_20), t);
if((t == NULL))
goto fail85 ;
k_106 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, j_106, k_106), i_106);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_star_sep_2_0 (StrSL sl, StrCL l_20, StrCL m_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_star_sep_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_106 = NULL,z_105 = NULL,a_106 = NULL,e_106 = NULL,f_106 = NULL;
ATerm trm135;
trm135 = (ATerm) ATgetAnnotations(t);
if((trm135 == NULL))
trm135 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_sep_2))
{
z_105 = ATgetArgument(t, 0);
a_106 = ATgetArgument(t, 1);
}
else
goto fail84 ;
d_106 = trm135;
t = z_105;
t = cl_fun(l_20)(cl_sl(l_20), t);
if((t == NULL))
goto fail84 ;
e_106 = t;
t = a_106;
t = cl_fun(m_20)(cl_sl(m_20), t);
if((t == NULL))
goto fail84 ;
f_106 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, e_106, f_106), d_106);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
ATerm lit_1_0 (StrSL sl, StrCL a_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lit_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_104 = NULL,v_104 = NULL,x_104 = NULL;
ATerm trm134;
trm134 = (ATerm) ATgetAnnotations(t);
if((trm134 == NULL))
trm134 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
v_104 = ATgetArgument(t, 0);
}
else
goto fail83 ;
w_104 = trm134;
t = v_104;
t = cl_fun(a_20)(cl_sl(a_20), t);
if((t == NULL))
goto fail83 ;
x_104 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, x_104), w_104);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_124 = { &(ppgen_options_0_0) , sl };
StrCL lifted78_cl = &(n_124);
struct str_closure o_124 = { &(ppgen_0_0) , sl };
StrCL lifted79_cl = &(o_124);
t = xtc_io_wrap_2_0(sl, lifted78_cl, lifted79_cl, t);
if((t == NULL))
goto fail82 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
ATerm ppgen_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ppgen_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm132 = t;
struct str_closure e_124 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(e_124);
struct str_closure f_124 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(f_124);
struct str_closure g_124 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(g_124);
t = Option_3_0(sl, lifted69_cl, lifted70_cl, lifted71_cl, t);
if((t == NULL))
goto label73 ;
goto label72 ;
label73 :
t = trm132;
{
ATerm trm133 = t;
struct str_closure h_124 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(h_124);
struct str_closure i_124 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(i_124);
struct str_closure j_124 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(j_124);
t = Option_3_0(sl, lifted72_cl, lifted73_cl, lifted74_cl, t);
if((t == NULL))
goto label74 ;
goto label72 ;
label74 :
t = trm133;
{
struct str_closure k_124 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(k_124);
struct str_closure l_124 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(l_124);
struct str_closure m_124 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(m_124);
t = Option_3_0(sl, lifted75_cl, lifted76_cl, lifted77_cl, t);
if((t == NULL))
goto fail72 ;
else
goto label72 ;
}
}
label72 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term67;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_17 = NULL;
o_17 = t;
t = term65;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail80 ;
t = o_17;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-t", 0, ATtrue))))
goto fail79 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_17 = NULL;
n_17 = t;
t = term61;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail77 ;
t = n_17;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-a", 0, ATtrue))))
goto fail76 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_17 = NULL;
m_17 = t;
t = term55;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail74 ;
t = m_17;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-A", 0, ATtrue))))
goto fail73 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_input_type_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_input_type_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm131 = t;
t = term49;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label71 ;
goto label70 ;
label71 :
t = trm131;
t = term51;
goto label70 ;
label70 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
ATerm pre_process_sdf_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pre_process_sdf_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm126 = t;
ATerm l_17 = NULL,f_121 = NULL,g_121 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm127 = ATgetArgument(t, 0);
if(!(match_cons(trm127, sym_PlainText_0)))
goto label68 ;
l_17 = ATgetArgument(t, 1);
}
else
goto label68 ;
t = l_17;
g_121 = t;
t = term45;
f_121 = t;
t = g_121;
t = xtc_parse_sdf2_0_1(sl, f_121, t);
if((t == NULL))
goto label68 ;
goto label67 ;
label68 :
t = trm126;
{
ATerm trm128 = t;
ATerm k_17 = NULL;
struct str_closure c_124 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(c_124);
struct str_closure d_124 = { &(pass_verbose_0_0) , sl };
StrCL lifted68_cl = &(d_124);
if(match_cons(t, sym__2))
{
ATerm trm129 = ATgetArgument(t, 0);
if(!(match_cons(trm129, sym_ParseTree_0)))
goto label69 ;
k_17 = ATgetArgument(t, 1);
}
else
goto label69 ;
t = k_17;
t = xtc_transform_2_0(sl, lifted67_cl, lifted68_cl, t);
if((t == NULL))
goto label69 ;
goto label67 ;
label69 :
t = trm128;
{
ATerm j_17 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm130 = ATgetArgument(t, 0);
if(!(match_cons(trm130, sym_AST_0)))
goto fail69 ;
j_17 = ATgetArgument(t, 1);
}
else
goto fail69 ;
t = j_17;
goto label67 ;
}
}
label67 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
ATerm ppgen_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ppgen_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_17 = NULL,h_17 = NULL,g_17 = NULL,i_17 = NULL;
h_17 = t;
t = get_input_type_0_0(sl, t);
if((t == NULL))
goto fail67 ;
f_17 = t;
t = h_17;
i_17 = t;
g_17 = t;
t = (ATerm) ATmakeAppl(sym__2, f_17, g_17);
t = pre_process_sdf_0_0(sl, t);
if((t == NULL))
goto fail67 ;
t = read_from_0_0(sl, t);
if((t == NULL))
goto fail67 ;
t = ppgenerate_0_0(sl, t);
if((t == NULL))
goto fail67 ;
t = write_to_0_0(sl, t);
if((t == NULL))
goto fail67 ;
{
ATerm trm124 = t;
ATerm e_17 = NULL;
e_17 = t;
{
ATerm trm125 = t;
t = term41;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label66 ;
if(!(match_cons(t, sym_AST_0)))
goto label66 ;
goto label64 ;
label66 :
t = trm125;
goto label65 ;
label65 :
;
t = e_17;
}
{
struct str_closure a_124 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(a_124);
struct str_closure b_124 = { &(pass_verbose_0_0) , sl };
StrCL lifted66_cl = &(b_124);
t = xtc_transform_2_0(sl, lifted65_cl, lifted66_cl, t);
if((t == NULL))
goto fail67 ;
else
goto label63 ;
}
label64 :
t = trm124;
goto label63 ;
label63 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
ATerm ppgenerate_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ppgenerate_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_16 = NULL;
struct str_closure u_123 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(u_123);
struct str_closure v_123 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(v_123);
t = collect_1_0(sl, lifted56_cl, t);
if((t == NULL))
goto fail60 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail60 ;
{
struct str_closure x_123 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(x_123);
t = topdown_1_0(sl, lifted57_cl, t);
if((t == NULL))
goto fail60 ;
{
struct str_closure y_123 = { &(generate_pp_entries_0_0) , sl };
StrCL lifted59_cl = &(y_123);
t = map_1_0(sl, lifted59_cl, t);
if((t == NULL))
goto fail60 ;
{
struct str_closure z_123 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(z_123);
t = filter_1_0(sl, lifted60_cl, t);
if((t == NULL))
goto fail60 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail60 ;
z_16 = t;
t = (ATerm) ATmakeAppl(sym_PP_Table_1, z_16);
t = topdown_1_0(sl, lifted61_cl, t);
if((t == NULL))
goto fail60 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm123 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label62 ;
goto fail66 ;
label62 :
t = trm123;
goto label61 ;
label61 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_123 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(w_123);
t = try_1_0(sl_up(sl), lifted58_cl, t);
if((t == NULL))
goto fail64 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm117 = t;
ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL;
ATerm trm118;
trm118 = (ATerm) ATgetAnnotations(t);
if((trm118 == NULL))
trm118 = (ATerm) ATempty;
if(match_cons(t, sym_cons_1))
{
e_120 = ATgetArgument(t, 0);
}
else
goto label58 ;
d_120 = trm118;
t = e_120;
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label58 ;
f_120 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cons_1, f_120), d_120);
goto label57 ;
label58 :
t = trm117;
{
ATerm trm119 = t;
ATerm h_120 = NULL,i_120 = NULL,j_120 = NULL;
ATerm trm120;
trm120 = (ATerm) ATgetAnnotations(t);
if((trm120 == NULL))
trm120 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
i_120 = ATgetArgument(t, 0);
}
else
goto label59 ;
h_120 = trm120;
t = i_120;
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label59 ;
j_120 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, j_120), h_120);
goto label57 ;
label59 :
t = trm119;
{
ATerm trm121 = t;
ATerm l_120 = NULL,n_120 = NULL,o_120 = NULL;
ATerm trm122;
trm122 = (ATerm) ATgetAnnotations(t);
if((trm122 == NULL))
trm122 = (ATerm) ATempty;
if(match_cons(t, sym_sort_1))
{
n_120 = ATgetArgument(t, 0);
}
else
goto label60 ;
l_120 = trm122;
t = n_120;
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label60 ;
o_120 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_sort_1, o_120), l_120);
goto label57 ;
label60 :
t = trm121;
{
ATerm a_17 = NULL,c_17 = NULL,d_17 = NULL;
if(match_cons(t, sym_lit_1))
{
a_17 = ATgetArgument(t, 0);
}
else
goto fail65 ;
d_17 = t;
t = a_17;
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail65 ;
c_17 = t;
t = d_17;
t = (ATerm) ATmakeAppl(sym_lit_1, c_17);
goto label57 ;
}
}
}
label57 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_17 = NULL;
if(match_cons(t, sym_context_free_syntax_1))
{
b_17 = ATgetArgument(t, 0);
}
else
goto fail63 ;
t = b_17;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_123 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(t_123);
t = try_1_0(sl_up(sl), lifted62_cl, t);
if((t == NULL))
goto fail61 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm113 = t;
ATerm q_120 = NULL,s_120 = NULL,v_120 = NULL;
ATerm trm114;
trm114 = (ATerm) ATgetAnnotations(t);
if((trm114 == NULL))
trm114 = (ATerm) ATempty;
if(match_cons(t, sym_Arg_1))
{
s_120 = ATgetArgument(t, 0);
}
else
goto label55 ;
q_120 = trm114;
t = s_120;
t = int_to_string_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label55 ;
v_120 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Arg_1, v_120), q_120);
goto label54 ;
label55 :
t = trm113;
{
ATerm trm115 = t;
struct str_closure r_123 = { &(int_to_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted63_cl = &(r_123);
struct str_closure s_123 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted64_cl = &(s_123);
t = selector_2_0(sl_up(sl_up(sl)), lifted63_cl, lifted64_cl, t);
if((t == NULL))
goto label56 ;
goto label54 ;
label56 :
t = trm115;
{
ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL;
ATerm trm116;
trm116 = (ATerm) ATgetAnnotations(t);
if((trm116 == NULL))
trm116 = (ATerm) ATempty;
if(match_cons(t, sym_S_1))
{
b_121 = ATgetArgument(t, 0);
}
else
goto fail62 ;
a_121 = trm116;
t = b_121;
t = double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail62 ;
c_121 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_S_1, c_121), a_121);
goto label54 ;
}
}
label54 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
ATerm Make_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Make_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm111 = t;
ATerm y_16 = NULL;
if(match_cons(t, sym__2))
{
y_16 = ATgetArgument(t, 0);
{
ATerm trm112 = ATgetArgument(t, 1);
}
}
else
goto label53 ;
t = (ATerm) ATmakeAppl(sym_Arg_1, y_16);
goto label52 ;
label53 :
t = trm111;
{
ATerm x_16 = NULL;
if(match_cons(t, sym_lit_1))
{
x_16 = ATgetArgument(t, 0);
}
else
goto fail59 ;
t = (ATerm) ATmakeAppl(sym_FBOX_2, term39, (ATerm) ATmakeAppl(sym_S_1, x_16));
goto label52 ;
}
label52 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm pair_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pair_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = u_16(&(frame), t);
if((t == NULL))
goto fail57 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm u_16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "u_16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm108 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label51 ;
goto label50 ;
label51 :
t = trm108;
{
ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,v_16 = NULL,w_16 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
r_16 = ATgetFirst((ATermList) t);
{
ATerm trm109 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm109) == AT_LIST) && !(ATisEmpty(trm109))))
{
s_16 = ATgetFirst((ATermList) trm109);
t_16 = (ATerm) ATgetNext((ATermList) trm109);
}
else
goto fail58 ;
}
}
else
goto fail58 ;
w_16 = t;
t = t_16;
t = u_16(sl, t);
if((t == NULL))
goto fail58 ;
v_16 = t;
t = w_16;
{
ATerm trm110;
trm110 = CheckATermList(v_16);
if((trm110 == NULL))
goto fail58 ;
t = (ATerm) ATinsert((ATermList)trm110, (ATerm) ATmakeAppl(sym__2, r_16, s_16));
goto label50 ;
}
}
label50 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm make_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "make_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
ATerm trm91 = t;
ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,p_16 = NULL,q_16 = NULL;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label38 ;
{
ATerm trm92;
trm92 = (ATerm) ATgetAnnotations(t);
if((trm92 == NULL))
trm92 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
y_15 = ATgetFirst((ATermList) t);
z_15 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label38 ;
c_16 = trm92;
t = y_15;
{
struct str_closure c_123 = { &(_Id) , sl };
StrCL lifted40_cl = &(c_123);
struct str_closure d_123 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(d_123);
t = _2_0(sl, lifted40_cl, lifted41_cl, t);
if((t == NULL))
goto label38 ;
t = Make_0_0(sl, t);
if((t == NULL))
goto label38 ;
a_16 = t;
t = z_15;
{
struct str_closure e_123 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(e_123);
t = map_1_0(sl, lifted46_cl, t);
if((t == NULL))
goto label38 ;
b_16 = t;
t = a_16;
u_15 = t;
t = b_16;
t_15 = t;
t = (ATerm) SRTS_setAnnotations(c_16, (ATerm) ATempty);
{
ATerm trm99;
trm99 = CheckATermList(b_16);
if((trm99 == NULL))
goto label38 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm99, a_16), c_16);
{
ATerm trm100 = t;
ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
ATerm trm101;
trm101 = (ATerm) ATgetAnnotations(t);
if((trm101 == NULL))
trm101 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
d_16 = ATgetFirst((ATermList) t);
e_16 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label44 ;
h_16 = trm101;
t = d_16;
f_16 = t;
t = e_16;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label44 ;
g_16 = t;
{
ATerm trm102;
trm102 = CheckATermList(g_16);
if((trm102 == NULL))
goto label44 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm102, f_16), h_16);
}
goto label38 ;
label44 :
t = trm100;
goto label43 ;
label43 :
;
q_16 = t;
t = t_15;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label38 ;
p_16 = t;
t = q_16;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, u_15), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, p_16)));
}
}
}
}
}
goto label37 ;
label38 :
t = trm91;
{
ATerm trm103 = t;
ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label45 ;
{
ATerm trm104;
trm104 = (ATerm) ATgetAnnotations(t);
if((trm104 == NULL))
trm104 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
i_16 = ATgetFirst((ATermList) t);
j_16 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label45 ;
m_16 = trm104;
t = i_16;
t = Make_0_0(sl, t);
if((t == NULL))
goto label45 ;
x_15 = t;
k_16 = t;
t = j_16;
{
ATerm trm105 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label47 ;
goto label45 ;
label47 :
t = trm105;
goto label46 ;
label46 :
;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label45 ;
v_15 = t;
l_16 = t;
{
ATerm trm106;
trm106 = CheckATermList(l_16);
if((trm106 == NULL))
goto label45 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm106, k_16), m_16);
t = v_15;
t = pair_0_0(sl, t);
if((t == NULL))
goto label45 ;
{
struct str_closure n_123 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(n_123);
t = map_1_0(sl, lifted47_cl, t);
if((t == NULL))
goto label45 ;
w_15 = t;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_15), w_15));
}
}
}
}
goto label37 ;
label45 :
t = trm103;
{
struct str_closure p_123 = { &(Make_0_0) , sl };
StrCL lifted55_cl = &(p_123);
t = map_1_0(sl, lifted55_cl, t);
if((t == NULL))
goto fail50 ;
else
goto label37 ;
}
}
label37 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm n_16 = NULL,o_16 = NULL;
sl_init_var(0, n_16);
sl_init_var(1, o_16);
{
struct str_closure k_123 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(k_123);
struct str_closure m_123 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(m_123);
t = _2_0(sl_up(sl), lifted48_cl, lifted50_cl, t);
if((t == NULL))
goto fail53 ;
if(((n_16 == NULL) || (o_16 == NULL)))
goto fail53 ;
else
{
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term37), (ATerm) ATinsert(ATinsert(ATempty, o_16), n_16));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_123 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted51_cl = &(i_123);
struct str_closure j_123 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(j_123);
t = _2_0(sl_up(sl_up(sl)), lifted51_cl, lifted52_cl, t);
if((t == NULL))
goto fail55 ;
t = Make_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail55 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail55 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm107 = t;
struct str_closure g_123 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted53_cl = &(g_123);
t = iter_1_0(sl_up(sl_up(sl_up(sl))), lifted53_cl, t);
if((t == NULL))
goto label49 ;
goto label48 ;
label49 :
t = trm107;
{
struct str_closure h_123 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted54_cl = &(h_123);
t = iter_star_1_0(sl_up(sl_up(sl_up(sl))), lifted54_cl, t);
if((t == NULL))
goto fail56 ;
else
goto label48 ;
}
label48 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_123 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted49_cl = &(f_123);
t = lit_1_0(sl_up(sl_up(sl)), lifted49_cl, t);
if((t == NULL))
goto fail54 ;
t = Make_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail54 ;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_119 = NULL,a_120 = NULL,b_120 = NULL;
ATerm trm98;
trm98 = (ATerm) ATgetAnnotations(t);
if((trm98 == NULL))
trm98 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
a_120 = ATgetArgument(t, 0);
}
else
goto fail52 ;
z_119 = trm98;
t = a_120;
b_120 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, b_120), z_119);
t = Make_0_0(sl_up(sl), t);
if((t == NULL))
goto fail52 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm93 = t;
ATerm r_119 = NULL,s_119 = NULL,t_119 = NULL;
ATerm trm94;
trm94 = (ATerm) ATgetAnnotations(t);
if((trm94 == NULL))
trm94 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
s_119 = ATgetArgument(t, 0);
}
else
goto label40 ;
r_119 = trm94;
t = s_119;
t_119 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, t_119), r_119);
goto label39 ;
label40 :
t = trm93;
{
ATerm trm95 = t;
ATerm v_119 = NULL,w_119 = NULL,x_119 = NULL;
ATerm trm96;
trm96 = (ATerm) ATgetAnnotations(t);
if((trm96 == NULL))
trm96 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
w_119 = ATgetArgument(t, 0);
}
else
goto label41 ;
v_119 = trm96;
t = w_119;
x_119 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, x_119), v_119);
goto label39 ;
label41 :
t = trm95;
{
ATerm trm97 = t;
struct str_closure y_122 = { &(_Id) , sl_up(sl) };
StrCL lifted42_cl = &(y_122);
struct str_closure z_122 = { &(_Id) , sl_up(sl) };
StrCL lifted43_cl = &(z_122);
t = iter_sep_2_0(sl_up(sl), lifted42_cl, lifted43_cl, t);
if((t == NULL))
goto label42 ;
goto label39 ;
label42 :
t = trm97;
{
struct str_closure a_123 = { &(_Id) , sl_up(sl) };
StrCL lifted44_cl = &(a_123);
struct str_closure b_123 = { &(_Id) , sl_up(sl) };
StrCL lifted45_cl = &(b_123);
t = iter_star_sep_2_0(sl_up(sl), lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto fail51 ;
else
goto label39 ;
}
}
}
label39 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm number_node_1_0 (StrSL sl, StrCL l_15, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "number_node_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, l_15);
{
struct str_closure w_122 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(w_122);
struct str_closure x_122 = { &(_Id) , sl };
StrCL lifted39_cl = &(x_122);
t = split_2_0(sl, lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto fail46 ;
t = m_15(&(frame), t);
if((t == NULL))
goto fail46 ;
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
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm m_15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "m_15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
ATerm trm85 = t;
struct str_closure u_122 = { &(_Id) , sl_up(sl) };
StrCL lifted36_cl = &(u_122);
struct str_closure v_122 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(v_122);
t = _2_0(sl_up(sl), lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto label35 ;
t = (ATerm) ATempty;
goto label34 ;
label35 :
t = trm85;
{
ATerm trm86 = t;
ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
if(match_cons(t, sym__2))
{
g_15 = ATgetArgument(t, 0);
{
ATerm trm87 = ATgetArgument(t, 1);
if(((ATgetType(trm87) == AT_LIST) && !(ATisEmpty(trm87))))
{
h_15 = ATgetFirst((ATermList) trm87);
j_15 = (ATerm) ATgetNext((ATermList) trm87);
}
else
goto label36 ;
}
}
else
goto label36 ;
t = h_15;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label36 ;
o_15 = t;
q_15 = t;
t = (ATerm) ATmakeAppl(sym__2, g_15, term29);
t = add_0_0(sl_up(sl), t);
if((t == NULL))
goto label36 ;
p_15 = t;
t = q_15;
t = (ATerm) ATmakeAppl(sym__2, p_15, j_15);
t = m_15(sl, t);
if((t == NULL))
goto label36 ;
n_15 = t;
t = o_15;
{
ATerm trm88;
trm88 = CheckATermList(n_15);
if((trm88 == NULL))
goto label36 ;
t = (ATerm) ATinsert((ATermList)trm88, (ATerm) ATmakeAppl(sym__2, g_15, h_15));
}
goto label34 ;
label36 :
t = trm86;
{
ATerm r_15 = NULL,s_15 = NULL;
if(match_cons(t, sym__2))
{
g_15 = ATgetArgument(t, 0);
{
ATerm trm89 = ATgetArgument(t, 1);
if(((ATgetType(trm89) == AT_LIST) && !(ATisEmpty(trm89))))
{
h_15 = ATgetFirst((ATermList) trm89);
j_15 = (ATerm) ATgetNext((ATermList) trm89);
}
else
goto fail47 ;
}
}
else
goto fail47 ;
s_15 = t;
t = (ATerm) ATmakeAppl(sym__2, g_15, j_15);
t = m_15(sl, t);
if((t == NULL))
goto fail47 ;
r_15 = t;
t = s_15;
{
ATerm trm90;
trm90 = CheckATermList(r_15);
if((trm90 == NULL))
goto fail47 ;
t = (ATerm) ATinsert((ATermList)trm90, h_15);
goto label34 ;
}
}
}
label34 :
;
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
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail48 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm argument_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "argument_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_122 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(t_122);
t = map_1_0(sl, lifted34_cl, t);
if((t == NULL))
goto fail43 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail43 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_122 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(s_122);
t = try_1_0(sl_up(sl), lifted35_cl, t);
if((t == NULL))
goto fail44 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_15 = NULL,f_15 = NULL;
e_15 = t;
f_15 = t;
{
ATerm trm84 = t;
t = is_list_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label33 ;
goto fail45 ;
label33 :
t = trm84;
goto label32 ;
label32 :
;
t = f_15;
t = (ATerm) ATinsert(ATempty, e_15);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm flat_alt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "flat_alt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = b_15(&(frame), t);
if((t == NULL))
goto fail41 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm b_15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "b_15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
ATerm trm81 = t;
ATerm c_15 = NULL,d_15 = NULL;
if(match_cons(t, sym_alt_2))
{
y_14 = ATgetArgument(t, 0);
{
ATerm trm82 = ATgetArgument(t, 1);
if(match_cons(trm82, sym_alt_2))
{
z_14 = ATgetArgument(trm82, 0);
a_15 = ATgetArgument(trm82, 1);
}
else
goto label31 ;
}
}
else
goto label31 ;
d_15 = t;
t = (ATerm) ATmakeAppl(sym_alt_2, z_14, a_15);
t = b_15(sl, t);
if((t == NULL))
goto label31 ;
c_15 = t;
t = d_15;
{
ATerm trm83;
trm83 = CheckATermList(c_15);
if((trm83 == NULL))
goto label31 ;
t = (ATerm) ATinsert((ATermList)trm83, y_14);
}
goto label30 ;
label31 :
t = trm81;
if(match_cons(t, sym_alt_2))
{
y_14 = ATgetArgument(t, 0);
z_14 = ATgetArgument(t, 1);
}
else
goto fail42 ;
t = (ATerm) ATinsert(ATinsert(ATempty, z_14), y_14);
goto label30 ;
label30 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm symbol2abox_1_0 (StrSL sl, StrCL v_14, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "symbol2abox_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(3);
sl_init_fun(0, v_14);
{
ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
sl_init_var(0, h_13);
sl_init_var(1, i_13);
sl_init_var(2, j_13);
{
struct str_closure q_122 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(q_122);
struct str_closure r_122 = { &(_Id) , sl };
StrCL lifted33_cl = &(r_122);
t = split_2_0(sl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail35 ;
t = w_14(&(frame), t);
if((t == NULL))
goto fail35 ;
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
t = term3;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail40 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm w_14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "w_14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm trm47 = t;
if(match_cons(t, sym__2))
{
ATerm trm48 = ATgetArgument(t, 0);
ATerm trm49 = ATgetArgument(t, 1);
if(match_cons(trm49, sym_lit_1))
{
ATerm trm50 = ATgetArgument(trm49, 0);
}
else
goto label25 ;
}
else
goto label25 ;
t = (ATerm) ATempty;
goto label24 ;
label25 :
t = trm47;
{
ATerm trm51 = t;
if(match_cons(t, sym__2))
{
ATerm trm52 = ATgetArgument(t, 0);
ATerm trm53 = ATgetArgument(t, 1);
if(match_cons(trm53, sym__2))
{
ATerm trm54 = ATgetArgument(trm53, 0);
ATerm trm55 = ATgetArgument(trm53, 1);
if(match_cons(trm55, sym_sort_1))
{
ATerm trm56 = ATgetArgument(trm55, 0);
}
else
goto label26 ;
}
else
goto label26 ;
}
else
goto label26 ;
t = (ATerm) ATempty;
goto label24 ;
label26 :
t = trm51;
{
ATerm trm57 = t;
if(match_cons(t, sym__2))
{
ATerm trm58 = ATgetArgument(t, 0);
ATerm trm59 = ATgetArgument(t, 1);
if(match_cons(trm59, sym__2))
{
ATerm trm60 = ATgetArgument(trm59, 0);
ATerm trm61 = ATgetArgument(trm59, 1);
if(match_cons(trm61, sym_char_class_1))
{
ATerm trm62 = ATgetArgument(trm61, 0);
}
else
goto label27 ;
}
else
goto label27 ;
}
else
goto label27 ;
t = (ATerm) ATempty;
goto label24 ;
label27 :
t = trm57;
{
ATerm trm63 = t;
ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm64 = ATgetArgument(t, 0);
if(match_cons(trm64, sym__2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm64, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm64, 0)))
goto label28 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = ATgetArgument(trm64, 1);
}
else
if((sl_readvar(1, sl) != ATgetArgument(trm64, 1)))
goto label28 ;
}
else
goto label28 ;
{
ATerm trm65 = ATgetArgument(t, 1);
if(match_cons(trm65, sym__2))
{
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = ATgetArgument(trm65, 0);
}
else
if((sl_readvar(2, sl) != ATgetArgument(trm65, 0)))
goto label28 ;
{
ATerm trm66 = ATgetArgument(trm65, 1);
if(match_cons(trm66, sym_alt_2))
{
k_13 = ATgetArgument(trm66, 0);
{
ATerm trm67 = ATgetArgument(trm66, 1);
if(match_cons(trm67, sym_alt_2))
{
l_13 = ATgetArgument(trm67, 0);
m_13 = ATgetArgument(trm67, 1);
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
t = (ATerm) ATmakeAppl(sym_alt_2, k_13, (ATerm) ATmakeAppl(sym_alt_2, l_13, m_13));
t = flat_alt_0_0(sl_up(sl), t);
if((t == NULL))
goto label28 ;
n_13 = t;
t = (ATerm) ATmakeAppl(sym__2, term27, n_13);
t = mkterm_0_0(sl_up(sl), t);
if((t == NULL))
goto label28 ;
o_13 = t;
if(((sl_readvar(0, sl) == NULL) || ((sl_readvar(1, sl) == NULL) || (sl_readvar(2, sl) == NULL))))
goto label28 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl)), (ATerm) ATmakeAppl(sym__2, sl_readvar(2, sl), o_13));
}
t = w_14(sl, t);
if((t == NULL))
goto label28 ;
{
ATerm trm68;
trm68 = (ATerm) ATgetAnnotations(t);
if((trm68 == NULL))
trm68 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
p_13 = ATgetFirst((ATermList) t);
q_13 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label28 ;
t_13 = trm68;
t = p_13;
{
struct str_closure o_122 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(o_122);
t = topdown_1_0(sl_up(sl), lifted29_cl, t);
if((t == NULL))
goto label28 ;
r_13 = t;
t = q_13;
s_13 = t;
{
ATerm trm70;
trm70 = CheckATermList(s_13);
if((trm70 == NULL))
goto label28 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm70, r_13), t_13);
}
}
}
goto label24 ;
label28 :
t = trm63;
{
ATerm trm71 = t;
ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,i_14 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm72 = ATgetArgument(t, 0);
if(match_cons(trm72, sym__2))
{
u_13 = ATgetArgument(trm72, 0);
v_13 = ATgetArgument(trm72, 1);
}
else
goto label29 ;
{
ATerm trm73 = ATgetArgument(t, 1);
if(match_cons(trm73, sym__2))
{
w_13 = ATgetArgument(trm73, 0);
{
ATerm trm74 = ATgetArgument(trm73, 1);
if(match_cons(trm74, sym_bracket_symbol_1))
{
i_14 = ATgetArgument(trm74, 0);
}
else
goto label29 ;
}
}
else
goto label29 ;
}
}
else
goto label29 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_13, v_13), (ATerm) ATmakeAppl(sym__2, w_13, i_14));
t = w_14(sl, t);
if((t == NULL))
goto label29 ;
goto label24 ;
label29 :
t = trm71;
{
ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
sl_init_var(0, j_14);
sl_init_var(1, l_14);
if(match_cons(t, sym__2))
{
ATerm trm75 = ATgetArgument(t, 0);
if(match_cons(trm75, sym__2))
{
if((j_14 == NULL))
{
j_14 = ATgetArgument(trm75, 0);
}
else
if((j_14 != ATgetArgument(trm75, 0)))
goto fail36 ;
k_14 = ATgetArgument(trm75, 1);
}
else
goto fail36 ;
{
ATerm trm76 = ATgetArgument(t, 1);
if(match_cons(trm76, sym__2))
{
o_14 = ATgetArgument(trm76, 0);
{
ATerm trm77 = ATgetArgument(trm76, 1);
ATerm trm78,trm79;
trm78 = SSL_get_constructor(trm77);
trm79 = SSL_get_arguments(trm77);
p_14 = trm78;
q_14 = trm79;
}
}
else
goto fail36 ;
}
}
else
goto fail36 ;
t = (ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, o_14, p_14)));
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail36 ;
if((l_14 == NULL))
{
l_14 = t;
}
else
if((l_14 != t))
goto fail36 ;
t = q_14;
t = argument_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail36 ;
t = number_nonterminals_0_0(sl_up(sl), t);
if((t == NULL))
goto fail36 ;
r_14 = t;
t = make_0_0(sl_up(sl), t);
if((t == NULL))
goto fail36 ;
m_14 = t;
t = r_14;
{
struct str_closure p_122 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(p_122);
t = map_1_0(sl_up(sl), lifted31_cl, t);
if((t == NULL))
goto fail36 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto fail36 ;
n_14 = t;
if(((j_14 == NULL) || (l_14 == NULL)))
goto fail36 ;
else
{
ATerm trm80;
trm80 = CheckATermList(n_14);
if((trm80 == NULL))
goto fail36 ;
t = (ATerm) ATinsert((ATermList)trm80, (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, j_14, l_14), m_14));
goto label24 ;
}
}
}
}
}
}
}
label24 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,x_14 = NULL;
u_14 = t;
x_14 = t;
if(((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))
goto fail39 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, sl_readvar(0, sl), sl_readvar(1, sl)), u_14);
}
t = w_14(sl_up(sl), t);
if((t == NULL))
goto fail39 ;
t_14 = t;
t = x_14;
t = t_14;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_122 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(n_122);
t = try_1_0(sl_up(sl_up(sl)), lifted30_cl, t);
if((t == NULL))
goto fail37 ;
}
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
{
ATerm n_119 = NULL,o_119 = NULL,p_119 = NULL;
ATerm trm69;
trm69 = (ATerm) ATgetAnnotations(t);
if((trm69 == NULL))
trm69 = (ATerm) ATempty;
if(match_cons(t, sym_Arg_1))
{
o_119 = ATgetArgument(t, 0);
}
else
goto fail38 ;
n_119 = trm69;
t = o_119;
p_119 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Arg_1, p_119), n_119);
t = term31;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm symbols2pp_entries_1_0 (StrSL sl, StrCL c_13, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "symbols2pp_entries_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, c_13);
{
ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,f_13 = NULL,g_13 = NULL;
t = number_nonterminals_0_0(sl, t);
if((t == NULL))
goto fail32 ;
a_13 = t;
t = make_0_0(sl, t);
if((t == NULL))
goto fail32 ;
y_12 = t;
t = a_13;
b_13 = t;
{
struct str_closure m_122 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(m_122);
t = map_1_0(sl, lifted27_cl, t);
if((t == NULL))
goto fail32 ;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail32 ;
z_12 = t;
t = b_13;
g_13 = t;
t = term3;
t = cl_fun(c_13)(cl_sl(c_13), t);
if((t == NULL))
goto fail32 ;
f_13 = t;
t = g_13;
{
ATerm trm46;
trm46 = CheckATermList(z_12);
if((trm46 == NULL))
goto fail32 ;
t = (ATerm) ATinsert((ATermList)trm46, (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, f_13), y_12));
}
}
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
{
struct str_closure l_122 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(l_122);
t = symbol2abox_1_0(sl_up(sl), lifted28_cl, t);
if((t == NULL))
goto fail33 ;
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
ATerm d_13 = NULL,e_13 = NULL;
e_13 = t;
t = term3;
t = sl_fun(0, sl_up(sl))(sl_fun_sl(0, sl_up(sl)), t);
if((t == NULL))
goto fail34 ;
d_13 = t;
t = e_13;
t = (ATerm) ATmakeAppl(sym__2, d_13, (ATerm) ATempty);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm number_nonterminals_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "number_nonterminals_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_122 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(i_122);
struct str_closure k_122 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(k_122);
t = map_1_0(sl, lifted24_cl, t);
if((t == NULL))
goto fail28 ;
t = number_node_1_0(sl, lifted26_cl, t);
if((t == NULL))
goto fail28 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_122 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(j_122);
t = try_1_0(sl_up(sl), lifted25_cl, t);
if((t == NULL))
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_119 = NULL,e_119 = NULL;
if(match_cons(t, sym_label_2))
{
d_119 = ATgetArgument(t, 0);
e_119 = ATgetArgument(t, 1);
}
else
goto fail31 ;
t = e_119;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm44 = t;
ATerm f_119 = NULL,g_119 = NULL,h_119 = NULL;
ATerm trm45;
trm45 = (ATerm) ATgetAnnotations(t);
if((trm45 == NULL))
trm45 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
g_119 = ATgetArgument(t, 0);
}
else
goto label23 ;
f_119 = trm45;
t = g_119;
h_119 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, h_119), f_119);
goto fail29 ;
label23 :
t = trm44;
goto label22 ;
label22 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
ATerm ignore_prod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ignore_prod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm31 = t;
ATerm trm32 = t;
t = is_inject_prod_0_0(sl, t);
if((t == NULL))
goto label18 ;
goto label17 ;
label18 :
t = trm32;
{
ATerm trm33 = t;
ATerm x_118 = NULL,a_119 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm34 = ATgetArgument(t, 0);
ATerm trm35 = ATgetArgument(t, 1);
ATerm trm36 = ATgetArgument(t, 2);
if(match_cons(trm36, sym_attrs_1))
{
x_118 = ATgetArgument(trm36, 0);
}
else
goto label19 ;
}
else
goto label19 ;
a_119 = t;
t = x_118;
{
struct str_closure f_122 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(f_122);
t = fetch_1_0(sl, lifted21_cl, t);
if((t == NULL))
goto label19 ;
t = a_119;
}
goto label17 ;
label19 :
t = trm33;
{
ATerm b_119 = NULL,c_119 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm37 = ATgetArgument(t, 0);
ATerm trm38 = ATgetArgument(t, 1);
ATerm trm39 = ATgetArgument(t, 2);
if(match_cons(trm39, sym_attrs_1))
{
b_119 = ATgetArgument(trm39, 0);
}
else
goto label16 ;
}
else
goto label16 ;
c_119 = t;
t = b_119;
{
struct str_closure g_122 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(g_122);
t = fetch_1_0(sl, lifted22_cl, t);
if((t == NULL))
goto label16 ;
t = c_119;
goto label17 ;
}
}
}
label17 :
;
goto label15 ;
label16 :
t = trm31;
{
ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
if(match_cons(t, sym_prod_3))
{
s_12 = ATgetArgument(t, 0);
{
ATerm trm40 = ATgetArgument(t, 1);
if(match_cons(trm40, sym_cf_1))
{
ATerm trm41 = ATgetArgument(trm40, 0);
if(match_cons(trm41, sym_sort_1))
{
t_12 = ATgetArgument(trm41, 0);
}
else
goto fail24 ;
}
else
goto fail24 ;
}
{
ATerm trm42 = ATgetArgument(t, 2);
if(match_cons(trm42, sym_attrs_1))
{
u_12 = ATgetArgument(trm42, 0);
}
else
goto fail24 ;
}
}
else
goto fail24 ;
v_12 = t;
t = u_12;
{
struct str_closure h_122 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(h_122);
t = fetch_1_0(sl, lifted23_cl, t);
if((t == NULL))
goto fail24 ;
t = u_12;
{
ATerm trm43 = t;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label21 ;
goto fail24 ;
label21 :
t = trm43;
goto label20 ;
label20 :
;
t = v_12;
goto label15 ;
}
}
}
label15 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_bracket_0)))
goto fail27 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_reject_0)))
goto fail26 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_bracket_0)))
goto fail25 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm missing_constructor_warning_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "missing_constructor_warning_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_122 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(b_122);
struct str_closure d_122 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(d_122);
t = xtc_temp_files_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto fail19 ;
{
struct str_closure e_122 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(e_122);
t = say_1_0(sl, lifted19_cl, t);
if((t == NULL))
goto fail19 ;
t = debug_1_0(sl, lifted20_cl, t);
if((t == NULL))
goto fail19 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_12 = NULL;
struct str_closure c_122 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(c_122);
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
t = xtc_pp_sdf2_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
if(match_cons(t, sym_FILE_1))
{
p_12 = ATgetArgument(t, 0);
}
else
goto fail21 ;
t = p_12;
t = read_text_file_0_0(sl_up(sl), t);
if((t == NULL))
goto fail21 ;
t = trim_chars_1_0(sl_up(sl), lifted18_cl, t);
if((t == NULL))
goto fail21 ;
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
{
ATerm trm28 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 10))))
goto label12 ;
goto label11 ;
label12 :
t = trm28;
{
ATerm trm29 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 13))))
goto label13 ;
goto label11 ;
label13 :
t = trm29;
{
ATerm trm30 = t;
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 32))))
goto label14 ;
goto label11 ;
label14 :
t = trm30;
if(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 9)))
goto label11 ;
else
goto fail22 ;
}
}
label11 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm generate_pp_entries_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "generate_pp_entries_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
sl_init_var(0, n_12);
if(match_cons(t, sym_prod_3))
{
m_12 = ATgetArgument(t, 0);
k_12 = ATgetArgument(t, 1);
l_12 = ATgetArgument(t, 2);
}
else
goto fail17 ;
{
ATerm trm26 = t;
ATerm o_12 = NULL;
t = l_12;
if(match_cons(t, sym_attrs_1))
{
o_12 = ATgetArgument(t, 0);
}
else
goto label9 ;
t = o_12;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label9 ;
if((n_12 == NULL))
{
n_12 = t;
}
else
if((n_12 != t))
goto label9 ;
{
struct str_closure z_121 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(z_121);
t = m_12;
t = symbols2pp_entries_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto fail17 ;
else
goto label8 ;
}
label9 :
t = trm26;
{
ATerm trm27 = t;
t = ignore_prod_0_0(sl, t);
if((t == NULL))
goto label10 ;
t = (ATerm) ATempty;
goto label8 ;
label10 :
t = trm27;
{
struct str_closure a_122 = { &(missing_constructor_warning_0_0) , sl };
StrCL lifted16_cl = &(a_122);
t = if_verbose1_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail17 ;
t = (ATerm) ATempty;
goto label8 ;
}
}
label8 :
;
}
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
if((sl_readvar(0, sl) == NULL))
goto fail18 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_inject_prod_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_inject_prod_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_11 = NULL,i_11 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm18 = ATgetArgument(t, 0);
if(((ATgetType(trm18) == AT_LIST) && !(ATisEmpty(trm18))))
{
ATerm trm19 = ATgetFirst((ATermList) trm18);
if(match_cons(trm19, sym_sort_1))
{
ATerm trm20 = ATgetArgument(trm19, 0);
}
else
goto fail16 ;
{
ATerm trm21 = (ATerm) ATgetNext((ATermList) trm18);
if(!(((ATgetType(trm21) == AT_LIST) && ATisEmpty(trm21))))
goto fail16 ;
}
}
else
goto fail16 ;
{
ATerm trm22 = ATgetArgument(t, 1);
if(match_cons(trm22, sym_sort_1))
{
ATerm trm23 = ATgetArgument(trm22, 0);
}
else
goto fail16 ;
}
{
ATerm trm24 = ATgetArgument(t, 2);
if(match_cons(trm24, sym_attrs_1))
{
h_11 = ATgetArgument(trm24, 0);
}
else
goto fail16 ;
}
}
else
goto fail16 ;
i_11 = t;
t = h_11;
{
ATerm trm25 = t;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto label7 ;
goto fail16 ;
label7 :
t = trm25;
goto label6 ;
label6 :
;
t = i_11;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_cnstr_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_cnstr_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_121 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(y_121);
t = fetch_elem_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail14 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm5 = t;
ATerm c_11 = NULL;
if(match_cons(t, sym_term_1))
{
ATerm trm6 = ATgetArgument(t, 0);
if(match_cons(trm6, sym_appl_2))
{
ATerm trm7 = ATgetArgument(trm6, 0);
if(match_cons(trm7, sym_unquoted_1))
{
ATerm trm8 = ATgetArgument(trm7, 0);
if(!((ATgetSymbol(trm8) == ATmakeSymbol("cons", 0, ATtrue))))
goto label3 ;
}
else
goto label3 ;
{
ATerm trm9 = ATgetArgument(trm6, 1);
if(((ATgetType(trm9) == AT_LIST) && !(ATisEmpty(trm9))))
{
ATerm trm10 = ATgetFirst((ATermList) trm9);
if(match_cons(trm10, sym_fun_1))
{
ATerm trm11 = ATgetArgument(trm10, 0);
if(match_cons(trm11, sym_quoted_1))
{
c_11 = ATgetArgument(trm11, 0);
}
else
goto label3 ;
}
else
goto label3 ;
{
ATerm trm12 = (ATerm) ATgetNext((ATermList) trm9);
if(!(((ATgetType(trm12) == AT_LIST) && ATisEmpty(trm12))))
goto label3 ;
}
}
else
goto label3 ;
}
}
else
goto label3 ;
}
else
goto label3 ;
t = c_11;
t = un_double_quote_0_0(sl_up(sl), t);
if((t == NULL))
goto label3 ;
goto label2 ;
label3 :
t = trm5;
{
ATerm trm13 = t;
ATerm d_11 = NULL;
if(match_cons(t, sym_term_1))
{
ATerm trm14 = ATgetArgument(t, 0);
if(match_cons(trm14, sym_cons_1))
{
d_11 = ATgetArgument(trm14, 0);
}
else
goto label4 ;
}
else
goto label4 ;
t = d_11;
goto label2 ;
label4 :
t = trm13;
{
ATerm trm15 = t;
ATerm e_11 = NULL;
if(match_cons(t, sym_default_1))
{
ATerm trm16 = ATgetArgument(t, 0);
if(match_cons(trm16, sym_term_1))
{
ATerm trm17 = ATgetArgument(trm16, 0);
if(match_cons(trm17, sym_cons_1))
{
e_11 = ATgetArgument(trm17, 0);
}
else
goto label5 ;
}
else
goto label5 ;
}
else
goto label5 ;
t = e_11;
goto label2 ;
label5 :
t = trm15;
{
ATerm f_11 = NULL;
if(match_cons(t, sym_cons_1))
{
f_11 = ATgetArgument(t, 0);
}
else
goto fail15 ;
t = f_11;
goto label2 ;
}
}
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_sdf2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_121 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(q_121);
struct str_closure r_121 = { &(pass_verbose_0_0) , sl };
StrCL lifted13_cl = &(r_121);
struct str_closure t_121 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(t_121);
struct str_closure u_121 = { &(pass_verbose_0_0) , sl };
StrCL lifted8_cl = &(u_121);
t = xtc_transform_2_0(sl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail9 ;
{
struct str_closure v_121 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(v_121);
struct str_closure w_121 = { &(pass_verbose_0_0) , sl };
StrCL lifted10_cl = &(w_121);
t = xtc_transform_2_0(sl, lifted9_cl, lifted10_cl, t);
if((t == NULL))
goto fail9 ;
{
struct str_closure x_121 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(x_121);
t = xtc_ast2abox_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail9 ;
t = xtc_transform_2_0(sl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto fail9 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term21);
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
t = term19;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term17;
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
t = term15;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_parse_sdf2_0_1 (StrSL sl, ATerm v_10, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_parse_sdf2_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_10 = NULL,x_10 = NULL;
struct str_closure o_121 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(o_121);
struct str_closure p_121 = { &(pass_verbose_0_0) , sl };
StrCL lifted6_cl = &(p_121);
x_10 = t;
t = term13;
w_10 = t;
t = x_10;
t = xtc_sglri_0_2(sl, w_10, v_10, t);
if((t == NULL))
goto fail7 ;
t = xtc_transform_2_0(sl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail7 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_arg_flags_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
if(match_cons(t, sym__2))
{
ATerm trm2 = ATgetArgument(t, 0);
ATerm trm3 = ATgetArgument(t, 1);
if(!(((ATgetType(trm3) == AT_LIST) && ATisEmpty(trm3))))
goto label1 ;
}
else
goto label1 ;
t = (ATerm) ATempty;
goto label0 ;
label1 :
t = trm1;
{
ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
if(match_cons(t, sym__2))
{
j_10 = ATgetArgument(t, 0);
k_10 = ATgetArgument(t, 1);
}
else
goto fail6 ;
m_10 = t;
t = k_10;
o_10 = t;
n_10 = t;
t = (ATerm) ATmakeAppl(sym__2, j_10, n_10);
t = separate_by_0_0(sl, t);
if((t == NULL))
goto fail6 ;
l_10 = t;
t = m_10;
{
ATerm trm4;
trm4 = CheckATermList(l_10);
if((trm4 == NULL))
goto fail6 ;
t = (ATerm) ATinsert((ATermList)trm4, j_10);
goto label0 ;
}
}
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_sglri_0_2 (StrSL sl, ATerm d_10, ATerm e_10, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_sglri_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, d_10);
sl_init_var(1, e_10);
{
struct str_closure m_121 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(m_121);
struct str_closure n_121 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(n_121);
t = xtc_transform_2_0(sl, lifted3_cl, lifted4_cl, t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_10 = NULL,h_10 = NULL,g_10 = NULL,i_10 = NULL;
h_10 = t;
if((sl_readvar(0, sl) == NULL))
goto fail5 ;
else
{
t = sl_readvar(0, sl);
}
t = xtc_find_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
f_10 = t;
t = h_10;
i_10 = t;
t = term3;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
g_10 = t;
t = i_10;
if((sl_readvar(1, sl) == NULL))
goto fail5 ;
else
{
ATerm trm0;
trm0 = CheckATermList(g_10);
if((trm0 == NULL))
goto fail5 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert((ATermList)trm0, sl_readvar(1, sl)), term9), f_10), term5);
}
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
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL z_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_ast2abox_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, z_8);
{
struct str_closure i_121 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(i_121);
struct str_closure j_121 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(j_121);
t = xtc_transform_2_0(sl, lifted0_cl, lifted1_cl, t);
if((t == NULL))
goto fail0 ;
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
ATerm a_9 = NULL,c_9 = NULL,b_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
c_9 = t;
t = term3;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
a_9 = t;
t = c_9;
d_9 = t;
t = term3;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail2 ;
{
struct str_closure h_121 = { &(xtc_find_0_0) , sl_up(sl) };
StrCL lifted2_cl = &(h_121);
t = map_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto fail2 ;
f_9 = t;
e_9 = t;
t = (ATerm) ATmakeAppl(sym__2, term5, e_9);
t = add_arg_flags_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
b_9 = t;
t = d_9;
t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term1;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 123));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(reverse_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("reverse_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(is_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(filter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("filter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(split_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("split_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_text_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_text_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(say_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("say_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(debug_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("debug_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(mkterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("mkterm_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(trim_chars_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("trim_chars_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(un_double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("un_double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(if_verbose1_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("if_verbose1_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_temp_files_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_temp_files_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_find_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_find_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(selector_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("selector_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iter_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iter_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iter_star_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iter_star_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iter_sep_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iter_sep_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(iter_star_sep_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("iter_star_sep_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lit_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lit_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted73);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted73", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted69);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted69", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ppgen_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ppgen_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_input_type_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_input_type_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted67);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted67", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pre_process_sdf_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pre_process_sdf_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted65);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted65", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ppgen_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ppgen_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted60);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted60", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted57);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted57", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ppgenerate_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ppgenerate_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Make_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Make_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(u_16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("u_16", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pair_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pair_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(make_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("make_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted38);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted38", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(m_15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("m_15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(number_node_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("number_node_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(argument_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("argument_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(b_15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("b_15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(flat_alt_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("flat_alt_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(w_14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("w_14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(symbol2abox_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("symbol2abox_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted27);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted27", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(symbols2pp_entries_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("symbols2pp_entries_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted26);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted26", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(number_nonterminals_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("number_nonterminals_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ignore_prod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ignore_prod_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted19);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted19", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted18);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted18", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted17);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted17", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted20);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted20", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(missing_constructor_warning_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("missing_constructor_warning_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(generate_pp_entries_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("generate_pp_entries_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_inject_prod_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_inject_prod_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_cnstr_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_cnstr_name_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_sdf2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_sdf2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_parse_sdf2_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_parse_sdf2_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_arg_flags_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_arg_flags_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_sglri_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_sglri_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ast2abox_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ast2abox_1_0", 0, ATtrue)), &(closures[closures_index]));
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
