#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
static Symbol sym_sorts_1;
static Symbol sym_id_1;
static Symbol sym_module_3;
static Symbol sym_module_1;
static Symbol sym_ast_1;
static Symbol sym_Snoc_2;
static Symbol sym_Conc_3;
static Symbol sym_Ins_1;
static Symbol sym_layout_1;
static Symbol sym_seq_1;
static Symbol sym_parametrized_sort_2;
static Symbol sym_character_1;
static Symbol sym_cons_1;
static Symbol sym_char_1;
static Symbol sym_cilit_1;
static Symbol sym_amb_1;
static Symbol sym_parsetree_2;
static Symbol sym_Comment_1;
static Symbol sym_Location_4;
static Symbol sym_meta_var_1;
static Symbol sym_meta_listvar_1;
static Symbol sym_FromApp_1;
static Symbol sym_FromStrategy_1;
static Symbol sym_FromMetaListExpr_1;
static Symbol sym_FromMetaExpr_1;
static Symbol sym_FromTerm_1;
static Symbol sym_ToStrategy_1;
static Symbol sym_ToBuild_1;
static Symbol sym_ToMetaListExpr_1;
static Symbol sym_ToMetaExpr_1;
static Symbol sym_ToTerm_1;
static Symbol sym_area_6;
static Symbol sym_area_in_file_2;
static Symbol sym_file_1;
static Symbol sym_localized_2;
static Symbol sym_subject_1;
static Symbol sym_fatal_2;
static Symbol sym_error_2;
static Symbol sym_warning_2;
static Symbol sym_info_2;
static Symbol sym_summary_3;
static Symbol sym_empty_grammar_0;
static Symbol sym_conc_grammars_2;
static Symbol sym_syntax_1;
static Symbol sym_lexical_syntax_1;
static Symbol sym_context_free_syntax_1;
static Symbol sym_variables_1;
static Symbol sym_lexical_variables_1;
static Symbol sym_imp_section_1;
static Symbol sym_priorities_1;
static Symbol sym_kernel_start_symbols_1;
static Symbol sym_lexical_start_symbols_1;
static Symbol sym_context_free_start_symbols_1;
static Symbol sym_restrictions_1;
static Symbol sym_aliases_1;
static Symbol sym_lexical_priorities_1;
static Symbol sym_context_free_priorities_1;
static Symbol sym_lexical_restrictions_1;
static Symbol sym_context_free_restrictions_1;
static Symbol sym_term_1;
static Symbol sym_bracket_0;
static Symbol sym_assoc_1;
static Symbol sym_reject_0;
static Symbol sym_prefer_0;
static Symbol sym_avoid_0;
static Symbol sym_attrs_1;
static Symbol sym_no_attrs_0;
static Symbol sym_prod_3;
static Symbol sym_prefix_fun_4;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_varsym_1;
static Symbol sym_layout_0;
static Symbol sym_empty_0;
static Symbol sym_opt_1;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_tuple_2;
static Symbol sym_func_2;
static Symbol sym_strategy_2;
static Symbol sym_lifting_1;
static Symbol sym_sort_1;
static Symbol sym_parameterized_sort_2;
static Symbol sym_lit_1;
static Symbol sym_ci_lit_1;
static Symbol sym_label_2;
static Symbol sym_start_0;
static Symbol sym_file_start_0;
static Symbol sym_renamings_1;
static Symbol sym_symbol_2;
static Symbol sym_production_2;
static Symbol sym_exports_1;
static Symbol sym_hiddens_1;
static Symbol sym_unparameterized_1;
static Symbol sym_parameterized_2;
static Symbol sym_imports_1;
static Symbol sym_renamed_module_2;
static Symbol sym_left_0;
static Symbol sym_right_0;
static Symbol sym_non_assoc_0;
static Symbol sym_assoc_0;
static Symbol sym_with_arguments_2;
static Symbol sym_non_transitive_1;
static Symbol sym_simple_group_1;
static Symbol sym_prods_group_1;
static Symbol sym_assoc_group_2;
static Symbol sym_chain_1;
static Symbol sym_assoc_3;
static Symbol sym_numeric_1;
static Symbol sym_short_1;
static Symbol sym_top_0;
static Symbol sym_eof_0;
static Symbol sym_bot_0;
static Symbol sym_label__start_0;
static Symbol sym_range_2;
static Symbol sym_conc_2;
static Symbol sym_simple_charclass_1;
static Symbol sym_comp_1;
static Symbol sym_diff_2;
static Symbol sym_isect_2;
static Symbol sym_union_2;
static Symbol sym_unquoted_fun_1;
static Symbol sym_quoted_fun_1;
static Symbol sym_char_class_1;
static Symbol sym_seq_2;
static Symbol sym_single_1;
static Symbol sym_alt_2;
static Symbol sym_follow_2;
static Symbol sym_alias_2;
static Symbol sym_definition_1;
static Symbol sym_ParseTable_1;
static Symbol sym_AsFix2ME_0;
static Symbol sym_AsFix2_0;
static Symbol sym_RejectFilter_0;
static Symbol sym_PriorityFilter_0;
static Symbol sym_InjectionCountFilter_0;
static Symbol sym_EagernessFilter_0;
static Symbol sym_DirectEagernessFilter_0;
static Symbol sym_AssociativityFilter_0;
static Symbol sym__18;
static Symbol sym__17;
static Symbol sym__16;
static Symbol sym__15;
static Symbol sym__14;
static Symbol sym__13;
static Symbol sym__12;
static Symbol sym__11;
static Symbol sym__10;
static Symbol sym__9;
static Symbol sym__8;
static Symbol sym__7;
static Symbol sym__6;
static Symbol sym__5;
static Symbol sym__4;
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym_Hashtable_1;
static Symbol sym_NewTable_0;
static Symbol sym_Tables_0;
static Symbol sym_NestedTable_1;
static Symbol sym_Scopes_0;
static Symbol sym_IndexedSet_1;
static Symbol sym_ExceptionCS_2;
static Symbol sym_ThrowCS_2;
static Symbol sym_IgnoreT_1;
static Symbol sym_Structure_1;
static Symbol sym_TryBlock_4;
static Symbol sym_Finally_1;
static Symbol sym_Catch_2;
static Symbol sym_IgnoreC_1;
static Symbol sym_IgnoreB_1;
static Symbol sym_ContinueCS_2;
static Symbol sym_BreakCS_2;
static Symbol sym_SplitPos_2;
static Symbol sym_Label_1;
static Symbol sym_ChangeSet_3;
static Symbol sym_RuleScope_2;
static Symbol sym_ErrorNumber_1;
static Symbol sym_stderr_0;
static Symbol sym_stdout_0;
static Symbol sym_stdin_0;
static Symbol sym_Path_1;
static Symbol sym_Stream_1;
static Symbol sym_Anno_2;
static Symbol sym_Infinite_0;
static Symbol sym_GraphLet_2;
static Symbol sym_Undefined_1;
static Symbol sym_Program_1;
static Symbol sym_Vomit_0;
static Symbol sym_Debug_0;
static Symbol sym_Info_0;
static Symbol sym_Notice_0;
static Symbol sym_Warning_0;
static Symbol sym_Error_0;
static Symbol sym_Critical_0;
static Symbol sym_Alert_0;
static Symbol sym_Emergency_0;
static Symbol sym_Saturday_0;
static Symbol sym_Friday_0;
static Symbol sym_Thursday_0;
static Symbol sym_Wednesday_0;
static Symbol sym_Tuesday_0;
static Symbol sym_Monday_0;
static Symbol sym_Sunday_0;
static Symbol sym_December_0;
static Symbol sym_November_0;
static Symbol sym_October_0;
static Symbol sym_September_0;
static Symbol sym_August_0;
static Symbol sym_July_0;
static Symbol sym_June_0;
static Symbol sym_May_0;
static Symbol sym_April_0;
static Symbol sym_March_0;
static Symbol sym_February_0;
static Symbol sym_January_0;
static Symbol sym_Dupl_2;
static Symbol sym_Date_3;
static Symbol sym_DayTime_3;
static Symbol sym_ComponentTime_3;
static Symbol sym_EpochTime_1;
static Symbol sym_Pipe_2;
static Symbol sym_X__OK_0;
static Symbol sym_W__OK_0;
static Symbol sym_R__OK_0;
static Symbol sym_F__OK_0;
static Symbol sym_WaitStatus_3;
static Symbol sym_UnknownSignal_1;
static Symbol sym_Signal_3;
static Symbol sym_S_1;
static Symbol sym_H_2;
static Symbol sym_V_2;
static Symbol sym_HV_2;
static Symbol sym_ALT_2;
static Symbol sym_A_3;
static Symbol sym_R_2;
static Symbol sym_FBOX_2;
static Symbol sym_LBL_2;
static Symbol sym_REF_2;
static Symbol sym_C_2;
static Symbol sym_L_2;
static Symbol sym_LNAT_2;
static Symbol sym_Arg_1;
static Symbol sym_Arg2_2;
static Symbol sym_SOpt_2;
static Symbol sym_SOptB_2;
static Symbol sym_VS_0;
static Symbol sym_HS_0;
static Symbol sym_IS_0;
static Symbol sym_AL_1;
static Symbol sym_AC_1;
static Symbol sym_AR_1;
static Symbol sym_AOPTIONS_1;
static Symbol sym_FNAT_2;
static Symbol sym_FFID_2;
static Symbol sym_F_1;
static Symbol sym_KW_0;
static Symbol sym_VAR_0;
static Symbol sym_NUM_0;
static Symbol sym_MATH_0;
static Symbol sym_FN_0;
static Symbol sym_FM_0;
static Symbol sym_SE_0;
static Symbol sym_SH_0;
static Symbol sym_SZ_0;
static Symbol sym_CL_0;
static Symbol sym_PP_Table_1;
static Symbol sym_PP_Entry_2;
static Symbol sym_Path1_1;
static Symbol sym_Path_2;
static Symbol sym_selector_2;
static Symbol sym_DR__DUMMY_0;
static Symbol sym_DR__UNDEFINE_1;
static Symbol sym_Conc_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_natural_1;
static Symbol sym_positive_1;
static Symbol sym_negative_1;
static Symbol sym_present_1;
static Symbol sym_absent_0;
static Symbol sym_real_con_3;
static Symbol sym_quoted_1;
static Symbol sym_unquoted_1;
static Symbol sym_int_1;
static Symbol sym_real_1;
static Symbol sym_fun_1;
static Symbol sym_appl_2;
static Symbol sym_placeholder_1;
static Symbol sym_list_1;
static Symbol sym_annotated_2;
static Symbol sym_default_1;
static void init_module_constructors (void)
{
sym_sorts_1 = ATmakeSymbol("sorts", 1, ATfalse);
ATprotectSymbol(sym_sorts_1);
sym_id_1 = ATmakeSymbol("id", 1, ATfalse);
ATprotectSymbol(sym_id_1);
sym_module_3 = ATmakeSymbol("module", 3, ATfalse);
ATprotectSymbol(sym_module_3);
sym_module_1 = ATmakeSymbol("module", 1, ATfalse);
ATprotectSymbol(sym_module_1);
sym_ast_1 = ATmakeSymbol("ast", 1, ATfalse);
ATprotectSymbol(sym_ast_1);
sym_Snoc_2 = ATmakeSymbol("Snoc", 2, ATfalse);
ATprotectSymbol(sym_Snoc_2);
sym_Conc_3 = ATmakeSymbol("Conc", 3, ATfalse);
ATprotectSymbol(sym_Conc_3);
sym_Ins_1 = ATmakeSymbol("Ins", 1, ATfalse);
ATprotectSymbol(sym_Ins_1);
sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
ATprotectSymbol(sym_layout_1);
sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
ATprotectSymbol(sym_seq_1);
sym_parametrized_sort_2 = ATmakeSymbol("parametrized-sort", 2, ATfalse);
ATprotectSymbol(sym_parametrized_sort_2);
sym_character_1 = ATmakeSymbol("character", 1, ATfalse);
ATprotectSymbol(sym_character_1);
sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
ATprotectSymbol(sym_cons_1);
sym_char_1 = ATmakeSymbol("char", 1, ATfalse);
ATprotectSymbol(sym_char_1);
sym_cilit_1 = ATmakeSymbol("cilit", 1, ATfalse);
ATprotectSymbol(sym_cilit_1);
sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
ATprotectSymbol(sym_amb_1);
sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
ATprotectSymbol(sym_parsetree_2);
sym_Comment_1 = ATmakeSymbol("Comment", 1, ATfalse);
ATprotectSymbol(sym_Comment_1);
sym_Location_4 = ATmakeSymbol("Location", 4, ATfalse);
ATprotectSymbol(sym_Location_4);
sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
ATprotectSymbol(sym_meta_var_1);
sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
ATprotectSymbol(sym_meta_listvar_1);
sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
ATprotectSymbol(sym_FromApp_1);
sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
ATprotectSymbol(sym_FromStrategy_1);
sym_FromMetaListExpr_1 = ATmakeSymbol("FromMetaListExpr", 1, ATfalse);
ATprotectSymbol(sym_FromMetaListExpr_1);
sym_FromMetaExpr_1 = ATmakeSymbol("FromMetaExpr", 1, ATfalse);
ATprotectSymbol(sym_FromMetaExpr_1);
sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
ATprotectSymbol(sym_FromTerm_1);
sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
ATprotectSymbol(sym_ToStrategy_1);
sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
ATprotectSymbol(sym_ToBuild_1);
sym_ToMetaListExpr_1 = ATmakeSymbol("ToMetaListExpr", 1, ATfalse);
ATprotectSymbol(sym_ToMetaListExpr_1);
sym_ToMetaExpr_1 = ATmakeSymbol("ToMetaExpr", 1, ATfalse);
ATprotectSymbol(sym_ToMetaExpr_1);
sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
ATprotectSymbol(sym_ToTerm_1);
sym_area_6 = ATmakeSymbol("area", 6, ATfalse);
ATprotectSymbol(sym_area_6);
sym_area_in_file_2 = ATmakeSymbol("area-in-file", 2, ATfalse);
ATprotectSymbol(sym_area_in_file_2);
sym_file_1 = ATmakeSymbol("file", 1, ATfalse);
ATprotectSymbol(sym_file_1);
sym_localized_2 = ATmakeSymbol("localized", 2, ATfalse);
ATprotectSymbol(sym_localized_2);
sym_subject_1 = ATmakeSymbol("subject", 1, ATfalse);
ATprotectSymbol(sym_subject_1);
sym_fatal_2 = ATmakeSymbol("fatal", 2, ATfalse);
ATprotectSymbol(sym_fatal_2);
sym_error_2 = ATmakeSymbol("error", 2, ATfalse);
ATprotectSymbol(sym_error_2);
sym_warning_2 = ATmakeSymbol("warning", 2, ATfalse);
ATprotectSymbol(sym_warning_2);
sym_info_2 = ATmakeSymbol("info", 2, ATfalse);
ATprotectSymbol(sym_info_2);
sym_summary_3 = ATmakeSymbol("summary", 3, ATfalse);
ATprotectSymbol(sym_summary_3);
sym_empty_grammar_0 = ATmakeSymbol("empty-grammar", 0, ATfalse);
ATprotectSymbol(sym_empty_grammar_0);
sym_conc_grammars_2 = ATmakeSymbol("conc-grammars", 2, ATfalse);
ATprotectSymbol(sym_conc_grammars_2);
sym_syntax_1 = ATmakeSymbol("syntax", 1, ATfalse);
ATprotectSymbol(sym_syntax_1);
sym_lexical_syntax_1 = ATmakeSymbol("lexical-syntax", 1, ATfalse);
ATprotectSymbol(sym_lexical_syntax_1);
sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
ATprotectSymbol(sym_context_free_syntax_1);
sym_variables_1 = ATmakeSymbol("variables", 1, ATfalse);
ATprotectSymbol(sym_variables_1);
sym_lexical_variables_1 = ATmakeSymbol("lexical-variables", 1, ATfalse);
ATprotectSymbol(sym_lexical_variables_1);
sym_imp_section_1 = ATmakeSymbol("imp-section", 1, ATfalse);
ATprotectSymbol(sym_imp_section_1);
sym_priorities_1 = ATmakeSymbol("priorities", 1, ATfalse);
ATprotectSymbol(sym_priorities_1);
sym_kernel_start_symbols_1 = ATmakeSymbol("kernel-start-symbols", 1, ATfalse);
ATprotectSymbol(sym_kernel_start_symbols_1);
sym_lexical_start_symbols_1 = ATmakeSymbol("lexical-start-symbols", 1, ATfalse);
ATprotectSymbol(sym_lexical_start_symbols_1);
sym_context_free_start_symbols_1 = ATmakeSymbol("context-free-start-symbols", 1, ATfalse);
ATprotectSymbol(sym_context_free_start_symbols_1);
sym_restrictions_1 = ATmakeSymbol("restrictions", 1, ATfalse);
ATprotectSymbol(sym_restrictions_1);
sym_aliases_1 = ATmakeSymbol("aliases", 1, ATfalse);
ATprotectSymbol(sym_aliases_1);
sym_lexical_priorities_1 = ATmakeSymbol("lexical-priorities", 1, ATfalse);
ATprotectSymbol(sym_lexical_priorities_1);
sym_context_free_priorities_1 = ATmakeSymbol("context-free-priorities", 1, ATfalse);
ATprotectSymbol(sym_context_free_priorities_1);
sym_lexical_restrictions_1 = ATmakeSymbol("lexical-restrictions", 1, ATfalse);
ATprotectSymbol(sym_lexical_restrictions_1);
sym_context_free_restrictions_1 = ATmakeSymbol("context-free-restrictions", 1, ATfalse);
ATprotectSymbol(sym_context_free_restrictions_1);
sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
ATprotectSymbol(sym_term_1);
sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
ATprotectSymbol(sym_bracket_0);
sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
ATprotectSymbol(sym_assoc_1);
sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
ATprotectSymbol(sym_reject_0);
sym_prefer_0 = ATmakeSymbol("prefer", 0, ATfalse);
ATprotectSymbol(sym_prefer_0);
sym_avoid_0 = ATmakeSymbol("avoid", 0, ATfalse);
ATprotectSymbol(sym_avoid_0);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
ATprotectSymbol(sym_no_attrs_0);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_prefix_fun_4 = ATmakeSymbol("prefix-fun", 4, ATfalse);
ATprotectSymbol(sym_prefix_fun_4);
sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
ATprotectSymbol(sym_cf_1);
sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
ATprotectSymbol(sym_lex_1);
sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
ATprotectSymbol(sym_varsym_1);
sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
ATprotectSymbol(sym_layout_0);
sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
ATprotectSymbol(sym_empty_0);
sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
ATprotectSymbol(sym_opt_1);
sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
ATprotectSymbol(sym_iter_1);
sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
ATprotectSymbol(sym_iter_star_1);
sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
ATprotectSymbol(sym_iter_sep_2);
sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
ATprotectSymbol(sym_iter_star_sep_2);
sym_tuple_2 = ATmakeSymbol("tuple", 2, ATfalse);
ATprotectSymbol(sym_tuple_2);
sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
ATprotectSymbol(sym_func_2);
sym_strategy_2 = ATmakeSymbol("strategy", 2, ATfalse);
ATprotectSymbol(sym_strategy_2);
sym_lifting_1 = ATmakeSymbol("lifting", 1, ATfalse);
ATprotectSymbol(sym_lifting_1);
sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
ATprotectSymbol(sym_sort_1);
sym_parameterized_sort_2 = ATmakeSymbol("parameterized-sort", 2, ATfalse);
ATprotectSymbol(sym_parameterized_sort_2);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_ci_lit_1 = ATmakeSymbol("ci-lit", 1, ATfalse);
ATprotectSymbol(sym_ci_lit_1);
sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
ATprotectSymbol(sym_label_2);
sym_start_0 = ATmakeSymbol("start", 0, ATfalse);
ATprotectSymbol(sym_start_0);
sym_file_start_0 = ATmakeSymbol("file-start", 0, ATfalse);
ATprotectSymbol(sym_file_start_0);
sym_renamings_1 = ATmakeSymbol("renamings", 1, ATfalse);
ATprotectSymbol(sym_renamings_1);
sym_symbol_2 = ATmakeSymbol("symbol", 2, ATfalse);
ATprotectSymbol(sym_symbol_2);
sym_production_2 = ATmakeSymbol("production", 2, ATfalse);
ATprotectSymbol(sym_production_2);
sym_exports_1 = ATmakeSymbol("exports", 1, ATfalse);
ATprotectSymbol(sym_exports_1);
sym_hiddens_1 = ATmakeSymbol("hiddens", 1, ATfalse);
ATprotectSymbol(sym_hiddens_1);
sym_unparameterized_1 = ATmakeSymbol("unparameterized", 1, ATfalse);
ATprotectSymbol(sym_unparameterized_1);
sym_parameterized_2 = ATmakeSymbol("parameterized", 2, ATfalse);
ATprotectSymbol(sym_parameterized_2);
sym_imports_1 = ATmakeSymbol("imports", 1, ATfalse);
ATprotectSymbol(sym_imports_1);
sym_renamed_module_2 = ATmakeSymbol("renamed-module", 2, ATfalse);
ATprotectSymbol(sym_renamed_module_2);
sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
ATprotectSymbol(sym_left_0);
sym_right_0 = ATmakeSymbol("right", 0, ATfalse);
ATprotectSymbol(sym_right_0);
sym_non_assoc_0 = ATmakeSymbol("non-assoc", 0, ATfalse);
ATprotectSymbol(sym_non_assoc_0);
sym_assoc_0 = ATmakeSymbol("assoc", 0, ATfalse);
ATprotectSymbol(sym_assoc_0);
sym_with_arguments_2 = ATmakeSymbol("with-arguments", 2, ATfalse);
ATprotectSymbol(sym_with_arguments_2);
sym_non_transitive_1 = ATmakeSymbol("non-transitive", 1, ATfalse);
ATprotectSymbol(sym_non_transitive_1);
sym_simple_group_1 = ATmakeSymbol("simple-group", 1, ATfalse);
ATprotectSymbol(sym_simple_group_1);
sym_prods_group_1 = ATmakeSymbol("prods-group", 1, ATfalse);
ATprotectSymbol(sym_prods_group_1);
sym_assoc_group_2 = ATmakeSymbol("assoc-group", 2, ATfalse);
ATprotectSymbol(sym_assoc_group_2);
sym_chain_1 = ATmakeSymbol("chain", 1, ATfalse);
ATprotectSymbol(sym_chain_1);
sym_assoc_3 = ATmakeSymbol("assoc", 3, ATfalse);
ATprotectSymbol(sym_assoc_3);
sym_numeric_1 = ATmakeSymbol("numeric", 1, ATfalse);
ATprotectSymbol(sym_numeric_1);
sym_short_1 = ATmakeSymbol("short", 1, ATfalse);
ATprotectSymbol(sym_short_1);
sym_top_0 = ATmakeSymbol("top", 0, ATfalse);
ATprotectSymbol(sym_top_0);
sym_eof_0 = ATmakeSymbol("eof", 0, ATfalse);
ATprotectSymbol(sym_eof_0);
sym_bot_0 = ATmakeSymbol("bot", 0, ATfalse);
ATprotectSymbol(sym_bot_0);
sym_label__start_0 = ATmakeSymbol("label_start", 0, ATfalse);
ATprotectSymbol(sym_label__start_0);
sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
ATprotectSymbol(sym_range_2);
sym_conc_2 = ATmakeSymbol("conc", 2, ATfalse);
ATprotectSymbol(sym_conc_2);
sym_simple_charclass_1 = ATmakeSymbol("simple-charclass", 1, ATfalse);
ATprotectSymbol(sym_simple_charclass_1);
sym_comp_1 = ATmakeSymbol("comp", 1, ATfalse);
ATprotectSymbol(sym_comp_1);
sym_diff_2 = ATmakeSymbol("diff", 2, ATfalse);
ATprotectSymbol(sym_diff_2);
sym_isect_2 = ATmakeSymbol("isect", 2, ATfalse);
ATprotectSymbol(sym_isect_2);
sym_union_2 = ATmakeSymbol("union", 2, ATfalse);
ATprotectSymbol(sym_union_2);
sym_unquoted_fun_1 = ATmakeSymbol("unquoted-fun", 1, ATfalse);
ATprotectSymbol(sym_unquoted_fun_1);
sym_quoted_fun_1 = ATmakeSymbol("quoted-fun", 1, ATfalse);
ATprotectSymbol(sym_quoted_fun_1);
sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
ATprotectSymbol(sym_char_class_1);
sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
ATprotectSymbol(sym_seq_2);
sym_single_1 = ATmakeSymbol("single", 1, ATfalse);
ATprotectSymbol(sym_single_1);
sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
ATprotectSymbol(sym_alt_2);
sym_follow_2 = ATmakeSymbol("follow", 2, ATfalse);
ATprotectSymbol(sym_follow_2);
sym_alias_2 = ATmakeSymbol("alias", 2, ATfalse);
ATprotectSymbol(sym_alias_2);
sym_definition_1 = ATmakeSymbol("definition", 1, ATfalse);
ATprotectSymbol(sym_definition_1);
sym_ParseTable_1 = ATmakeSymbol("ParseTable", 1, ATfalse);
ATprotectSymbol(sym_ParseTable_1);
sym_AsFix2ME_0 = ATmakeSymbol("AsFix2ME", 0, ATfalse);
ATprotectSymbol(sym_AsFix2ME_0);
sym_AsFix2_0 = ATmakeSymbol("AsFix2", 0, ATfalse);
ATprotectSymbol(sym_AsFix2_0);
sym_RejectFilter_0 = ATmakeSymbol("RejectFilter", 0, ATfalse);
ATprotectSymbol(sym_RejectFilter_0);
sym_PriorityFilter_0 = ATmakeSymbol("PriorityFilter", 0, ATfalse);
ATprotectSymbol(sym_PriorityFilter_0);
sym_InjectionCountFilter_0 = ATmakeSymbol("InjectionCountFilter", 0, ATfalse);
ATprotectSymbol(sym_InjectionCountFilter_0);
sym_EagernessFilter_0 = ATmakeSymbol("EagernessFilter", 0, ATfalse);
ATprotectSymbol(sym_EagernessFilter_0);
sym_DirectEagernessFilter_0 = ATmakeSymbol("DirectEagernessFilter", 0, ATfalse);
ATprotectSymbol(sym_DirectEagernessFilter_0);
sym_AssociativityFilter_0 = ATmakeSymbol("AssociativityFilter", 0, ATfalse);
ATprotectSymbol(sym_AssociativityFilter_0);
sym__18 = ATmakeSymbol("", 18, ATfalse);
ATprotectSymbol(sym__18);
sym__17 = ATmakeSymbol("", 17, ATfalse);
ATprotectSymbol(sym__17);
sym__16 = ATmakeSymbol("", 16, ATfalse);
ATprotectSymbol(sym__16);
sym__15 = ATmakeSymbol("", 15, ATfalse);
ATprotectSymbol(sym__15);
sym__14 = ATmakeSymbol("", 14, ATfalse);
ATprotectSymbol(sym__14);
sym__13 = ATmakeSymbol("", 13, ATfalse);
ATprotectSymbol(sym__13);
sym__12 = ATmakeSymbol("", 12, ATfalse);
ATprotectSymbol(sym__12);
sym__11 = ATmakeSymbol("", 11, ATfalse);
ATprotectSymbol(sym__11);
sym__10 = ATmakeSymbol("", 10, ATfalse);
ATprotectSymbol(sym__10);
sym__9 = ATmakeSymbol("", 9, ATfalse);
ATprotectSymbol(sym__9);
sym__8 = ATmakeSymbol("", 8, ATfalse);
ATprotectSymbol(sym__8);
sym__7 = ATmakeSymbol("", 7, ATfalse);
ATprotectSymbol(sym__7);
sym__6 = ATmakeSymbol("", 6, ATfalse);
ATprotectSymbol(sym__6);
sym__5 = ATmakeSymbol("", 5, ATfalse);
ATprotectSymbol(sym__5);
sym__4 = ATmakeSymbol("", 4, ATfalse);
ATprotectSymbol(sym__4);
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym__1 = ATmakeSymbol("", 1, ATfalse);
ATprotectSymbol(sym__1);
sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
ATprotectSymbol(sym_Hashtable_1);
sym_NewTable_0 = ATmakeSymbol("NewTable", 0, ATfalse);
ATprotectSymbol(sym_NewTable_0);
sym_Tables_0 = ATmakeSymbol("Tables", 0, ATfalse);
ATprotectSymbol(sym_Tables_0);
sym_NestedTable_1 = ATmakeSymbol("NestedTable", 1, ATfalse);
ATprotectSymbol(sym_NestedTable_1);
sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
ATprotectSymbol(sym_Scopes_0);
sym_IndexedSet_1 = ATmakeSymbol("IndexedSet", 1, ATfalse);
ATprotectSymbol(sym_IndexedSet_1);
sym_ExceptionCS_2 = ATmakeSymbol("ExceptionCS", 2, ATfalse);
ATprotectSymbol(sym_ExceptionCS_2);
sym_ThrowCS_2 = ATmakeSymbol("ThrowCS", 2, ATfalse);
ATprotectSymbol(sym_ThrowCS_2);
sym_IgnoreT_1 = ATmakeSymbol("IgnoreT", 1, ATfalse);
ATprotectSymbol(sym_IgnoreT_1);
sym_Structure_1 = ATmakeSymbol("Structure", 1, ATfalse);
ATprotectSymbol(sym_Structure_1);
sym_TryBlock_4 = ATmakeSymbol("TryBlock", 4, ATfalse);
ATprotectSymbol(sym_TryBlock_4);
sym_Finally_1 = ATmakeSymbol("Finally", 1, ATfalse);
ATprotectSymbol(sym_Finally_1);
sym_Catch_2 = ATmakeSymbol("Catch", 2, ATfalse);
ATprotectSymbol(sym_Catch_2);
sym_IgnoreC_1 = ATmakeSymbol("IgnoreC", 1, ATfalse);
ATprotectSymbol(sym_IgnoreC_1);
sym_IgnoreB_1 = ATmakeSymbol("IgnoreB", 1, ATfalse);
ATprotectSymbol(sym_IgnoreB_1);
sym_ContinueCS_2 = ATmakeSymbol("ContinueCS", 2, ATfalse);
ATprotectSymbol(sym_ContinueCS_2);
sym_BreakCS_2 = ATmakeSymbol("BreakCS", 2, ATfalse);
ATprotectSymbol(sym_BreakCS_2);
sym_SplitPos_2 = ATmakeSymbol("SplitPos", 2, ATfalse);
ATprotectSymbol(sym_SplitPos_2);
sym_Label_1 = ATmakeSymbol("Label", 1, ATfalse);
ATprotectSymbol(sym_Label_1);
sym_ChangeSet_3 = ATmakeSymbol("ChangeSet", 3, ATfalse);
ATprotectSymbol(sym_ChangeSet_3);
sym_RuleScope_2 = ATmakeSymbol("RuleScope", 2, ATfalse);
ATprotectSymbol(sym_RuleScope_2);
sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
ATprotectSymbol(sym_ErrorNumber_1);
sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
ATprotectSymbol(sym_stderr_0);
sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
ATprotectSymbol(sym_stdout_0);
sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
ATprotectSymbol(sym_stdin_0);
sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
ATprotectSymbol(sym_Path_1);
sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
ATprotectSymbol(sym_Stream_1);
sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
ATprotectSymbol(sym_Anno_2);
sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
ATprotectSymbol(sym_Infinite_0);
sym_GraphLet_2 = ATmakeSymbol("GraphLet", 2, ATfalse);
ATprotectSymbol(sym_GraphLet_2);
sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
ATprotectSymbol(sym_Undefined_1);
sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
ATprotectSymbol(sym_Program_1);
sym_Vomit_0 = ATmakeSymbol("Vomit", 0, ATfalse);
ATprotectSymbol(sym_Vomit_0);
sym_Debug_0 = ATmakeSymbol("Debug", 0, ATfalse);
ATprotectSymbol(sym_Debug_0);
sym_Info_0 = ATmakeSymbol("Info", 0, ATfalse);
ATprotectSymbol(sym_Info_0);
sym_Notice_0 = ATmakeSymbol("Notice", 0, ATfalse);
ATprotectSymbol(sym_Notice_0);
sym_Warning_0 = ATmakeSymbol("Warning", 0, ATfalse);
ATprotectSymbol(sym_Warning_0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_Critical_0 = ATmakeSymbol("Critical", 0, ATfalse);
ATprotectSymbol(sym_Critical_0);
sym_Alert_0 = ATmakeSymbol("Alert", 0, ATfalse);
ATprotectSymbol(sym_Alert_0);
sym_Emergency_0 = ATmakeSymbol("Emergency", 0, ATfalse);
ATprotectSymbol(sym_Emergency_0);
sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
ATprotectSymbol(sym_Saturday_0);
sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
ATprotectSymbol(sym_Friday_0);
sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
ATprotectSymbol(sym_Thursday_0);
sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
ATprotectSymbol(sym_Wednesday_0);
sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
ATprotectSymbol(sym_Tuesday_0);
sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
ATprotectSymbol(sym_Monday_0);
sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
ATprotectSymbol(sym_Sunday_0);
sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
ATprotectSymbol(sym_December_0);
sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
ATprotectSymbol(sym_November_0);
sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
ATprotectSymbol(sym_October_0);
sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
ATprotectSymbol(sym_September_0);
sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
ATprotectSymbol(sym_August_0);
sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
ATprotectSymbol(sym_July_0);
sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
ATprotectSymbol(sym_June_0);
sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
ATprotectSymbol(sym_May_0);
sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
ATprotectSymbol(sym_April_0);
sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
ATprotectSymbol(sym_March_0);
sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
ATprotectSymbol(sym_February_0);
sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
ATprotectSymbol(sym_January_0);
sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
ATprotectSymbol(sym_Dupl_2);
sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
ATprotectSymbol(sym_Date_3);
sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
ATprotectSymbol(sym_DayTime_3);
sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
ATprotectSymbol(sym_ComponentTime_3);
sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
ATprotectSymbol(sym_EpochTime_1);
sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
ATprotectSymbol(sym_Pipe_2);
sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
ATprotectSymbol(sym_X__OK_0);
sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
ATprotectSymbol(sym_W__OK_0);
sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
ATprotectSymbol(sym_R__OK_0);
sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
ATprotectSymbol(sym_F__OK_0);
sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
ATprotectSymbol(sym_WaitStatus_3);
sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
ATprotectSymbol(sym_UnknownSignal_1);
sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
ATprotectSymbol(sym_Signal_3);
sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
ATprotectSymbol(sym_S_1);
sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
ATprotectSymbol(sym_H_2);
sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
ATprotectSymbol(sym_V_2);
sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
ATprotectSymbol(sym_HV_2);
sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
ATprotectSymbol(sym_ALT_2);
sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
ATprotectSymbol(sym_A_3);
sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
ATprotectSymbol(sym_R_2);
sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
ATprotectSymbol(sym_FBOX_2);
sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
ATprotectSymbol(sym_LBL_2);
sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
ATprotectSymbol(sym_REF_2);
sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
ATprotectSymbol(sym_C_2);
sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
ATprotectSymbol(sym_L_2);
sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
ATprotectSymbol(sym_LNAT_2);
sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
ATprotectSymbol(sym_Arg_1);
sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
ATprotectSymbol(sym_Arg2_2);
sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
ATprotectSymbol(sym_SOpt_2);
sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
ATprotectSymbol(sym_SOptB_2);
sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
ATprotectSymbol(sym_VS_0);
sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
ATprotectSymbol(sym_HS_0);
sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
ATprotectSymbol(sym_IS_0);
sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
ATprotectSymbol(sym_AL_1);
sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
ATprotectSymbol(sym_AC_1);
sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
ATprotectSymbol(sym_AR_1);
sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
ATprotectSymbol(sym_AOPTIONS_1);
sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
ATprotectSymbol(sym_FNAT_2);
sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
ATprotectSymbol(sym_FFID_2);
sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
ATprotectSymbol(sym_F_1);
sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
ATprotectSymbol(sym_KW_0);
sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
ATprotectSymbol(sym_VAR_0);
sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
ATprotectSymbol(sym_NUM_0);
sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
ATprotectSymbol(sym_MATH_0);
sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
ATprotectSymbol(sym_FN_0);
sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
ATprotectSymbol(sym_FM_0);
sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
ATprotectSymbol(sym_SE_0);
sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
ATprotectSymbol(sym_SH_0);
sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
ATprotectSymbol(sym_SZ_0);
sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
ATprotectSymbol(sym_CL_0);
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
sym_DR__DUMMY_0 = ATmakeSymbol("DR_DUMMY", 0, ATfalse);
ATprotectSymbol(sym_DR__DUMMY_0);
sym_DR__UNDEFINE_1 = ATmakeSymbol("DR_UNDEFINE", 1, ATfalse);
ATprotectSymbol(sym_DR__UNDEFINE_1);
sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
ATprotectSymbol(sym_Conc_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_natural_1 = ATmakeSymbol("natural", 1, ATfalse);
ATprotectSymbol(sym_natural_1);
sym_positive_1 = ATmakeSymbol("positive", 1, ATfalse);
ATprotectSymbol(sym_positive_1);
sym_negative_1 = ATmakeSymbol("negative", 1, ATfalse);
ATprotectSymbol(sym_negative_1);
sym_present_1 = ATmakeSymbol("present", 1, ATfalse);
ATprotectSymbol(sym_present_1);
sym_absent_0 = ATmakeSymbol("absent", 0, ATfalse);
ATprotectSymbol(sym_absent_0);
sym_real_con_3 = ATmakeSymbol("real-con", 3, ATfalse);
ATprotectSymbol(sym_real_con_3);
sym_quoted_1 = ATmakeSymbol("quoted", 1, ATfalse);
ATprotectSymbol(sym_quoted_1);
sym_unquoted_1 = ATmakeSymbol("unquoted", 1, ATfalse);
ATprotectSymbol(sym_unquoted_1);
sym_int_1 = ATmakeSymbol("int", 1, ATfalse);
ATprotectSymbol(sym_int_1);
sym_real_1 = ATmakeSymbol("real", 1, ATfalse);
ATprotectSymbol(sym_real_1);
sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
ATprotectSymbol(sym_fun_1);
sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
ATprotectSymbol(sym_appl_2);
sym_placeholder_1 = ATmakeSymbol("placeholder", 1, ATfalse);
ATprotectSymbol(sym_placeholder_1);
sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
ATprotectSymbol(sym_list_1);
sym_annotated_2 = ATmakeSymbol("annotated", 2, ATfalse);
ATprotectSymbol(sym_annotated_2);
sym_default_1 = ATmakeSymbol("default", 1, ATfalse);
ATprotectSymbol(sym_default_1);
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
term0 = (ATerm) ATmakeInt(8);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("{}", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_S_1, term3);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_S_1, term7);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("}", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym_S_1, term11);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym_HS_0);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(sym_SOpt_2, term15, term17);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym_S_1, term21);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(sym_NUM_0);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym_S_1, term27);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("1", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_SOpt_2, term15, term31);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol(",", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(sym_S_1, term35);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(sym_S_1, term39);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(sym_S_1, term43);
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym_VS_0);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(sym_SOpt_2, term47, term17);
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym_S_1, term51);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("[]", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(sym_S_1, term55);
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("[", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(sym_S_1, term59);
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("]", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(sym_S_1, term63);
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeInt(10);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeInt(80);
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeInt(116);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeInt(92);
ATprotect(&(term77));
term77 = term76;
}
#include <srts/init-stratego-module.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm makeConc_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL b_80, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL o_47, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL o_40, ATerm t);
ATerm fputs_0_0 (StrSL sl, ATerm t);
ATerm has_annos_0_0 (StrSL sl, ATerm t);
ATerm get_annotations_0_0 (StrSL sl, ATerm t);
ATerm term_size_0_0 (StrSL sl, ATerm t);
ATerm string_to_int_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm gt_0_0 (StrSL sl, ATerm t);
ATerm is_int_0_0 (StrSL sl, ATerm t);
ATerm is_double_quoted_0_0 (StrSL sl, ATerm t);
ATerm Escape_carriage_return_0_0 (StrSL sl, ATerm t);
ATerm Escape_linefeed_0_0 (StrSL sl, ATerm t);
ATerm Escape_backslash_0_0 (StrSL sl, ATerm t);
ATerm Escape_double_quote_0_0 (StrSL sl, ATerm t);
ATerm escape_chars_1_0 (StrSL sl, StrCL z_34, ATerm t);
ATerm string_as_chars_1_0 (StrSL sl, StrCL y_34, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm real_to_string_0_0 (StrSL sl, ATerm t);
ATerm is_real_0_0 (StrSL sl, ATerm t);
ATerm box2text_stream_0_2 (StrSL sl, ATerm l_11, ATerm m_11, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
ATerm aterm_escape_string_0_0 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
ATerm aterm_escape_strings_0_0 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
ATerm pp_aterm_stream_0_2 (StrSL sl, ATerm a_6, ATerm b_6, ATerm t);
ATerm pp_aterm_stream_0_1 (StrSL sl, ATerm x_5, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
ATerm aterm_generic_list_worstcase_4_0 (StrSL sl, StrCL h_5, StrCL i_5, StrCL j_5, StrCL k_5, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
ATerm aterm_generic_list_nicecase_4_0 (StrSL sl, StrCL o_4, StrCL p_4, StrCL q_4, StrCL r_4, ATerm t);
ATerm aterm_pp_generic_list_4_0 (StrSL sl, StrCL j_6, StrCL k_6, StrCL l_6, StrCL m_6, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
ATerm aterm_UP_List_1_0 (StrSL sl, StrCL y_3, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
ATerm aterm_UP_Tuple_1_0 (StrSL sl, StrCL w_3, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
ATerm aterm_UP_App_worstcase_1_0 (StrSL sl, StrCL o_3, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
ATerm aterm_UP_App_nicecase_1_0 (StrSL sl, StrCL a_3, ATerm t);
ATerm aterm_UP_App_1_1 (StrSL sl, StrCL t_2, ATerm r_2, ATerm t);
ATerm aterm_UP_Cnst_0_0 (StrSL sl, ATerm t);
ATerm aterm_UP_Real_0_0 (StrSL sl, ATerm t);
ATerm aterm_UP_Int_0_0 (StrSL sl, ATerm t);
ATerm aterm_UP_Str_0_0 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm aterm_ugly_print_with_anno_1_1 (StrSL sl, StrCL g_2, ATerm c_2, ATerm t);
ATerm aterm_ugly_print_without_anno_1_1 (StrSL sl, StrCL b_2, ATerm a_2, ATerm t);
static ATerm z_1 (StrSL sl, ATerm t);
ATerm pp_aterm_box_0_1 (StrSL sl, ATerm x_1, ATerm t);
ATerm pp_aterm_box_0_0 (StrSL sl, ATerm t);
ATerm aterm_implode_annotated_0_0 (StrSL sl, ATerm t);
ATerm aterm_explode_annotated_0_0 (StrSL sl, ATerm t);
ATerm aterm_implode_afun_0_0 (StrSL sl, ATerm t);
ATerm aterm_explode_afun_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm aterm_implode_appl_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
ATerm aterm_explode_appl_0_0 (StrSL sl, ATerm t);
ATerm aterm_implode_fun_0_0 (StrSL sl, ATerm t);
ATerm aterm_explode_fun_0_0 (StrSL sl, ATerm t);
ATerm aterm_implode_int_0_0 (StrSL sl, ATerm t);
ATerm aterm_explode_int_0_0 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm aterm_implode_list_0_0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm aterm_explode_list_0_0 (StrSL sl, ATerm t);
ATerm implode_aterm_0_0 (StrSL sl, ATerm t);
ATerm explode_aterm_0_0 (StrSL sl, ATerm t);
ATerm aterm_escape_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_escape_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,i_6 = NULL;
ATerm trm81;
trm81 = (ATerm) ATgetAnnotations(t);
if((trm81 == NULL))
trm81 = (ATerm) ATempty;
f_6 = t;
e_6 = trm81;
i_6 = t;
t = f_6;
{
struct str_closure c_124 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(c_124);
t = string_as_chars_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto fail53 ;
g_6 = t;
t = i_6;
t = (ATerm) SRTS_setAnnotations(g_6, e_6);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_124 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(b_124);
t = escape_chars_1_0(sl_up(sl), lifted30_cl, t);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm82 = t;
t = Escape_backslash_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label66 ;
goto label65 ;
label66 :
t = trm82;
{
ATerm trm83 = t;
t = Escape_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label67 ;
goto label65 ;
label67 :
t = trm83;
{
ATerm trm84 = t;
t = Escape_linefeed_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label68 ;
goto label65 ;
label68 :
t = trm84;
{
ATerm trm85 = t;
ATerm h_6 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm86 = ATgetFirst((ATermList) t);
if(!(((ATgetType(trm86) == AT_INT) && (ATgetInt((ATermInt) trm86) == 9))))
goto label69 ;
h_6 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label69 ;
{
ATerm trm87;
trm87 = CheckATermList(h_6);
if((trm87 == NULL))
goto label69 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm87, term75), term77);
}
goto label65 ;
label69 :
t = trm85;
t = Escape_carriage_return_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail55 ;
else
goto label65 ;
}
}
}
label65 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_escape_strings_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_escape_strings_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_124 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(a_124);
t = topdown_1_0(sl, lifted27_cl, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_123 = { &(aterm_escape_string_0_0) , sl_up(sl) };
StrCL lifted28_cl = &(z_123);
t = try_1_0(sl_up(sl), lifted28_cl, t);
if((t == NULL))
goto fail52 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_aterm_stream_0_2 (StrSL sl, ATerm a_6, ATerm b_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_aterm_stream_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_6 = NULL,d_6 = NULL;
struct str_closure y_123 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(y_123);
t = topdown_1_0(sl, lifted25_cl, t);
if((t == NULL))
goto fail49 ;
t = pp_aterm_box_0_1(sl, a_6, t);
if((t == NULL))
goto fail49 ;
d_6 = t;
t = term71;
c_6 = t;
t = d_6;
t = box2text_stream_0_2(sl, c_6, b_6, t);
if((t == NULL))
goto fail49 ;
t = (ATerm) ATmakeAppl(sym__2, term73, b_6);
t = fputs_0_0(sl, t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_123 = { &(aterm_escape_string_0_0) , sl_up(sl) };
StrCL lifted26_cl = &(x_123);
t = try_1_0(sl_up(sl), lifted26_cl, t);
if((t == NULL))
goto fail50 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_aterm_stream_0_1 (StrSL sl, ATerm x_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_aterm_stream_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_5 = NULL,z_5 = NULL;
z_5 = t;
t = term1;
y_5 = t;
t = z_5;
t = pp_aterm_stream_0_2(sl, y_5, x_5, t);
if((t == NULL))
goto fail48 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_generic_list_worstcase_4_0 (StrSL sl, StrCL h_5, StrCL i_5, StrCL j_5, StrCL k_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_generic_list_worstcase_4_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, h_5);
{
ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,l_5 = NULL,o_5 = NULL,r_5 = NULL,p_5 = NULL,t_5 = NULL,q_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
e_5 = ATgetFirst((ATermList) t);
f_5 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail46 ;
l_5 = t;
t = f_5;
{
struct str_closure w_123 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(w_123);
t = map_1_0(sl, lifted24_cl, t);
if((t == NULL))
goto fail46 ;
g_5 = t;
t = l_5;
r_5 = t;
t = term69;
t = cl_fun(j_5)(cl_sl(j_5), t);
if((t == NULL))
goto fail46 ;
o_5 = t;
t = r_5;
t_5 = t;
t = e_5;
t = cl_fun(h_5)(cl_sl(h_5), t);
if((t == NULL))
goto fail46 ;
p_5 = t;
t = t_5;
u_5 = t;
w_5 = t;
t = term69;
t = cl_fun(k_5)(cl_sl(k_5), t);
if((t == NULL))
goto fail46 ;
v_5 = t;
t = w_5;
t = (ATerm) ATmakeAppl(sym__2, g_5, (ATerm) ATinsert(ATempty, v_5));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail46 ;
q_5 = t;
t = u_5;
{
ATerm trm80;
trm80 = CheckATermList(q_5);
if((trm80 == NULL))
goto fail46 ;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term49), (ATerm) ATinsert((ATermList)trm80, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term33), (ATerm) ATinsert(ATinsert(ATempty, p_5), o_5))));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_5 = NULL,n_5 = NULL;
n_5 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail47 ;
m_5 = t;
t = n_5;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term33), (ATerm) ATinsert(ATinsert(ATempty, m_5), term37));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_generic_list_nicecase_4_0 (StrSL sl, StrCL o_4, StrCL p_4, StrCL q_4, StrCL r_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_generic_list_nicecase_4_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, o_4);
{
ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,s_4 = NULL,v_4 = NULL,y_4 = NULL,w_4 = NULL,z_4 = NULL,x_4 = NULL,a_5 = NULL,c_5 = NULL,d_5 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
l_4 = ATgetFirst((ATermList) t);
m_4 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail44 ;
s_4 = t;
t = m_4;
{
struct str_closure v_123 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(v_123);
t = map_1_0(sl, lifted23_cl, t);
if((t == NULL))
goto fail44 ;
n_4 = t;
t = s_4;
y_4 = t;
t = term69;
t = cl_fun(q_4)(cl_sl(q_4), t);
if((t == NULL))
goto fail44 ;
v_4 = t;
t = y_4;
z_4 = t;
t = l_4;
t = cl_fun(o_4)(cl_sl(o_4), t);
if((t == NULL))
goto fail44 ;
w_4 = t;
t = z_4;
a_5 = t;
d_5 = t;
t = term69;
t = cl_fun(r_4)(cl_sl(r_4), t);
if((t == NULL))
goto fail44 ;
c_5 = t;
t = d_5;
t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATempty, c_5));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail44 ;
x_4 = t;
t = a_5;
{
ATerm trm79;
trm79 = CheckATermList(x_4);
if((trm79 == NULL))
goto fail44 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term19), (ATerm) ATinsert(ATinsert((ATermList)trm79, w_4), v_4));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_4 = NULL,u_4 = NULL;
u_4 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail45 ;
t_4 = t;
t = u_4;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term33), (ATerm) ATinsert(ATinsert(ATempty, t_4), term37));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_pp_generic_list_4_0 (StrSL sl, StrCL j_6, StrCL k_6, StrCL l_6, StrCL m_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_pp_generic_list_4_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm77 = t;
ATerm trm78 = t;
ATerm d_4 = NULL,j_4 = NULL,k_4 = NULL;
d_4 = t;
k_4 = t;
t = term_size_0_0(sl, t);
if((t == NULL))
goto label64 ;
j_4 = t;
t = k_4;
t = (ATerm) ATmakeAppl(sym__2, j_4, term67);
t = gt_0_0(sl, t);
if((t == NULL))
goto label64 ;
t = d_4;
t = aterm_generic_list_worstcase_4_0(sl, j_6, k_6, l_6, m_6, t);
if((t == NULL))
goto label62 ;
else
goto label63 ;
label64 :
t = trm78;
t = aterm_generic_list_nicecase_4_0(sl, j_6, k_6, l_6, m_6, t);
if((t == NULL))
goto label62 ;
else
goto label63 ;
label63 :
;
goto label61 ;
label62 :
t = trm77;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail43 ;
t = term69;
t = cl_fun(k_6)(cl_sl(k_6), t);
if((t == NULL))
goto fail43 ;
else
goto label61 ;
label61 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_UP_List_1_0 (StrSL sl, StrCL y_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_UP_List_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_123 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(s_123);
struct str_closure t_123 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(t_123);
struct str_closure u_123 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(u_123);
t = aterm_pp_generic_list_4_0(sl, y_3, lifted20_cl, lifted21_cl, lifted22_cl, t);
if((t == NULL))
goto fail39 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term65;
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
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_UP_Tuple_1_0 (StrSL sl, StrCL w_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_UP_Tuple_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_3 = NULL;
struct str_closure n_123 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(n_123);
struct str_closure p_123 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(p_123);
struct str_closure r_123 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(r_123);
ATerm trm75,trm76;
trm75 = SSL_get_constructor(t);
trm76 = SSL_get_arguments(t);
if(!((ATgetSymbol(trm75) == ATmakeSymbol("", 0, ATtrue))))
goto fail35 ;
x_3 = trm76;
t = x_3;
t = aterm_pp_generic_list_4_0(sl, w_3, lifted17_cl, lifted18_cl, lifted19_cl, t);
if((t == NULL))
goto fail35 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_UP_App_worstcase_1_0 (StrSL sl, StrCL o_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_UP_App_worstcase_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, o_3);
{
ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,p_3 = NULL,s_3 = NULL,u_3 = NULL,t_3 = NULL,v_3 = NULL;
ATerm trm72,trm73;
trm72 = SSL_get_constructor(t);
trm73 = SSL_get_arguments(t);
i_3 = trm72;
if(((ATgetType(trm73) == AT_LIST) && !(ATisEmpty(trm73))))
{
j_3 = ATgetFirst((ATermList) trm73);
k_3 = (ATerm) ATgetNext((ATermList) trm73);
}
else
goto fail33 ;
p_3 = t;
t = k_3;
{
struct str_closure m_123 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(m_123);
t = map_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail33 ;
l_3 = t;
t = p_3;
u_3 = t;
t = j_3;
t = cl_fun(o_3)(cl_sl(o_3), t);
if((t == NULL))
goto fail33 ;
s_3 = t;
t = u_3;
v_3 = t;
t = (ATerm) ATmakeAppl(sym__2, l_3, (ATerm) ATinsert(ATempty, term41));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail33 ;
t_3 = t;
t = v_3;
{
ATerm trm74;
trm74 = CheckATermList(t_3);
if((trm74 == NULL))
goto fail33 ;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term49), (ATerm) ATinsert(ATinsert((ATermList)trm74, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term33), (ATerm) ATinsert(ATinsert(ATempty, s_3), term53))), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term19), (ATerm) ATinsert(ATinsert(ATempty, term45), (ATerm) ATmakeAppl(sym_S_1, i_3)))));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_3 = NULL,r_3 = NULL;
r_3 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail34 ;
q_3 = t;
t = r_3;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term33), (ATerm) ATinsert(ATinsert(ATempty, q_3), term37));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_UP_App_nicecase_1_0 (StrSL sl, StrCL a_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_UP_App_nicecase_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, a_3);
{
ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL,e_3 = NULL,g_3 = NULL,f_3 = NULL,h_3 = NULL;
ATerm trm69,trm70;
trm69 = SSL_get_constructor(t);
trm70 = SSL_get_arguments(t);
w_2 = trm69;
if(((ATgetType(trm70) == AT_LIST) && !(ATisEmpty(trm70))))
{
x_2 = ATgetFirst((ATermList) trm70);
y_2 = (ATerm) ATgetNext((ATermList) trm70);
}
else
goto fail31 ;
b_3 = t;
t = y_2;
{
struct str_closure k_123 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(k_123);
t = map_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto fail31 ;
z_2 = t;
t = b_3;
g_3 = t;
t = x_2;
t = cl_fun(a_3)(cl_sl(a_3), t);
if((t == NULL))
goto fail31 ;
e_3 = t;
t = g_3;
h_3 = t;
t = (ATerm) ATmakeAppl(sym__2, z_2, (ATerm) ATinsert(ATempty, term41));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail31 ;
f_3 = t;
t = h_3;
{
ATerm trm71;
trm71 = CheckATermList(f_3);
if((trm71 == NULL))
goto fail31 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term19), (ATerm) ATinsert(ATinsert(ATinsert((ATermList)trm71, e_3), term45), (ATerm) ATmakeAppl(sym_S_1, w_2)));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_3 = NULL,d_3 = NULL;
d_3 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail32 ;
c_3 = t;
t = d_3;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term33), (ATerm) ATinsert(ATinsert(ATempty, c_3), term37));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_UP_App_1_1 (StrSL sl, StrCL t_2, ATerm r_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_UP_App_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm68 = t;
ATerm s_2 = NULL,u_2 = NULL,v_2 = NULL;
s_2 = t;
v_2 = t;
t = term_size_0_0(sl, t);
if((t == NULL))
goto label60 ;
u_2 = t;
t = v_2;
t = (ATerm) ATmakeAppl(sym__2, u_2, r_2);
t = gt_0_0(sl, t);
if((t == NULL))
goto label60 ;
t = s_2;
t = aterm_UP_App_worstcase_1_0(sl, t_2, t);
if((t == NULL))
goto fail30 ;
else
goto label59 ;
label60 :
t = trm68;
t = aterm_UP_App_nicecase_1_0(sl, t_2, t);
if((t == NULL))
goto fail30 ;
else
goto label59 ;
label59 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_UP_Cnst_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_UP_Cnst_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_2 = NULL;
ATerm trm66,trm67;
trm66 = SSL_get_constructor(t);
trm67 = SSL_get_arguments(t);
q_2 = trm66;
if(!(((ATgetType(trm67) == AT_LIST) && ATisEmpty(trm67))))
goto fail29 ;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term19), (ATerm) ATinsert(ATinsert(ATempty, term29), (ATerm) ATmakeAppl(sym_S_1, q_2)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_UP_Real_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_UP_Real_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL;
n_2 = t;
p_2 = t;
t = is_real_0_0(sl, t);
if((t == NULL))
goto fail28 ;
t = n_2;
t = real_to_string_0_0(sl, t);
if((t == NULL))
goto fail28 ;
o_2 = t;
t = p_2;
t = (ATerm) ATmakeAppl(sym_FBOX_2, term25, (ATerm) ATmakeAppl(sym_S_1, o_2));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_UP_Int_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_UP_Int_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL;
k_2 = t;
m_2 = t;
t = is_int_0_0(sl, t);
if((t == NULL))
goto fail27 ;
t = k_2;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail27 ;
l_2 = t;
t = m_2;
t = (ATerm) ATmakeAppl(sym_FBOX_2, term25, (ATerm) ATmakeAppl(sym_S_1, l_2));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_UP_Str_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_UP_Str_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_2 = NULL,j_2 = NULL;
i_2 = t;
j_2 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto fail26 ;
t = j_2;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term19), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term23), (ATerm) ATmakeAppl(sym_S_1, i_2)), term23));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_ugly_print_with_anno_1_1 (StrSL sl, StrCL g_2, ATerm c_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_ugly_print_with_anno_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL;
e_2 = t;
h_2 = t;
t = aterm_ugly_print_without_anno_1_1(sl, g_2, c_2, t);
if((t == NULL))
goto fail22 ;
d_2 = t;
t = e_2;
t = get_annotations_0_0(sl, t);
if((t == NULL))
goto fail22 ;
{
struct str_closure h_123 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(h_123);
struct str_closure i_123 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(i_123);
struct str_closure j_123 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(j_123);
t = aterm_pp_generic_list_4_0(sl, g_2, lifted12_cl, lifted13_cl, lifted14_cl, t);
if((t == NULL))
goto fail22 ;
f_2 = t;
t = h_2;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term19), (ATerm) ATinsert(ATinsert(ATempty, f_2), d_2));
}
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
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term5;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_ugly_print_without_anno_1_1 (StrSL sl, StrCL b_2, ATerm a_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_ugly_print_without_anno_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm60 = t;
t = aterm_UP_Int_0_0(sl, t);
if((t == NULL))
goto label53 ;
goto label52 ;
label53 :
t = trm60;
{
ATerm trm61 = t;
t = aterm_UP_Real_0_0(sl, t);
if((t == NULL))
goto label54 ;
goto label52 ;
label54 :
t = trm61;
{
ATerm trm62 = t;
t = aterm_UP_Str_0_0(sl, t);
if((t == NULL))
goto label55 ;
goto label52 ;
label55 :
t = trm62;
{
ATerm trm63 = t;
t = aterm_UP_List_1_0(sl, b_2, t);
if((t == NULL))
goto label56 ;
goto label52 ;
label56 :
t = trm63;
{
ATerm trm64 = t;
t = aterm_UP_Tuple_1_0(sl, b_2, t);
if((t == NULL))
goto label57 ;
goto label52 ;
label57 :
t = trm64;
{
ATerm trm65 = t;
t = aterm_UP_Cnst_0_0(sl, t);
if((t == NULL))
goto label58 ;
goto label52 ;
label58 :
t = trm65;
t = aterm_UP_App_1_1(sl, b_2, a_2, t);
if((t == NULL))
goto fail21 ;
else
goto label52 ;
}
}
}
}
}
label52 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_aterm_box_0_1 (StrSL sl, ATerm x_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_aterm_box_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(1);
sl_init_var(0, x_1);
{
struct str_closure g_123 = { &(z_1) , &(frame) };
StrCL z_1_cl = &(g_123);
sl_init_fun(0, z_1_cl);
t = z_1(&(frame), t);
if((t == NULL))
goto fail19 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm z_1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "z_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm59 = t;
ATerm y_1 = NULL;
y_1 = t;
t = has_annos_0_0(sl_up(sl), t);
if((t == NULL))
goto label51 ;
t = y_1;
if((sl_readvar(0, sl) == NULL))
goto fail20 ;
else
{
t = aterm_ugly_print_with_anno_1_1(sl_up(sl), sl_fun_cl(0, sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail20 ;
else
goto label50 ;
}
label51 :
t = trm59;
if((sl_readvar(0, sl) == NULL))
goto fail20 ;
else
{
t = aterm_ugly_print_without_anno_1_1(sl_up(sl), sl_fun_cl(0, sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail20 ;
else
goto label50 ;
}
label50 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_aterm_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_aterm_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_1 = NULL,w_1 = NULL;
w_1 = t;
t = term1;
v_1 = t;
t = w_1;
t = pp_aterm_box_0_1(sl, v_1, t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_implode_annotated_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_implode_annotated_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL;
if(match_cons(t, sym_annotated_2))
{
q_1 = ATgetArgument(t, 0);
{
ATerm trm53 = ATgetArgument(t, 1);
if(match_cons(trm53, sym_default_1))
{
s_1 = ATgetArgument(trm53, 0);
}
else
goto fail17 ;
}
}
else
goto fail17 ;
u_1 = t;
t = q_1;
{
ATerm trm54 = t;
t = aterm_implode_annotated_0_0(sl, t);
if((t == NULL))
goto label46 ;
goto label45 ;
label46 :
t = trm54;
{
ATerm trm55 = t;
ATerm s_122 = NULL;
struct str_closure e_123 = { &(implode_aterm_0_0) , sl };
StrCL lifted10_cl = &(e_123);
if(match_cons(t, sym_list_1))
{
s_122 = ATgetArgument(t, 0);
}
else
goto label47 ;
t = s_122;
t = map_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto label47 ;
goto label45 ;
label47 :
t = trm55;
{
ATerm trm56 = t;
ATerm t_122 = NULL;
if(match_cons(t, sym_int_1))
{
ATerm trm57 = ATgetArgument(t, 0);
if(match_cons(trm57, sym_natural_1))
{
t_122 = ATgetArgument(trm57, 0);
}
else
goto label48 ;
}
else
goto label48 ;
t = t_122;
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label48 ;
goto label45 ;
label48 :
t = trm56;
{
ATerm trm58 = t;
t = aterm_implode_fun_0_0(sl, t);
if((t == NULL))
goto label49 ;
goto label45 ;
label49 :
t = trm58;
t = aterm_implode_appl_0_0(sl, t);
if((t == NULL))
goto fail17 ;
else
goto label45 ;
}
}
}
label45 :
;
r_1 = t;
t = s_1;
{
struct str_closure f_123 = { &(implode_aterm_0_0) , sl };
StrCL lifted11_cl = &(f_123);
t = map_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail17 ;
t_1 = t;
t = u_1;
t = (ATerm) SRTS_setAnnotations(r_1, t_1);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_explode_annotated_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_explode_annotated_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL,o_1 = NULL,n_1 = NULL,p_1 = NULL;
ATerm trm45;
trm45 = (ATerm) ATgetAnnotations(t);
if((trm45 == NULL))
trm45 = (ATerm) ATempty;
k_1 = t;
l_1 = trm45;
if(((ATgetType(trm45) == AT_LIST) && !(ATisEmpty(trm45))))
{
ATerm trm46 = ATgetFirst((ATermList) trm45);
ATerm trm47 = (ATerm) ATgetNext((ATermList) trm45);
}
else
goto fail16 ;
o_1 = t;
t = (ATerm) SRTS_setAnnotations(k_1, (ATerm) ATempty);
{
ATerm trm48 = t;
t = aterm_explode_annotated_0_0(sl, t);
if((t == NULL))
goto label41 ;
goto label40 ;
label41 :
t = trm48;
{
ATerm trm49 = t;
ATerm p_122 = NULL,q_122 = NULL,r_122 = NULL;
ATerm trm50;
trm50 = (ATerm) ATgetAnnotations(t);
if((trm50 == NULL))
trm50 = (ATerm) ATempty;
p_122 = t;
if(!(((ATgetType(trm50) == AT_LIST) && ATisEmpty(trm50))))
goto label42 ;
r_122 = t;
t = p_122;
{
struct str_closure c_123 = { &(explode_aterm_0_0) , sl };
StrCL lifted8_cl = &(c_123);
t = map_1_0(sl, lifted8_cl, t);
if((t == NULL))
goto label42 ;
q_122 = t;
t = r_122;
t = (ATerm) ATmakeAppl(sym_list_1, q_122);
}
goto label40 ;
label42 :
t = trm49;
{
ATerm trm51 = t;
t = aterm_explode_int_0_0(sl, t);
if((t == NULL))
goto label43 ;
goto label40 ;
label43 :
t = trm51;
{
ATerm trm52 = t;
t = aterm_explode_fun_0_0(sl, t);
if((t == NULL))
goto label44 ;
goto label40 ;
label44 :
t = trm52;
t = aterm_explode_appl_0_0(sl, t);
if((t == NULL))
goto fail16 ;
else
goto label40 ;
}
}
}
label40 :
;
m_1 = t;
t = o_1;
p_1 = t;
t = l_1;
{
struct str_closure d_123 = { &(explode_aterm_0_0) , sl };
StrCL lifted9_cl = &(d_123);
t = map_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto fail16 ;
n_1 = t;
t = p_1;
t = (ATerm) ATmakeAppl(sym_annotated_2, m_1, (ATerm) ATmakeAppl(sym_default_1, n_1));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_implode_afun_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_implode_afun_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm44 = t;
ATerm j_1 = NULL;
if(match_cons(t, sym_unquoted_1))
{
j_1 = ATgetArgument(t, 0);
}
else
goto label39 ;
t = j_1;
goto label38 ;
label39 :
t = trm44;
{
ATerm i_1 = NULL;
if(match_cons(t, sym_quoted_1))
{
i_1 = ATgetArgument(t, 0);
}
else
goto fail15 ;
t = i_1;
goto label38 ;
}
label38 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_explode_afun_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_explode_afun_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm42 = t;
ATerm g_1 = NULL,h_1 = NULL;
g_1 = t;
h_1 = t;
{
ATerm trm43 = t;
t = is_double_quoted_0_0(sl, t);
if((t == NULL))
goto label37 ;
goto label35 ;
label37 :
t = trm43;
goto label36 ;
label36 :
;
t = h_1;
t = (ATerm) ATmakeAppl(sym_unquoted_1, g_1);
}
goto label34 ;
label35 :
t = trm42;
{
ATerm e_1 = NULL,f_1 = NULL;
e_1 = t;
f_1 = t;
t = is_double_quoted_0_0(sl, t);
if((t == NULL))
goto fail14 ;
t = f_1;
t = (ATerm) ATmakeAppl(sym_quoted_1, e_1);
goto label34 ;
}
label34 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_implode_appl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_implode_appl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL;
if(match_cons(t, sym_appl_2))
{
z_0 = ATgetArgument(t, 0);
y_0 = ATgetArgument(t, 1);
}
else
goto fail12 ;
b_1 = t;
t = z_0;
{
ATerm trm35 = t;
ATerm l_122 = NULL;
if(match_cons(t, sym_unquoted_1))
{
l_122 = ATgetArgument(t, 0);
}
else
goto label28 ;
t = l_122;
goto label27 ;
label28 :
t = trm35;
{
ATerm m_122 = NULL;
if(match_cons(t, sym_quoted_1))
{
m_122 = ATgetArgument(t, 0);
}
else
goto fail12 ;
t = m_122;
goto label27 ;
}
label27 :
;
a_1 = t;
t = b_1;
d_1 = t;
t = y_0;
{
struct str_closure b_123 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(b_123);
t = map_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto fail12 ;
c_1 = t;
t = d_1;
{
ATerm trm41;
trm41 = SSL_mkterm(a_1, c_1);
if((trm41 == NULL))
goto fail12 ;
t = trm41;
}
}
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
{
ATerm trm36 = t;
t = aterm_implode_annotated_0_0(sl_up(sl), t);
if((t == NULL))
goto label30 ;
goto label29 ;
label30 :
t = trm36;
{
ATerm trm37 = t;
ATerm n_122 = NULL;
struct str_closure a_123 = { &(implode_aterm_0_0) , sl_up(sl) };
StrCL lifted7_cl = &(a_123);
if(match_cons(t, sym_list_1))
{
n_122 = ATgetArgument(t, 0);
}
else
goto label31 ;
t = n_122;
t = map_1_0(sl_up(sl), lifted7_cl, t);
if((t == NULL))
goto label31 ;
goto label29 ;
label31 :
t = trm37;
{
ATerm trm38 = t;
ATerm o_122 = NULL;
if(match_cons(t, sym_int_1))
{
ATerm trm39 = ATgetArgument(t, 0);
if(match_cons(trm39, sym_natural_1))
{
o_122 = ATgetArgument(trm39, 0);
}
else
goto label32 ;
}
else
goto label32 ;
t = o_122;
t = string_to_int_0_0(sl_up(sl), t);
if((t == NULL))
goto label32 ;
goto label29 ;
label32 :
t = trm38;
{
ATerm trm40 = t;
t = aterm_implode_fun_0_0(sl_up(sl), t);
if((t == NULL))
goto label33 ;
goto label29 ;
label33 :
t = trm40;
t = aterm_implode_appl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail13 ;
else
goto label29 ;
}
}
}
label29 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_explode_appl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_explode_appl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL,w_0 = NULL,v_0 = NULL,x_0 = NULL;
ATerm trm27;
trm27 = (ATerm) ATgetAnnotations(t);
if((trm27 == NULL))
trm27 = (ATerm) ATempty;
{
ATerm trm28,trm29;
trm28 = SSL_get_constructor(t);
trm29 = SSL_get_arguments(t);
s_0 = trm28;
t_0 = trm29;
}
if(!(((ATgetType(trm27) == AT_LIST) && ATisEmpty(trm27))))
goto fail10 ;
w_0 = t;
t = s_0;
t = aterm_explode_afun_0_0(sl, t);
if((t == NULL))
goto fail10 ;
u_0 = t;
t = w_0;
x_0 = t;
t = t_0;
{
struct str_closure z_122 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(z_122);
t = map_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto fail10 ;
v_0 = t;
t = x_0;
t = (ATerm) ATmakeAppl(sym_appl_2, u_0, v_0);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm30 = t;
t = aterm_explode_annotated_0_0(sl_up(sl), t);
if((t == NULL))
goto label23 ;
goto label22 ;
label23 :
t = trm30;
{
ATerm trm31 = t;
ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL;
ATerm trm32;
trm32 = (ATerm) ATgetAnnotations(t);
if((trm32 == NULL))
trm32 = (ATerm) ATempty;
i_122 = t;
if(!(((ATgetType(trm32) == AT_LIST) && ATisEmpty(trm32))))
goto label24 ;
k_122 = t;
t = i_122;
{
struct str_closure y_122 = { &(explode_aterm_0_0) , sl_up(sl) };
StrCL lifted5_cl = &(y_122);
t = map_1_0(sl_up(sl), lifted5_cl, t);
if((t == NULL))
goto label24 ;
j_122 = t;
t = k_122;
t = (ATerm) ATmakeAppl(sym_list_1, j_122);
}
goto label22 ;
label24 :
t = trm31;
{
ATerm trm33 = t;
t = aterm_explode_int_0_0(sl_up(sl), t);
if((t == NULL))
goto label25 ;
goto label22 ;
label25 :
t = trm33;
{
ATerm trm34 = t;
t = aterm_explode_fun_0_0(sl_up(sl), t);
if((t == NULL))
goto label26 ;
goto label22 ;
label26 :
t = trm34;
t = aterm_explode_appl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail11 ;
else
goto label22 ;
}
}
}
label22 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_implode_fun_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_implode_fun_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL;
if(match_cons(t, sym_fun_1))
{
p_0 = ATgetArgument(t, 0);
}
else
goto fail9 ;
r_0 = t;
t = p_0;
{
ATerm trm25 = t;
ATerm g_122 = NULL;
if(match_cons(t, sym_unquoted_1))
{
g_122 = ATgetArgument(t, 0);
}
else
goto label21 ;
t = g_122;
goto label20 ;
label21 :
t = trm25;
{
ATerm h_122 = NULL;
if(match_cons(t, sym_quoted_1))
{
h_122 = ATgetArgument(t, 0);
}
else
goto fail9 ;
t = h_122;
goto label20 ;
}
label20 :
;
q_0 = t;
t = r_0;
{
ATerm trm26;
trm26 = SSL_mkterm(q_0, (ATerm) ATempty);
if((trm26 == NULL))
goto fail9 ;
t = trm26;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_explode_fun_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_explode_fun_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_0 = NULL,n_0 = NULL,o_0 = NULL;
ATerm trm22;
trm22 = (ATerm) ATgetAnnotations(t);
if((trm22 == NULL))
trm22 = (ATerm) ATempty;
{
ATerm trm23,trm24;
trm23 = SSL_get_constructor(t);
trm24 = SSL_get_arguments(t);
m_0 = trm23;
if(!(((ATgetType(trm24) == AT_LIST) && ATisEmpty(trm24))))
goto fail8 ;
}
if(!(((ATgetType(trm22) == AT_LIST) && ATisEmpty(trm22))))
goto fail8 ;
o_0 = t;
t = m_0;
t = aterm_explode_afun_0_0(sl, t);
if((t == NULL))
goto fail8 ;
n_0 = t;
t = o_0;
t = (ATerm) ATmakeAppl(sym_fun_1, n_0);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_implode_int_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_implode_int_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_0 = NULL;
if(match_cons(t, sym_int_1))
{
ATerm trm21 = ATgetArgument(t, 0);
if(match_cons(trm21, sym_natural_1))
{
l_0 = ATgetArgument(trm21, 0);
}
else
goto fail7 ;
}
else
goto fail7 ;
t = l_0;
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto fail7 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_explode_int_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_explode_int_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_0 = NULL,i_0 = NULL,j_0 = NULL,k_0 = NULL;
ATerm trm20;
trm20 = (ATerm) ATgetAnnotations(t);
if((trm20 == NULL))
trm20 = (ATerm) ATempty;
h_0 = t;
if(!(((ATgetType(trm20) == AT_LIST) && ATisEmpty(trm20))))
goto fail6 ;
i_0 = t;
t = h_0;
t = is_int_0_0(sl, t);
if((t == NULL))
goto fail6 ;
t = i_0;
k_0 = t;
t = h_0;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail6 ;
j_0 = t;
t = k_0;
t = (ATerm) ATmakeAppl(sym_int_1, (ATerm) ATmakeAppl(sym_natural_1, j_0));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_implode_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_implode_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_0 = NULL;
struct str_closure x_122 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(x_122);
if(match_cons(t, sym_list_1))
{
g_0 = ATgetArgument(t, 0);
}
else
goto fail4 ;
t = g_0;
t = map_1_0(sl, lifted3_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm15 = t;
t = aterm_implode_annotated_0_0(sl_up(sl), t);
if((t == NULL))
goto label16 ;
goto label15 ;
label16 :
t = trm15;
{
ATerm trm16 = t;
t = aterm_implode_list_0_0(sl_up(sl), t);
if((t == NULL))
goto label17 ;
goto label15 ;
label17 :
t = trm16;
{
ATerm trm17 = t;
ATerm f_122 = NULL;
if(match_cons(t, sym_int_1))
{
ATerm trm18 = ATgetArgument(t, 0);
if(match_cons(trm18, sym_natural_1))
{
f_122 = ATgetArgument(trm18, 0);
}
else
goto label18 ;
}
else
goto label18 ;
t = f_122;
t = string_to_int_0_0(sl_up(sl), t);
if((t == NULL))
goto label18 ;
goto label15 ;
label18 :
t = trm17;
{
ATerm trm19 = t;
t = aterm_implode_fun_0_0(sl_up(sl), t);
if((t == NULL))
goto label19 ;
goto label15 ;
label19 :
t = trm19;
t = aterm_implode_appl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail5 ;
else
goto label15 ;
}
}
}
label15 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm aterm_explode_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aterm_explode_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_0 = NULL,e_0 = NULL,f_0 = NULL;
ATerm trm10;
trm10 = (ATerm) ATgetAnnotations(t);
if((trm10 == NULL))
trm10 = (ATerm) ATempty;
d_0 = t;
if(!(((ATgetType(trm10) == AT_LIST) && ATisEmpty(trm10))))
goto fail2 ;
f_0 = t;
t = d_0;
{
struct str_closure w_122 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(w_122);
t = map_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail2 ;
e_0 = t;
t = f_0;
t = (ATerm) ATmakeAppl(sym_list_1, e_0);
}
}
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
ATerm trm11 = t;
t = aterm_explode_annotated_0_0(sl_up(sl), t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm11;
{
ATerm trm12 = t;
t = aterm_explode_list_0_0(sl_up(sl), t);
if((t == NULL))
goto label12 ;
goto label10 ;
label12 :
t = trm12;
{
ATerm trm13 = t;
t = aterm_explode_int_0_0(sl_up(sl), t);
if((t == NULL))
goto label13 ;
goto label10 ;
label13 :
t = trm13;
{
ATerm trm14 = t;
t = aterm_explode_fun_0_0(sl_up(sl), t);
if((t == NULL))
goto label14 ;
goto label10 ;
label14 :
t = trm14;
t = aterm_explode_appl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail3 ;
else
goto label10 ;
}
}
}
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm implode_aterm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "implode_aterm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm5 = t;
t = aterm_implode_annotated_0_0(sl, t);
if((t == NULL))
goto label6 ;
goto label5 ;
label6 :
t = trm5;
{
ATerm trm6 = t;
ATerm d_122 = NULL;
struct str_closure v_122 = { &(implode_aterm_0_0) , sl };
StrCL lifted1_cl = &(v_122);
if(match_cons(t, sym_list_1))
{
d_122 = ATgetArgument(t, 0);
}
else
goto label7 ;
t = d_122;
t = map_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto label7 ;
goto label5 ;
label7 :
t = trm6;
{
ATerm trm7 = t;
ATerm e_122 = NULL;
if(match_cons(t, sym_int_1))
{
ATerm trm8 = ATgetArgument(t, 0);
if(match_cons(trm8, sym_natural_1))
{
e_122 = ATgetArgument(trm8, 0);
}
else
goto label8 ;
}
else
goto label8 ;
t = e_122;
t = string_to_int_0_0(sl, t);
if((t == NULL))
goto label8 ;
goto label5 ;
label8 :
t = trm7;
{
ATerm trm9 = t;
t = aterm_implode_fun_0_0(sl, t);
if((t == NULL))
goto label9 ;
goto label5 ;
label9 :
t = trm9;
t = aterm_implode_appl_0_0(sl, t);
if((t == NULL))
goto fail1 ;
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
fail1 :
--__tracing_table_counter;
return(NULL);
}
ATerm explode_aterm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "explode_aterm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
t = aterm_explode_annotated_0_0(sl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
ATerm a_122 = NULL,b_122 = NULL,c_122 = NULL;
ATerm trm2;
trm2 = (ATerm) ATgetAnnotations(t);
if((trm2 == NULL))
trm2 = (ATerm) ATempty;
a_122 = t;
if(!(((ATgetType(trm2) == AT_LIST) && ATisEmpty(trm2))))
goto label2 ;
c_122 = t;
t = a_122;
{
struct str_closure u_122 = { &(explode_aterm_0_0) , sl };
StrCL lifted0_cl = &(u_122);
t = map_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto label2 ;
b_122 = t;
t = c_122;
t = (ATerm) ATmakeAppl(sym_list_1, b_122);
}
goto label0 ;
label2 :
t = trm1;
{
ATerm trm3 = t;
t = aterm_explode_int_0_0(sl, t);
if((t == NULL))
goto label3 ;
goto label0 ;
label3 :
t = trm3;
{
ATerm trm4 = t;
t = aterm_explode_fun_0_0(sl, t);
if((t == NULL))
goto label4 ;
goto label0 ;
label4 :
t = trm4;
t = aterm_explode_appl_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label0 ;
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
