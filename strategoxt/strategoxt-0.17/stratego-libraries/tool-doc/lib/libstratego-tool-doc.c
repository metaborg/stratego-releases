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
static Symbol sym_natural_1;
static Symbol sym_positive_1;
static Symbol sym_negative_1;
static Symbol sym_real_con_3;
static Symbol sym_int_1;
static Symbol sym_real_1;
static Symbol sym_fun_1;
static Symbol sym_appl_2;
static Symbol sym_placeholder_1;
static Symbol sym_annotated_2;
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
static Symbol sym_default_1;
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
static Symbol sym_absent_0;
static Symbol sym_present_1;
static Symbol sym_simple_charclass_1;
static Symbol sym_comp_1;
static Symbol sym_diff_2;
static Symbol sym_isect_2;
static Symbol sym_union_2;
static Symbol sym_unquoted_fun_1;
static Symbol sym_quoted_fun_1;
static Symbol sym_quoted_1;
static Symbol sym_unquoted_1;
static Symbol sym_char_class_1;
static Symbol sym_seq_2;
static Symbol sym_single_1;
static Symbol sym_alt_2;
static Symbol sym_list_1;
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
static Symbol sym_GNU__LGPL_2;
static Symbol sym_GNU__GPL_2;
static Symbol sym_License_1;
static Symbol sym_ConfigItem_2;
static Symbol sym_CurrentXTCRepository_0;
static Symbol sym_DefaultXTCRepository_0;
static Symbol sym_Config_1;
static Symbol sym_Program_3;
static Symbol sym_AutoProgram_0;
static Symbol sym_ReportBugs_1;
static Symbol sym_AutoReportBugs_0;
static Symbol sym_WebHome_1;
static Symbol sym_Person_2;
static Symbol sym_Author_1;
static Symbol sym_Authors_1;
static Symbol sym_OptionUsage_0;
static Symbol sym_Description_1;
static Symbol sym_Summary_1;
static Symbol sym_Usage_1;
static Symbol sym_HelpString_2;
static Symbol sym_Def_2;
static Symbol sym_DefList_1;
static Symbol sym_ItemList_1;
static Symbol sym_Line_1;
static Symbol sym_Paragraph_1;
static Symbol sym_HSection_2;
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
static Symbol sym_XTC_0;
static Symbol sym_Imported_1;
static Symbol sym_Import_0;
static Symbol sym_Repository_0;
static Symbol sym_Tool_1;
static Symbol sym_TempDirs_0;
static Symbol sym_TempFiles_0;
static Symbol sym_TEMP_0;
static Symbol sym_DIR_1;
static Symbol sym_FILE_1;
static Symbol sym_Conc_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_None_0;
static Symbol sym_Some_1;
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
sym_natural_1 = ATmakeSymbol("natural", 1, ATfalse);
ATprotectSymbol(sym_natural_1);
sym_positive_1 = ATmakeSymbol("positive", 1, ATfalse);
ATprotectSymbol(sym_positive_1);
sym_negative_1 = ATmakeSymbol("negative", 1, ATfalse);
ATprotectSymbol(sym_negative_1);
sym_real_con_3 = ATmakeSymbol("real-con", 3, ATfalse);
ATprotectSymbol(sym_real_con_3);
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
sym_annotated_2 = ATmakeSymbol("annotated", 2, ATfalse);
ATprotectSymbol(sym_annotated_2);
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
sym_default_1 = ATmakeSymbol("default", 1, ATfalse);
ATprotectSymbol(sym_default_1);
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
sym_absent_0 = ATmakeSymbol("absent", 0, ATfalse);
ATprotectSymbol(sym_absent_0);
sym_present_1 = ATmakeSymbol("present", 1, ATfalse);
ATprotectSymbol(sym_present_1);
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
sym_quoted_1 = ATmakeSymbol("quoted", 1, ATfalse);
ATprotectSymbol(sym_quoted_1);
sym_unquoted_1 = ATmakeSymbol("unquoted", 1, ATfalse);
ATprotectSymbol(sym_unquoted_1);
sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
ATprotectSymbol(sym_char_class_1);
sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
ATprotectSymbol(sym_seq_2);
sym_single_1 = ATmakeSymbol("single", 1, ATfalse);
ATprotectSymbol(sym_single_1);
sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
ATprotectSymbol(sym_alt_2);
sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
ATprotectSymbol(sym_list_1);
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
sym_GNU__LGPL_2 = ATmakeSymbol("GNU_LGPL", 2, ATfalse);
ATprotectSymbol(sym_GNU__LGPL_2);
sym_GNU__GPL_2 = ATmakeSymbol("GNU_GPL", 2, ATfalse);
ATprotectSymbol(sym_GNU__GPL_2);
sym_License_1 = ATmakeSymbol("License", 1, ATfalse);
ATprotectSymbol(sym_License_1);
sym_ConfigItem_2 = ATmakeSymbol("ConfigItem", 2, ATfalse);
ATprotectSymbol(sym_ConfigItem_2);
sym_CurrentXTCRepository_0 = ATmakeSymbol("CurrentXTCRepository", 0, ATfalse);
ATprotectSymbol(sym_CurrentXTCRepository_0);
sym_DefaultXTCRepository_0 = ATmakeSymbol("DefaultXTCRepository", 0, ATfalse);
ATprotectSymbol(sym_DefaultXTCRepository_0);
sym_Config_1 = ATmakeSymbol("Config", 1, ATfalse);
ATprotectSymbol(sym_Config_1);
sym_Program_3 = ATmakeSymbol("Program", 3, ATfalse);
ATprotectSymbol(sym_Program_3);
sym_AutoProgram_0 = ATmakeSymbol("AutoProgram", 0, ATfalse);
ATprotectSymbol(sym_AutoProgram_0);
sym_ReportBugs_1 = ATmakeSymbol("ReportBugs", 1, ATfalse);
ATprotectSymbol(sym_ReportBugs_1);
sym_AutoReportBugs_0 = ATmakeSymbol("AutoReportBugs", 0, ATfalse);
ATprotectSymbol(sym_AutoReportBugs_0);
sym_WebHome_1 = ATmakeSymbol("WebHome", 1, ATfalse);
ATprotectSymbol(sym_WebHome_1);
sym_Person_2 = ATmakeSymbol("Person", 2, ATfalse);
ATprotectSymbol(sym_Person_2);
sym_Author_1 = ATmakeSymbol("Author", 1, ATfalse);
ATprotectSymbol(sym_Author_1);
sym_Authors_1 = ATmakeSymbol("Authors", 1, ATfalse);
ATprotectSymbol(sym_Authors_1);
sym_OptionUsage_0 = ATmakeSymbol("OptionUsage", 0, ATfalse);
ATprotectSymbol(sym_OptionUsage_0);
sym_Description_1 = ATmakeSymbol("Description", 1, ATfalse);
ATprotectSymbol(sym_Description_1);
sym_Summary_1 = ATmakeSymbol("Summary", 1, ATfalse);
ATprotectSymbol(sym_Summary_1);
sym_Usage_1 = ATmakeSymbol("Usage", 1, ATfalse);
ATprotectSymbol(sym_Usage_1);
sym_HelpString_2 = ATmakeSymbol("HelpString", 2, ATfalse);
ATprotectSymbol(sym_HelpString_2);
sym_Def_2 = ATmakeSymbol("Def", 2, ATfalse);
ATprotectSymbol(sym_Def_2);
sym_DefList_1 = ATmakeSymbol("DefList", 1, ATfalse);
ATprotectSymbol(sym_DefList_1);
sym_ItemList_1 = ATmakeSymbol("ItemList", 1, ATfalse);
ATprotectSymbol(sym_ItemList_1);
sym_Line_1 = ATmakeSymbol("Line", 1, ATfalse);
ATprotectSymbol(sym_Line_1);
sym_Paragraph_1 = ATmakeSymbol("Paragraph", 1, ATfalse);
ATprotectSymbol(sym_Paragraph_1);
sym_HSection_2 = ATmakeSymbol("HSection", 2, ATfalse);
ATprotectSymbol(sym_HSection_2);
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
sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
ATprotectSymbol(sym_XTC_0);
sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
ATprotectSymbol(sym_Imported_1);
sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
ATprotectSymbol(sym_Import_0);
sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
ATprotectSymbol(sym_Repository_0);
sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
ATprotectSymbol(sym_Tool_1);
sym_TempDirs_0 = ATmakeSymbol("TempDirs", 0, ATfalse);
ATprotectSymbol(sym_TempDirs_0);
sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
ATprotectSymbol(sym_TempFiles_0);
sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
ATprotectSymbol(sym_TEMP_0);
sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
ATprotectSymbol(sym_DIR_1);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
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
}
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
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a docsection: ", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_SOpt_2, term1, term9);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym_IS_0);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("3", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_SOpt_2, term13, term15);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeInt(9);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeInt(13);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeInt(10);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeInt(32);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_HS_0);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym_SOpt_2, term27, term3);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_S_1, term31);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(sym_SOpt_2, term27, term9);
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(sym_SOpt_2, term27, term37);
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeInt(80);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("Summary:", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("Description:", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(sym__2, term49, term51);
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("Options:", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("Authors:", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("Author:", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol(" <", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("Website:", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("not available", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("Please report bugs to ", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("Revision", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("Version", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("Package", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("Configuration:", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("Default XTC Repository", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("Current XTC Repository", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("License:", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) ", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU General Public License \n        along with this program; if not, write to the Free Software Foundation, \n        Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is distributed in the hope that it will be useful, but \n        WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n        FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more \n        details.", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or\n        modify it under the terms of the GNU General Public License as published by the \n        Free Software Foundation; either version 2 of the License, or (at your option) \n        any later version.", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("You should have received a copy of the GNU Lesser General Public \n         License along with this library; if not, write to the Free Software Foundation, \n         Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is distributed in the hope that it will be useful, but \n         WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or \n         FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License \n         for more details.", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or modify \n         it under the terms of the GNU Lesser General Public License as published by the \n         Free Software Foundation; either version 2 of the License, or (at your option) \n         any later version.", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(sym_HelpString_2, term107, term107);
ATprotect(&(term109));
term109 = term108;
}
#include <srts/init-stratego-module.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm SRTS_package_revision_0_0 (StrSL sl, ATerm t);
ATerm SRTS_package_bugreport_0_0 (StrSL sl, ATerm t);
ATerm SRTS_package_version_0_0 (StrSL sl, ATerm t);
ATerm SRTS_package_name_0_0 (StrSL sl, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (StrSL sl, ATerm t);
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm reverse_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL k_86, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL h_84, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL c_48, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL s_44, ATerm t);
ATerm fputc_0_0 (StrSL sl, ATerm t);
ATerm stderr_stream_0_0 (StrSL sl, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL a_42, ATerm t);
ATerm split_before_0_0 (StrSL sl, ATerm t);
ATerm string_tokenize_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm xtc_location_0_0 (StrSL sl, ATerm t);
ATerm box2text_stream_0_2 (StrSL sl, ATerm x_12, ATerm y_12, ATerm t);
ATerm GNU__LGPL_2_0 (StrSL sl, StrCL u_6, StrCL v_6, ATerm t);
ATerm GNU__GPL_2_0 (StrSL sl, StrCL r_6, StrCL t_6, ATerm t);
ATerm License_1_0 (StrSL sl, StrCL q_6, ATerm t);
ATerm ConfigItem_2_0 (StrSL sl, StrCL o_6, StrCL p_6, ATerm t);
ATerm CurrentXTCRepository_0_0 (StrSL sl, ATerm t);
ATerm DefaultXTCRepository_0_0 (StrSL sl, ATerm t);
ATerm Config_1_0 (StrSL sl, StrCL n_6, ATerm t);
ATerm Program_3_0 (StrSL sl, StrCL k_6, StrCL l_6, StrCL m_6, ATerm t);
ATerm AutoProgram_0_0 (StrSL sl, ATerm t);
ATerm ReportBugs_1_0 (StrSL sl, StrCL j_6, ATerm t);
ATerm AutoReportBugs_0_0 (StrSL sl, ATerm t);
ATerm WebHome_1_0 (StrSL sl, StrCL i_6, ATerm t);
ATerm Person_2_0 (StrSL sl, StrCL g_6, StrCL h_6, ATerm t);
ATerm Author_1_0 (StrSL sl, StrCL f_6, ATerm t);
ATerm Authors_1_0 (StrSL sl, StrCL e_6, ATerm t);
ATerm OptionUsage_0_0 (StrSL sl, ATerm t);
ATerm Description_1_0 (StrSL sl, StrCL d_6, ATerm t);
ATerm Summary_1_0 (StrSL sl, StrCL c_6, ATerm t);
ATerm Usage_1_0 (StrSL sl, StrCL b_6, ATerm t);
ATerm HelpString_2_0 (StrSL sl, StrCL z_5, StrCL a_6, ATerm t);
ATerm Def_2_0 (StrSL sl, StrCL x_5, StrCL y_5, ATerm t);
ATerm DefList_1_0 (StrSL sl, StrCL w_5, ATerm t);
ATerm ItemList_1_0 (StrSL sl, StrCL v_5, ATerm t);
ATerm Line_1_0 (StrSL sl, StrCL u_5, ATerm t);
ATerm Paragraph_1_0 (StrSL sl, StrCL t_5, ATerm t);
ATerm HSection_2_0 (StrSL sl, StrCL q_5, StrCL r_5, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm tool_doc_0_0 (StrSL sl, ATerm t);
ATerm tool_doc_def_to_row_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm tool_doc_docsection_to_box_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm tool_doc_try_docsection_to_box_0_0 (StrSL sl, ATerm t);
ATerm tool_doc_docsections_to_box_0_0 (StrSL sl, ATerm t);
ATerm tool_doc2box_0_0 (StrSL sl, ATerm t);
ATerm GNU__LGPL_2_0 (StrSL sl, StrCL u_6, StrCL v_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "GNU__LGPL_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_132 = NULL,u_132 = NULL,v_132 = NULL,x_132 = NULL,y_132 = NULL;
ATerm trm53;
trm53 = (ATerm) ATgetAnnotations(t);
if((trm53 == NULL))
trm53 = (ATerm) ATempty;
if(match_cons(t, sym_GNU__LGPL_2))
{
u_132 = ATgetArgument(t, 0);
v_132 = ATgetArgument(t, 1);
}
else
goto fail41 ;
w_132 = trm53;
t = u_132;
t = cl_fun(u_6)(cl_sl(u_6), t);
if((t == NULL))
goto fail41 ;
x_132 = t;
t = v_132;
t = cl_fun(v_6)(cl_sl(v_6), t);
if((t == NULL))
goto fail41 ;
y_132 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_GNU__LGPL_2, x_132, y_132), w_132);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm GNU__GPL_2_0 (StrSL sl, StrCL r_6, StrCL t_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "GNU__GPL_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_132 = NULL,m_132 = NULL,o_132 = NULL,s_132 = NULL,t_132 = NULL;
ATerm trm52;
trm52 = (ATerm) ATgetAnnotations(t);
if((trm52 == NULL))
trm52 = (ATerm) ATempty;
if(match_cons(t, sym_GNU__GPL_2))
{
m_132 = ATgetArgument(t, 0);
o_132 = ATgetArgument(t, 1);
}
else
goto fail40 ;
q_132 = trm52;
t = m_132;
t = cl_fun(r_6)(cl_sl(r_6), t);
if((t == NULL))
goto fail40 ;
s_132 = t;
t = o_132;
t = cl_fun(t_6)(cl_sl(t_6), t);
if((t == NULL))
goto fail40 ;
t_132 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_GNU__GPL_2, s_132, t_132), q_132);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm License_1_0 (StrSL sl, StrCL q_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "License_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_132 = NULL,d_132 = NULL,k_132 = NULL;
ATerm trm51;
trm51 = (ATerm) ATgetAnnotations(t);
if((trm51 == NULL))
trm51 = (ATerm) ATempty;
if(match_cons(t, sym_License_1))
{
d_132 = ATgetArgument(t, 0);
}
else
goto fail39 ;
h_132 = trm51;
t = d_132;
t = cl_fun(q_6)(cl_sl(q_6), t);
if((t == NULL))
goto fail39 ;
k_132 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_License_1, k_132), h_132);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm ConfigItem_2_0 (StrSL sl, StrCL o_6, StrCL p_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ConfigItem_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_131 = NULL,r_131 = NULL,t_131 = NULL,x_131 = NULL,a_132 = NULL;
ATerm trm50;
trm50 = (ATerm) ATgetAnnotations(t);
if((trm50 == NULL))
trm50 = (ATerm) ATempty;
if(match_cons(t, sym_ConfigItem_2))
{
r_131 = ATgetArgument(t, 0);
t_131 = ATgetArgument(t, 1);
}
else
goto fail38 ;
v_131 = trm50;
t = r_131;
t = cl_fun(o_6)(cl_sl(o_6), t);
if((t == NULL))
goto fail38 ;
x_131 = t;
t = t_131;
t = cl_fun(p_6)(cl_sl(p_6), t);
if((t == NULL))
goto fail38 ;
a_132 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ConfigItem_2, x_131, a_132), v_131);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm CurrentXTCRepository_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "CurrentXTCRepository_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_CurrentXTCRepository_0)))
goto fail37 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm DefaultXTCRepository_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DefaultXTCRepository_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_DefaultXTCRepository_0)))
goto fail36 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm Config_1_0 (StrSL sl, StrCL n_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Config_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_131 = NULL,k_131 = NULL,o_131 = NULL;
ATerm trm49;
trm49 = (ATerm) ATgetAnnotations(t);
if((trm49 == NULL))
trm49 = (ATerm) ATempty;
if(match_cons(t, sym_Config_1))
{
k_131 = ATgetArgument(t, 0);
}
else
goto fail35 ;
m_131 = trm49;
t = k_131;
t = cl_fun(n_6)(cl_sl(n_6), t);
if((t == NULL))
goto fail35 ;
o_131 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Config_1, o_131), m_131);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm Program_3_0 (StrSL sl, StrCL k_6, StrCL l_6, StrCL m_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Program_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_131 = NULL,d_130 = NULL,g_130 = NULL,z_130 = NULL,b_131 = NULL,c_131 = NULL,i_131 = NULL;
ATerm trm48;
trm48 = (ATerm) ATgetAnnotations(t);
if((trm48 == NULL))
trm48 = (ATerm) ATempty;
if(match_cons(t, sym_Program_3))
{
d_130 = ATgetArgument(t, 0);
g_130 = ATgetArgument(t, 1);
z_130 = ATgetArgument(t, 2);
}
else
goto fail34 ;
a_131 = trm48;
t = d_130;
t = cl_fun(k_6)(cl_sl(k_6), t);
if((t == NULL))
goto fail34 ;
b_131 = t;
t = g_130;
t = cl_fun(l_6)(cl_sl(l_6), t);
if((t == NULL))
goto fail34 ;
c_131 = t;
t = z_130;
t = cl_fun(m_6)(cl_sl(m_6), t);
if((t == NULL))
goto fail34 ;
i_131 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Program_3, b_131, c_131, i_131), a_131);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm AutoProgram_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "AutoProgram_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_AutoProgram_0)))
goto fail33 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm ReportBugs_1_0 (StrSL sl, StrCL j_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ReportBugs_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_129 = NULL,x_129 = NULL,a_130 = NULL;
ATerm trm47;
trm47 = (ATerm) ATgetAnnotations(t);
if((trm47 == NULL))
trm47 = (ATerm) ATempty;
if(match_cons(t, sym_ReportBugs_1))
{
x_129 = ATgetArgument(t, 0);
}
else
goto fail32 ;
y_129 = trm47;
t = x_129;
t = cl_fun(j_6)(cl_sl(j_6), t);
if((t == NULL))
goto fail32 ;
a_130 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ReportBugs_1, a_130), y_129);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
ATerm AutoReportBugs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "AutoReportBugs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_AutoReportBugs_0)))
goto fail31 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm WebHome_1_0 (StrSL sl, StrCL i_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "WebHome_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_129 = NULL,u_129 = NULL,w_129 = NULL;
ATerm trm46;
trm46 = (ATerm) ATgetAnnotations(t);
if((trm46 == NULL))
trm46 = (ATerm) ATempty;
if(match_cons(t, sym_WebHome_1))
{
u_129 = ATgetArgument(t, 0);
}
else
goto fail30 ;
v_129 = trm46;
t = u_129;
t = cl_fun(i_6)(cl_sl(i_6), t);
if((t == NULL))
goto fail30 ;
w_129 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_WebHome_1, w_129), v_129);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm Person_2_0 (StrSL sl, StrCL g_6, StrCL h_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Person_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_129 = NULL,f_129 = NULL,i_129 = NULL,o_129 = NULL,s_129 = NULL;
ATerm trm45;
trm45 = (ATerm) ATgetAnnotations(t);
if((trm45 == NULL))
trm45 = (ATerm) ATempty;
if(match_cons(t, sym_Person_2))
{
f_129 = ATgetArgument(t, 0);
i_129 = ATgetArgument(t, 1);
}
else
goto fail29 ;
l_129 = trm45;
t = f_129;
t = cl_fun(g_6)(cl_sl(g_6), t);
if((t == NULL))
goto fail29 ;
o_129 = t;
t = i_129;
t = cl_fun(h_6)(cl_sl(h_6), t);
if((t == NULL))
goto fail29 ;
s_129 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Person_2, o_129, s_129), l_129);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
ATerm Author_1_0 (StrSL sl, StrCL f_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Author_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_128 = NULL,x_128 = NULL,c_129 = NULL;
ATerm trm44;
trm44 = (ATerm) ATgetAnnotations(t);
if((trm44 == NULL))
trm44 = (ATerm) ATempty;
if(match_cons(t, sym_Author_1))
{
x_128 = ATgetArgument(t, 0);
}
else
goto fail28 ;
z_128 = trm44;
t = x_128;
t = cl_fun(f_6)(cl_sl(f_6), t);
if((t == NULL))
goto fail28 ;
c_129 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Author_1, c_129), z_128);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm Authors_1_0 (StrSL sl, StrCL e_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Authors_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_128 = NULL,r_128 = NULL,v_128 = NULL;
ATerm trm43;
trm43 = (ATerm) ATgetAnnotations(t);
if((trm43 == NULL))
trm43 = (ATerm) ATempty;
if(match_cons(t, sym_Authors_1))
{
r_128 = ATgetArgument(t, 0);
}
else
goto fail27 ;
s_128 = trm43;
t = r_128;
t = cl_fun(e_6)(cl_sl(e_6), t);
if((t == NULL))
goto fail27 ;
v_128 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Authors_1, v_128), s_128);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
ATerm OptionUsage_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "OptionUsage_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_OptionUsage_0)))
goto fail26 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
ATerm Description_1_0 (StrSL sl, StrCL d_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Description_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_128 = NULL,o_128 = NULL,q_128 = NULL;
ATerm trm42;
trm42 = (ATerm) ATgetAnnotations(t);
if((trm42 == NULL))
trm42 = (ATerm) ATempty;
if(match_cons(t, sym_Description_1))
{
o_128 = ATgetArgument(t, 0);
}
else
goto fail25 ;
p_128 = trm42;
t = o_128;
t = cl_fun(d_6)(cl_sl(d_6), t);
if((t == NULL))
goto fail25 ;
q_128 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Description_1, q_128), p_128);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
ATerm Summary_1_0 (StrSL sl, StrCL c_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Summary_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_128 = NULL,l_128 = NULL,n_128 = NULL;
ATerm trm41;
trm41 = (ATerm) ATgetAnnotations(t);
if((trm41 == NULL))
trm41 = (ATerm) ATempty;
if(match_cons(t, sym_Summary_1))
{
l_128 = ATgetArgument(t, 0);
}
else
goto fail24 ;
m_128 = trm41;
t = l_128;
t = cl_fun(c_6)(cl_sl(c_6), t);
if((t == NULL))
goto fail24 ;
n_128 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Summary_1, n_128), m_128);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm Usage_1_0 (StrSL sl, StrCL b_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Usage_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_128 = NULL,h_128 = NULL,k_128 = NULL;
ATerm trm40;
trm40 = (ATerm) ATgetAnnotations(t);
if((trm40 == NULL))
trm40 = (ATerm) ATempty;
if(match_cons(t, sym_Usage_1))
{
h_128 = ATgetArgument(t, 0);
}
else
goto fail23 ;
i_128 = trm40;
t = h_128;
t = cl_fun(b_6)(cl_sl(b_6), t);
if((t == NULL))
goto fail23 ;
k_128 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Usage_1, k_128), i_128);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm HelpString_2_0 (StrSL sl, StrCL z_5, StrCL a_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "HelpString_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_128 = NULL,w_127 = NULL,b_128 = NULL,e_128 = NULL,g_128 = NULL;
ATerm trm39;
trm39 = (ATerm) ATgetAnnotations(t);
if((trm39 == NULL))
trm39 = (ATerm) ATempty;
if(match_cons(t, sym_HelpString_2))
{
w_127 = ATgetArgument(t, 0);
b_128 = ATgetArgument(t, 1);
}
else
goto fail22 ;
d_128 = trm39;
t = w_127;
t = cl_fun(z_5)(cl_sl(z_5), t);
if((t == NULL))
goto fail22 ;
e_128 = t;
t = b_128;
t = cl_fun(a_6)(cl_sl(a_6), t);
if((t == NULL))
goto fail22 ;
g_128 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_HelpString_2, e_128, g_128), d_128);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm Def_2_0 (StrSL sl, StrCL x_5, StrCL y_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Def_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_127 = NULL,n_127 = NULL,p_127 = NULL,s_127 = NULL,u_127 = NULL;
ATerm trm38;
trm38 = (ATerm) ATgetAnnotations(t);
if((trm38 == NULL))
trm38 = (ATerm) ATempty;
if(match_cons(t, sym_Def_2))
{
n_127 = ATgetArgument(t, 0);
p_127 = ATgetArgument(t, 1);
}
else
goto fail21 ;
r_127 = trm38;
t = n_127;
t = cl_fun(x_5)(cl_sl(x_5), t);
if((t == NULL))
goto fail21 ;
s_127 = t;
t = p_127;
t = cl_fun(y_5)(cl_sl(y_5), t);
if((t == NULL))
goto fail21 ;
u_127 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Def_2, s_127, u_127), r_127);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm DefList_1_0 (StrSL sl, StrCL w_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DefList_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_127 = NULL,i_127 = NULL,l_127 = NULL;
ATerm trm37;
trm37 = (ATerm) ATgetAnnotations(t);
if((trm37 == NULL))
trm37 = (ATerm) ATempty;
if(match_cons(t, sym_DefList_1))
{
i_127 = ATgetArgument(t, 0);
}
else
goto fail20 ;
j_127 = trm37;
t = i_127;
t = cl_fun(w_5)(cl_sl(w_5), t);
if((t == NULL))
goto fail20 ;
l_127 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_DefList_1, l_127), j_127);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm ItemList_1_0 (StrSL sl, StrCL v_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ItemList_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_127 = NULL,f_127 = NULL,h_127 = NULL;
ATerm trm36;
trm36 = (ATerm) ATgetAnnotations(t);
if((trm36 == NULL))
trm36 = (ATerm) ATempty;
if(match_cons(t, sym_ItemList_1))
{
f_127 = ATgetArgument(t, 0);
}
else
goto fail19 ;
g_127 = trm36;
t = f_127;
t = cl_fun(v_5)(cl_sl(v_5), t);
if((t == NULL))
goto fail19 ;
h_127 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ItemList_1, h_127), g_127);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm Line_1_0 (StrSL sl, StrCL u_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Line_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_127 = NULL,z_126 = NULL,e_127 = NULL;
ATerm trm35;
trm35 = (ATerm) ATgetAnnotations(t);
if((trm35 == NULL))
trm35 = (ATerm) ATempty;
if(match_cons(t, sym_Line_1))
{
z_126 = ATgetArgument(t, 0);
}
else
goto fail18 ;
c_127 = trm35;
t = z_126;
t = cl_fun(u_5)(cl_sl(u_5), t);
if((t == NULL))
goto fail18 ;
e_127 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Line_1, e_127), c_127);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm Paragraph_1_0 (StrSL sl, StrCL t_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Paragraph_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_126 = NULL,t_126 = NULL,x_126 = NULL;
ATerm trm34;
trm34 = (ATerm) ATgetAnnotations(t);
if((trm34 == NULL))
trm34 = (ATerm) ATempty;
if(match_cons(t, sym_Paragraph_1))
{
t_126 = ATgetArgument(t, 0);
}
else
goto fail17 ;
v_126 = trm34;
t = t_126;
t = cl_fun(t_5)(cl_sl(t_5), t);
if((t == NULL))
goto fail17 ;
x_126 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Paragraph_1, x_126), v_126);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm HSection_2_0 (StrSL sl, StrCL q_5, StrCL r_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "HSection_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_126 = NULL,o_126 = NULL,p_126 = NULL,r_126 = NULL,s_126 = NULL;
ATerm trm33;
trm33 = (ATerm) ATgetAnnotations(t);
if((trm33 == NULL))
trm33 = (ATerm) ATempty;
if(match_cons(t, sym_HSection_2))
{
o_126 = ATgetArgument(t, 0);
p_126 = ATgetArgument(t, 1);
}
else
goto fail16 ;
q_126 = trm33;
t = o_126;
t = cl_fun(q_5)(cl_sl(q_5), t);
if((t == NULL))
goto fail16 ;
r_126 = t;
t = p_126;
t = cl_fun(r_5)(cl_sl(r_5), t);
if((t == NULL))
goto fail16 ;
s_126 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_HSection_2, r_126, s_126), q_126);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm ensure_help_string_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ensure_help_string_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm30 = t;
struct str_closure p_133 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(p_133);
struct str_closure q_133 = { &(is_string_0_0) , sl };
StrCL lifted13_cl = &(q_133);
t = HelpString_2_0(sl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto label39 ;
goto label38 ;
label39 :
t = trm30;
{
ATerm trm32 = t;
ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
m_5 = t;
p_5 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label42 ;
t = (ATerm) ATmakeAppl(sym__2, m_5, term105);
t = split_before_0_0(sl, t);
if((t == NULL))
goto label42 ;
if(match_cons(t, sym__2))
{
n_5 = ATgetArgument(t, 0);
o_5 = ATgetArgument(t, 1);
}
else
goto label42 ;
t = p_5;
t = (ATerm) ATmakeAppl(sym_HelpString_2, n_5, o_5);
goto label38 ;
label42 :
t = trm32;
if(!((ATgetSymbol(t) == ATmakeSymbol("", 0, ATtrue))))
goto fail14 ;
t = term109;
goto label38 ;
}
label38 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm31 = t;
t = is_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label41 ;
goto label40 ;
label41 :
t = trm31;
t = is_list_0_0(sl_up(sl), t);
if((t == NULL))
goto fail15 ;
else
goto label40 ;
label40 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm DesugarToolDoc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DesugarToolDoc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm5 = t;
ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
if(match_cons(t, sym_Usage_1))
{
j_5 = ATgetArgument(t, 0);
}
else
goto label8 ;
l_5 = t;
t = (ATerm) ATmakeAppl(sym__2, term43, j_5);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto label8 ;
k_5 = t;
t = l_5;
t = (ATerm) ATmakeAppl(sym_Line_1, k_5);
goto label7 ;
label8 :
t = trm5;
{
ATerm trm6 = t;
ATerm i_5 = NULL;
if(match_cons(t, sym_Summary_1))
{
i_5 = ATgetArgument(t, 0);
}
else
goto label9 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Paragraph_1, i_5)));
goto label7 ;
label9 :
t = trm6;
{
ATerm trm7 = t;
ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
if(match_cons(t, sym_Description_1))
{
d_5 = ATgetArgument(t, 0);
}
else
goto label10 ;
f_5 = t;
t = d_5;
{
struct str_closure k_133 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(k_133);
t = map_1_0(sl, lifted8_cl, t);
if((t == NULL))
goto label10 ;
e_5 = t;
t = f_5;
t = (ATerm) ATmakeAppl(sym_HSection_2, term47, e_5);
}
goto label7 ;
label10 :
t = trm7;
{
ATerm trm8 = t;
ATerm a_5 = NULL,c_5 = NULL;
if(!(match_cons(t, sym_OptionUsage_0)))
goto label11 ;
c_5 = t;
t = term53;
t = table_get_0_0(sl, t);
if((t == NULL))
goto label11 ;
t = reverse_0_0(sl, t);
if((t == NULL))
goto label11 ;
{
struct str_closure l_133 = { &(ensure_help_string_0_0) , sl };
StrCL lifted9_cl = &(l_133);
t = map_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto label11 ;
{
struct str_closure m_133 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(m_133);
t = filter_1_0(sl, lifted10_cl, t);
if((t == NULL))
goto label11 ;
a_5 = t;
t = c_5;
t = (ATerm) ATmakeAppl(sym_HSection_2, term55, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, a_5)));
}
}
goto label7 ;
label11 :
t = trm8;
{
ATerm trm9 = t;
ATerm x_4 = NULL;
if(match_cons(t, sym_Authors_1))
{
x_4 = ATgetArgument(t, 0);
}
else
goto label12 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term57, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, x_4)));
goto label7 ;
label12 :
t = trm9;
{
ATerm trm10 = t;
ATerm v_4 = NULL;
if(match_cons(t, sym_Author_1))
{
v_4 = ATgetArgument(t, 0);
}
else
goto label13 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term59, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ItemList_1, (ATerm) ATinsert(ATempty, v_4))));
goto label7 ;
label13 :
t = trm10;
{
ATerm trm11 = t;
ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
if(match_cons(t, sym_Person_2))
{
r_4 = ATgetArgument(t, 0);
s_4 = ATgetArgument(t, 1);
}
else
goto label14 ;
u_4 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term61), s_4), term63), r_4);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label14 ;
t_4 = t;
t = u_4;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, t_4);
goto label7 ;
label14 :
t = trm11;
{
ATerm trm12 = t;
ATerm o_4 = NULL;
if(match_cons(t, sym_WebHome_1))
{
o_4 = ATgetArgument(t, 0);
}
else
goto label15 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term65, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Line_1, o_4)));
goto label7 ;
label15 :
t = trm12;
{
ATerm trm13 = t;
ATerm g_4 = NULL,h_4 = NULL;
if(!(match_cons(t, sym_AutoReportBugs_0)))
goto label16 ;
h_4 = t;
t = term67;
{
ATerm trm14 = t;
t = SRTS_package_bugreport_0_0(sl, t);
if((t == NULL))
goto label18 ;
goto label17 ;
label18 :
t = trm14;
t = term69;
goto label17 ;
label17 :
;
g_4 = t;
t = h_4;
t = (ATerm) ATmakeAppl(sym_ReportBugs_1, g_4);
}
goto label7 ;
label16 :
t = trm13;
{
ATerm trm15 = t;
ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
if(match_cons(t, sym_ReportBugs_1))
{
d_4 = ATgetArgument(t, 0);
}
else
goto label19 ;
f_4 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, d_4), term71);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label19 ;
e_4 = t;
t = f_4;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, e_4);
goto label7 ;
label19 :
t = trm15;
{
ATerm trm16 = t;
ATerm s_3 = NULL,x_3 = NULL,t_3 = NULL,y_3 = NULL,u_3 = NULL,z_3 = NULL,w_3 = NULL,a_4 = NULL;
if(!(match_cons(t, sym_AutoProgram_0)))
goto label20 ;
x_3 = t;
t = term73;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label20 ;
s_3 = t;
t = x_3;
y_3 = t;
t = term67;
{
ATerm trm17 = t;
t = SRTS_package_name_0_0(sl, t);
if((t == NULL))
goto label22 ;
goto label21 ;
label22 :
t = trm17;
t = term69;
goto label21 ;
label21 :
;
t_3 = t;
t = y_3;
z_3 = t;
t = term67;
{
ATerm trm18 = t;
t = SRTS_package_version_0_0(sl, t);
if((t == NULL))
goto label24 ;
goto label23 ;
label24 :
t = trm18;
t = term69;
goto label23 ;
label23 :
;
u_3 = t;
t = z_3;
a_4 = t;
{
ATerm trm19 = t;
ATerm b_4 = NULL,c_4 = NULL;
c_4 = t;
t = SRTS_package_revision_0_0(sl, t);
if((t == NULL))
goto label26 ;
b_4 = t;
t = c_4;
t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Def_2, term75, (ATerm) ATmakeAppl(sym_Paragraph_1, b_4)));
goto label25 ;
label26 :
t = trm19;
t = (ATerm) ATempty;
goto label25 ;
label25 :
;
w_3 = t;
t = a_4;
{
ATerm trm20;
trm20 = CheckATermList(w_3);
if((trm20 == NULL))
goto label20 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, s_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, (ATerm) ATinsert(ATinsert((ATermList)trm20, (ATerm) ATmakeAppl(sym_Def_2, term77, (ATerm) ATmakeAppl(sym_Paragraph_1, u_3))), (ATerm) ATmakeAppl(sym_Def_2, term79, (ATerm) ATmakeAppl(sym_Paragraph_1, t_3))))));
}
}
}
}
goto label7 ;
label20 :
t = trm16;
{
ATerm trm21 = t;
ATerm k_3 = NULL,l_3 = NULL,o_3 = NULL;
if(match_cons(t, sym_Program_3))
{
k_3 = ATgetArgument(t, 0);
l_3 = ATgetArgument(t, 1);
o_3 = ATgetArgument(t, 2);
}
else
goto label27 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, k_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Def_2, term77, (ATerm) ATmakeAppl(sym_Paragraph_1, o_3))), (ATerm) ATmakeAppl(sym_Def_2, term79, (ATerm) ATmakeAppl(sym_Paragraph_1, l_3))))));
goto label7 ;
label27 :
t = trm21;
{
ATerm trm22 = t;
ATerm j_3 = NULL;
if(match_cons(t, sym_Config_1))
{
j_3 = ATgetArgument(t, 0);
}
else
goto label28 ;
t = (ATerm) ATmakeAppl(sym_HSection_2, term81, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefList_1, j_3)));
goto label7 ;
label28 :
t = trm22;
{
ATerm trm23 = t;
ATerm h_3 = NULL,i_3 = NULL;
if(!(match_cons(t, sym_DefaultXTCRepository_0)))
goto label29 ;
i_3 = t;
t = term67;
{
ATerm trm24 = t;
t = GetInternalDefaultXtcRepository_0_0(sl, t);
if((t == NULL))
goto label31 ;
goto label30 ;
label31 :
t = trm24;
t = term69;
goto label30 ;
label30 :
;
h_3 = t;
t = i_3;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term83, h_3);
}
goto label7 ;
label29 :
t = trm23;
{
ATerm trm25 = t;
ATerm f_3 = NULL,g_3 = NULL;
if(!(match_cons(t, sym_CurrentXTCRepository_0)))
goto label32 ;
g_3 = t;
t = term67;
{
ATerm trm26 = t;
t = xtc_location_0_0(sl, t);
if((t == NULL))
goto label34 ;
goto label33 ;
label34 :
t = trm26;
t = term69;
goto label33 ;
label33 :
;
f_3 = t;
t = g_3;
t = (ATerm) ATmakeAppl(sym_ConfigItem_2, term85, f_3);
}
goto label7 ;
label32 :
t = trm25;
{
ATerm trm27 = t;
ATerm d_3 = NULL,e_3 = NULL;
if(match_cons(t, sym_ConfigItem_2))
{
d_3 = ATgetArgument(t, 0);
e_3 = ATgetArgument(t, 1);
}
else
goto label35 ;
t = (ATerm) ATmakeAppl(sym_Def_2, d_3, (ATerm) ATmakeAppl(sym_Line_1, e_3));
goto label7 ;
label35 :
t = trm27;
{
ATerm trm28 = t;
ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL;
if(match_cons(t, sym_License_1))
{
x_2 = ATgetArgument(t, 0);
}
else
goto label36 ;
z_2 = t;
t = x_2;
{
struct str_closure o_133 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(o_133);
t = map_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto label36 ;
y_2 = t;
t = z_2;
t = (ATerm) ATmakeAppl(sym_HSection_2, term87, y_2);
}
goto label7 ;
label36 :
t = trm28;
{
ATerm trm29 = t;
ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
if(match_cons(t, sym_GNU__GPL_2))
{
t_2 = ATgetArgument(t, 0);
u_2 = ATgetArgument(t, 1);
}
else
goto label37 ;
w_2 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_2), term89), t_2), term91);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label37 ;
v_2 = t;
t = w_2;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term93), term95), term97), v_2));
goto label7 ;
label37 :
t = trm29;
{
ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
if(match_cons(t, sym_GNU__LGPL_2))
{
p_2 = ATgetArgument(t, 0);
q_2 = ATgetArgument(t, 1);
}
else
goto fail10 ;
s_2 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_2), term89), p_2), term91);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail10 ;
r_2 = t;
t = s_2;
t = (ATerm) ATmakeAppl(sym_License_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term99), term101), term103), r_2));
goto label7 ;
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
label7 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_3 = NULL,b_3 = NULL;
b_3 = t;
a_3 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, a_3);
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
ATerm y_4 = NULL,z_4 = NULL;
if(match_cons(t, sym_HelpString_2))
{
y_4 = ATgetArgument(t, 0);
z_4 = ATgetArgument(t, 1);
}
else
goto fail12 ;
t = (ATerm) ATmakeAppl(sym_Def_2, y_4, (ATerm) ATmakeAppl(sym_Paragraph_1, z_4));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_5 = NULL,h_5 = NULL;
h_5 = t;
g_5 = t;
t = (ATerm) ATmakeAppl(sym_Paragraph_1, g_5);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
g_2 = t;
{
struct str_closure j_133 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(j_133);
t = topdown_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto fail8 ;
t = tool_doc_docsections_to_box_0_0(sl, t);
if((t == NULL))
goto fail8 ;
j_2 = t;
t = term41;
h_2 = t;
t = j_2;
k_2 = t;
m_2 = t;
t = stderr_stream_0_0(sl, t);
if((t == NULL))
goto fail8 ;
l_2 = t;
t = m_2;
t = l_2;
i_2 = t;
t = k_2;
t = box2text_stream_0_2(sl, h_2, i_2, t);
if((t == NULL))
goto fail8 ;
o_2 = t;
t = stderr_stream_0_0(sl, t);
if((t == NULL))
goto fail8 ;
n_2 = t;
t = o_2;
t = (ATerm) ATmakeAppl(sym__2, term23, n_2);
t = fputc_0_0(sl, t);
if((t == NULL))
goto fail8 ;
t = g_2;
}
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
struct str_closure g_133 = { &(DesugarToolDoc_0_0) , sl_up(sl) };
StrCL lifted7_cl = &(g_133);
t = repeat_1_0(sl_up(sl), lifted7_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_def_to_row_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_def_to_row_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
if(match_cons(t, sym_Def_2))
{
c_2 = ATgetArgument(t, 0);
d_2 = ATgetArgument(t, 1);
}
else
goto fail7 ;
f_2 = t;
t = d_2;
t = tool_doc_try_docsection_to_box_0_0(sl, t);
if((t == NULL))
goto fail7 ;
e_2 = t;
t = f_2;
t = (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_2), (ATerm) ATmakeAppl(sym_S_1, c_2)));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_docsection_to_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_docsection_to_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
if(match_cons(t, sym_HSection_2))
{
y_1 = ATgetArgument(t, 0);
z_1 = ATgetArgument(t, 1);
}
else
goto label3 ;
b_2 = t;
t = z_1;
{
struct str_closure c_133 = { &(tool_doc_try_docsection_to_box_0_0) , sl };
StrCL lifted2_cl = &(c_133);
t = map_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto label3 ;
a_2 = t;
t = b_2;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATinsert(ATempty, term11), term17), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term5), a_2)), (ATerm) ATmakeAppl(sym_S_1, y_1)));
}
goto label2 ;
label3 :
t = trm1;
{
ATerm trm2 = t;
ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL;
if(match_cons(t, sym_Paragraph_1))
{
r_1 = ATgetArgument(t, 0);
}
else
goto label4 ;
t_1 = t;
t = r_1;
v_1 = t;
u_1 = t;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term19), term21), term23), term25), u_1);
t = string_tokenize_0_0(sl, t);
if((t == NULL))
goto label4 ;
{
struct str_closure d_133 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(d_133);
t = map_1_0(sl, lifted3_cl, t);
if((t == NULL))
goto label4 ;
s_1 = t;
t = t_1;
t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATinsert(ATinsert(ATempty, term11), term29), s_1);
}
goto label2 ;
label4 :
t = trm2;
{
ATerm trm3 = t;
ATerm q_1 = NULL;
if(match_cons(t, sym_Line_1))
{
q_1 = ATgetArgument(t, 0);
}
else
goto label5 ;
t = (ATerm) ATmakeAppl(sym_S_1, q_1);
goto label2 ;
label5 :
t = trm3;
{
ATerm trm4 = t;
ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL;
if(match_cons(t, sym_ItemList_1))
{
l_1 = ATgetArgument(t, 0);
}
else
goto label6 ;
n_1 = t;
t = l_1;
{
struct str_closure e_133 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(e_133);
t = map_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto label6 ;
m_1 = t;
t = n_1;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term11), m_1);
}
goto label2 ;
label6 :
t = trm4;
{
ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL;
if(match_cons(t, sym_DefList_1))
{
i_1 = ATgetArgument(t, 0);
}
else
goto fail4 ;
k_1 = t;
t = i_1;
{
struct str_closure f_133 = { &(tool_doc_def_to_row_0_0) , sl };
StrCL lifted5_cl = &(f_133);
t = map_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail4 ;
j_1 = t;
t = k_1;
t = (ATerm) ATmakeAppl(sym_A_3, (ATerm)ATmakeAppl(sym_AOPTIONS_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AL_1, (ATerm) ATinsert(ATempty, term35))), (ATerm) ATmakeAppl(sym_AL_1, (ATerm) ATinsert(ATempty, term39)))), (ATerm)ATempty, j_1);
goto label2 ;
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
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_1 = NULL,p_1 = NULL;
t = tool_doc_try_docsection_to_box_0_0(sl_up(sl), t);
if((t == NULL))
goto fail6 ;
p_1 = t;
o_1 = t;
t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term29), (ATerm) ATinsert(ATinsert(ATempty, o_1), term33));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_1 = NULL,x_1 = NULL;
x_1 = t;
w_1 = t;
t = (ATerm) ATmakeAppl(sym_S_1, w_1);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_try_docsection_to_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_try_docsection_to_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
t = tool_doc_docsection_to_box_0_0(sl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
struct str_closure b_133 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(b_133);
t = debug_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail2 ;
goto fail2 ;
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
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term7;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc_docsections_to_box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc_docsections_to_box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL;
f_1 = t;
h_1 = t;
{
struct str_closure z_132 = { &(tool_doc_try_docsection_to_box_0_0) , sl };
StrCL lifted0_cl = &(z_132);
t = map_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail1 ;
g_1 = t;
t = h_1;
t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term5), g_1);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
ATerm tool_doc2box_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tool_doc2box_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = tool_doc_docsections_to_box_0_0(sl, t);
if((t == NULL))
goto fail0 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
