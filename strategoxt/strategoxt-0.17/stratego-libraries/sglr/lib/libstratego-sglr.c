#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
#include "stratego_sglr.h"
static Symbol sym_sorts_1;
static Symbol sym_id_1;
static Symbol sym_module_3;
static Symbol sym_module_1;
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
static Symbol sym_DR__DUMMY_0;
static Symbol sym_DR__UNDEFINE_1;
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
static Symbol sym_Conc_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_None_0;
static Symbol sym_Some_1;
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
sym_DR__DUMMY_0 = ATmakeSymbol("DR_DUMMY", 0, ATfalse);
ATprotectSymbol(sym_DR__DUMMY_0);
sym_DR__UNDEFINE_1 = ATmakeSymbol("DR_UNDEFINE", 1, ATfalse);
ATprotectSymbol(sym_DR__UNDEFINE_1);
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
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("stdin", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("string", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("stream", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("open-parse-table strategy applied to a non-parse-table", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("error: An error occured, but the error summary cannot be presented in a nice way. Please report this as a bug.", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("       Structured error summary: ", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("error: An error occured, but the error cannot be presented in a nice way. Please report this as a bug.", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("       Structured error: ", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("Ambiguity found", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("Alternatives are: ", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeInt(59);
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("': ", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol(": '", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol(", column ", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol(" at line ", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeInt(0);
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeInt(32);
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("Comment", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("get-comment-sorts", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("WithAnno", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("yield", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(sym_no_attrs_0);
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(sym_prod_3, (ATerm)ATempty, term95, term97);
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("ReplacePlaceholder", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("> in pattern ", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("Could not replace placeholder <", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeInt(1);
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
ATprotect(&(term116));
term116 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
ATprotect(&(term117));
term117 = term116;
ATprotect(&(term118));
term118 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
ATprotect(&(term119));
term119 = term118;
}
#include <srts/init-stratego-module.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm Conc_2_0 (StrSL sl, StrCL r_146, StrCL s_146, ATerm t);
ATerm Cons_2_0 (StrSL sl, StrCL p_146, StrCL q_146, ATerm t);
ATerm hashtable_put_0_2 (StrSL sl, ATerm x_128, ATerm z_128, ATerm t);
ATerm foldl_1_0 (StrSL sl, StrCL h_125, ATerm t);
ATerm makeConc_0_0 (StrSL sl, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm at_suffix_1_0 (StrSL sl, StrCL a_124, ATerm t);
ATerm at_end_1_0 (StrSL sl, StrCL z_123, ATerm t);
ATerm split_fetch_1_0 (StrSL sl, StrCL u_123, ATerm t);
ATerm fetch_elem_1_0 (StrSL sl, StrCL t_123, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL s_123, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL j_123, ATerm t);
ATerm is_list_0_0 (StrSL sl, ATerm t);
ATerm reverse_filter_2_0 (StrSL sl, StrCL v_122, StrCL w_122, ATerm t);
ATerm remove_all_1_0 (StrSL sl, StrCL t_122, ATerm t);
ATerm filter_1_0 (StrSL sl, StrCL p_122, ATerm t);
ATerm add_indices_0_0 (StrSL sl, ATerm t);
ATerm map_with_index_1_0 (StrSL sl, StrCL o_122, ATerm t);
ATerm Snd_0_0 (StrSL sl, ATerm t);
ATerm dr_throw_1_2 (StrSL sl, StrCL k_114, ATerm i_114, ATerm j_114, ATerm t);
ATerm dr_continue_0_2 (StrSL sl, ATerm d_114, ATerm e_114, ATerm t);
ATerm dr_continue_0_1 (StrSL sl, ATerm c_114, ATerm t);
ATerm dr_break_bp_0_1 (StrSL sl, ATerm y_113, ATerm t);
ATerm dr_break_0_2 (StrSL sl, ATerm w_113, ATerm x_113, ATerm t);
ATerm dr_break_0_1 (StrSL sl, ATerm v_113, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm t_106, ATerm u_106, ATerm v_106, ATerm t);
ATerm dr_all_keys_0_1 (StrSL sl, ATerm s_106, ATerm t);
ATerm dr_lookup_rule_pointer_0_2 (StrSL sl, ATerm q_106, ATerm r_106, ATerm t);
ATerm dr_lookup_all_rules_0_2 (StrSL sl, ATerm o_106, ATerm p_106, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm m_106, ATerm n_106, ATerm t);
ATerm dr_get_first_scope_label_1_1 (StrSL sl, StrCL h_106, ATerm g_106, ATerm t);
ATerm dr_scope_1_1 (StrSL sl, StrCL q_105, ATerm p_105, ATerm t);
ATerm false_0_0 (StrSL sl, ATerm t);
ATerm true_0_0 (StrSL sl, ATerm t);
ATerm finally_2_0 (StrSL sl, StrCL k_103, StrCL l_103, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL z_102, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL i_99, ATerm t);
ATerm alltd_1_0 (StrSL sl, StrCL e_97, ATerm t);
ATerm oncetd_1_0 (StrSL sl, StrCL y_96, ATerm t);
ATerm downup2_2_0 (StrSL sl, StrCL a_96, StrCL b_96, ATerm t);
ATerm bottomup_1_0 (StrSL sl, StrCL u_95, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL p_95, ATerm t);
ATerm perror_0_0 (StrSL sl, ATerm t);
ATerm read_text_file_0_0 (StrSL sl, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm fopen_0_0 (StrSL sl, ATerm t);
ATerm stdin_stream_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm say_1_0 (StrSL sl, StrCL w_92, ATerm t);
ATerm debug_1_0 (StrSL sl, StrCL r_92, ATerm t);
ATerm write_to_string_0_0 (StrSL sl, ATerm t);
ATerm read_from_string_0_0 (StrSL sl, ATerm t);
ATerm read_from_stream_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm dec_0_0 (StrSL sl, ATerm t);
ATerm lt_0_0 (StrSL sl, ATerm t);
ATerm add_0_0 (StrSL sl, ATerm t);
ATerm is_int_0_0 (StrSL sl, ATerm t);
ATerm is_placeholder_0_0 (StrSL sl, ATerm t);
ATerm get_placeholder_0_0 (StrSL sl, ATerm t);
ATerm get_lines_0_0 (StrSL sl, ATerm t);
ATerm copy_char_0_0 (StrSL sl, ATerm t);
ATerm string_tokenize_0_0 (StrSL sl, ATerm t);
ATerm un_double_quote_0_0 (StrSL sl, ATerm t);
ATerm unescape_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm implode_string_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm whoami_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm q_79, ATerm s_79, ATerm t);
ATerm aux_ReplacePlaceholder_0_2 (StrSL sl, ATerm o_71, ATerm p_71, ATerm t);
static ATerm lifted247 (StrSL sl, ATerm t);
ATerm ReplacePlaceholder_0_0 (StrSL sl, ATerm t);
static ATerm lifted246 (StrSL sl, ATerm t);
ATerm bagof_ReplacePlaceholder_0_0 (StrSL sl, ATerm t);
static ATerm lifted245 (StrSL sl, ATerm t);
ATerm reverse_bagof_ReplacePlaceholder_1_0 (StrSL sl, StrCL w_70, ATerm t);
static ATerm lifted244 (StrSL sl, ATerm t);
ATerm once_ReplacePlaceholder_0_0 (StrSL sl, ATerm t);
static ATerm lifted243 (StrSL sl, ATerm t);
ATerm bigbagof_ReplacePlaceholder_0_0 (StrSL sl, ATerm t);
static ATerm lifted242 (StrSL sl, ATerm t);
ATerm chain_ReplacePlaceholder_0_0 (StrSL sl, ATerm t);
static ATerm lifted241 (StrSL sl, ATerm t);
ATerm bigchain_ReplacePlaceholder_0_0 (StrSL sl, ATerm t);
static ATerm lifted240 (StrSL sl, ATerm t);
ATerm fold_ReplacePlaceholder_1_0 (StrSL sl, StrCL o_68, ATerm t);
static ATerm lifted239 (StrSL sl, ATerm t);
ATerm bigfold_ReplacePlaceholder_1_0 (StrSL sl, StrCL y_67, ATerm t);
ATerm all_keys_ReplacePlaceholder_0_0 (StrSL sl, ATerm t);
ATerm break_ReplacePlaceholder_0_0 (StrSL sl, ATerm t);
ATerm break_to_label_ReplacePlaceholder_0_1 (StrSL sl, ATerm g_67, ATerm t);
ATerm break_bp_ReplacePlaceholder_0_0 (StrSL sl, ATerm t);
ATerm continue_ReplacePlaceholder_0_0 (StrSL sl, ATerm t);
ATerm continue_to_label_ReplacePlaceholder_0_1 (StrSL sl, ATerm l_65, ATerm t);
ATerm throw_ReplacePlaceholder_1_1 (StrSL sl, StrCL e_65, ATerm d_65, ATerm t);
ATerm undefine_ReplacePlaceholder_0_1 (StrSL sl, ATerm a_65, ATerm t);
ATerm innermost_scope_ReplacePlaceholder_1_0 (StrSL sl, StrCL x_64, ATerm t);
ATerm aux_get_comment_sorts_0_1 (StrSL sl, ATerm u_64, ATerm t);
static ATerm lifted238 (StrSL sl, ATerm t);
ATerm get_comment_sorts_0_0 (StrSL sl, ATerm t);
static ATerm lifted237 (StrSL sl, ATerm t);
ATerm bagof_get_comment_sorts_0_0 (StrSL sl, ATerm t);
static ATerm lifted236 (StrSL sl, ATerm t);
ATerm reverse_bagof_get_comment_sorts_1_0 (StrSL sl, StrCL a_64, ATerm t);
static ATerm lifted235 (StrSL sl, ATerm t);
ATerm once_get_comment_sorts_0_0 (StrSL sl, ATerm t);
static ATerm lifted234 (StrSL sl, ATerm t);
ATerm bigbagof_get_comment_sorts_0_0 (StrSL sl, ATerm t);
static ATerm lifted233 (StrSL sl, ATerm t);
ATerm chain_get_comment_sorts_0_0 (StrSL sl, ATerm t);
static ATerm lifted232 (StrSL sl, ATerm t);
ATerm bigchain_get_comment_sorts_0_0 (StrSL sl, ATerm t);
static ATerm lifted231 (StrSL sl, ATerm t);
ATerm fold_get_comment_sorts_1_0 (StrSL sl, StrCL z_61, ATerm t);
static ATerm lifted230 (StrSL sl, ATerm t);
ATerm bigfold_get_comment_sorts_1_0 (StrSL sl, StrCL n_61, ATerm t);
ATerm all_keys_get_comment_sorts_0_0 (StrSL sl, ATerm t);
ATerm break_get_comment_sorts_0_0 (StrSL sl, ATerm t);
ATerm break_to_label_get_comment_sorts_0_1 (StrSL sl, ATerm c_61, ATerm t);
ATerm break_bp_get_comment_sorts_0_0 (StrSL sl, ATerm t);
ATerm continue_get_comment_sorts_0_0 (StrSL sl, ATerm t);
ATerm continue_to_label_get_comment_sorts_0_1 (StrSL sl, ATerm t_60, ATerm t);
ATerm throw_get_comment_sorts_1_1 (StrSL sl, StrCL q_60, ATerm p_60, ATerm t);
ATerm undefine_get_comment_sorts_0_1 (StrSL sl, ATerm o_60, ATerm t);
ATerm innermost_scope_get_comment_sorts_1_0 (StrSL sl, StrCL g_60, ATerm t);
ATerm ast_1_0 (StrSL sl, StrCL f_60, ATerm t);
ATerm Snoc_2_0 (StrSL sl, StrCL d_60, StrCL e_60, ATerm t);
ATerm Conc_3_0 (StrSL sl, StrCL a_60, StrCL b_60, StrCL c_60, ATerm t);
ATerm Ins_1_0 (StrSL sl, StrCL z_59, ATerm t);
ATerm layout_1_0 (StrSL sl, StrCL y_59, ATerm t);
ATerm seq_1_0 (StrSL sl, StrCL x_59, ATerm t);
ATerm parametrized_sort_2_0 (StrSL sl, StrCL v_59, StrCL w_59, ATerm t);
ATerm character_1_0 (StrSL sl, StrCL u_59, ATerm t);
ATerm cons_1_0 (StrSL sl, StrCL t_59, ATerm t);
ATerm char_1_0 (StrSL sl, StrCL s_59, ATerm t);
ATerm cilit_1_0 (StrSL sl, StrCL r_59, ATerm t);
ATerm amb_1_0 (StrSL sl, StrCL q_59, ATerm t);
ATerm parsetree_2_0 (StrSL sl, StrCL o_59, StrCL p_59, ATerm t);
ATerm Comment_1_0 (StrSL sl, StrCL n_59, ATerm t);
ATerm Location_4_0 (StrSL sl, StrCL j_59, StrCL k_59, StrCL l_59, StrCL m_59, ATerm t);
ATerm meta_var_1_0 (StrSL sl, StrCL i_59, ATerm t);
ATerm meta_listvar_1_0 (StrSL sl, StrCL h_59, ATerm t);
ATerm FromApp_1_0 (StrSL sl, StrCL g_59, ATerm t);
ATerm FromStrategy_1_0 (StrSL sl, StrCL f_59, ATerm t);
ATerm FromMetaListExpr_1_0 (StrSL sl, StrCL e_59, ATerm t);
ATerm FromMetaExpr_1_0 (StrSL sl, StrCL d_59, ATerm t);
ATerm FromTerm_1_0 (StrSL sl, StrCL c_59, ATerm t);
ATerm ToStrategy_1_0 (StrSL sl, StrCL b_59, ATerm t);
ATerm ToBuild_1_0 (StrSL sl, StrCL a_59, ATerm t);
ATerm ToMetaListExpr_1_0 (StrSL sl, StrCL z_58, ATerm t);
ATerm ToMetaExpr_1_0 (StrSL sl, StrCL y_58, ATerm t);
ATerm ToTerm_1_0 (StrSL sl, StrCL x_58, ATerm t);
ATerm area_6_0 (StrSL sl, StrCL r_58, StrCL s_58, StrCL t_58, StrCL u_58, StrCL v_58, StrCL w_58, ATerm t);
ATerm area_in_file_2_0 (StrSL sl, StrCL p_58, StrCL q_58, ATerm t);
ATerm file_1_0 (StrSL sl, StrCL o_58, ATerm t);
ATerm localized_2_0 (StrSL sl, StrCL m_58, StrCL n_58, ATerm t);
ATerm subject_1_0 (StrSL sl, StrCL l_58, ATerm t);
ATerm fatal_2_0 (StrSL sl, StrCL j_58, StrCL k_58, ATerm t);
ATerm error_2_0 (StrSL sl, StrCL h_58, StrCL i_58, ATerm t);
ATerm warning_2_0 (StrSL sl, StrCL f_58, StrCL g_58, ATerm t);
ATerm info_2_0 (StrSL sl, StrCL d_58, StrCL e_58, ATerm t);
ATerm summary_3_0 (StrSL sl, StrCL a_58, StrCL b_58, StrCL c_58, ATerm t);
ATerm natural_1_0 (StrSL sl, StrCL z_57, ATerm t);
ATerm positive_1_0 (StrSL sl, StrCL y_57, ATerm t);
ATerm negative_1_0 (StrSL sl, StrCL x_57, ATerm t);
ATerm real_con_3_0 (StrSL sl, StrCL u_57, StrCL v_57, StrCL w_57, ATerm t);
ATerm int_1_0 (StrSL sl, StrCL t_57, ATerm t);
ATerm real_1_0 (StrSL sl, StrCL s_57, ATerm t);
ATerm fun_1_0 (StrSL sl, StrCL r_57, ATerm t);
ATerm appl_2_0 (StrSL sl, StrCL p_57, StrCL q_57, ATerm t);
ATerm placeholder_1_0 (StrSL sl, StrCL o_57, ATerm t);
ATerm annotated_2_0 (StrSL sl, StrCL m_57, StrCL n_57, ATerm t);
ATerm empty_grammar_0_0 (StrSL sl, ATerm t);
ATerm conc_grammars_2_0 (StrSL sl, StrCL k_57, StrCL l_57, ATerm t);
ATerm syntax_1_0 (StrSL sl, StrCL j_57, ATerm t);
ATerm lexical_syntax_1_0 (StrSL sl, StrCL i_57, ATerm t);
ATerm context_free_syntax_1_0 (StrSL sl, StrCL h_57, ATerm t);
ATerm variables_1_0 (StrSL sl, StrCL g_57, ATerm t);
ATerm lexical_variables_1_0 (StrSL sl, StrCL f_57, ATerm t);
ATerm imp_section_1_0 (StrSL sl, StrCL e_57, ATerm t);
ATerm priorities_1_0 (StrSL sl, StrCL d_57, ATerm t);
ATerm sorts_1_0 (StrSL sl, StrCL c_57, ATerm t);
ATerm kernel_start_symbols_1_0 (StrSL sl, StrCL b_57, ATerm t);
ATerm lexical_start_symbols_1_0 (StrSL sl, StrCL y_56, ATerm t);
ATerm context_free_start_symbols_1_0 (StrSL sl, StrCL x_56, ATerm t);
ATerm restrictions_1_0 (StrSL sl, StrCL w_56, ATerm t);
ATerm aliases_1_0 (StrSL sl, StrCL v_56, ATerm t);
ATerm lexical_priorities_1_0 (StrSL sl, StrCL t_56, ATerm t);
ATerm context_free_priorities_1_0 (StrSL sl, StrCL s_56, ATerm t);
ATerm lexical_restrictions_1_0 (StrSL sl, StrCL o_56, ATerm t);
ATerm context_free_restrictions_1_0 (StrSL sl, StrCL n_56, ATerm t);
ATerm term_1_0 (StrSL sl, StrCL m_56, ATerm t);
ATerm id_1_0 (StrSL sl, StrCL l_56, ATerm t);
ATerm bracket_0_0 (StrSL sl, ATerm t);
ATerm assoc_1_0 (StrSL sl, StrCL j_56, ATerm t);
ATerm reject_0_0 (StrSL sl, ATerm t);
ATerm prefer_0_0 (StrSL sl, ATerm t);
ATerm avoid_0_0 (StrSL sl, ATerm t);
ATerm attrs_1_0 (StrSL sl, StrCL i_56, ATerm t);
ATerm no_attrs_0_0 (StrSL sl, ATerm t);
ATerm prod_3_0 (StrSL sl, StrCL d_56, StrCL f_56, StrCL g_56, ATerm t);
ATerm prefix_fun_4_0 (StrSL sl, StrCL y_55, StrCL z_55, StrCL a_56, StrCL c_56, ATerm t);
ATerm cf_1_0 (StrSL sl, StrCL x_55, ATerm t);
ATerm lex_1_0 (StrSL sl, StrCL w_55, ATerm t);
ATerm varsym_1_0 (StrSL sl, StrCL v_55, ATerm t);
ATerm layout_0_0 (StrSL sl, ATerm t);
ATerm empty_0_0 (StrSL sl, ATerm t);
ATerm opt_1_0 (StrSL sl, StrCL u_55, ATerm t);
ATerm iter_1_0 (StrSL sl, StrCL t_55, ATerm t);
ATerm iter_star_1_0 (StrSL sl, StrCL s_55, ATerm t);
ATerm iter_sep_2_0 (StrSL sl, StrCL q_55, StrCL r_55, ATerm t);
ATerm iter_star_sep_2_0 (StrSL sl, StrCL o_55, StrCL p_55, ATerm t);
ATerm tuple_2_0 (StrSL sl, StrCL m_55, StrCL n_55, ATerm t);
ATerm func_2_0 (StrSL sl, StrCL k_55, StrCL l_55, ATerm t);
ATerm strategy_2_0 (StrSL sl, StrCL i_55, StrCL j_55, ATerm t);
ATerm lifting_1_0 (StrSL sl, StrCL h_55, ATerm t);
ATerm sort_1_0 (StrSL sl, StrCL e_55, ATerm t);
ATerm parameterized_sort_2_0 (StrSL sl, StrCL c_55, StrCL d_55, ATerm t);
ATerm lit_1_0 (StrSL sl, StrCL b_55, ATerm t);
ATerm ci_lit_1_0 (StrSL sl, StrCL a_55, ATerm t);
ATerm label_2_0 (StrSL sl, StrCL x_54, StrCL z_54, ATerm t);
ATerm start_0_0 (StrSL sl, ATerm t);
ATerm file_start_0_0 (StrSL sl, ATerm t);
ATerm renamings_1_0 (StrSL sl, StrCL w_54, ATerm t);
ATerm symbol_2_0 (StrSL sl, StrCL u_54, StrCL v_54, ATerm t);
ATerm production_2_0 (StrSL sl, StrCL r_54, StrCL s_54, ATerm t);
ATerm module_3_0 (StrSL sl, StrCL o_54, StrCL p_54, StrCL q_54, ATerm t);
ATerm exports_1_0 (StrSL sl, StrCL n_54, ATerm t);
ATerm hiddens_1_0 (StrSL sl, StrCL m_54, ATerm t);
ATerm unparameterized_1_0 (StrSL sl, StrCL l_54, ATerm t);
ATerm parameterized_2_0 (StrSL sl, StrCL h_54, StrCL k_54, ATerm t);
ATerm imports_1_0 (StrSL sl, StrCL g_54, ATerm t);
ATerm module_1_0 (StrSL sl, StrCL f_54, ATerm t);
ATerm renamed_module_2_0 (StrSL sl, StrCL d_54, StrCL e_54, ATerm t);
ATerm left_0_0 (StrSL sl, ATerm t);
ATerm right_0_0 (StrSL sl, ATerm t);
ATerm non_assoc_0_0 (StrSL sl, ATerm t);
ATerm assoc_0_0 (StrSL sl, ATerm t);
ATerm default_1_0 (StrSL sl, StrCL c_54, ATerm t);
ATerm with_arguments_2_0 (StrSL sl, StrCL a_54, StrCL b_54, ATerm t);
ATerm non_transitive_1_0 (StrSL sl, StrCL z_53, ATerm t);
ATerm simple_group_1_0 (StrSL sl, StrCL w_53, ATerm t);
ATerm prods_group_1_0 (StrSL sl, StrCL v_53, ATerm t);
ATerm assoc_group_2_0 (StrSL sl, StrCL t_53, StrCL u_53, ATerm t);
ATerm chain_1_0 (StrSL sl, StrCL s_53, ATerm t);
ATerm assoc_3_0 (StrSL sl, StrCL p_53, StrCL q_53, StrCL r_53, ATerm t);
ATerm numeric_1_0 (StrSL sl, StrCL m_53, ATerm t);
ATerm short_1_0 (StrSL sl, StrCL l_53, ATerm t);
ATerm top_0_0 (StrSL sl, ATerm t);
ATerm eof_0_0 (StrSL sl, ATerm t);
ATerm bot_0_0 (StrSL sl, ATerm t);
ATerm label__start_0_0 (StrSL sl, ATerm t);
ATerm range_2_0 (StrSL sl, StrCL j_53, StrCL k_53, ATerm t);
ATerm conc_2_0 (StrSL sl, StrCL h_53, StrCL i_53, ATerm t);
ATerm absent_0_0 (StrSL sl, ATerm t);
ATerm present_1_0 (StrSL sl, StrCL g_53, ATerm t);
ATerm simple_charclass_1_0 (StrSL sl, StrCL f_53, ATerm t);
ATerm comp_1_0 (StrSL sl, StrCL c_53, ATerm t);
ATerm diff_2_0 (StrSL sl, StrCL a_53, StrCL b_53, ATerm t);
ATerm isect_2_0 (StrSL sl, StrCL y_52, StrCL z_52, ATerm t);
ATerm union_2_0 (StrSL sl, StrCL w_52, StrCL x_52, ATerm t);
ATerm unquoted_fun_1_0 (StrSL sl, StrCL v_52, ATerm t);
ATerm quoted_fun_1_0 (StrSL sl, StrCL u_52, ATerm t);
ATerm quoted_1_0 (StrSL sl, StrCL r_52, ATerm t);
ATerm unquoted_1_0 (StrSL sl, StrCL q_52, ATerm t);
ATerm char_class_1_0 (StrSL sl, StrCL p_52, ATerm t);
ATerm seq_2_0 (StrSL sl, StrCL n_52, StrCL o_52, ATerm t);
ATerm single_1_0 (StrSL sl, StrCL m_52, ATerm t);
ATerm alt_2_0 (StrSL sl, StrCL k_52, StrCL l_52, ATerm t);
ATerm follow_2_0 (StrSL sl, StrCL g_52, StrCL h_52, ATerm t);
ATerm alias_2_0 (StrSL sl, StrCL e_52, StrCL f_52, ATerm t);
ATerm definition_1_0 (StrSL sl, StrCL d_52, ATerm t);
ATerm ParseTable_1_0 (StrSL sl, StrCL c_52, ATerm t);
ATerm AsFix2ME_0_0 (StrSL sl, ATerm t);
ATerm AsFix2_0_0 (StrSL sl, ATerm t);
ATerm RejectFilter_0_0 (StrSL sl, ATerm t);
ATerm PriorityFilter_0_0 (StrSL sl, ATerm t);
ATerm InjectionCountFilter_0_0 (StrSL sl, ATerm t);
ATerm EagernessFilter_0_0 (StrSL sl, ATerm t);
ATerm DirectEagernessFilter_0_0 (StrSL sl, ATerm t);
ATerm AssociativityFilter_0_0 (StrSL sl, ATerm t);
static ATerm lifted228 (StrSL sl, ATerm t);
ATerm asfix_remove_seq_0_0 (StrSL sl, ATerm t);
static ATerm lifted226 (StrSL sl, ATerm t);
ATerm asfix_flat_list_0_0 (StrSL sl, ATerm t);
static ATerm lifted224 (StrSL sl, ATerm t);
ATerm asfix_flat_injections_0_0 (StrSL sl, ATerm t);
static ATerm lifted221 (StrSL sl, ATerm t);
static ATerm lifted220 (StrSL sl, ATerm t);
ATerm asfix_replace_appl_0_0 (StrSL sl, ATerm t);
static ATerm lifted218 (StrSL sl, ATerm t);
ATerm asfix_flat_alt_0_0 (StrSL sl, ATerm t);
static ATerm lifted217 (StrSL sl, ATerm t);
static ATerm lifted216 (StrSL sl, ATerm t);
static ATerm lifted215 (StrSL sl, ATerm t);
ATerm asfix_remove_lit_0_0 (StrSL sl, ATerm t);
static ATerm lifted214 (StrSL sl, ATerm t);
static ATerm lifted213 (StrSL sl, ATerm t);
static ATerm lifted210 (StrSL sl, ATerm t);
static ATerm lifted209 (StrSL sl, ATerm t);
static ATerm lifted208 (StrSL sl, ATerm t);
static ATerm lifted207 (StrSL sl, ATerm t);
static ATerm lifted206 (StrSL sl, ATerm t);
ATerm asfix_remove_layout_0_0 (StrSL sl, ATerm t);
static ATerm lifted204 (StrSL sl, ATerm t);
static ATerm lifted202 (StrSL sl, ATerm t);
ATerm asfix_flat_lex_0_0 (StrSL sl, ATerm t);
static ATerm lifted200 (StrSL sl, ATerm t);
ATerm asfix_appl_to_sort_0_0 (StrSL sl, ATerm t);
ATerm implode_parsetree_0_0 (StrSL sl, ATerm t);
static ATerm lifted199 (StrSL sl, ATerm t);
static ATerm lifted198 (StrSL sl, ATerm t);
static ATerm z_51 (StrSL sl, ATerm t);
ATerm implode_asfix_1_0 (StrSL sl, StrCL y_51, ATerm t);
ATerm implode_asfix_skip_concrete_syntax_0_0 (StrSL sl, ATerm t);
ATerm implode_asfix_0_0 (StrSL sl, ATerm t);
static ATerm lifted194 (StrSL sl, ATerm t);
static ATerm lifted192 (StrSL sl, ATerm t);
static ATerm lifted191 (StrSL sl, ATerm t);
static ATerm lifted190 (StrSL sl, ATerm t);
static ATerm lifted189 (StrSL sl, ATerm t);
static ATerm lifted187 (StrSL sl, ATerm t);
static ATerm lifted186 (StrSL sl, ATerm t);
static ATerm lifted185 (StrSL sl, ATerm t);
static ATerm lifted184 (StrSL sl, ATerm t);
static ATerm u_51 (StrSL sl, ATerm t);
ATerm ImplodeAlternative_0_0 (StrSL sl, ATerm t);
ATerm Constr23_0_0 (StrSL sl, ATerm t);
ATerm Constr1_0_0 (StrSL sl, ATerm t);
static ATerm lifted183 (StrSL sl, ATerm t);
ATerm Constr0_0_0 (StrSL sl, ATerm t);
static ATerm lifted182 (StrSL sl, ATerm t);
ATerm CnsGeneric_0_0 (StrSL sl, ATerm t);
ATerm ConstrNil_0_0 (StrSL sl, ATerm t);
ATerm CnsNil_0_0 (StrSL sl, ATerm t);
ATerm Cns_0_0 (StrSL sl, ATerm t);
ATerm is_some_0_0 (StrSL sl, ATerm t);
ATerm is_none_0_0 (StrSL sl, ATerm t);
ATerm is_conc_0_0 (StrSL sl, ATerm t);
ATerm is_ins_0_0 (StrSL sl, ATerm t);
ATerm is_nil_0_0 (StrSL sl, ATerm t);
ATerm ReplConsConc_1_0 (StrSL sl, StrCL c_72, ATerm t);
ATerm ReplConsSome_1_0 (StrSL sl, StrCL p_48, ATerm t);
static ATerm v_47 (StrSL sl, ATerm t);
ATerm implode_constant_literal_0_1 (StrSL sl, ATerm u_47, ATerm t);
ATerm ReplConsIns_1_0 (StrSL sl, StrCL b_72, ATerm t);
ATerm ReplConsNone_1_0 (StrSL sl, StrCL c_47, ATerm t);
ATerm ReplConsNil_1_0 (StrSL sl, StrCL z_46, ATerm t);
static ATerm lifted181 (StrSL sl, ATerm t);
ATerm get_ast_pattern_0_0 (StrSL sl, ATerm t);
static ATerm lifted180 (StrSL sl, ATerm t);
static ATerm y_45 (StrSL sl, ATerm t);
static ATerm lifted179 (StrSL sl, ATerm t);
static ATerm lifted178 (StrSL sl, ATerm t);
ATerm ReplAstPattern_1_0 (StrSL sl, StrCL x_45, ATerm t);
static ATerm lifted177 (StrSL sl, ATerm t);
ATerm get_cons_0_0 (StrSL sl, ATerm t);
static ATerm lifted176 (StrSL sl, ATerm t);
ATerm ReplNamedCons_1_0 (StrSL sl, StrCL l_43, ATerm t);
ATerm ReplCons_1_0 (StrSL sl, StrCL g_43, ATerm t);
static ATerm lifted170 (StrSL sl, ATerm t);
static ATerm lifted174 (StrSL sl, ATerm t);
static ATerm f_43 (StrSL sl, ATerm t);
ATerm conc_to_cons_0_0 (StrSL sl, ATerm t);
ATerm CTC4_0_0 (StrSL sl, ATerm t);
ATerm CTC3_0_0 (StrSL sl, ATerm t);
ATerm CTC2_0_0 (StrSL sl, ATerm t);
ATerm CTC1_0_0 (StrSL sl, ATerm t);
ATerm CTC0_0_0 (StrSL sl, ATerm t);
static ATerm lifted168 (StrSL sl, ATerm t);
static ATerm lifted167 (StrSL sl, ATerm t);
ATerm asfix_yield_quote_acc_1_1 (StrSL sl, StrCL z_71, ATerm a_72, ATerm t);
static ATerm lifted165 (StrSL sl, ATerm t);
static ATerm lifted164 (StrSL sl, ATerm t);
static ATerm lifted163 (StrSL sl, ATerm t);
static ATerm lifted162 (StrSL sl, ATerm t);
static ATerm k_41 (StrSL sl, ATerm j_41, ATerm t);
ATerm asfix_yield_quote_0_0 (StrSL sl, ATerm t);
static ATerm lifted158 (StrSL sl, ATerm t);
ATerm yield_asfix_quotes_0_0 (StrSL sl, ATerm t);
static ATerm lifted155 (StrSL sl, ATerm t);
static ATerm lifted154 (StrSL sl, ATerm t);
static ATerm lifted152 (StrSL sl, ATerm t);
static ATerm lifted151 (StrSL sl, ATerm t);
static ATerm lifted150 (StrSL sl, ATerm t);
ATerm annotation_2_0 (StrSL sl, StrCL c_41, StrCL d_41, ATerm t);
static ATerm lifted148 (StrSL sl, ATerm t);
static ATerm lifted146 (StrSL sl, ATerm t);
static ATerm lifted145 (StrSL sl, ATerm t);
static ATerm lifted141 (StrSL sl, ATerm t);
static ATerm lifted140 (StrSL sl, ATerm t);
static ATerm lifted139 (StrSL sl, ATerm t);
static ATerm lifted138 (StrSL sl, ATerm t);
static ATerm x_40 (StrSL sl, ATerm t);
ATerm skip_concrete_1_0 (StrSL sl, StrCL w_40, ATerm t);
static ATerm lifted136 (StrSL sl, ATerm t);
ATerm asfix_is_sort_0_0 (StrSL sl, ATerm t);
static ATerm p_40 (StrSL sl, ATerm t);
ATerm is_injective_alt_0_0 (StrSL sl, ATerm t);
static ATerm lifted133 (StrSL sl, ATerm t);
static ATerm lifted132 (StrSL sl, ATerm t);
static ATerm lifted130 (StrSL sl, ATerm t);
static ATerm lifted128 (StrSL sl, ATerm t);
static ATerm lifted127 (StrSL sl, ATerm t);
static ATerm lifted125 (StrSL sl, ATerm t);
static ATerm lifted123 (StrSL sl, ATerm t);
static ATerm lifted122 (StrSL sl, ATerm t);
static ATerm lifted120 (StrSL sl, ATerm t);
static ATerm lifted118 (StrSL sl, ATerm t);
static ATerm h_40 (StrSL sl, ATerm t);
static ATerm lifted117 (StrSL sl, ATerm t);
static ATerm lifted116 (StrSL sl, ATerm t);
static ATerm lifted114 (StrSL sl, ATerm t);
static ATerm lifted113 (StrSL sl, ATerm t);
static ATerm lifted112 (StrSL sl, ATerm t);
static ATerm lifted111 (StrSL sl, ATerm t);
ATerm is_injection_0_0 (StrSL sl, ATerm t);
static ATerm lifted107 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
ATerm ImplodeInjection_0_0 (StrSL sl, ATerm t);
ATerm ImplodeLayout_0_0 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted103 (StrSL sl, ATerm t);
static ATerm lifted101 (StrSL sl, ATerm t);
static ATerm e_39 (StrSL sl, ATerm t);
ATerm rm_layout_0_0 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
ATerm is_layout_p__0_0 (StrSL sl, ATerm t);
ATerm is_layout_0_0 (StrSL sl, ATerm t);
ATerm is_ignorable_syntax_0_0 (StrSL sl, ATerm t);
ATerm asfix_yield_acc_1_1 (StrSL sl, StrCL w_71, ATerm y_71, ATerm t);
static ATerm i_38 (StrSL sl, ATerm h_38, ATerm t);
ATerm asfix_yield_appl_0_0 (StrSL sl, ATerm t);
ATerm ImplodeLexicalVar_0_0 (StrSL sl, ATerm t);
ATerm ImplodeLexicalListVar_0_0 (StrSL sl, ATerm t);
ATerm ImplodeLexical_0_0 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm u_37 (StrSL sl, ATerm t);
ATerm is_asfix_list_0_0 (StrSL sl, ATerm t);
ATerm is_list_sort_0_0 (StrSL sl, ATerm t);
ATerm ImplodeOptionalList_0_0 (StrSL sl, ATerm t);
static ATerm d_36 (StrSL sl, ATerm t);
static ATerm y_36 (StrSL sl, ATerm t);
ATerm FlatList_0_0 (StrSL sl, ATerm t);
ATerm ApplToSort_0_0 (StrSL sl, ATerm t);
ATerm ImplodeTuple_0_0 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
static ATerm a_35 (StrSL sl, ATerm t);
ATerm asfix_anno_yield_0_0 (StrSL sl, ATerm t);
ATerm asfix_anno_Kids_p__0_0 (StrSL sl, ATerm t);
ATerm asfix_anno_Kids_0_0 (StrSL sl, ATerm t);
ATerm asfix_anno_all_consnil_1_0 (StrSL sl, StrCL w_34, ATerm t);
static ATerm k_34 (StrSL sl, ATerm t);
ATerm asfix_anno_topdown_consnil_1_0 (StrSL sl, StrCL j_34, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
ATerm has_cons_0_0 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
ATerm fetch_comment_0_0 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
ATerm AnnoComment_0_0 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
ATerm asfix_anno_comments_0_1 (StrSL sl, ATerm f_33, ATerm t);
ATerm asfix_anno_comments_0_0 (StrSL sl, ATerm t);
ATerm asfix_anno_location_0_0 (StrSL sl, ATerm t);
ATerm asfix_anno_position_info_0_1 (StrSL sl, ATerm z_32, ATerm t);
ATerm strsglr_quote_cong_1_0 (StrSL sl, StrCL y_32, ATerm t);
ATerm strsglr_is_quote_cons_0_0 (StrSL sl, ATerm t);
ATerm strsglr_metavar_cong_1_0 (StrSL sl, StrCL x_32, ATerm t);
ATerm strsglr_antiquote_cong_1_0 (StrSL sl, StrCL w_32, ATerm t);
ATerm strsglr_is_antiquote_cons_0_0 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
ATerm report_area_0_4 (StrSL sl, ATerm q_30, ATerm r_30, ATerm s_30, ATerm t_30, ATerm t);
ATerm report_file_0_3 (StrSL sl, ATerm j_30, ATerm k_30, ATerm l_30, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
ATerm report_specific_error_0_2 (StrSL sl, ATerm k_29, ATerm l_29, ATerm t);
ATerm report_location_0_3 (StrSL sl, ATerm t_71, ATerm u_71, ATerm v_71, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
ATerm report_error_0_1 (StrSL sl, ATerm t_28, ATerm t);
ATerm report_error_0_2 (StrSL sl, ATerm r_28, ATerm s_28, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
ATerm report_error_summary_0_1 (StrSL sl, ATerm k_28, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted60 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm j_27 (StrSL sl, ATerm t);
ATerm pp_sdf_symbol_0_0 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
ATerm open_parse_table_report_errors_0_0 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
ATerm open_parse_table_wrap_report_errors_1_1 (StrSL sl, StrCL i_26, ATerm f_26, ATerm t);
ATerm is_parse_table_open_0_1 (StrSL sl, ATerm d_26, ATerm t);
ATerm close_parse_table_0_0 (StrSL sl, ATerm t);
ATerm open_parse_table_0_0 (StrSL sl, ATerm t);
ATerm is_parse_tree_0_0 (StrSL sl, ATerm t);
ATerm clear_parse_error_0_0 (StrSL sl, ATerm t);
ATerm get_parse_error_0_0 (StrSL sl, ATerm t);
ATerm path_of_xtc_file_0_0 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
ATerm parse_xtc_file_pt_2_3 (StrSL sl, StrCL s_25, StrCL t_25, ATerm m_25, ATerm n_25, ATerm o_25, ATerm t);
ATerm parse_xtc_file_pt_2_2 (StrSL sl, StrCL i_25, StrCL j_25, ATerm f_25, ATerm g_25, ATerm t);
ATerm parse_xtc_file_pt_2_1 (StrSL sl, StrCL z_24, StrCL a_25, ATerm x_24, ATerm t);
ATerm parse_xtc_file_pt_0_3 (StrSL sl, ATerm u_24, ATerm v_24, ATerm w_24, ATerm t);
ATerm parse_xtc_file_pt_0_2 (StrSL sl, ATerm p_24, ATerm q_24, ATerm t);
ATerm parse_xtc_file_pt_0_1 (StrSL sl, ATerm j_24, ATerm t);
ATerm parse_xtc_file_2_3 (StrSL sl, StrCL h_24, StrCL i_24, ATerm e_24, ATerm f_24, ATerm g_24, ATerm t);
ATerm parse_xtc_file_2_2 (StrSL sl, StrCL a_24, StrCL b_24, ATerm x_23, ATerm y_23, ATerm t);
ATerm parse_xtc_file_2_1 (StrSL sl, StrCL r_23, StrCL s_23, ATerm p_23, ATerm t);
ATerm parse_xtc_file_0_3 (StrSL sl, ATerm m_23, ATerm n_23, ATerm o_23, ATerm t);
ATerm parse_xtc_file_0_2 (StrSL sl, ATerm k_23, ATerm l_23, ATerm t);
ATerm parse_xtc_file_0_1 (StrSL sl, ATerm j_23, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
ATerm parse_file_pt_2_3 (StrSL sl, StrCL f_23, StrCL g_23, ATerm z_22, ATerm a_23, ATerm b_23, ATerm t);
ATerm parse_file_pt_2_2 (StrSL sl, StrCL x_22, StrCL y_22, ATerm u_22, ATerm v_22, ATerm t);
ATerm parse_file_pt_2_1 (StrSL sl, StrCL q_22, StrCL r_22, ATerm o_22, ATerm t);
ATerm parse_file_pt_0_3 (StrSL sl, ATerm l_22, ATerm m_22, ATerm n_22, ATerm t);
ATerm parse_file_pt_0_2 (StrSL sl, ATerm j_22, ATerm k_22, ATerm t);
ATerm parse_file_pt_0_1 (StrSL sl, ATerm i_22, ATerm t);
ATerm parse_file_2_3 (StrSL sl, StrCL g_22, StrCL h_22, ATerm d_22, ATerm e_22, ATerm f_22, ATerm t);
ATerm parse_file_2_2 (StrSL sl, StrCL b_22, StrCL c_22, ATerm y_21, ATerm z_21, ATerm t);
ATerm parse_file_2_1 (StrSL sl, StrCL u_21, StrCL v_21, ATerm s_21, ATerm t);
ATerm parse_file_0_3 (StrSL sl, ATerm p_21, ATerm q_21, ATerm r_21, ATerm t);
ATerm parse_file_0_2 (StrSL sl, ATerm n_21, ATerm o_21, ATerm t);
ATerm parse_file_0_1 (StrSL sl, ATerm m_21, ATerm t);
ATerm parse_stream_pt_1_3 (StrSL sl, StrCL l_21, ATerm f_21, ATerm g_21, ATerm h_21, ATerm t);
ATerm parse_stream_pt_1_2 (StrSL sl, StrCL c_21, ATerm a_21, ATerm b_21, ATerm t);
ATerm parse_stream_pt_1_1 (StrSL sl, StrCL v_20, ATerm u_20, ATerm t);
ATerm parse_stream_pt_0_3 (StrSL sl, ATerm r_20, ATerm s_20, ATerm t_20, ATerm t);
ATerm parse_stream_pt_0_2 (StrSL sl, ATerm p_20, ATerm q_20, ATerm t);
ATerm parse_stream_pt_0_1 (StrSL sl, ATerm o_20, ATerm t);
ATerm parse_stream_1_3 (StrSL sl, StrCL n_20, ATerm k_20, ATerm l_20, ATerm m_20, ATerm t);
ATerm parse_stream_1_2 (StrSL sl, StrCL h_20, ATerm f_20, ATerm g_20, ATerm t);
ATerm parse_stream_1_1 (StrSL sl, StrCL a_20, ATerm z_19, ATerm t);
ATerm parse_stream_0_3 (StrSL sl, ATerm w_19, ATerm x_19, ATerm y_19, ATerm t);
ATerm parse_stream_0_2 (StrSL sl, ATerm u_19, ATerm v_19, ATerm t);
ATerm parse_stream_0_1 (StrSL sl, ATerm t_19, ATerm t);
ATerm parse_string_pt_1_3 (StrSL sl, StrCL s_19, ATerm m_19, ATerm n_19, ATerm o_19, ATerm t);
ATerm parse_string_pt_1_2 (StrSL sl, StrCL j_19, ATerm h_19, ATerm i_19, ATerm t);
ATerm parse_string_pt_1_1 (StrSL sl, StrCL c_19, ATerm b_19, ATerm t);
ATerm parse_string_pt_0_3 (StrSL sl, ATerm y_18, ATerm z_18, ATerm a_19, ATerm t);
ATerm parse_string_pt_0_2 (StrSL sl, ATerm w_18, ATerm x_18, ATerm t);
ATerm parse_string_pt_0_1 (StrSL sl, ATerm v_18, ATerm t);
ATerm parse_string_1_3 (StrSL sl, StrCL u_18, ATerm r_18, ATerm s_18, ATerm t_18, ATerm t);
ATerm parse_string_1_2 (StrSL sl, StrCL o_18, ATerm m_18, ATerm n_18, ATerm t);
ATerm parse_string_1_1 (StrSL sl, StrCL h_18, ATerm g_18, ATerm t);
ATerm parse_string_0_3 (StrSL sl, ATerm d_18, ATerm e_18, ATerm f_18, ATerm t);
ATerm parse_string_0_2 (StrSL sl, ATerm b_18, ATerm c_18, ATerm t);
ATerm parse_string_0_1 (StrSL sl, ATerm a_18, ATerm t);
ATerm strsglr_perror_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm strsglr_report_parse_error_0_0 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
ATerm parse_xtc_file_report_errors_0_2 (StrSL sl, ATerm n_17, ATerm o_17, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm parse_xtc_file_pt_report_errors_0_2 (StrSL sl, ATerm i_17, ATerm j_17, ATerm t);
ATerm set_asfix2me_format_0_0 (StrSL sl, ATerm t);
ATerm set_asfix2_format_0_0 (StrSL sl, ATerm t);
ATerm set_parse_tree_format_0_0 (StrSL sl, ATerm t);
ATerm get_sglr_log_statistics_0_0 (StrSL sl, ATerm t);
ATerm set_sglr_log_statistics_1_0 (StrSL sl, StrCL e_17, ATerm t);
ATerm set_sglr_log_stream_0_0 (StrSL sl, ATerm t);
ATerm set_filtering_1_0 (StrSL sl, StrCL z_16, ATerm t);
ATerm get_ambiguity_is_error_0_0 (StrSL sl, ATerm t);
ATerm set_ambiguity_is_error_1_0 (StrSL sl, StrCL u_16, ATerm t);
ATerm set_default_sglr_config_0_0 (StrSL sl, ATerm t);
ATerm set_default_filters_0_0 (StrSL sl, ATerm t);
ATerm set_heuristic_filters_1_0 (StrSL sl, StrCL o_16, ATerm t);
ATerm get_filter_reject_0_0 (StrSL sl, ATerm t);
ATerm set_filter_reject_1_0 (StrSL sl, StrCL m_16, ATerm t);
ATerm get_filter_priority_0_0 (StrSL sl, ATerm t);
ATerm set_filter_priority_1_0 (StrSL sl, StrCL h_16, ATerm t);
ATerm get_filter_injection_count_0_0 (StrSL sl, ATerm t);
ATerm set_filter_injection_count_1_0 (StrSL sl, StrCL c_16, ATerm t);
ATerm get_filter_eagerness_0_0 (StrSL sl, ATerm t);
ATerm set_filter_eagerness_1_0 (StrSL sl, StrCL x_15, ATerm t);
ATerm get_filter_direct_eagerness_0_0 (StrSL sl, ATerm t);
ATerm set_filter_direct_eagerness_1_0 (StrSL sl, StrCL s_15, ATerm t);
ATerm aux_ReplacePlaceholder_0_2 (StrSL sl, ATerm o_71, ATerm p_71, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aux_ReplacePlaceholder_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_71 = NULL,s_71 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm1358 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1358) == ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue))))
goto fail524 ;
r_71 = ATgetArgument(t, 1);
}
else
goto fail524 ;
s_71 = t;
t = p_71;
t = s_71;
t = r_71;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail524 :
--__tracing_table_counter;
return(NULL);
}
ATerm ReplacePlaceholder_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ReplacePlaceholder_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm h_71 = NULL,i_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
sl_init_var(0, h_71);
sl_init_var(1, i_71);
{
struct str_closure h_213 = { &(lifted247) , &(frame) };
StrCL lifted247_cl = &(h_213);
if((i_71 == NULL))
{
i_71 = t;
}
else
if((i_71 != t))
goto fail522 ;
if((h_71 == NULL))
{
h_71 = t;
}
else
if((h_71 != t))
goto fail522 ;
l_71 = t;
n_71 = t;
t = term101;
m_71 = t;
t = n_71;
if((i_71 == NULL))
goto fail522 ;
else
{
t = dr_lookup_rule_0_2(sl, m_71, i_71, t);
if((t == NULL))
goto fail522 ;
}
k_71 = t;
t = l_71;
t = k_71;
t = fetch_elem_1_0(sl, lifted247_cl, t);
if((t == NULL))
goto fail522 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail522 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted247 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted247";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_201 = NULL,f_201 = NULL,j_201 = NULL,k_201 = NULL,g_201 = NULL,h_201 = NULL;
j_201 = t;
if((sl_readvar(0, sl) == NULL))
goto fail523 ;
else
{
t = sl_readvar(0, sl);
}
e_201 = t;
t = j_201;
k_201 = t;
if((sl_readvar(1, sl) == NULL))
goto fail523 ;
else
{
t = sl_readvar(1, sl);
}
f_201 = t;
t = k_201;
if(match_cons(t, sym__2))
{
ATerm trm1357 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1357) == ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue))))
goto fail523 ;
g_201 = ATgetArgument(t, 1);
}
else
goto fail523 ;
h_201 = t;
t = f_201;
t = h_201;
t = g_201;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail523 :
--__tracing_table_counter;
return(NULL);
}
ATerm bagof_ReplacePlaceholder_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bagof_ReplacePlaceholder_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm a_71 = NULL,b_71 = NULL,d_71 = NULL,e_71 = NULL;
sl_init_var(0, a_71);
sl_init_var(1, b_71);
{
struct str_closure g_213 = { &(lifted246) , &(frame) };
StrCL lifted246_cl = &(g_213);
if((b_71 == NULL))
{
b_71 = t;
}
else
if((b_71 != t))
goto fail520 ;
if((a_71 == NULL))
{
a_71 = t;
}
else
if((a_71 != t))
goto fail520 ;
e_71 = t;
{
ATerm trm1356 = t;
ATerm f_71 = NULL,g_71 = NULL;
g_71 = t;
t = term101;
f_71 = t;
t = g_71;
if((b_71 == NULL))
goto label432 ;
else
{
t = dr_lookup_rule_0_2(sl, f_71, b_71, t);
if((t == NULL))
goto label432 ;
}
goto label431 ;
label432 :
t = trm1356;
t = (ATerm) ATempty;
goto label431 ;
label431 :
;
d_71 = t;
t = e_71;
t = d_71;
t = filter_1_0(sl, lifted246_cl, t);
if((t == NULL))
goto fail520 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail520 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted246 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted246";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_200 = NULL,z_200 = NULL,c_201 = NULL,d_201 = NULL,a_201 = NULL,b_201 = NULL;
c_201 = t;
if((sl_readvar(0, sl) == NULL))
goto fail521 ;
else
{
t = sl_readvar(0, sl);
}
y_200 = t;
t = c_201;
d_201 = t;
if((sl_readvar(1, sl) == NULL))
goto fail521 ;
else
{
t = sl_readvar(1, sl);
}
z_200 = t;
t = d_201;
if(match_cons(t, sym__2))
{
ATerm trm1355 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1355) == ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue))))
goto fail521 ;
a_201 = ATgetArgument(t, 1);
}
else
goto fail521 ;
b_201 = t;
t = z_200;
t = b_201;
t = a_201;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail521 :
--__tracing_table_counter;
return(NULL);
}
ATerm reverse_bagof_ReplacePlaceholder_1_0 (StrSL sl, StrCL w_70, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "reverse_bagof_ReplacePlaceholder_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,x_70 = NULL;
sl_init_var(0, s_70);
sl_init_var(1, t_70);
{
struct str_closure d_213 = { &(lifted245) , &(frame) };
StrCL lifted245_cl = &(d_213);
if((t_70 == NULL))
{
t_70 = t;
}
else
if((t_70 != t))
goto fail518 ;
if((s_70 == NULL))
{
s_70 = t;
}
else
if((s_70 != t))
goto fail518 ;
x_70 = t;
{
ATerm trm1354 = t;
ATerm y_70 = NULL,z_70 = NULL;
z_70 = t;
t = term101;
y_70 = t;
t = z_70;
if((t_70 == NULL))
goto label430 ;
else
{
t = dr_lookup_rule_0_2(sl, y_70, t_70, t);
if((t == NULL))
goto label430 ;
}
goto label429 ;
label430 :
t = trm1354;
t = (ATerm) ATempty;
goto label429 ;
label429 :
;
u_70 = t;
t = x_70;
t = u_70;
t = reverse_filter_2_0(sl, lifted245_cl, w_70, t);
if((t == NULL))
goto fail518 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail518 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted245 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted245";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_200 = NULL,r_200 = NULL,u_200 = NULL,x_200 = NULL,s_200 = NULL,t_200 = NULL;
u_200 = t;
if((sl_readvar(0, sl) == NULL))
goto fail519 ;
else
{
t = sl_readvar(0, sl);
}
q_200 = t;
t = u_200;
x_200 = t;
if((sl_readvar(1, sl) == NULL))
goto fail519 ;
else
{
t = sl_readvar(1, sl);
}
r_200 = t;
t = x_200;
if(match_cons(t, sym__2))
{
ATerm trm1353 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1353) == ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue))))
goto fail519 ;
s_200 = ATgetArgument(t, 1);
}
else
goto fail519 ;
t_200 = t;
t = r_200;
t = t_200;
t = s_200;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail519 :
--__tracing_table_counter;
return(NULL);
}
ATerm once_ReplacePlaceholder_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "once_ReplacePlaceholder_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
sl_init_var(0, j_70);
sl_init_var(1, k_70);
sl_init_var(2, l_70);
if((k_70 == NULL))
{
k_70 = t;
}
else
if((k_70 != t))
goto fail516 ;
if((j_70 == NULL))
{
j_70 = t;
}
else
if((j_70 != t))
goto fail516 ;
p_70 = t;
r_70 = t;
t = term101;
q_70 = t;
t = r_70;
if((k_70 == NULL))
goto fail516 ;
else
{
t = dr_lookup_rule_pointer_0_2(sl, q_70, k_70, t);
if((t == NULL))
goto fail516 ;
}
if(match_cons(t, sym__3))
{
i_70 = ATgetArgument(t, 0);
n_70 = ATgetArgument(t, 1);
m_70 = ATgetArgument(t, 2);
}
else
goto fail516 ;
t = i_70;
{
struct str_closure c_213 = { &(lifted244) , &(frame) };
StrCL lifted244_cl = &(c_213);
t = split_fetch_1_0(sl, lifted244_cl, t);
if((t == NULL))
goto fail516 ;
t = conc_0_0(sl, t);
if((t == NULL))
goto fail516 ;
o_70 = t;
t = m_70;
t = hashtable_put_0_2(sl, n_70, o_70, t);
if((t == NULL))
goto fail516 ;
t = p_70;
if((l_70 == NULL))
goto fail516 ;
else
{
t = l_70;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail516 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted244 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted244";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_200 = NULL,k_200 = NULL,n_200 = NULL,p_200 = NULL,l_200 = NULL,m_200 = NULL;
n_200 = t;
if((sl_readvar(0, sl) == NULL))
goto fail517 ;
else
{
t = sl_readvar(0, sl);
}
j_200 = t;
t = n_200;
p_200 = t;
if((sl_readvar(1, sl) == NULL))
goto fail517 ;
else
{
t = sl_readvar(1, sl);
}
k_200 = t;
t = p_200;
if(match_cons(t, sym__2))
{
ATerm trm1352 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1352) == ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue))))
goto fail517 ;
l_200 = ATgetArgument(t, 1);
}
else
goto fail517 ;
m_200 = t;
t = k_200;
t = m_200;
t = l_200;
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = t;
}
else
if((sl_readvar(2, sl) != t))
goto fail517 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail517 :
--__tracing_table_counter;
return(NULL);
}
ATerm bigbagof_ReplacePlaceholder_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bigbagof_ReplacePlaceholder_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL;
sl_init_var(0, c_70);
sl_init_var(1, d_70);
{
struct str_closure z_212 = { &(lifted243) , &(frame) };
StrCL lifted243_cl = &(z_212);
if((d_70 == NULL))
{
d_70 = t;
}
else
if((d_70 != t))
goto fail514 ;
if((c_70 == NULL))
{
c_70 = t;
}
else
if((c_70 != t))
goto fail514 ;
f_70 = t;
{
ATerm trm1351 = t;
ATerm g_70 = NULL,h_70 = NULL;
h_70 = t;
t = term101;
g_70 = t;
t = h_70;
if((d_70 == NULL))
goto label428 ;
else
{
t = dr_lookup_all_rules_0_2(sl, g_70, d_70, t);
if((t == NULL))
goto label428 ;
}
goto label427 ;
label428 :
t = trm1351;
t = (ATerm) ATempty;
goto label427 ;
label427 :
;
e_70 = t;
t = f_70;
t = e_70;
t = filter_1_0(sl, lifted243_cl, t);
if((t == NULL))
goto fail514 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail514 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted243 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted243";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_200 = NULL,c_200 = NULL,h_200 = NULL,i_200 = NULL,d_200 = NULL,g_200 = NULL;
h_200 = t;
if((sl_readvar(0, sl) == NULL))
goto fail515 ;
else
{
t = sl_readvar(0, sl);
}
b_200 = t;
t = h_200;
i_200 = t;
if((sl_readvar(1, sl) == NULL))
goto fail515 ;
else
{
t = sl_readvar(1, sl);
}
c_200 = t;
t = i_200;
if(match_cons(t, sym__2))
{
ATerm trm1350 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1350) == ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue))))
goto fail515 ;
d_200 = ATgetArgument(t, 1);
}
else
goto fail515 ;
g_200 = t;
t = c_200;
t = g_200;
t = d_200;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail515 :
--__tracing_table_counter;
return(NULL);
}
ATerm chain_ReplacePlaceholder_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "chain_ReplacePlaceholder_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_69 = NULL,q_69 = NULL,v_69 = NULL,x_69 = NULL,w_69 = NULL,a_70 = NULL;
struct str_closure y_212 = { &(lifted242) , &(frame) };
StrCL lifted242_cl = &(y_212);
q_69 = t;
p_69 = t;
x_69 = t;
{
ATerm trm1349 = t;
ATerm y_69 = NULL,z_69 = NULL;
z_69 = t;
t = term101;
y_69 = t;
t = z_69;
t = dr_lookup_rule_0_2(sl, y_69, q_69, t);
if((t == NULL))
goto label426 ;
goto label425 ;
label426 :
t = trm1349;
t = (ATerm) ATempty;
goto label425 ;
label425 :
;
v_69 = t;
t = x_69;
a_70 = t;
w_69 = t;
t = (ATerm) ATmakeAppl(sym__2, v_69, w_69);
t = foldl_1_0(sl, lifted242_cl, t);
if((t == NULL))
goto fail512 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail512 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted242 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted242";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_69 = NULL,u_69 = NULL,b_70 = NULL,v_199 = NULL,w_199 = NULL,z_199 = NULL,a_200 = NULL,x_199 = NULL,y_199 = NULL;
if(match_cons(t, sym__2))
{
b_70 = ATgetArgument(t, 0);
{
ATerm trm1347 = ATgetArgument(t, 1);
t_69 = trm1347;
u_69 = trm1347;
}
}
else
goto fail513 ;
t = b_70;
z_199 = t;
t = u_69;
v_199 = t;
t = z_199;
a_200 = t;
t = t_69;
w_199 = t;
t = a_200;
if(match_cons(t, sym__2))
{
ATerm trm1348 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1348) == ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue))))
goto fail513 ;
x_199 = ATgetArgument(t, 1);
}
else
goto fail513 ;
y_199 = t;
t = w_199;
t = y_199;
t = x_199;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail513 :
--__tracing_table_counter;
return(NULL);
}
ATerm bigchain_ReplacePlaceholder_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bigchain_ReplacePlaceholder_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_69 = NULL,d_69 = NULL,i_69 = NULL,k_69 = NULL,j_69 = NULL,n_69 = NULL;
struct str_closure w_212 = { &(lifted241) , &(frame) };
StrCL lifted241_cl = &(w_212);
d_69 = t;
c_69 = t;
k_69 = t;
{
ATerm trm1346 = t;
ATerm l_69 = NULL,m_69 = NULL;
m_69 = t;
t = term101;
l_69 = t;
t = m_69;
t = dr_lookup_all_rules_0_2(sl, l_69, d_69, t);
if((t == NULL))
goto label424 ;
goto label423 ;
label424 :
t = trm1346;
t = (ATerm) ATempty;
goto label423 ;
label423 :
;
i_69 = t;
t = k_69;
n_69 = t;
j_69 = t;
t = (ATerm) ATmakeAppl(sym__2, i_69, j_69);
t = foldl_1_0(sl, lifted241_cl, t);
if((t == NULL))
goto fail510 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail510 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted241 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted241";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_69 = NULL,f_69 = NULL,o_69 = NULL,p_199 = NULL,q_199 = NULL,t_199 = NULL,u_199 = NULL,r_199 = NULL,s_199 = NULL;
if(match_cons(t, sym__2))
{
o_69 = ATgetArgument(t, 0);
{
ATerm trm1344 = ATgetArgument(t, 1);
e_69 = trm1344;
f_69 = trm1344;
}
}
else
goto fail511 ;
t = o_69;
t_199 = t;
t = f_69;
p_199 = t;
t = t_199;
u_199 = t;
t = e_69;
q_199 = t;
t = u_199;
if(match_cons(t, sym__2))
{
ATerm trm1345 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1345) == ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue))))
goto fail511 ;
r_199 = ATgetArgument(t, 1);
}
else
goto fail511 ;
s_199 = t;
t = q_199;
t = s_199;
t = r_199;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail511 :
--__tracing_table_counter;
return(NULL);
}
ATerm fold_ReplacePlaceholder_1_0 (StrSL sl, StrCL o_68, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fold_ReplacePlaceholder_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_68 = NULL,j_68 = NULL,s_68 = NULL,u_68 = NULL,t_68 = NULL,a_69 = NULL;
struct str_closure v_212 = { &(lifted240) , &(frame) };
StrCL lifted240_cl = &(v_212);
j_68 = t;
i_68 = t;
u_68 = t;
{
ATerm trm1343 = t;
ATerm v_68 = NULL,z_68 = NULL;
z_68 = t;
t = term101;
v_68 = t;
t = z_68;
t = dr_lookup_rule_0_2(sl, v_68, j_68, t);
if((t == NULL))
goto label422 ;
goto label421 ;
label422 :
t = trm1343;
t = (ATerm) ATempty;
goto label421 ;
label421 :
;
s_68 = t;
t = u_68;
a_69 = t;
t_68 = t;
t = (ATerm) ATmakeAppl(sym__2, s_68, t_68);
t = cl_fun(o_68)(cl_sl(o_68), lifted240_cl, t);
if((t == NULL))
goto fail508 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail508 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted240 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted240";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_68 = NULL,n_68 = NULL,b_69 = NULL,j_199 = NULL,k_199 = NULL,n_199 = NULL,o_199 = NULL,l_199 = NULL,m_199 = NULL;
if(match_cons(t, sym__2))
{
b_69 = ATgetArgument(t, 0);
{
ATerm trm1341 = ATgetArgument(t, 1);
k_68 = trm1341;
n_68 = trm1341;
}
}
else
goto fail509 ;
t = b_69;
n_199 = t;
t = n_68;
j_199 = t;
t = n_199;
o_199 = t;
t = k_68;
k_199 = t;
t = o_199;
if(match_cons(t, sym__2))
{
ATerm trm1342 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1342) == ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue))))
goto fail509 ;
l_199 = ATgetArgument(t, 1);
}
else
goto fail509 ;
m_199 = t;
t = k_199;
t = m_199;
t = l_199;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail509 :
--__tracing_table_counter;
return(NULL);
}
ATerm bigfold_ReplacePlaceholder_1_0 (StrSL sl, StrCL y_67, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bigfold_ReplacePlaceholder_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_67 = NULL,v_67 = NULL,z_67 = NULL,d_68 = NULL,a_68 = NULL,g_68 = NULL;
struct str_closure s_212 = { &(lifted239) , &(frame) };
StrCL lifted239_cl = &(s_212);
v_67 = t;
u_67 = t;
d_68 = t;
{
ATerm trm1340 = t;
ATerm e_68 = NULL,f_68 = NULL;
f_68 = t;
t = term101;
e_68 = t;
t = f_68;
t = dr_lookup_all_rules_0_2(sl, e_68, v_67, t);
if((t == NULL))
goto label420 ;
goto label419 ;
label420 :
t = trm1340;
t = (ATerm) ATempty;
goto label419 ;
label419 :
;
z_67 = t;
t = d_68;
g_68 = t;
a_68 = t;
t = (ATerm) ATmakeAppl(sym__2, z_67, a_68);
t = cl_fun(y_67)(cl_sl(y_67), lifted239_cl, t);
if((t == NULL))
goto fail506 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail506 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted239 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted239";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_67 = NULL,x_67 = NULL,h_68 = NULL,a_199 = NULL,b_199 = NULL,g_199 = NULL,h_199 = NULL,e_199 = NULL,f_199 = NULL;
if(match_cons(t, sym__2))
{
h_68 = ATgetArgument(t, 0);
{
ATerm trm1338 = ATgetArgument(t, 1);
w_67 = trm1338;
x_67 = trm1338;
}
}
else
goto fail507 ;
t = h_68;
g_199 = t;
t = x_67;
a_199 = t;
t = g_199;
h_199 = t;
t = w_67;
b_199 = t;
t = h_199;
if(match_cons(t, sym__2))
{
ATerm trm1339 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1339) == ATmakeSymbol("2a5f4656ffdaf33310e2f16c05cc9f4d", 0, ATtrue))))
goto fail507 ;
e_199 = ATgetArgument(t, 1);
}
else
goto fail507 ;
f_199 = t;
t = b_199;
t = f_199;
t = e_199;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail507 :
--__tracing_table_counter;
return(NULL);
}
ATerm all_keys_ReplacePlaceholder_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "all_keys_ReplacePlaceholder_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_67 = NULL,t_67 = NULL;
t_67 = t;
t = term101;
s_67 = t;
t = t_67;
t = dr_all_keys_0_1(sl, s_67, t);
if((t == NULL))
goto fail505 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail505 :
--__tracing_table_counter;
return(NULL);
}
ATerm break_ReplacePlaceholder_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "break_ReplacePlaceholder_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_67 = NULL,r_67 = NULL;
r_67 = t;
t = term101;
q_67 = t;
t = r_67;
t = dr_break_0_1(sl, q_67, t);
if((t == NULL))
goto fail504 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail504 :
--__tracing_table_counter;
return(NULL);
}
ATerm break_to_label_ReplacePlaceholder_0_1 (StrSL sl, ATerm g_67, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "break_to_label_ReplacePlaceholder_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_67 = NULL,n_67 = NULL;
n_67 = t;
t = term101;
m_67 = t;
t = n_67;
t = dr_break_0_2(sl, m_67, g_67, t);
if((t == NULL))
goto fail503 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail503 :
--__tracing_table_counter;
return(NULL);
}
ATerm break_bp_ReplacePlaceholder_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "break_bp_ReplacePlaceholder_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_66 = NULL,f_67 = NULL;
f_67 = t;
t = term101;
h_66 = t;
t = f_67;
t = dr_break_bp_0_1(sl, h_66, t);
if((t == NULL))
goto fail502 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail502 :
--__tracing_table_counter;
return(NULL);
}
ATerm continue_ReplacePlaceholder_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "continue_ReplacePlaceholder_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_65 = NULL,g_66 = NULL;
g_66 = t;
t = term101;
v_65 = t;
t = g_66;
t = dr_continue_0_1(sl, v_65, t);
if((t == NULL))
goto fail501 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail501 :
--__tracing_table_counter;
return(NULL);
}
ATerm continue_to_label_ReplacePlaceholder_0_1 (StrSL sl, ATerm l_65, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "continue_to_label_ReplacePlaceholder_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_65 = NULL,u_65 = NULL;
u_65 = t;
t = term101;
m_65 = t;
t = u_65;
t = dr_continue_0_2(sl, m_65, l_65, t);
if((t == NULL))
goto fail500 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail500 :
--__tracing_table_counter;
return(NULL);
}
ATerm throw_ReplacePlaceholder_1_1 (StrSL sl, StrCL e_65, ATerm d_65, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "throw_ReplacePlaceholder_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_65 = NULL,k_65 = NULL;
k_65 = t;
t = term101;
j_65 = t;
t = k_65;
t = dr_throw_1_2(sl, e_65, d_65, j_65, t);
if((t == NULL))
goto fail499 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail499 :
--__tracing_table_counter;
return(NULL);
}
ATerm undefine_ReplacePlaceholder_0_1 (StrSL sl, ATerm a_65, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "undefine_ReplacePlaceholder_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
goto fail498 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail498 :
--__tracing_table_counter;
return(NULL);
}
ATerm innermost_scope_ReplacePlaceholder_1_0 (StrSL sl, StrCL x_64, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "innermost_scope_ReplacePlaceholder_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_64 = NULL,z_64 = NULL;
z_64 = t;
t = term101;
y_64 = t;
t = z_64;
t = dr_get_first_scope_label_1_1(sl, x_64, y_64, t);
if((t == NULL))
goto fail497 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail497 :
--__tracing_table_counter;
return(NULL);
}
ATerm aux_get_comment_sorts_0_1 (StrSL sl, ATerm u_64, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aux_get_comment_sorts_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_64 = NULL,w_64 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm1337 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1337) == ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue))))
goto fail496 ;
v_64 = ATgetArgument(t, 1);
}
else
goto fail496 ;
w_64 = t;
t = u_64;
t = w_64;
t = v_64;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail496 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_comment_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_comment_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
sl_init_var(0, n_64);
{
struct str_closure r_212 = { &(lifted238) , &(frame) };
StrCL lifted238_cl = &(r_212);
if((n_64 == NULL))
{
n_64 = t;
}
else
if((n_64 != t))
goto fail494 ;
p_64 = t;
s_64 = t;
t = term83;
q_64 = t;
t = s_64;
t_64 = t;
t = (ATerm) ATinsert(ATempty, term85);
r_64 = t;
t = t_64;
t = dr_lookup_rule_0_2(sl, q_64, r_64, t);
if((t == NULL))
goto fail494 ;
o_64 = t;
t = p_64;
t = o_64;
t = fetch_elem_1_0(sl, lifted238_cl, t);
if((t == NULL))
goto fail494 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail494 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted238 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted238";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_198 = NULL,z_198 = NULL,x_198 = NULL,y_198 = NULL;
z_198 = t;
if((sl_readvar(0, sl) == NULL))
goto fail495 ;
else
{
t = sl_readvar(0, sl);
}
w_198 = t;
t = z_198;
if(match_cons(t, sym__2))
{
ATerm trm1336 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1336) == ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue))))
goto fail495 ;
x_198 = ATgetArgument(t, 1);
}
else
goto fail495 ;
y_198 = t;
t = w_198;
t = y_198;
t = x_198;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail495 :
--__tracing_table_counter;
return(NULL);
}
ATerm bagof_get_comment_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bagof_get_comment_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
sl_init_var(0, g_64);
{
struct str_closure o_212 = { &(lifted237) , &(frame) };
StrCL lifted237_cl = &(o_212);
if((g_64 == NULL))
{
g_64 = t;
}
else
if((g_64 != t))
goto fail492 ;
i_64 = t;
{
ATerm trm1335 = t;
ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL;
l_64 = t;
t = term83;
j_64 = t;
t = l_64;
m_64 = t;
t = (ATerm) ATinsert(ATempty, term85);
k_64 = t;
t = m_64;
t = dr_lookup_rule_0_2(sl, j_64, k_64, t);
if((t == NULL))
goto label418 ;
goto label417 ;
label418 :
t = trm1335;
t = (ATerm) ATempty;
goto label417 ;
label417 :
;
h_64 = t;
t = i_64;
t = h_64;
t = filter_1_0(sl, lifted237_cl, t);
if((t == NULL))
goto fail492 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail492 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted237 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted237";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_198 = NULL,v_198 = NULL,t_198 = NULL,u_198 = NULL;
v_198 = t;
if((sl_readvar(0, sl) == NULL))
goto fail493 ;
else
{
t = sl_readvar(0, sl);
}
s_198 = t;
t = v_198;
if(match_cons(t, sym__2))
{
ATerm trm1334 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1334) == ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue))))
goto fail493 ;
t_198 = ATgetArgument(t, 1);
}
else
goto fail493 ;
u_198 = t;
t = s_198;
t = u_198;
t = t_198;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail493 :
--__tracing_table_counter;
return(NULL);
}
ATerm reverse_bagof_get_comment_sorts_1_0 (StrSL sl, StrCL a_64, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "reverse_bagof_get_comment_sorts_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm y_63 = NULL,z_63 = NULL,b_64 = NULL;
sl_init_var(0, y_63);
{
struct str_closure n_212 = { &(lifted236) , &(frame) };
StrCL lifted236_cl = &(n_212);
if((y_63 == NULL))
{
y_63 = t;
}
else
if((y_63 != t))
goto fail490 ;
b_64 = t;
{
ATerm trm1333 = t;
ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL;
e_64 = t;
t = term83;
c_64 = t;
t = e_64;
f_64 = t;
t = (ATerm) ATinsert(ATempty, term85);
d_64 = t;
t = f_64;
t = dr_lookup_rule_0_2(sl, c_64, d_64, t);
if((t == NULL))
goto label416 ;
goto label415 ;
label416 :
t = trm1333;
t = (ATerm) ATempty;
goto label415 ;
label415 :
;
z_63 = t;
t = b_64;
t = z_63;
t = reverse_filter_2_0(sl, lifted236_cl, a_64, t);
if((t == NULL))
goto fail490 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail490 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted236 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted236";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_198 = NULL,r_198 = NULL,p_198 = NULL,q_198 = NULL;
r_198 = t;
if((sl_readvar(0, sl) == NULL))
goto fail491 ;
else
{
t = sl_readvar(0, sl);
}
o_198 = t;
t = r_198;
if(match_cons(t, sym__2))
{
ATerm trm1332 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1332) == ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue))))
goto fail491 ;
p_198 = ATgetArgument(t, 1);
}
else
goto fail491 ;
q_198 = t;
t = o_198;
t = q_198;
t = p_198;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail491 :
--__tracing_table_counter;
return(NULL);
}
ATerm once_get_comment_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "once_get_comment_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL;
sl_init_var(0, o_63);
sl_init_var(1, p_63);
if((o_63 == NULL))
{
o_63 = t;
}
else
if((o_63 != t))
goto fail488 ;
t_63 = t;
w_63 = t;
t = term83;
u_63 = t;
t = w_63;
x_63 = t;
t = (ATerm) ATinsert(ATempty, term85);
v_63 = t;
t = x_63;
t = dr_lookup_rule_pointer_0_2(sl, u_63, v_63, t);
if((t == NULL))
goto fail488 ;
if(match_cons(t, sym__3))
{
n_63 = ATgetArgument(t, 0);
r_63 = ATgetArgument(t, 1);
q_63 = ATgetArgument(t, 2);
}
else
goto fail488 ;
t = n_63;
{
struct str_closure k_212 = { &(lifted235) , &(frame) };
StrCL lifted235_cl = &(k_212);
t = split_fetch_1_0(sl, lifted235_cl, t);
if((t == NULL))
goto fail488 ;
t = conc_0_0(sl, t);
if((t == NULL))
goto fail488 ;
s_63 = t;
t = q_63;
t = hashtable_put_0_2(sl, r_63, s_63, t);
if((t == NULL))
goto fail488 ;
t = t_63;
if((p_63 == NULL))
goto fail488 ;
else
{
t = p_63;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail488 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted235 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted235";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_198 = NULL,n_198 = NULL,l_198 = NULL,m_198 = NULL;
n_198 = t;
if((sl_readvar(0, sl) == NULL))
goto fail489 ;
else
{
t = sl_readvar(0, sl);
}
k_198 = t;
t = n_198;
if(match_cons(t, sym__2))
{
ATerm trm1331 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1331) == ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue))))
goto fail489 ;
l_198 = ATgetArgument(t, 1);
}
else
goto fail489 ;
m_198 = t;
t = k_198;
t = m_198;
t = l_198;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail489 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail489 :
--__tracing_table_counter;
return(NULL);
}
ATerm bigbagof_get_comment_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bigbagof_get_comment_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL;
sl_init_var(0, g_63);
{
struct str_closure j_212 = { &(lifted234) , &(frame) };
StrCL lifted234_cl = &(j_212);
if((g_63 == NULL))
{
g_63 = t;
}
else
if((g_63 != t))
goto fail486 ;
i_63 = t;
{
ATerm trm1330 = t;
ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL;
l_63 = t;
t = term83;
j_63 = t;
t = l_63;
m_63 = t;
t = (ATerm) ATinsert(ATempty, term85);
k_63 = t;
t = m_63;
t = dr_lookup_all_rules_0_2(sl, j_63, k_63, t);
if((t == NULL))
goto label414 ;
goto label413 ;
label414 :
t = trm1330;
t = (ATerm) ATempty;
goto label413 ;
label413 :
;
h_63 = t;
t = i_63;
t = h_63;
t = filter_1_0(sl, lifted234_cl, t);
if((t == NULL))
goto fail486 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail486 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted234 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted234";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_198 = NULL,j_198 = NULL,h_198 = NULL,i_198 = NULL;
j_198 = t;
if((sl_readvar(0, sl) == NULL))
goto fail487 ;
else
{
t = sl_readvar(0, sl);
}
g_198 = t;
t = j_198;
if(match_cons(t, sym__2))
{
ATerm trm1329 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1329) == ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue))))
goto fail487 ;
h_198 = ATgetArgument(t, 1);
}
else
goto fail487 ;
i_198 = t;
t = g_198;
t = i_198;
t = h_198;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail487 :
--__tracing_table_counter;
return(NULL);
}
ATerm chain_get_comment_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "chain_get_comment_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_62 = NULL,w_62 = NULL,y_62 = NULL,x_62 = NULL,e_63 = NULL;
struct str_closure f_212 = { &(lifted233) , &(frame) };
StrCL lifted233_cl = &(f_212);
u_62 = t;
y_62 = t;
{
ATerm trm1328 = t;
ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
c_63 = t;
t = term83;
a_63 = t;
t = c_63;
d_63 = t;
t = (ATerm) ATinsert(ATempty, term85);
b_63 = t;
t = d_63;
t = dr_lookup_rule_0_2(sl, a_63, b_63, t);
if((t == NULL))
goto label412 ;
goto label411 ;
label412 :
t = trm1328;
t = (ATerm) ATempty;
goto label411 ;
label411 :
;
w_62 = t;
t = y_62;
e_63 = t;
x_62 = t;
t = (ATerm) ATmakeAppl(sym__2, w_62, x_62);
t = foldl_1_0(sl, lifted233_cl, t);
if((t == NULL))
goto fail484 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail484 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted233 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted233";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_62 = NULL,f_63 = NULL,c_198 = NULL,f_198 = NULL,d_198 = NULL,e_198 = NULL;
if(match_cons(t, sym__2))
{
f_63 = ATgetArgument(t, 0);
{
ATerm trm1326 = ATgetArgument(t, 1);
v_62 = trm1326;
}
}
else
goto fail485 ;
t = f_63;
f_198 = t;
t = v_62;
c_198 = t;
t = f_198;
if(match_cons(t, sym__2))
{
ATerm trm1327 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1327) == ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue))))
goto fail485 ;
d_198 = ATgetArgument(t, 1);
}
else
goto fail485 ;
e_198 = t;
t = c_198;
t = e_198;
t = d_198;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail485 :
--__tracing_table_counter;
return(NULL);
}
ATerm bigchain_get_comment_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bigchain_get_comment_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_62 = NULL,l_62 = NULL,n_62 = NULL,m_62 = NULL,s_62 = NULL;
struct str_closure e_212 = { &(lifted232) , &(frame) };
StrCL lifted232_cl = &(e_212);
j_62 = t;
n_62 = t;
{
ATerm trm1325 = t;
ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL;
q_62 = t;
t = term83;
o_62 = t;
t = q_62;
r_62 = t;
t = (ATerm) ATinsert(ATempty, term85);
p_62 = t;
t = r_62;
t = dr_lookup_all_rules_0_2(sl, o_62, p_62, t);
if((t == NULL))
goto label410 ;
goto label409 ;
label410 :
t = trm1325;
t = (ATerm) ATempty;
goto label409 ;
label409 :
;
l_62 = t;
t = n_62;
s_62 = t;
m_62 = t;
t = (ATerm) ATmakeAppl(sym__2, l_62, m_62);
t = foldl_1_0(sl, lifted232_cl, t);
if((t == NULL))
goto fail482 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail482 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted232 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted232";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_62 = NULL,t_62 = NULL,w_197 = NULL,b_198 = NULL,x_197 = NULL,y_197 = NULL;
if(match_cons(t, sym__2))
{
t_62 = ATgetArgument(t, 0);
{
ATerm trm1323 = ATgetArgument(t, 1);
k_62 = trm1323;
}
}
else
goto fail483 ;
t = t_62;
b_198 = t;
t = k_62;
w_197 = t;
t = b_198;
if(match_cons(t, sym__2))
{
ATerm trm1324 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1324) == ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue))))
goto fail483 ;
x_197 = ATgetArgument(t, 1);
}
else
goto fail483 ;
y_197 = t;
t = w_197;
t = y_197;
t = x_197;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail483 :
--__tracing_table_counter;
return(NULL);
}
ATerm fold_get_comment_sorts_1_0 (StrSL sl, StrCL z_61, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fold_get_comment_sorts_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_61 = NULL,a_62 = NULL,c_62 = NULL,b_62 = NULL,h_62 = NULL;
struct str_closure a_212 = { &(lifted231) , &(frame) };
StrCL lifted231_cl = &(a_212);
x_61 = t;
c_62 = t;
{
ATerm trm1322 = t;
ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
f_62 = t;
t = term83;
d_62 = t;
t = f_62;
g_62 = t;
t = (ATerm) ATinsert(ATempty, term85);
e_62 = t;
t = g_62;
t = dr_lookup_rule_0_2(sl, d_62, e_62, t);
if((t == NULL))
goto label408 ;
goto label407 ;
label408 :
t = trm1322;
t = (ATerm) ATempty;
goto label407 ;
label407 :
;
a_62 = t;
t = c_62;
h_62 = t;
b_62 = t;
t = (ATerm) ATmakeAppl(sym__2, a_62, b_62);
t = cl_fun(z_61)(cl_sl(z_61), lifted231_cl, t);
if((t == NULL))
goto fail480 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail480 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted231 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted231";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_61 = NULL,i_62 = NULL,r_197 = NULL,u_197 = NULL,s_197 = NULL,t_197 = NULL;
if(match_cons(t, sym__2))
{
i_62 = ATgetArgument(t, 0);
{
ATerm trm1320 = ATgetArgument(t, 1);
y_61 = trm1320;
}
}
else
goto fail481 ;
t = i_62;
u_197 = t;
t = y_61;
r_197 = t;
t = u_197;
if(match_cons(t, sym__2))
{
ATerm trm1321 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1321) == ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue))))
goto fail481 ;
s_197 = ATgetArgument(t, 1);
}
else
goto fail481 ;
t_197 = t;
t = r_197;
t = t_197;
t = s_197;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail481 :
--__tracing_table_counter;
return(NULL);
}
ATerm bigfold_get_comment_sorts_1_0 (StrSL sl, StrCL n_61, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bigfold_get_comment_sorts_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_61 = NULL,o_61 = NULL,q_61 = NULL,p_61 = NULL,v_61 = NULL;
struct str_closure z_211 = { &(lifted230) , &(frame) };
StrCL lifted230_cl = &(z_211);
l_61 = t;
q_61 = t;
{
ATerm trm1319 = t;
ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
t_61 = t;
t = term83;
r_61 = t;
t = t_61;
u_61 = t;
t = (ATerm) ATinsert(ATempty, term85);
s_61 = t;
t = u_61;
t = dr_lookup_all_rules_0_2(sl, r_61, s_61, t);
if((t == NULL))
goto label406 ;
goto label405 ;
label406 :
t = trm1319;
t = (ATerm) ATempty;
goto label405 ;
label405 :
;
o_61 = t;
t = q_61;
v_61 = t;
p_61 = t;
t = (ATerm) ATmakeAppl(sym__2, o_61, p_61);
t = cl_fun(n_61)(cl_sl(n_61), lifted230_cl, t);
if((t == NULL))
goto fail478 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail478 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted230 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted230";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_61 = NULL,w_61 = NULL,n_197 = NULL,q_197 = NULL,o_197 = NULL,p_197 = NULL;
if(match_cons(t, sym__2))
{
w_61 = ATgetArgument(t, 0);
{
ATerm trm1317 = ATgetArgument(t, 1);
m_61 = trm1317;
}
}
else
goto fail479 ;
t = w_61;
q_197 = t;
t = m_61;
n_197 = t;
t = q_197;
if(match_cons(t, sym__2))
{
ATerm trm1318 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm1318) == ATmakeSymbol("23d882c22fa0c375fa7fed688bc1ba19", 0, ATtrue))))
goto fail479 ;
o_197 = ATgetArgument(t, 1);
}
else
goto fail479 ;
p_197 = t;
t = n_197;
t = p_197;
t = o_197;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail479 :
--__tracing_table_counter;
return(NULL);
}
ATerm all_keys_get_comment_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "all_keys_get_comment_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_61 = NULL,i_61 = NULL;
i_61 = t;
t = term83;
h_61 = t;
t = i_61;
t = dr_all_keys_0_1(sl, h_61, t);
if((t == NULL))
goto fail477 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail477 :
--__tracing_table_counter;
return(NULL);
}
ATerm break_get_comment_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "break_get_comment_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_61 = NULL,g_61 = NULL;
g_61 = t;
t = term83;
f_61 = t;
t = g_61;
t = dr_break_0_1(sl, f_61, t);
if((t == NULL))
goto fail476 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail476 :
--__tracing_table_counter;
return(NULL);
}
ATerm break_to_label_get_comment_sorts_0_1 (StrSL sl, ATerm c_61, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "break_to_label_get_comment_sorts_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_61 = NULL,e_61 = NULL;
e_61 = t;
t = term83;
d_61 = t;
t = e_61;
t = dr_break_0_2(sl, d_61, c_61, t);
if((t == NULL))
goto fail475 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail475 :
--__tracing_table_counter;
return(NULL);
}
ATerm break_bp_get_comment_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "break_bp_get_comment_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_61 = NULL,b_61 = NULL;
b_61 = t;
t = term83;
a_61 = t;
t = b_61;
t = dr_break_bp_0_1(sl, a_61, t);
if((t == NULL))
goto fail474 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail474 :
--__tracing_table_counter;
return(NULL);
}
ATerm continue_get_comment_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "continue_get_comment_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_60 = NULL,z_60 = NULL;
z_60 = t;
t = term83;
y_60 = t;
t = z_60;
t = dr_continue_0_1(sl, y_60, t);
if((t == NULL))
goto fail473 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail473 :
--__tracing_table_counter;
return(NULL);
}
ATerm continue_to_label_get_comment_sorts_0_1 (StrSL sl, ATerm t_60, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "continue_to_label_get_comment_sorts_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_60 = NULL,v_60 = NULL;
v_60 = t;
t = term83;
u_60 = t;
t = v_60;
t = dr_continue_0_2(sl, u_60, t_60, t);
if((t == NULL))
goto fail472 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail472 :
--__tracing_table_counter;
return(NULL);
}
ATerm throw_get_comment_sorts_1_1 (StrSL sl, StrCL q_60, ATerm p_60, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "throw_get_comment_sorts_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_60 = NULL,s_60 = NULL;
s_60 = t;
t = term83;
r_60 = t;
t = s_60;
t = dr_throw_1_2(sl, q_60, p_60, r_60, t);
if((t == NULL))
goto fail471 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail471 :
--__tracing_table_counter;
return(NULL);
}
ATerm undefine_get_comment_sorts_0_1 (StrSL sl, ATerm o_60, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "undefine_get_comment_sorts_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
goto fail470 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail470 :
--__tracing_table_counter;
return(NULL);
}
ATerm innermost_scope_get_comment_sorts_1_0 (StrSL sl, StrCL g_60, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "innermost_scope_get_comment_sorts_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_60 = NULL,i_60 = NULL;
i_60 = t;
t = term83;
h_60 = t;
t = i_60;
t = dr_get_first_scope_label_1_1(sl, g_60, h_60, t);
if((t == NULL))
goto fail469 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail469 :
--__tracing_table_counter;
return(NULL);
}
ATerm ast_1_0 (StrSL sl, StrCL f_60, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ast_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_178 = NULL,i_178 = NULL,k_178 = NULL;
ATerm trm1316;
trm1316 = (ATerm) ATgetAnnotations(t);
if((trm1316 == NULL))
trm1316 = (ATerm) ATempty;
if(match_cons(t, sym_ast_1))
{
i_178 = ATgetArgument(t, 0);
}
else
goto fail468 ;
j_178 = trm1316;
t = i_178;
t = cl_fun(f_60)(cl_sl(f_60), t);
if((t == NULL))
goto fail468 ;
k_178 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ast_1, k_178), j_178);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail468 :
--__tracing_table_counter;
return(NULL);
}
ATerm Snoc_2_0 (StrSL sl, StrCL d_60, StrCL e_60, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Snoc_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_178 = NULL,d_178 = NULL,e_178 = NULL,g_178 = NULL,h_178 = NULL;
ATerm trm1315;
trm1315 = (ATerm) ATgetAnnotations(t);
if((trm1315 == NULL))
trm1315 = (ATerm) ATempty;
if(match_cons(t, sym_Snoc_2))
{
d_178 = ATgetArgument(t, 0);
e_178 = ATgetArgument(t, 1);
}
else
goto fail467 ;
f_178 = trm1315;
t = d_178;
t = cl_fun(d_60)(cl_sl(d_60), t);
if((t == NULL))
goto fail467 ;
g_178 = t;
t = e_178;
t = cl_fun(e_60)(cl_sl(e_60), t);
if((t == NULL))
goto fail467 ;
h_178 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Snoc_2, g_178, h_178), f_178);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail467 :
--__tracing_table_counter;
return(NULL);
}
ATerm Conc_3_0 (StrSL sl, StrCL a_60, StrCL b_60, StrCL c_60, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Conc_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_177 = NULL,w_177 = NULL,x_177 = NULL,y_177 = NULL,a_178 = NULL,b_178 = NULL,c_178 = NULL;
ATerm trm1314;
trm1314 = (ATerm) ATgetAnnotations(t);
if((trm1314 == NULL))
trm1314 = (ATerm) ATempty;
if(match_cons(t, sym_Conc_3))
{
w_177 = ATgetArgument(t, 0);
x_177 = ATgetArgument(t, 1);
y_177 = ATgetArgument(t, 2);
}
else
goto fail466 ;
z_177 = trm1314;
t = w_177;
t = cl_fun(a_60)(cl_sl(a_60), t);
if((t == NULL))
goto fail466 ;
a_178 = t;
t = x_177;
t = cl_fun(b_60)(cl_sl(b_60), t);
if((t == NULL))
goto fail466 ;
b_178 = t;
t = y_177;
t = cl_fun(c_60)(cl_sl(c_60), t);
if((t == NULL))
goto fail466 ;
c_178 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Conc_3, a_178, b_178, c_178), z_177);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail466 :
--__tracing_table_counter;
return(NULL);
}
ATerm Ins_1_0 (StrSL sl, StrCL z_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Ins_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_177 = NULL,t_177 = NULL,v_177 = NULL;
ATerm trm1313;
trm1313 = (ATerm) ATgetAnnotations(t);
if((trm1313 == NULL))
trm1313 = (ATerm) ATempty;
if(match_cons(t, sym_Ins_1))
{
t_177 = ATgetArgument(t, 0);
}
else
goto fail465 ;
u_177 = trm1313;
t = t_177;
t = cl_fun(z_59)(cl_sl(z_59), t);
if((t == NULL))
goto fail465 ;
v_177 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Ins_1, v_177), u_177);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail465 :
--__tracing_table_counter;
return(NULL);
}
ATerm layout_1_0 (StrSL sl, StrCL y_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "layout_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_177 = NULL,q_177 = NULL,s_177 = NULL;
ATerm trm1312;
trm1312 = (ATerm) ATgetAnnotations(t);
if((trm1312 == NULL))
trm1312 = (ATerm) ATempty;
if(match_cons(t, sym_layout_1))
{
q_177 = ATgetArgument(t, 0);
}
else
goto fail464 ;
r_177 = trm1312;
t = q_177;
t = cl_fun(y_59)(cl_sl(y_59), t);
if((t == NULL))
goto fail464 ;
s_177 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_layout_1, s_177), r_177);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail464 :
--__tracing_table_counter;
return(NULL);
}
ATerm seq_1_0 (StrSL sl, StrCL x_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "seq_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_177 = NULL,n_177 = NULL,p_177 = NULL;
ATerm trm1311;
trm1311 = (ATerm) ATgetAnnotations(t);
if((trm1311 == NULL))
trm1311 = (ATerm) ATempty;
if(match_cons(t, sym_seq_1))
{
n_177 = ATgetArgument(t, 0);
}
else
goto fail463 ;
o_177 = trm1311;
t = n_177;
t = cl_fun(x_59)(cl_sl(x_59), t);
if((t == NULL))
goto fail463 ;
p_177 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_seq_1, p_177), o_177);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail463 :
--__tracing_table_counter;
return(NULL);
}
ATerm parametrized_sort_2_0 (StrSL sl, StrCL v_59, StrCL w_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parametrized_sort_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_177 = NULL,i_177 = NULL,j_177 = NULL,l_177 = NULL,m_177 = NULL;
ATerm trm1310;
trm1310 = (ATerm) ATgetAnnotations(t);
if((trm1310 == NULL))
trm1310 = (ATerm) ATempty;
if(match_cons(t, sym_parametrized_sort_2))
{
i_177 = ATgetArgument(t, 0);
j_177 = ATgetArgument(t, 1);
}
else
goto fail462 ;
k_177 = trm1310;
t = i_177;
t = cl_fun(v_59)(cl_sl(v_59), t);
if((t == NULL))
goto fail462 ;
l_177 = t;
t = j_177;
t = cl_fun(w_59)(cl_sl(w_59), t);
if((t == NULL))
goto fail462 ;
m_177 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_parametrized_sort_2, l_177, m_177), k_177);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail462 :
--__tracing_table_counter;
return(NULL);
}
ATerm character_1_0 (StrSL sl, StrCL u_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "character_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_177 = NULL,c_177 = NULL,e_177 = NULL;
ATerm trm1309;
trm1309 = (ATerm) ATgetAnnotations(t);
if((trm1309 == NULL))
trm1309 = (ATerm) ATempty;
if(match_cons(t, sym_character_1))
{
c_177 = ATgetArgument(t, 0);
}
else
goto fail461 ;
d_177 = trm1309;
t = c_177;
t = cl_fun(u_59)(cl_sl(u_59), t);
if((t == NULL))
goto fail461 ;
e_177 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_character_1, e_177), d_177);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail461 :
--__tracing_table_counter;
return(NULL);
}
ATerm cons_1_0 (StrSL sl, StrCL t_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "cons_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_177 = NULL,z_176 = NULL,b_177 = NULL;
ATerm trm1308;
trm1308 = (ATerm) ATgetAnnotations(t);
if((trm1308 == NULL))
trm1308 = (ATerm) ATempty;
if(match_cons(t, sym_cons_1))
{
z_176 = ATgetArgument(t, 0);
}
else
goto fail460 ;
a_177 = trm1308;
t = z_176;
t = cl_fun(t_59)(cl_sl(t_59), t);
if((t == NULL))
goto fail460 ;
b_177 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cons_1, b_177), a_177);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail460 :
--__tracing_table_counter;
return(NULL);
}
ATerm char_1_0 (StrSL sl, StrCL s_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "char_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_176 = NULL,w_176 = NULL,y_176 = NULL;
ATerm trm1307;
trm1307 = (ATerm) ATgetAnnotations(t);
if((trm1307 == NULL))
trm1307 = (ATerm) ATempty;
if(match_cons(t, sym_char_1))
{
w_176 = ATgetArgument(t, 0);
}
else
goto fail459 ;
x_176 = trm1307;
t = w_176;
t = cl_fun(s_59)(cl_sl(s_59), t);
if((t == NULL))
goto fail459 ;
y_176 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_char_1, y_176), x_176);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail459 :
--__tracing_table_counter;
return(NULL);
}
ATerm cilit_1_0 (StrSL sl, StrCL r_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "cilit_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_176 = NULL,t_176 = NULL,v_176 = NULL;
ATerm trm1306;
trm1306 = (ATerm) ATgetAnnotations(t);
if((trm1306 == NULL))
trm1306 = (ATerm) ATempty;
if(match_cons(t, sym_cilit_1))
{
t_176 = ATgetArgument(t, 0);
}
else
goto fail458 ;
u_176 = trm1306;
t = t_176;
t = cl_fun(r_59)(cl_sl(r_59), t);
if((t == NULL))
goto fail458 ;
v_176 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cilit_1, v_176), u_176);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail458 :
--__tracing_table_counter;
return(NULL);
}
ATerm amb_1_0 (StrSL sl, StrCL q_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "amb_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_176 = NULL,q_176 = NULL,s_176 = NULL;
ATerm trm1305;
trm1305 = (ATerm) ATgetAnnotations(t);
if((trm1305 == NULL))
trm1305 = (ATerm) ATempty;
if(match_cons(t, sym_amb_1))
{
q_176 = ATgetArgument(t, 0);
}
else
goto fail457 ;
r_176 = trm1305;
t = q_176;
t = cl_fun(q_59)(cl_sl(q_59), t);
if((t == NULL))
goto fail457 ;
s_176 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_amb_1, s_176), r_176);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail457 :
--__tracing_table_counter;
return(NULL);
}
ATerm parsetree_2_0 (StrSL sl, StrCL o_59, StrCL p_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parsetree_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_176 = NULL,l_176 = NULL,m_176 = NULL,o_176 = NULL,p_176 = NULL;
ATerm trm1304;
trm1304 = (ATerm) ATgetAnnotations(t);
if((trm1304 == NULL))
trm1304 = (ATerm) ATempty;
if(match_cons(t, sym_parsetree_2))
{
l_176 = ATgetArgument(t, 0);
m_176 = ATgetArgument(t, 1);
}
else
goto fail456 ;
n_176 = trm1304;
t = l_176;
t = cl_fun(o_59)(cl_sl(o_59), t);
if((t == NULL))
goto fail456 ;
o_176 = t;
t = m_176;
t = cl_fun(p_59)(cl_sl(p_59), t);
if((t == NULL))
goto fail456 ;
p_176 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, o_176, p_176), n_176);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail456 :
--__tracing_table_counter;
return(NULL);
}
ATerm Comment_1_0 (StrSL sl, StrCL n_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Comment_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_176 = NULL,i_176 = NULL,k_176 = NULL;
ATerm trm1303;
trm1303 = (ATerm) ATgetAnnotations(t);
if((trm1303 == NULL))
trm1303 = (ATerm) ATempty;
if(match_cons(t, sym_Comment_1))
{
i_176 = ATgetArgument(t, 0);
}
else
goto fail455 ;
j_176 = trm1303;
t = i_176;
t = cl_fun(n_59)(cl_sl(n_59), t);
if((t == NULL))
goto fail455 ;
k_176 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Comment_1, k_176), j_176);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail455 :
--__tracing_table_counter;
return(NULL);
}
ATerm Location_4_0 (StrSL sl, StrCL j_59, StrCL k_59, StrCL l_59, StrCL m_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Location_4_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_176 = NULL,z_175 = NULL,a_176 = NULL,b_176 = NULL,c_176 = NULL,e_176 = NULL,f_176 = NULL,g_176 = NULL,h_176 = NULL;
ATerm trm1302;
trm1302 = (ATerm) ATgetAnnotations(t);
if((trm1302 == NULL))
trm1302 = (ATerm) ATempty;
if(match_cons(t, sym_Location_4))
{
z_175 = ATgetArgument(t, 0);
a_176 = ATgetArgument(t, 1);
b_176 = ATgetArgument(t, 2);
c_176 = ATgetArgument(t, 3);
}
else
goto fail454 ;
d_176 = trm1302;
t = z_175;
t = cl_fun(j_59)(cl_sl(j_59), t);
if((t == NULL))
goto fail454 ;
e_176 = t;
t = a_176;
t = cl_fun(k_59)(cl_sl(k_59), t);
if((t == NULL))
goto fail454 ;
f_176 = t;
t = b_176;
t = cl_fun(l_59)(cl_sl(l_59), t);
if((t == NULL))
goto fail454 ;
g_176 = t;
t = c_176;
t = cl_fun(m_59)(cl_sl(m_59), t);
if((t == NULL))
goto fail454 ;
h_176 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_Location_4, e_176, f_176, g_176, h_176), d_176);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail454 :
--__tracing_table_counter;
return(NULL);
}
ATerm meta_var_1_0 (StrSL sl, StrCL i_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "meta_var_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_175 = NULL,w_175 = NULL,y_175 = NULL;
ATerm trm1301;
trm1301 = (ATerm) ATgetAnnotations(t);
if((trm1301 == NULL))
trm1301 = (ATerm) ATempty;
if(match_cons(t, sym_meta_var_1))
{
w_175 = ATgetArgument(t, 0);
}
else
goto fail453 ;
x_175 = trm1301;
t = w_175;
t = cl_fun(i_59)(cl_sl(i_59), t);
if((t == NULL))
goto fail453 ;
y_175 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_meta_var_1, y_175), x_175);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail453 :
--__tracing_table_counter;
return(NULL);
}
ATerm meta_listvar_1_0 (StrSL sl, StrCL h_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "meta_listvar_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_175 = NULL,t_175 = NULL,v_175 = NULL;
ATerm trm1300;
trm1300 = (ATerm) ATgetAnnotations(t);
if((trm1300 == NULL))
trm1300 = (ATerm) ATempty;
if(match_cons(t, sym_meta_listvar_1))
{
t_175 = ATgetArgument(t, 0);
}
else
goto fail452 ;
u_175 = trm1300;
t = t_175;
t = cl_fun(h_59)(cl_sl(h_59), t);
if((t == NULL))
goto fail452 ;
v_175 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_meta_listvar_1, v_175), u_175);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail452 :
--__tracing_table_counter;
return(NULL);
}
ATerm FromApp_1_0 (StrSL sl, StrCL g_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FromApp_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_175 = NULL,q_175 = NULL,s_175 = NULL;
ATerm trm1299;
trm1299 = (ATerm) ATgetAnnotations(t);
if((trm1299 == NULL))
trm1299 = (ATerm) ATempty;
if(match_cons(t, sym_FromApp_1))
{
q_175 = ATgetArgument(t, 0);
}
else
goto fail451 ;
r_175 = trm1299;
t = q_175;
t = cl_fun(g_59)(cl_sl(g_59), t);
if((t == NULL))
goto fail451 ;
s_175 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FromApp_1, s_175), r_175);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail451 :
--__tracing_table_counter;
return(NULL);
}
ATerm FromStrategy_1_0 (StrSL sl, StrCL f_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FromStrategy_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_175 = NULL,n_175 = NULL,p_175 = NULL;
ATerm trm1298;
trm1298 = (ATerm) ATgetAnnotations(t);
if((trm1298 == NULL))
trm1298 = (ATerm) ATempty;
if(match_cons(t, sym_FromStrategy_1))
{
n_175 = ATgetArgument(t, 0);
}
else
goto fail450 ;
o_175 = trm1298;
t = n_175;
t = cl_fun(f_59)(cl_sl(f_59), t);
if((t == NULL))
goto fail450 ;
p_175 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FromStrategy_1, p_175), o_175);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail450 :
--__tracing_table_counter;
return(NULL);
}
ATerm FromMetaListExpr_1_0 (StrSL sl, StrCL e_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FromMetaListExpr_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_175 = NULL,d_175 = NULL,m_175 = NULL;
ATerm trm1297;
trm1297 = (ATerm) ATgetAnnotations(t);
if((trm1297 == NULL))
trm1297 = (ATerm) ATempty;
if(match_cons(t, sym_FromMetaListExpr_1))
{
d_175 = ATgetArgument(t, 0);
}
else
goto fail449 ;
l_175 = trm1297;
t = d_175;
t = cl_fun(e_59)(cl_sl(e_59), t);
if((t == NULL))
goto fail449 ;
m_175 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FromMetaListExpr_1, m_175), l_175);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail449 :
--__tracing_table_counter;
return(NULL);
}
ATerm FromMetaExpr_1_0 (StrSL sl, StrCL d_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FromMetaExpr_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_174 = NULL,y_174 = NULL,c_175 = NULL;
ATerm trm1296;
trm1296 = (ATerm) ATgetAnnotations(t);
if((trm1296 == NULL))
trm1296 = (ATerm) ATempty;
if(match_cons(t, sym_FromMetaExpr_1))
{
y_174 = ATgetArgument(t, 0);
}
else
goto fail448 ;
z_174 = trm1296;
t = y_174;
t = cl_fun(d_59)(cl_sl(d_59), t);
if((t == NULL))
goto fail448 ;
c_175 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FromMetaExpr_1, c_175), z_174);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail448 :
--__tracing_table_counter;
return(NULL);
}
ATerm FromTerm_1_0 (StrSL sl, StrCL c_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FromTerm_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_174 = NULL,v_174 = NULL,x_174 = NULL;
ATerm trm1295;
trm1295 = (ATerm) ATgetAnnotations(t);
if((trm1295 == NULL))
trm1295 = (ATerm) ATempty;
if(match_cons(t, sym_FromTerm_1))
{
v_174 = ATgetArgument(t, 0);
}
else
goto fail447 ;
w_174 = trm1295;
t = v_174;
t = cl_fun(c_59)(cl_sl(c_59), t);
if((t == NULL))
goto fail447 ;
x_174 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FromTerm_1, x_174), w_174);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail447 :
--__tracing_table_counter;
return(NULL);
}
ATerm ToStrategy_1_0 (StrSL sl, StrCL b_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ToStrategy_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_174 = NULL,s_174 = NULL,u_174 = NULL;
ATerm trm1294;
trm1294 = (ATerm) ATgetAnnotations(t);
if((trm1294 == NULL))
trm1294 = (ATerm) ATempty;
if(match_cons(t, sym_ToStrategy_1))
{
s_174 = ATgetArgument(t, 0);
}
else
goto fail446 ;
t_174 = trm1294;
t = s_174;
t = cl_fun(b_59)(cl_sl(b_59), t);
if((t == NULL))
goto fail446 ;
u_174 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToStrategy_1, u_174), t_174);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail446 :
--__tracing_table_counter;
return(NULL);
}
ATerm ToBuild_1_0 (StrSL sl, StrCL a_59, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ToBuild_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_174 = NULL,p_174 = NULL,r_174 = NULL;
ATerm trm1293;
trm1293 = (ATerm) ATgetAnnotations(t);
if((trm1293 == NULL))
trm1293 = (ATerm) ATempty;
if(match_cons(t, sym_ToBuild_1))
{
p_174 = ATgetArgument(t, 0);
}
else
goto fail445 ;
q_174 = trm1293;
t = p_174;
t = cl_fun(a_59)(cl_sl(a_59), t);
if((t == NULL))
goto fail445 ;
r_174 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToBuild_1, r_174), q_174);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail445 :
--__tracing_table_counter;
return(NULL);
}
ATerm ToMetaListExpr_1_0 (StrSL sl, StrCL z_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ToMetaListExpr_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_174 = NULL,m_174 = NULL,o_174 = NULL;
ATerm trm1292;
trm1292 = (ATerm) ATgetAnnotations(t);
if((trm1292 == NULL))
trm1292 = (ATerm) ATempty;
if(match_cons(t, sym_ToMetaListExpr_1))
{
m_174 = ATgetArgument(t, 0);
}
else
goto fail444 ;
n_174 = trm1292;
t = m_174;
t = cl_fun(z_58)(cl_sl(z_58), t);
if((t == NULL))
goto fail444 ;
o_174 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToMetaListExpr_1, o_174), n_174);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail444 :
--__tracing_table_counter;
return(NULL);
}
ATerm ToMetaExpr_1_0 (StrSL sl, StrCL y_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ToMetaExpr_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_174 = NULL,j_174 = NULL,l_174 = NULL;
ATerm trm1291;
trm1291 = (ATerm) ATgetAnnotations(t);
if((trm1291 == NULL))
trm1291 = (ATerm) ATempty;
if(match_cons(t, sym_ToMetaExpr_1))
{
j_174 = ATgetArgument(t, 0);
}
else
goto fail443 ;
k_174 = trm1291;
t = j_174;
t = cl_fun(y_58)(cl_sl(y_58), t);
if((t == NULL))
goto fail443 ;
l_174 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToMetaExpr_1, l_174), k_174);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail443 :
--__tracing_table_counter;
return(NULL);
}
ATerm ToTerm_1_0 (StrSL sl, StrCL x_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ToTerm_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_174 = NULL,g_174 = NULL,i_174 = NULL;
ATerm trm1290;
trm1290 = (ATerm) ATgetAnnotations(t);
if((trm1290 == NULL))
trm1290 = (ATerm) ATempty;
if(match_cons(t, sym_ToTerm_1))
{
g_174 = ATgetArgument(t, 0);
}
else
goto fail442 ;
h_174 = trm1290;
t = g_174;
t = cl_fun(x_58)(cl_sl(x_58), t);
if((t == NULL))
goto fail442 ;
i_174 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToTerm_1, i_174), h_174);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail442 :
--__tracing_table_counter;
return(NULL);
}
ATerm area_6_0 (StrSL sl, StrCL r_58, StrCL s_58, StrCL t_58, StrCL u_58, StrCL v_58, StrCL w_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "area_6_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_173 = NULL,t_173 = NULL,u_173 = NULL,v_173 = NULL,w_173 = NULL,x_173 = NULL,y_173 = NULL,a_174 = NULL,b_174 = NULL,c_174 = NULL,d_174 = NULL,e_174 = NULL,f_174 = NULL;
ATerm trm1289;
trm1289 = (ATerm) ATgetAnnotations(t);
if((trm1289 == NULL))
trm1289 = (ATerm) ATempty;
if(match_cons(t, sym_area_6))
{
t_173 = ATgetArgument(t, 0);
u_173 = ATgetArgument(t, 1);
v_173 = ATgetArgument(t, 2);
w_173 = ATgetArgument(t, 3);
x_173 = ATgetArgument(t, 4);
y_173 = ATgetArgument(t, 5);
}
else
goto fail441 ;
z_173 = trm1289;
t = t_173;
t = cl_fun(r_58)(cl_sl(r_58), t);
if((t == NULL))
goto fail441 ;
a_174 = t;
t = u_173;
t = cl_fun(s_58)(cl_sl(s_58), t);
if((t == NULL))
goto fail441 ;
b_174 = t;
t = v_173;
t = cl_fun(t_58)(cl_sl(t_58), t);
if((t == NULL))
goto fail441 ;
c_174 = t;
t = w_173;
t = cl_fun(u_58)(cl_sl(u_58), t);
if((t == NULL))
goto fail441 ;
d_174 = t;
t = x_173;
t = cl_fun(v_58)(cl_sl(v_58), t);
if((t == NULL))
goto fail441 ;
e_174 = t;
t = y_173;
t = cl_fun(w_58)(cl_sl(w_58), t);
if((t == NULL))
goto fail441 ;
f_174 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_area_6, a_174, b_174, c_174, d_174, e_174, f_174), z_173);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail441 :
--__tracing_table_counter;
return(NULL);
}
ATerm area_in_file_2_0 (StrSL sl, StrCL p_58, StrCL q_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "area_in_file_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_173 = NULL,o_173 = NULL,p_173 = NULL,r_173 = NULL,s_173 = NULL;
ATerm trm1288;
trm1288 = (ATerm) ATgetAnnotations(t);
if((trm1288 == NULL))
trm1288 = (ATerm) ATempty;
if(match_cons(t, sym_area_in_file_2))
{
o_173 = ATgetArgument(t, 0);
p_173 = ATgetArgument(t, 1);
}
else
goto fail440 ;
q_173 = trm1288;
t = o_173;
t = cl_fun(p_58)(cl_sl(p_58), t);
if((t == NULL))
goto fail440 ;
r_173 = t;
t = p_173;
t = cl_fun(q_58)(cl_sl(q_58), t);
if((t == NULL))
goto fail440 ;
s_173 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_area_in_file_2, r_173, s_173), q_173);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail440 :
--__tracing_table_counter;
return(NULL);
}
ATerm file_1_0 (StrSL sl, StrCL o_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "file_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_173 = NULL,l_173 = NULL,n_173 = NULL;
ATerm trm1287;
trm1287 = (ATerm) ATgetAnnotations(t);
if((trm1287 == NULL))
trm1287 = (ATerm) ATempty;
if(match_cons(t, sym_file_1))
{
l_173 = ATgetArgument(t, 0);
}
else
goto fail439 ;
m_173 = trm1287;
t = l_173;
t = cl_fun(o_58)(cl_sl(o_58), t);
if((t == NULL))
goto fail439 ;
n_173 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_file_1, n_173), m_173);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail439 :
--__tracing_table_counter;
return(NULL);
}
ATerm localized_2_0 (StrSL sl, StrCL m_58, StrCL n_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "localized_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_173 = NULL,g_173 = NULL,h_173 = NULL,j_173 = NULL,k_173 = NULL;
ATerm trm1286;
trm1286 = (ATerm) ATgetAnnotations(t);
if((trm1286 == NULL))
trm1286 = (ATerm) ATempty;
if(match_cons(t, sym_localized_2))
{
g_173 = ATgetArgument(t, 0);
h_173 = ATgetArgument(t, 1);
}
else
goto fail438 ;
i_173 = trm1286;
t = g_173;
t = cl_fun(m_58)(cl_sl(m_58), t);
if((t == NULL))
goto fail438 ;
j_173 = t;
t = h_173;
t = cl_fun(n_58)(cl_sl(n_58), t);
if((t == NULL))
goto fail438 ;
k_173 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_localized_2, j_173, k_173), i_173);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail438 :
--__tracing_table_counter;
return(NULL);
}
ATerm subject_1_0 (StrSL sl, StrCL l_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "subject_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_173 = NULL,d_173 = NULL,f_173 = NULL;
ATerm trm1285;
trm1285 = (ATerm) ATgetAnnotations(t);
if((trm1285 == NULL))
trm1285 = (ATerm) ATempty;
if(match_cons(t, sym_subject_1))
{
d_173 = ATgetArgument(t, 0);
}
else
goto fail437 ;
e_173 = trm1285;
t = d_173;
t = cl_fun(l_58)(cl_sl(l_58), t);
if((t == NULL))
goto fail437 ;
f_173 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_subject_1, f_173), e_173);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail437 :
--__tracing_table_counter;
return(NULL);
}
ATerm fatal_2_0 (StrSL sl, StrCL j_58, StrCL k_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fatal_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_173 = NULL,t_172 = NULL,u_172 = NULL,b_173 = NULL,c_173 = NULL;
ATerm trm1284;
trm1284 = (ATerm) ATgetAnnotations(t);
if((trm1284 == NULL))
trm1284 = (ATerm) ATempty;
if(match_cons(t, sym_fatal_2))
{
t_172 = ATgetArgument(t, 0);
u_172 = ATgetArgument(t, 1);
}
else
goto fail436 ;
a_173 = trm1284;
t = t_172;
t = cl_fun(j_58)(cl_sl(j_58), t);
if((t == NULL))
goto fail436 ;
b_173 = t;
t = u_172;
t = cl_fun(k_58)(cl_sl(k_58), t);
if((t == NULL))
goto fail436 ;
c_173 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_fatal_2, b_173, c_173), a_173);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail436 :
--__tracing_table_counter;
return(NULL);
}
ATerm error_2_0 (StrSL sl, StrCL h_58, StrCL i_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "error_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_172 = NULL,o_172 = NULL,p_172 = NULL,r_172 = NULL,s_172 = NULL;
ATerm trm1283;
trm1283 = (ATerm) ATgetAnnotations(t);
if((trm1283 == NULL))
trm1283 = (ATerm) ATempty;
if(match_cons(t, sym_error_2))
{
o_172 = ATgetArgument(t, 0);
p_172 = ATgetArgument(t, 1);
}
else
goto fail435 ;
q_172 = trm1283;
t = o_172;
t = cl_fun(h_58)(cl_sl(h_58), t);
if((t == NULL))
goto fail435 ;
r_172 = t;
t = p_172;
t = cl_fun(i_58)(cl_sl(i_58), t);
if((t == NULL))
goto fail435 ;
s_172 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_error_2, r_172, s_172), q_172);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail435 :
--__tracing_table_counter;
return(NULL);
}
ATerm warning_2_0 (StrSL sl, StrCL f_58, StrCL g_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "warning_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_172 = NULL,j_172 = NULL,k_172 = NULL,m_172 = NULL,n_172 = NULL;
ATerm trm1282;
trm1282 = (ATerm) ATgetAnnotations(t);
if((trm1282 == NULL))
trm1282 = (ATerm) ATempty;
if(match_cons(t, sym_warning_2))
{
j_172 = ATgetArgument(t, 0);
k_172 = ATgetArgument(t, 1);
}
else
goto fail434 ;
l_172 = trm1282;
t = j_172;
t = cl_fun(f_58)(cl_sl(f_58), t);
if((t == NULL))
goto fail434 ;
m_172 = t;
t = k_172;
t = cl_fun(g_58)(cl_sl(g_58), t);
if((t == NULL))
goto fail434 ;
n_172 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_warning_2, m_172, n_172), l_172);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail434 :
--__tracing_table_counter;
return(NULL);
}
ATerm info_2_0 (StrSL sl, StrCL d_58, StrCL e_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "info_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_172 = NULL,e_172 = NULL,f_172 = NULL,h_172 = NULL,i_172 = NULL;
ATerm trm1281;
trm1281 = (ATerm) ATgetAnnotations(t);
if((trm1281 == NULL))
trm1281 = (ATerm) ATempty;
if(match_cons(t, sym_info_2))
{
e_172 = ATgetArgument(t, 0);
f_172 = ATgetArgument(t, 1);
}
else
goto fail433 ;
g_172 = trm1281;
t = e_172;
t = cl_fun(d_58)(cl_sl(d_58), t);
if((t == NULL))
goto fail433 ;
h_172 = t;
t = f_172;
t = cl_fun(e_58)(cl_sl(e_58), t);
if((t == NULL))
goto fail433 ;
i_172 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_info_2, h_172, i_172), g_172);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail433 :
--__tracing_table_counter;
return(NULL);
}
ATerm summary_3_0 (StrSL sl, StrCL a_58, StrCL b_58, StrCL c_58, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "summary_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_172 = NULL,x_171 = NULL,y_171 = NULL,z_171 = NULL,b_172 = NULL,c_172 = NULL,d_172 = NULL;
ATerm trm1280;
trm1280 = (ATerm) ATgetAnnotations(t);
if((trm1280 == NULL))
trm1280 = (ATerm) ATempty;
if(match_cons(t, sym_summary_3))
{
x_171 = ATgetArgument(t, 0);
y_171 = ATgetArgument(t, 1);
z_171 = ATgetArgument(t, 2);
}
else
goto fail432 ;
a_172 = trm1280;
t = x_171;
t = cl_fun(a_58)(cl_sl(a_58), t);
if((t == NULL))
goto fail432 ;
b_172 = t;
t = y_171;
t = cl_fun(b_58)(cl_sl(b_58), t);
if((t == NULL))
goto fail432 ;
c_172 = t;
t = z_171;
t = cl_fun(c_58)(cl_sl(c_58), t);
if((t == NULL))
goto fail432 ;
d_172 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_summary_3, b_172, c_172, d_172), a_172);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail432 :
--__tracing_table_counter;
return(NULL);
}
ATerm natural_1_0 (StrSL sl, StrCL z_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "natural_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_171 = NULL,u_171 = NULL,w_171 = NULL;
ATerm trm1279;
trm1279 = (ATerm) ATgetAnnotations(t);
if((trm1279 == NULL))
trm1279 = (ATerm) ATempty;
if(match_cons(t, sym_natural_1))
{
u_171 = ATgetArgument(t, 0);
}
else
goto fail431 ;
v_171 = trm1279;
t = u_171;
t = cl_fun(z_57)(cl_sl(z_57), t);
if((t == NULL))
goto fail431 ;
w_171 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_natural_1, w_171), v_171);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail431 :
--__tracing_table_counter;
return(NULL);
}
ATerm positive_1_0 (StrSL sl, StrCL y_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "positive_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_171 = NULL,r_171 = NULL,t_171 = NULL;
ATerm trm1278;
trm1278 = (ATerm) ATgetAnnotations(t);
if((trm1278 == NULL))
trm1278 = (ATerm) ATempty;
if(match_cons(t, sym_positive_1))
{
r_171 = ATgetArgument(t, 0);
}
else
goto fail430 ;
s_171 = trm1278;
t = r_171;
t = cl_fun(y_57)(cl_sl(y_57), t);
if((t == NULL))
goto fail430 ;
t_171 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_positive_1, t_171), s_171);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail430 :
--__tracing_table_counter;
return(NULL);
}
ATerm negative_1_0 (StrSL sl, StrCL x_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "negative_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_171 = NULL,o_171 = NULL,q_171 = NULL;
ATerm trm1277;
trm1277 = (ATerm) ATgetAnnotations(t);
if((trm1277 == NULL))
trm1277 = (ATerm) ATempty;
if(match_cons(t, sym_negative_1))
{
o_171 = ATgetArgument(t, 0);
}
else
goto fail429 ;
p_171 = trm1277;
t = o_171;
t = cl_fun(x_57)(cl_sl(x_57), t);
if((t == NULL))
goto fail429 ;
q_171 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_negative_1, q_171), p_171);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail429 :
--__tracing_table_counter;
return(NULL);
}
ATerm real_con_3_0 (StrSL sl, StrCL u_57, StrCL v_57, StrCL w_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "real_con_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_171 = NULL,y_170 = NULL,z_170 = NULL,a_171 = NULL,e_171 = NULL,m_171 = NULL,n_171 = NULL;
ATerm trm1276;
trm1276 = (ATerm) ATgetAnnotations(t);
if((trm1276 == NULL))
trm1276 = (ATerm) ATempty;
if(match_cons(t, sym_real_con_3))
{
y_170 = ATgetArgument(t, 0);
z_170 = ATgetArgument(t, 1);
a_171 = ATgetArgument(t, 2);
}
else
goto fail428 ;
d_171 = trm1276;
t = y_170;
t = cl_fun(u_57)(cl_sl(u_57), t);
if((t == NULL))
goto fail428 ;
e_171 = t;
t = z_170;
t = cl_fun(v_57)(cl_sl(v_57), t);
if((t == NULL))
goto fail428 ;
m_171 = t;
t = a_171;
t = cl_fun(w_57)(cl_sl(w_57), t);
if((t == NULL))
goto fail428 ;
n_171 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_real_con_3, e_171, m_171, n_171), d_171);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail428 :
--__tracing_table_counter;
return(NULL);
}
ATerm int_1_0 (StrSL sl, StrCL t_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "int_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_170 = NULL,v_170 = NULL,x_170 = NULL;
ATerm trm1275;
trm1275 = (ATerm) ATgetAnnotations(t);
if((trm1275 == NULL))
trm1275 = (ATerm) ATempty;
if(match_cons(t, sym_int_1))
{
v_170 = ATgetArgument(t, 0);
}
else
goto fail427 ;
w_170 = trm1275;
t = v_170;
t = cl_fun(t_57)(cl_sl(t_57), t);
if((t == NULL))
goto fail427 ;
x_170 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_int_1, x_170), w_170);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail427 :
--__tracing_table_counter;
return(NULL);
}
ATerm real_1_0 (StrSL sl, StrCL s_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "real_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_170 = NULL,s_170 = NULL,u_170 = NULL;
ATerm trm1274;
trm1274 = (ATerm) ATgetAnnotations(t);
if((trm1274 == NULL))
trm1274 = (ATerm) ATempty;
if(match_cons(t, sym_real_1))
{
s_170 = ATgetArgument(t, 0);
}
else
goto fail426 ;
t_170 = trm1274;
t = s_170;
t = cl_fun(s_57)(cl_sl(s_57), t);
if((t == NULL))
goto fail426 ;
u_170 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_real_1, u_170), t_170);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail426 :
--__tracing_table_counter;
return(NULL);
}
ATerm fun_1_0 (StrSL sl, StrCL r_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fun_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_170 = NULL,p_170 = NULL,r_170 = NULL;
ATerm trm1273;
trm1273 = (ATerm) ATgetAnnotations(t);
if((trm1273 == NULL))
trm1273 = (ATerm) ATempty;
if(match_cons(t, sym_fun_1))
{
p_170 = ATgetArgument(t, 0);
}
else
goto fail425 ;
q_170 = trm1273;
t = p_170;
t = cl_fun(r_57)(cl_sl(r_57), t);
if((t == NULL))
goto fail425 ;
r_170 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_fun_1, r_170), q_170);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail425 :
--__tracing_table_counter;
return(NULL);
}
ATerm appl_2_0 (StrSL sl, StrCL p_57, StrCL q_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "appl_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_170 = NULL,k_170 = NULL,l_170 = NULL,n_170 = NULL,o_170 = NULL;
ATerm trm1272;
trm1272 = (ATerm) ATgetAnnotations(t);
if((trm1272 == NULL))
trm1272 = (ATerm) ATempty;
if(match_cons(t, sym_appl_2))
{
k_170 = ATgetArgument(t, 0);
l_170 = ATgetArgument(t, 1);
}
else
goto fail424 ;
m_170 = trm1272;
t = k_170;
t = cl_fun(p_57)(cl_sl(p_57), t);
if((t == NULL))
goto fail424 ;
n_170 = t;
t = l_170;
t = cl_fun(q_57)(cl_sl(q_57), t);
if((t == NULL))
goto fail424 ;
o_170 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_appl_2, n_170, o_170), m_170);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail424 :
--__tracing_table_counter;
return(NULL);
}
ATerm placeholder_1_0 (StrSL sl, StrCL o_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "placeholder_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_170 = NULL,h_170 = NULL,j_170 = NULL;
ATerm trm1271;
trm1271 = (ATerm) ATgetAnnotations(t);
if((trm1271 == NULL))
trm1271 = (ATerm) ATempty;
if(match_cons(t, sym_placeholder_1))
{
h_170 = ATgetArgument(t, 0);
}
else
goto fail423 ;
i_170 = trm1271;
t = h_170;
t = cl_fun(o_57)(cl_sl(o_57), t);
if((t == NULL))
goto fail423 ;
j_170 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_placeholder_1, j_170), i_170);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail423 :
--__tracing_table_counter;
return(NULL);
}
ATerm annotated_2_0 (StrSL sl, StrCL m_57, StrCL n_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "annotated_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_170 = NULL,c_170 = NULL,d_170 = NULL,f_170 = NULL,g_170 = NULL;
ATerm trm1270;
trm1270 = (ATerm) ATgetAnnotations(t);
if((trm1270 == NULL))
trm1270 = (ATerm) ATempty;
if(match_cons(t, sym_annotated_2))
{
c_170 = ATgetArgument(t, 0);
d_170 = ATgetArgument(t, 1);
}
else
goto fail422 ;
e_170 = trm1270;
t = c_170;
t = cl_fun(m_57)(cl_sl(m_57), t);
if((t == NULL))
goto fail422 ;
f_170 = t;
t = d_170;
t = cl_fun(n_57)(cl_sl(n_57), t);
if((t == NULL))
goto fail422 ;
g_170 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_annotated_2, f_170, g_170), e_170);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail422 :
--__tracing_table_counter;
return(NULL);
}
ATerm empty_grammar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "empty_grammar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_empty_grammar_0)))
goto fail421 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail421 :
--__tracing_table_counter;
return(NULL);
}
ATerm conc_grammars_2_0 (StrSL sl, StrCL k_57, StrCL l_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "conc_grammars_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_169 = NULL,x_169 = NULL,y_169 = NULL,a_170 = NULL,b_170 = NULL;
ATerm trm1269;
trm1269 = (ATerm) ATgetAnnotations(t);
if((trm1269 == NULL))
trm1269 = (ATerm) ATempty;
if(match_cons(t, sym_conc_grammars_2))
{
x_169 = ATgetArgument(t, 0);
y_169 = ATgetArgument(t, 1);
}
else
goto fail420 ;
z_169 = trm1269;
t = x_169;
t = cl_fun(k_57)(cl_sl(k_57), t);
if((t == NULL))
goto fail420 ;
a_170 = t;
t = y_169;
t = cl_fun(l_57)(cl_sl(l_57), t);
if((t == NULL))
goto fail420 ;
b_170 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_conc_grammars_2, a_170, b_170), z_169);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail420 :
--__tracing_table_counter;
return(NULL);
}
ATerm syntax_1_0 (StrSL sl, StrCL j_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "syntax_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_169 = NULL,u_169 = NULL,w_169 = NULL;
ATerm trm1268;
trm1268 = (ATerm) ATgetAnnotations(t);
if((trm1268 == NULL))
trm1268 = (ATerm) ATempty;
if(match_cons(t, sym_syntax_1))
{
u_169 = ATgetArgument(t, 0);
}
else
goto fail419 ;
v_169 = trm1268;
t = u_169;
t = cl_fun(j_57)(cl_sl(j_57), t);
if((t == NULL))
goto fail419 ;
w_169 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_syntax_1, w_169), v_169);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail419 :
--__tracing_table_counter;
return(NULL);
}
ATerm lexical_syntax_1_0 (StrSL sl, StrCL i_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lexical_syntax_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_169 = NULL,r_169 = NULL,t_169 = NULL;
ATerm trm1267;
trm1267 = (ATerm) ATgetAnnotations(t);
if((trm1267 == NULL))
trm1267 = (ATerm) ATempty;
if(match_cons(t, sym_lexical_syntax_1))
{
r_169 = ATgetArgument(t, 0);
}
else
goto fail418 ;
s_169 = trm1267;
t = r_169;
t = cl_fun(i_57)(cl_sl(i_57), t);
if((t == NULL))
goto fail418 ;
t_169 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lexical_syntax_1, t_169), s_169);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail418 :
--__tracing_table_counter;
return(NULL);
}
ATerm context_free_syntax_1_0 (StrSL sl, StrCL h_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "context_free_syntax_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_169 = NULL,o_169 = NULL,q_169 = NULL;
ATerm trm1266;
trm1266 = (ATerm) ATgetAnnotations(t);
if((trm1266 == NULL))
trm1266 = (ATerm) ATempty;
if(match_cons(t, sym_context_free_syntax_1))
{
o_169 = ATgetArgument(t, 0);
}
else
goto fail417 ;
p_169 = trm1266;
t = o_169;
t = cl_fun(h_57)(cl_sl(h_57), t);
if((t == NULL))
goto fail417 ;
q_169 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_context_free_syntax_1, q_169), p_169);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail417 :
--__tracing_table_counter;
return(NULL);
}
ATerm variables_1_0 (StrSL sl, StrCL g_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "variables_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_169 = NULL,l_169 = NULL,n_169 = NULL;
ATerm trm1265;
trm1265 = (ATerm) ATgetAnnotations(t);
if((trm1265 == NULL))
trm1265 = (ATerm) ATempty;
if(match_cons(t, sym_variables_1))
{
l_169 = ATgetArgument(t, 0);
}
else
goto fail416 ;
m_169 = trm1265;
t = l_169;
t = cl_fun(g_57)(cl_sl(g_57), t);
if((t == NULL))
goto fail416 ;
n_169 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_variables_1, n_169), m_169);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail416 :
--__tracing_table_counter;
return(NULL);
}
ATerm lexical_variables_1_0 (StrSL sl, StrCL f_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lexical_variables_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_169 = NULL,i_169 = NULL,k_169 = NULL;
ATerm trm1264;
trm1264 = (ATerm) ATgetAnnotations(t);
if((trm1264 == NULL))
trm1264 = (ATerm) ATempty;
if(match_cons(t, sym_lexical_variables_1))
{
i_169 = ATgetArgument(t, 0);
}
else
goto fail415 ;
j_169 = trm1264;
t = i_169;
t = cl_fun(f_57)(cl_sl(f_57), t);
if((t == NULL))
goto fail415 ;
k_169 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lexical_variables_1, k_169), j_169);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail415 :
--__tracing_table_counter;
return(NULL);
}
ATerm imp_section_1_0 (StrSL sl, StrCL e_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "imp_section_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_169 = NULL,e_169 = NULL,h_169 = NULL;
ATerm trm1263;
trm1263 = (ATerm) ATgetAnnotations(t);
if((trm1263 == NULL))
trm1263 = (ATerm) ATempty;
if(match_cons(t, sym_imp_section_1))
{
e_169 = ATgetArgument(t, 0);
}
else
goto fail414 ;
f_169 = trm1263;
t = e_169;
t = cl_fun(e_57)(cl_sl(e_57), t);
if((t == NULL))
goto fail414 ;
h_169 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_imp_section_1, h_169), f_169);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail414 :
--__tracing_table_counter;
return(NULL);
}
ATerm priorities_1_0 (StrSL sl, StrCL d_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "priorities_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_169 = NULL,b_169 = NULL,d_169 = NULL;
ATerm trm1262;
trm1262 = (ATerm) ATgetAnnotations(t);
if((trm1262 == NULL))
trm1262 = (ATerm) ATempty;
if(match_cons(t, sym_priorities_1))
{
b_169 = ATgetArgument(t, 0);
}
else
goto fail413 ;
c_169 = trm1262;
t = b_169;
t = cl_fun(d_57)(cl_sl(d_57), t);
if((t == NULL))
goto fail413 ;
d_169 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_priorities_1, d_169), c_169);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail413 :
--__tracing_table_counter;
return(NULL);
}
ATerm sorts_1_0 (StrSL sl, StrCL c_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sorts_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_168 = NULL,y_168 = NULL,a_169 = NULL;
ATerm trm1261;
trm1261 = (ATerm) ATgetAnnotations(t);
if((trm1261 == NULL))
trm1261 = (ATerm) ATempty;
if(match_cons(t, sym_sorts_1))
{
y_168 = ATgetArgument(t, 0);
}
else
goto fail412 ;
z_168 = trm1261;
t = y_168;
t = cl_fun(c_57)(cl_sl(c_57), t);
if((t == NULL))
goto fail412 ;
a_169 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_sorts_1, a_169), z_168);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail412 :
--__tracing_table_counter;
return(NULL);
}
ATerm kernel_start_symbols_1_0 (StrSL sl, StrCL b_57, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "kernel_start_symbols_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_168 = NULL,v_168 = NULL,x_168 = NULL;
ATerm trm1260;
trm1260 = (ATerm) ATgetAnnotations(t);
if((trm1260 == NULL))
trm1260 = (ATerm) ATempty;
if(match_cons(t, sym_kernel_start_symbols_1))
{
v_168 = ATgetArgument(t, 0);
}
else
goto fail411 ;
w_168 = trm1260;
t = v_168;
t = cl_fun(b_57)(cl_sl(b_57), t);
if((t == NULL))
goto fail411 ;
x_168 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_kernel_start_symbols_1, x_168), w_168);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail411 :
--__tracing_table_counter;
return(NULL);
}
ATerm lexical_start_symbols_1_0 (StrSL sl, StrCL y_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lexical_start_symbols_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_168 = NULL,s_168 = NULL,u_168 = NULL;
ATerm trm1259;
trm1259 = (ATerm) ATgetAnnotations(t);
if((trm1259 == NULL))
trm1259 = (ATerm) ATempty;
if(match_cons(t, sym_lexical_start_symbols_1))
{
s_168 = ATgetArgument(t, 0);
}
else
goto fail410 ;
t_168 = trm1259;
t = s_168;
t = cl_fun(y_56)(cl_sl(y_56), t);
if((t == NULL))
goto fail410 ;
u_168 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lexical_start_symbols_1, u_168), t_168);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail410 :
--__tracing_table_counter;
return(NULL);
}
ATerm context_free_start_symbols_1_0 (StrSL sl, StrCL x_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "context_free_start_symbols_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_168 = NULL,p_168 = NULL,r_168 = NULL;
ATerm trm1258;
trm1258 = (ATerm) ATgetAnnotations(t);
if((trm1258 == NULL))
trm1258 = (ATerm) ATempty;
if(match_cons(t, sym_context_free_start_symbols_1))
{
p_168 = ATgetArgument(t, 0);
}
else
goto fail409 ;
q_168 = trm1258;
t = p_168;
t = cl_fun(x_56)(cl_sl(x_56), t);
if((t == NULL))
goto fail409 ;
r_168 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_context_free_start_symbols_1, r_168), q_168);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail409 :
--__tracing_table_counter;
return(NULL);
}
ATerm restrictions_1_0 (StrSL sl, StrCL w_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "restrictions_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_168 = NULL,m_168 = NULL,o_168 = NULL;
ATerm trm1257;
trm1257 = (ATerm) ATgetAnnotations(t);
if((trm1257 == NULL))
trm1257 = (ATerm) ATempty;
if(match_cons(t, sym_restrictions_1))
{
m_168 = ATgetArgument(t, 0);
}
else
goto fail408 ;
n_168 = trm1257;
t = m_168;
t = cl_fun(w_56)(cl_sl(w_56), t);
if((t == NULL))
goto fail408 ;
o_168 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_restrictions_1, o_168), n_168);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail408 :
--__tracing_table_counter;
return(NULL);
}
ATerm aliases_1_0 (StrSL sl, StrCL v_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aliases_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_168 = NULL,j_168 = NULL,l_168 = NULL;
ATerm trm1256;
trm1256 = (ATerm) ATgetAnnotations(t);
if((trm1256 == NULL))
trm1256 = (ATerm) ATempty;
if(match_cons(t, sym_aliases_1))
{
j_168 = ATgetArgument(t, 0);
}
else
goto fail407 ;
k_168 = trm1256;
t = j_168;
t = cl_fun(v_56)(cl_sl(v_56), t);
if((t == NULL))
goto fail407 ;
l_168 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_aliases_1, l_168), k_168);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail407 :
--__tracing_table_counter;
return(NULL);
}
ATerm lexical_priorities_1_0 (StrSL sl, StrCL t_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lexical_priorities_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_168 = NULL,f_168 = NULL,h_168 = NULL;
ATerm trm1255;
trm1255 = (ATerm) ATgetAnnotations(t);
if((trm1255 == NULL))
trm1255 = (ATerm) ATempty;
if(match_cons(t, sym_lexical_priorities_1))
{
f_168 = ATgetArgument(t, 0);
}
else
goto fail406 ;
g_168 = trm1255;
t = f_168;
t = cl_fun(t_56)(cl_sl(t_56), t);
if((t == NULL))
goto fail406 ;
h_168 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lexical_priorities_1, h_168), g_168);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail406 :
--__tracing_table_counter;
return(NULL);
}
ATerm context_free_priorities_1_0 (StrSL sl, StrCL s_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "context_free_priorities_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_168 = NULL,c_168 = NULL,e_168 = NULL;
ATerm trm1254;
trm1254 = (ATerm) ATgetAnnotations(t);
if((trm1254 == NULL))
trm1254 = (ATerm) ATempty;
if(match_cons(t, sym_context_free_priorities_1))
{
c_168 = ATgetArgument(t, 0);
}
else
goto fail405 ;
d_168 = trm1254;
t = c_168;
t = cl_fun(s_56)(cl_sl(s_56), t);
if((t == NULL))
goto fail405 ;
e_168 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_context_free_priorities_1, e_168), d_168);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail405 :
--__tracing_table_counter;
return(NULL);
}
ATerm lexical_restrictions_1_0 (StrSL sl, StrCL o_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lexical_restrictions_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_167 = NULL,x_167 = NULL,b_168 = NULL;
ATerm trm1253;
trm1253 = (ATerm) ATgetAnnotations(t);
if((trm1253 == NULL))
trm1253 = (ATerm) ATempty;
if(match_cons(t, sym_lexical_restrictions_1))
{
x_167 = ATgetArgument(t, 0);
}
else
goto fail404 ;
y_167 = trm1253;
t = x_167;
t = cl_fun(o_56)(cl_sl(o_56), t);
if((t == NULL))
goto fail404 ;
b_168 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lexical_restrictions_1, b_168), y_167);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail404 :
--__tracing_table_counter;
return(NULL);
}
ATerm context_free_restrictions_1_0 (StrSL sl, StrCL n_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "context_free_restrictions_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_167 = NULL,q_167 = NULL,s_167 = NULL;
ATerm trm1252;
trm1252 = (ATerm) ATgetAnnotations(t);
if((trm1252 == NULL))
trm1252 = (ATerm) ATempty;
if(match_cons(t, sym_context_free_restrictions_1))
{
q_167 = ATgetArgument(t, 0);
}
else
goto fail403 ;
r_167 = trm1252;
t = q_167;
t = cl_fun(n_56)(cl_sl(n_56), t);
if((t == NULL))
goto fail403 ;
s_167 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_context_free_restrictions_1, s_167), r_167);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail403 :
--__tracing_table_counter;
return(NULL);
}
ATerm term_1_0 (StrSL sl, StrCL m_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "term_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_167 = NULL,n_167 = NULL,p_167 = NULL;
ATerm trm1251;
trm1251 = (ATerm) ATgetAnnotations(t);
if((trm1251 == NULL))
trm1251 = (ATerm) ATempty;
if(match_cons(t, sym_term_1))
{
n_167 = ATgetArgument(t, 0);
}
else
goto fail402 ;
o_167 = trm1251;
t = n_167;
t = cl_fun(m_56)(cl_sl(m_56), t);
if((t == NULL))
goto fail402 ;
p_167 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_term_1, p_167), o_167);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail402 :
--__tracing_table_counter;
return(NULL);
}
ATerm id_1_0 (StrSL sl, StrCL l_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "id_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_167 = NULL,k_167 = NULL,m_167 = NULL;
ATerm trm1250;
trm1250 = (ATerm) ATgetAnnotations(t);
if((trm1250 == NULL))
trm1250 = (ATerm) ATempty;
if(match_cons(t, sym_id_1))
{
k_167 = ATgetArgument(t, 0);
}
else
goto fail401 ;
l_167 = trm1250;
t = k_167;
t = cl_fun(l_56)(cl_sl(l_56), t);
if((t == NULL))
goto fail401 ;
m_167 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_id_1, m_167), l_167);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail401 :
--__tracing_table_counter;
return(NULL);
}
ATerm bracket_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bracket_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_bracket_0)))
goto fail400 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail400 :
--__tracing_table_counter;
return(NULL);
}
ATerm assoc_1_0 (StrSL sl, StrCL j_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "assoc_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_167 = NULL,h_167 = NULL,j_167 = NULL;
ATerm trm1249;
trm1249 = (ATerm) ATgetAnnotations(t);
if((trm1249 == NULL))
trm1249 = (ATerm) ATempty;
if(match_cons(t, sym_assoc_1))
{
h_167 = ATgetArgument(t, 0);
}
else
goto fail399 ;
i_167 = trm1249;
t = h_167;
t = cl_fun(j_56)(cl_sl(j_56), t);
if((t == NULL))
goto fail399 ;
j_167 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_assoc_1, j_167), i_167);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail399 :
--__tracing_table_counter;
return(NULL);
}
ATerm reject_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "reject_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_reject_0)))
goto fail398 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail398 :
--__tracing_table_counter;
return(NULL);
}
ATerm prefer_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prefer_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_prefer_0)))
goto fail397 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail397 :
--__tracing_table_counter;
return(NULL);
}
ATerm avoid_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "avoid_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_avoid_0)))
goto fail396 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail396 :
--__tracing_table_counter;
return(NULL);
}
ATerm attrs_1_0 (StrSL sl, StrCL i_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "attrs_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_167 = NULL,e_167 = NULL,g_167 = NULL;
ATerm trm1248;
trm1248 = (ATerm) ATgetAnnotations(t);
if((trm1248 == NULL))
trm1248 = (ATerm) ATempty;
if(match_cons(t, sym_attrs_1))
{
e_167 = ATgetArgument(t, 0);
}
else
goto fail395 ;
f_167 = trm1248;
t = e_167;
t = cl_fun(i_56)(cl_sl(i_56), t);
if((t == NULL))
goto fail395 ;
g_167 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_attrs_1, g_167), f_167);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail395 :
--__tracing_table_counter;
return(NULL);
}
ATerm no_attrs_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "no_attrs_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_no_attrs_0)))
goto fail394 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail394 :
--__tracing_table_counter;
return(NULL);
}
ATerm prod_3_0 (StrSL sl, StrCL d_56, StrCL f_56, StrCL g_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prod_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_167 = NULL,u_166 = NULL,x_166 = NULL,y_166 = NULL,b_167 = NULL,c_167 = NULL,d_167 = NULL;
ATerm trm1247;
trm1247 = (ATerm) ATgetAnnotations(t);
if((trm1247 == NULL))
trm1247 = (ATerm) ATempty;
if(match_cons(t, sym_prod_3))
{
u_166 = ATgetArgument(t, 0);
x_166 = ATgetArgument(t, 1);
y_166 = ATgetArgument(t, 2);
}
else
goto fail393 ;
a_167 = trm1247;
t = u_166;
t = cl_fun(d_56)(cl_sl(d_56), t);
if((t == NULL))
goto fail393 ;
b_167 = t;
t = x_166;
t = cl_fun(f_56)(cl_sl(f_56), t);
if((t == NULL))
goto fail393 ;
c_167 = t;
t = y_166;
t = cl_fun(g_56)(cl_sl(g_56), t);
if((t == NULL))
goto fail393 ;
d_167 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_prod_3, b_167, c_167, d_167), a_167);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail393 :
--__tracing_table_counter;
return(NULL);
}
ATerm prefix_fun_4_0 (StrSL sl, StrCL y_55, StrCL z_55, StrCL a_56, StrCL c_56, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prefix_fun_4_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_166 = NULL,h_166 = NULL,i_166 = NULL,j_166 = NULL,k_166 = NULL,q_166 = NULL,r_166 = NULL,s_166 = NULL,t_166 = NULL;
ATerm trm1246;
trm1246 = (ATerm) ATgetAnnotations(t);
if((trm1246 == NULL))
trm1246 = (ATerm) ATempty;
if(match_cons(t, sym_prefix_fun_4))
{
h_166 = ATgetArgument(t, 0);
i_166 = ATgetArgument(t, 1);
j_166 = ATgetArgument(t, 2);
k_166 = ATgetArgument(t, 3);
}
else
goto fail392 ;
p_166 = trm1246;
t = h_166;
t = cl_fun(y_55)(cl_sl(y_55), t);
if((t == NULL))
goto fail392 ;
q_166 = t;
t = i_166;
t = cl_fun(z_55)(cl_sl(z_55), t);
if((t == NULL))
goto fail392 ;
r_166 = t;
t = j_166;
t = cl_fun(a_56)(cl_sl(a_56), t);
if((t == NULL))
goto fail392 ;
s_166 = t;
t = k_166;
t = cl_fun(c_56)(cl_sl(c_56), t);
if((t == NULL))
goto fail392 ;
t_166 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_prefix_fun_4, q_166, r_166, s_166, t_166), p_166);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail392 :
--__tracing_table_counter;
return(NULL);
}
ATerm cf_1_0 (StrSL sl, StrCL x_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "cf_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_166 = NULL,e_166 = NULL,g_166 = NULL;
ATerm trm1245;
trm1245 = (ATerm) ATgetAnnotations(t);
if((trm1245 == NULL))
trm1245 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
e_166 = ATgetArgument(t, 0);
}
else
goto fail391 ;
f_166 = trm1245;
t = e_166;
t = cl_fun(x_55)(cl_sl(x_55), t);
if((t == NULL))
goto fail391 ;
g_166 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, g_166), f_166);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail391 :
--__tracing_table_counter;
return(NULL);
}
ATerm lex_1_0 (StrSL sl, StrCL w_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lex_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_166 = NULL,b_166 = NULL,d_166 = NULL;
ATerm trm1244;
trm1244 = (ATerm) ATgetAnnotations(t);
if((trm1244 == NULL))
trm1244 = (ATerm) ATempty;
if(match_cons(t, sym_lex_1))
{
b_166 = ATgetArgument(t, 0);
}
else
goto fail390 ;
c_166 = trm1244;
t = b_166;
t = cl_fun(w_55)(cl_sl(w_55), t);
if((t == NULL))
goto fail390 ;
d_166 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lex_1, d_166), c_166);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail390 :
--__tracing_table_counter;
return(NULL);
}
ATerm varsym_1_0 (StrSL sl, StrCL v_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "varsym_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_165 = NULL,v_165 = NULL,a_166 = NULL;
ATerm trm1243;
trm1243 = (ATerm) ATgetAnnotations(t);
if((trm1243 == NULL))
trm1243 = (ATerm) ATempty;
if(match_cons(t, sym_varsym_1))
{
v_165 = ATgetArgument(t, 0);
}
else
goto fail389 ;
z_165 = trm1243;
t = v_165;
t = cl_fun(v_55)(cl_sl(v_55), t);
if((t == NULL))
goto fail389 ;
a_166 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_varsym_1, a_166), z_165);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail389 :
--__tracing_table_counter;
return(NULL);
}
ATerm layout_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "layout_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_layout_0)))
goto fail388 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail388 :
--__tracing_table_counter;
return(NULL);
}
ATerm empty_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "empty_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_empty_0)))
goto fail387 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail387 :
--__tracing_table_counter;
return(NULL);
}
ATerm opt_1_0 (StrSL sl, StrCL u_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "opt_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_165 = NULL,s_165 = NULL,u_165 = NULL;
ATerm trm1242;
trm1242 = (ATerm) ATgetAnnotations(t);
if((trm1242 == NULL))
trm1242 = (ATerm) ATempty;
if(match_cons(t, sym_opt_1))
{
s_165 = ATgetArgument(t, 0);
}
else
goto fail386 ;
t_165 = trm1242;
t = s_165;
t = cl_fun(u_55)(cl_sl(u_55), t);
if((t == NULL))
goto fail386 ;
u_165 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_opt_1, u_165), t_165);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail386 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_1_0 (StrSL sl, StrCL t_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_165 = NULL,p_165 = NULL,r_165 = NULL;
ATerm trm1241;
trm1241 = (ATerm) ATgetAnnotations(t);
if((trm1241 == NULL))
trm1241 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
p_165 = ATgetArgument(t, 0);
}
else
goto fail385 ;
q_165 = trm1241;
t = p_165;
t = cl_fun(t_55)(cl_sl(t_55), t);
if((t == NULL))
goto fail385 ;
r_165 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, r_165), q_165);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail385 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_star_1_0 (StrSL sl, StrCL s_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_star_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_165 = NULL,m_165 = NULL,o_165 = NULL;
ATerm trm1240;
trm1240 = (ATerm) ATgetAnnotations(t);
if((trm1240 == NULL))
trm1240 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
m_165 = ATgetArgument(t, 0);
}
else
goto fail384 ;
n_165 = trm1240;
t = m_165;
t = cl_fun(s_55)(cl_sl(s_55), t);
if((t == NULL))
goto fail384 ;
o_165 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, o_165), n_165);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail384 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_sep_2_0 (StrSL sl, StrCL q_55, StrCL r_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_sep_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_165 = NULL,b_165 = NULL,c_165 = NULL,e_165 = NULL,f_165 = NULL;
ATerm trm1239;
trm1239 = (ATerm) ATgetAnnotations(t);
if((trm1239 == NULL))
trm1239 = (ATerm) ATempty;
if(match_cons(t, sym_iter_sep_2))
{
b_165 = ATgetArgument(t, 0);
c_165 = ATgetArgument(t, 1);
}
else
goto fail383 ;
d_165 = trm1239;
t = b_165;
t = cl_fun(q_55)(cl_sl(q_55), t);
if((t == NULL))
goto fail383 ;
e_165 = t;
t = c_165;
t = cl_fun(r_55)(cl_sl(r_55), t);
if((t == NULL))
goto fail383 ;
f_165 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, e_165, f_165), d_165);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail383 :
--__tracing_table_counter;
return(NULL);
}
ATerm iter_star_sep_2_0 (StrSL sl, StrCL o_55, StrCL p_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "iter_star_sep_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_164 = NULL,v_164 = NULL,w_164 = NULL,y_164 = NULL,a_165 = NULL;
ATerm trm1238;
trm1238 = (ATerm) ATgetAnnotations(t);
if((trm1238 == NULL))
trm1238 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_sep_2))
{
v_164 = ATgetArgument(t, 0);
w_164 = ATgetArgument(t, 1);
}
else
goto fail382 ;
x_164 = trm1238;
t = v_164;
t = cl_fun(o_55)(cl_sl(o_55), t);
if((t == NULL))
goto fail382 ;
y_164 = t;
t = w_164;
t = cl_fun(p_55)(cl_sl(p_55), t);
if((t == NULL))
goto fail382 ;
a_165 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, y_164, a_165), x_164);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail382 :
--__tracing_table_counter;
return(NULL);
}
ATerm tuple_2_0 (StrSL sl, StrCL m_55, StrCL n_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "tuple_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_164 = NULL,p_164 = NULL,q_164 = NULL,s_164 = NULL,u_164 = NULL;
ATerm trm1237;
trm1237 = (ATerm) ATgetAnnotations(t);
if((trm1237 == NULL))
trm1237 = (ATerm) ATempty;
if(match_cons(t, sym_tuple_2))
{
p_164 = ATgetArgument(t, 0);
q_164 = ATgetArgument(t, 1);
}
else
goto fail381 ;
r_164 = trm1237;
t = p_164;
t = cl_fun(m_55)(cl_sl(m_55), t);
if((t == NULL))
goto fail381 ;
s_164 = t;
t = q_164;
t = cl_fun(n_55)(cl_sl(n_55), t);
if((t == NULL))
goto fail381 ;
u_164 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_tuple_2, s_164, u_164), r_164);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail381 :
--__tracing_table_counter;
return(NULL);
}
ATerm func_2_0 (StrSL sl, StrCL k_55, StrCL l_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "func_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_164 = NULL,k_164 = NULL,l_164 = NULL,n_164 = NULL,o_164 = NULL;
ATerm trm1236;
trm1236 = (ATerm) ATgetAnnotations(t);
if((trm1236 == NULL))
trm1236 = (ATerm) ATempty;
if(match_cons(t, sym_func_2))
{
k_164 = ATgetArgument(t, 0);
l_164 = ATgetArgument(t, 1);
}
else
goto fail380 ;
m_164 = trm1236;
t = k_164;
t = cl_fun(k_55)(cl_sl(k_55), t);
if((t == NULL))
goto fail380 ;
n_164 = t;
t = l_164;
t = cl_fun(l_55)(cl_sl(l_55), t);
if((t == NULL))
goto fail380 ;
o_164 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_func_2, n_164, o_164), m_164);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail380 :
--__tracing_table_counter;
return(NULL);
}
ATerm strategy_2_0 (StrSL sl, StrCL i_55, StrCL j_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strategy_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_164 = NULL,e_164 = NULL,f_164 = NULL,h_164 = NULL,j_164 = NULL;
ATerm trm1235;
trm1235 = (ATerm) ATgetAnnotations(t);
if((trm1235 == NULL))
trm1235 = (ATerm) ATempty;
if(match_cons(t, sym_strategy_2))
{
e_164 = ATgetArgument(t, 0);
f_164 = ATgetArgument(t, 1);
}
else
goto fail379 ;
g_164 = trm1235;
t = e_164;
t = cl_fun(i_55)(cl_sl(i_55), t);
if((t == NULL))
goto fail379 ;
h_164 = t;
t = f_164;
t = cl_fun(j_55)(cl_sl(j_55), t);
if((t == NULL))
goto fail379 ;
j_164 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_strategy_2, h_164, j_164), g_164);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail379 :
--__tracing_table_counter;
return(NULL);
}
ATerm lifting_1_0 (StrSL sl, StrCL h_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifting_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_164 = NULL,b_164 = NULL,d_164 = NULL;
ATerm trm1234;
trm1234 = (ATerm) ATgetAnnotations(t);
if((trm1234 == NULL))
trm1234 = (ATerm) ATempty;
if(match_cons(t, sym_lifting_1))
{
b_164 = ATgetArgument(t, 0);
}
else
goto fail378 ;
c_164 = trm1234;
t = b_164;
t = cl_fun(h_55)(cl_sl(h_55), t);
if((t == NULL))
goto fail378 ;
d_164 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lifting_1, d_164), c_164);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail378 :
--__tracing_table_counter;
return(NULL);
}
ATerm sort_1_0 (StrSL sl, StrCL e_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sort_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_163 = NULL,y_163 = NULL,a_164 = NULL;
ATerm trm1233;
trm1233 = (ATerm) ATgetAnnotations(t);
if((trm1233 == NULL))
trm1233 = (ATerm) ATempty;
if(match_cons(t, sym_sort_1))
{
y_163 = ATgetArgument(t, 0);
}
else
goto fail377 ;
z_163 = trm1233;
t = y_163;
t = cl_fun(e_55)(cl_sl(e_55), t);
if((t == NULL))
goto fail377 ;
a_164 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_sort_1, a_164), z_163);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail377 :
--__tracing_table_counter;
return(NULL);
}
ATerm parameterized_sort_2_0 (StrSL sl, StrCL c_55, StrCL d_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parameterized_sort_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_163 = NULL,t_163 = NULL,u_163 = NULL,w_163 = NULL,x_163 = NULL;
ATerm trm1232;
trm1232 = (ATerm) ATgetAnnotations(t);
if((trm1232 == NULL))
trm1232 = (ATerm) ATempty;
if(match_cons(t, sym_parameterized_sort_2))
{
t_163 = ATgetArgument(t, 0);
u_163 = ATgetArgument(t, 1);
}
else
goto fail376 ;
v_163 = trm1232;
t = t_163;
t = cl_fun(c_55)(cl_sl(c_55), t);
if((t == NULL))
goto fail376 ;
w_163 = t;
t = u_163;
t = cl_fun(d_55)(cl_sl(d_55), t);
if((t == NULL))
goto fail376 ;
x_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_parameterized_sort_2, w_163, x_163), v_163);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail376 :
--__tracing_table_counter;
return(NULL);
}
ATerm lit_1_0 (StrSL sl, StrCL b_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lit_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_163 = NULL,q_163 = NULL,s_163 = NULL;
ATerm trm1231;
trm1231 = (ATerm) ATgetAnnotations(t);
if((trm1231 == NULL))
trm1231 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
q_163 = ATgetArgument(t, 0);
}
else
goto fail375 ;
r_163 = trm1231;
t = q_163;
t = cl_fun(b_55)(cl_sl(b_55), t);
if((t == NULL))
goto fail375 ;
s_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, s_163), r_163);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail375 :
--__tracing_table_counter;
return(NULL);
}
ATerm ci_lit_1_0 (StrSL sl, StrCL a_55, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ci_lit_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_163 = NULL,n_163 = NULL,p_163 = NULL;
ATerm trm1230;
trm1230 = (ATerm) ATgetAnnotations(t);
if((trm1230 == NULL))
trm1230 = (ATerm) ATempty;
if(match_cons(t, sym_ci_lit_1))
{
n_163 = ATgetArgument(t, 0);
}
else
goto fail374 ;
o_163 = trm1230;
t = n_163;
t = cl_fun(a_55)(cl_sl(a_55), t);
if((t == NULL))
goto fail374 ;
p_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ci_lit_1, p_163), o_163);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail374 :
--__tracing_table_counter;
return(NULL);
}
ATerm label_2_0 (StrSL sl, StrCL x_54, StrCL z_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "label_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_163 = NULL,i_163 = NULL,j_163 = NULL,l_163 = NULL,m_163 = NULL;
ATerm trm1229;
trm1229 = (ATerm) ATgetAnnotations(t);
if((trm1229 == NULL))
trm1229 = (ATerm) ATempty;
if(match_cons(t, sym_label_2))
{
i_163 = ATgetArgument(t, 0);
j_163 = ATgetArgument(t, 1);
}
else
goto fail373 ;
k_163 = trm1229;
t = i_163;
t = cl_fun(x_54)(cl_sl(x_54), t);
if((t == NULL))
goto fail373 ;
l_163 = t;
t = j_163;
t = cl_fun(z_54)(cl_sl(z_54), t);
if((t == NULL))
goto fail373 ;
m_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_label_2, l_163, m_163), k_163);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail373 :
--__tracing_table_counter;
return(NULL);
}
ATerm start_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "start_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_start_0)))
goto fail372 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail372 :
--__tracing_table_counter;
return(NULL);
}
ATerm file_start_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "file_start_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_file_start_0)))
goto fail371 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail371 :
--__tracing_table_counter;
return(NULL);
}
ATerm renamings_1_0 (StrSL sl, StrCL w_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "renamings_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_163 = NULL,f_163 = NULL,h_163 = NULL;
ATerm trm1228;
trm1228 = (ATerm) ATgetAnnotations(t);
if((trm1228 == NULL))
trm1228 = (ATerm) ATempty;
if(match_cons(t, sym_renamings_1))
{
f_163 = ATgetArgument(t, 0);
}
else
goto fail370 ;
g_163 = trm1228;
t = f_163;
t = cl_fun(w_54)(cl_sl(w_54), t);
if((t == NULL))
goto fail370 ;
h_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_renamings_1, h_163), g_163);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail370 :
--__tracing_table_counter;
return(NULL);
}
ATerm symbol_2_0 (StrSL sl, StrCL u_54, StrCL v_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "symbol_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_163 = NULL,a_163 = NULL,b_163 = NULL,d_163 = NULL,e_163 = NULL;
ATerm trm1227;
trm1227 = (ATerm) ATgetAnnotations(t);
if((trm1227 == NULL))
trm1227 = (ATerm) ATempty;
if(match_cons(t, sym_symbol_2))
{
a_163 = ATgetArgument(t, 0);
b_163 = ATgetArgument(t, 1);
}
else
goto fail369 ;
c_163 = trm1227;
t = a_163;
t = cl_fun(u_54)(cl_sl(u_54), t);
if((t == NULL))
goto fail369 ;
d_163 = t;
t = b_163;
t = cl_fun(v_54)(cl_sl(v_54), t);
if((t == NULL))
goto fail369 ;
e_163 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_symbol_2, d_163, e_163), c_163);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail369 :
--__tracing_table_counter;
return(NULL);
}
ATerm production_2_0 (StrSL sl, StrCL r_54, StrCL s_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "production_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_162 = NULL,v_162 = NULL,w_162 = NULL,y_162 = NULL,z_162 = NULL;
ATerm trm1226;
trm1226 = (ATerm) ATgetAnnotations(t);
if((trm1226 == NULL))
trm1226 = (ATerm) ATempty;
if(match_cons(t, sym_production_2))
{
v_162 = ATgetArgument(t, 0);
w_162 = ATgetArgument(t, 1);
}
else
goto fail368 ;
x_162 = trm1226;
t = v_162;
t = cl_fun(r_54)(cl_sl(r_54), t);
if((t == NULL))
goto fail368 ;
y_162 = t;
t = w_162;
t = cl_fun(s_54)(cl_sl(s_54), t);
if((t == NULL))
goto fail368 ;
z_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_production_2, y_162, z_162), x_162);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail368 :
--__tracing_table_counter;
return(NULL);
}
ATerm module_3_0 (StrSL sl, StrCL o_54, StrCL p_54, StrCL q_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "module_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_162 = NULL,o_162 = NULL,p_162 = NULL,q_162 = NULL,s_162 = NULL,t_162 = NULL,u_162 = NULL;
ATerm trm1225;
trm1225 = (ATerm) ATgetAnnotations(t);
if((trm1225 == NULL))
trm1225 = (ATerm) ATempty;
if(match_cons(t, sym_module_3))
{
o_162 = ATgetArgument(t, 0);
p_162 = ATgetArgument(t, 1);
q_162 = ATgetArgument(t, 2);
}
else
goto fail367 ;
r_162 = trm1225;
t = o_162;
t = cl_fun(o_54)(cl_sl(o_54), t);
if((t == NULL))
goto fail367 ;
s_162 = t;
t = p_162;
t = cl_fun(p_54)(cl_sl(p_54), t);
if((t == NULL))
goto fail367 ;
t_162 = t;
t = q_162;
t = cl_fun(q_54)(cl_sl(q_54), t);
if((t == NULL))
goto fail367 ;
u_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_module_3, s_162, t_162, u_162), r_162);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail367 :
--__tracing_table_counter;
return(NULL);
}
ATerm exports_1_0 (StrSL sl, StrCL n_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "exports_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_162 = NULL,l_162 = NULL,n_162 = NULL;
ATerm trm1224;
trm1224 = (ATerm) ATgetAnnotations(t);
if((trm1224 == NULL))
trm1224 = (ATerm) ATempty;
if(match_cons(t, sym_exports_1))
{
l_162 = ATgetArgument(t, 0);
}
else
goto fail366 ;
m_162 = trm1224;
t = l_162;
t = cl_fun(n_54)(cl_sl(n_54), t);
if((t == NULL))
goto fail366 ;
n_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_exports_1, n_162), m_162);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail366 :
--__tracing_table_counter;
return(NULL);
}
ATerm hiddens_1_0 (StrSL sl, StrCL m_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "hiddens_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_162 = NULL,i_162 = NULL,k_162 = NULL;
ATerm trm1223;
trm1223 = (ATerm) ATgetAnnotations(t);
if((trm1223 == NULL))
trm1223 = (ATerm) ATempty;
if(match_cons(t, sym_hiddens_1))
{
i_162 = ATgetArgument(t, 0);
}
else
goto fail365 ;
j_162 = trm1223;
t = i_162;
t = cl_fun(m_54)(cl_sl(m_54), t);
if((t == NULL))
goto fail365 ;
k_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_hiddens_1, k_162), j_162);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail365 :
--__tracing_table_counter;
return(NULL);
}
ATerm unparameterized_1_0 (StrSL sl, StrCL l_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unparameterized_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_162 = NULL,f_162 = NULL,h_162 = NULL;
ATerm trm1222;
trm1222 = (ATerm) ATgetAnnotations(t);
if((trm1222 == NULL))
trm1222 = (ATerm) ATempty;
if(match_cons(t, sym_unparameterized_1))
{
f_162 = ATgetArgument(t, 0);
}
else
goto fail364 ;
g_162 = trm1222;
t = f_162;
t = cl_fun(l_54)(cl_sl(l_54), t);
if((t == NULL))
goto fail364 ;
h_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_unparameterized_1, h_162), g_162);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail364 :
--__tracing_table_counter;
return(NULL);
}
ATerm parameterized_2_0 (StrSL sl, StrCL h_54, StrCL k_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parameterized_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_162 = NULL,a_162 = NULL,b_162 = NULL,d_162 = NULL,e_162 = NULL;
ATerm trm1221;
trm1221 = (ATerm) ATgetAnnotations(t);
if((trm1221 == NULL))
trm1221 = (ATerm) ATempty;
if(match_cons(t, sym_parameterized_2))
{
a_162 = ATgetArgument(t, 0);
b_162 = ATgetArgument(t, 1);
}
else
goto fail363 ;
c_162 = trm1221;
t = a_162;
t = cl_fun(h_54)(cl_sl(h_54), t);
if((t == NULL))
goto fail363 ;
d_162 = t;
t = b_162;
t = cl_fun(k_54)(cl_sl(k_54), t);
if((t == NULL))
goto fail363 ;
e_162 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_parameterized_2, d_162, e_162), c_162);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail363 :
--__tracing_table_counter;
return(NULL);
}
ATerm imports_1_0 (StrSL sl, StrCL g_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "imports_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_161 = NULL,w_161 = NULL,y_161 = NULL;
ATerm trm1220;
trm1220 = (ATerm) ATgetAnnotations(t);
if((trm1220 == NULL))
trm1220 = (ATerm) ATempty;
if(match_cons(t, sym_imports_1))
{
w_161 = ATgetArgument(t, 0);
}
else
goto fail362 ;
x_161 = trm1220;
t = w_161;
t = cl_fun(g_54)(cl_sl(g_54), t);
if((t == NULL))
goto fail362 ;
y_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_imports_1, y_161), x_161);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail362 :
--__tracing_table_counter;
return(NULL);
}
ATerm module_1_0 (StrSL sl, StrCL f_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "module_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_161 = NULL,t_161 = NULL,v_161 = NULL;
ATerm trm1219;
trm1219 = (ATerm) ATgetAnnotations(t);
if((trm1219 == NULL))
trm1219 = (ATerm) ATempty;
if(match_cons(t, sym_module_1))
{
t_161 = ATgetArgument(t, 0);
}
else
goto fail361 ;
u_161 = trm1219;
t = t_161;
t = cl_fun(f_54)(cl_sl(f_54), t);
if((t == NULL))
goto fail361 ;
v_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_module_1, v_161), u_161);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail361 :
--__tracing_table_counter;
return(NULL);
}
ATerm renamed_module_2_0 (StrSL sl, StrCL d_54, StrCL e_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "renamed_module_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_161 = NULL,n_161 = NULL,o_161 = NULL,q_161 = NULL,s_161 = NULL;
ATerm trm1218;
trm1218 = (ATerm) ATgetAnnotations(t);
if((trm1218 == NULL))
trm1218 = (ATerm) ATempty;
if(match_cons(t, sym_renamed_module_2))
{
n_161 = ATgetArgument(t, 0);
o_161 = ATgetArgument(t, 1);
}
else
goto fail360 ;
p_161 = trm1218;
t = n_161;
t = cl_fun(d_54)(cl_sl(d_54), t);
if((t == NULL))
goto fail360 ;
q_161 = t;
t = o_161;
t = cl_fun(e_54)(cl_sl(e_54), t);
if((t == NULL))
goto fail360 ;
s_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_renamed_module_2, q_161, s_161), p_161);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail360 :
--__tracing_table_counter;
return(NULL);
}
ATerm left_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "left_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_left_0)))
goto fail359 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail359 :
--__tracing_table_counter;
return(NULL);
}
ATerm right_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "right_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_right_0)))
goto fail358 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail358 :
--__tracing_table_counter;
return(NULL);
}
ATerm non_assoc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "non_assoc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_non_assoc_0)))
goto fail357 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail357 :
--__tracing_table_counter;
return(NULL);
}
ATerm assoc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "assoc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_assoc_0)))
goto fail356 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail356 :
--__tracing_table_counter;
return(NULL);
}
ATerm default_1_0 (StrSL sl, StrCL c_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "default_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_161 = NULL,k_161 = NULL,m_161 = NULL;
ATerm trm1217;
trm1217 = (ATerm) ATgetAnnotations(t);
if((trm1217 == NULL))
trm1217 = (ATerm) ATempty;
if(match_cons(t, sym_default_1))
{
k_161 = ATgetArgument(t, 0);
}
else
goto fail355 ;
l_161 = trm1217;
t = k_161;
t = cl_fun(c_54)(cl_sl(c_54), t);
if((t == NULL))
goto fail355 ;
m_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_default_1, m_161), l_161);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail355 :
--__tracing_table_counter;
return(NULL);
}
ATerm with_arguments_2_0 (StrSL sl, StrCL a_54, StrCL b_54, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "with_arguments_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_161 = NULL,f_161 = NULL,g_161 = NULL,i_161 = NULL,j_161 = NULL;
ATerm trm1216;
trm1216 = (ATerm) ATgetAnnotations(t);
if((trm1216 == NULL))
trm1216 = (ATerm) ATempty;
if(match_cons(t, sym_with_arguments_2))
{
f_161 = ATgetArgument(t, 0);
g_161 = ATgetArgument(t, 1);
}
else
goto fail354 ;
h_161 = trm1216;
t = f_161;
t = cl_fun(a_54)(cl_sl(a_54), t);
if((t == NULL))
goto fail354 ;
i_161 = t;
t = g_161;
t = cl_fun(b_54)(cl_sl(b_54), t);
if((t == NULL))
goto fail354 ;
j_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_with_arguments_2, i_161, j_161), h_161);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail354 :
--__tracing_table_counter;
return(NULL);
}
ATerm non_transitive_1_0 (StrSL sl, StrCL z_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "non_transitive_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_161 = NULL,c_161 = NULL,e_161 = NULL;
ATerm trm1215;
trm1215 = (ATerm) ATgetAnnotations(t);
if((trm1215 == NULL))
trm1215 = (ATerm) ATempty;
if(match_cons(t, sym_non_transitive_1))
{
c_161 = ATgetArgument(t, 0);
}
else
goto fail353 ;
d_161 = trm1215;
t = c_161;
t = cl_fun(z_53)(cl_sl(z_53), t);
if((t == NULL))
goto fail353 ;
e_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_non_transitive_1, e_161), d_161);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail353 :
--__tracing_table_counter;
return(NULL);
}
ATerm simple_group_1_0 (StrSL sl, StrCL w_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "simple_group_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_161 = NULL,z_160 = NULL,b_161 = NULL;
ATerm trm1214;
trm1214 = (ATerm) ATgetAnnotations(t);
if((trm1214 == NULL))
trm1214 = (ATerm) ATempty;
if(match_cons(t, sym_simple_group_1))
{
z_160 = ATgetArgument(t, 0);
}
else
goto fail352 ;
a_161 = trm1214;
t = z_160;
t = cl_fun(w_53)(cl_sl(w_53), t);
if((t == NULL))
goto fail352 ;
b_161 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_simple_group_1, b_161), a_161);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail352 :
--__tracing_table_counter;
return(NULL);
}
ATerm prods_group_1_0 (StrSL sl, StrCL v_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prods_group_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_160 = NULL,w_160 = NULL,y_160 = NULL;
ATerm trm1213;
trm1213 = (ATerm) ATgetAnnotations(t);
if((trm1213 == NULL))
trm1213 = (ATerm) ATempty;
if(match_cons(t, sym_prods_group_1))
{
w_160 = ATgetArgument(t, 0);
}
else
goto fail351 ;
x_160 = trm1213;
t = w_160;
t = cl_fun(v_53)(cl_sl(v_53), t);
if((t == NULL))
goto fail351 ;
y_160 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_prods_group_1, y_160), x_160);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail351 :
--__tracing_table_counter;
return(NULL);
}
ATerm assoc_group_2_0 (StrSL sl, StrCL t_53, StrCL u_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "assoc_group_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_160 = NULL,r_160 = NULL,s_160 = NULL,u_160 = NULL,v_160 = NULL;
ATerm trm1212;
trm1212 = (ATerm) ATgetAnnotations(t);
if((trm1212 == NULL))
trm1212 = (ATerm) ATempty;
if(match_cons(t, sym_assoc_group_2))
{
r_160 = ATgetArgument(t, 0);
s_160 = ATgetArgument(t, 1);
}
else
goto fail350 ;
t_160 = trm1212;
t = r_160;
t = cl_fun(t_53)(cl_sl(t_53), t);
if((t == NULL))
goto fail350 ;
u_160 = t;
t = s_160;
t = cl_fun(u_53)(cl_sl(u_53), t);
if((t == NULL))
goto fail350 ;
v_160 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_assoc_group_2, u_160, v_160), t_160);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail350 :
--__tracing_table_counter;
return(NULL);
}
ATerm chain_1_0 (StrSL sl, StrCL s_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "chain_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_160 = NULL,o_160 = NULL,q_160 = NULL;
ATerm trm1211;
trm1211 = (ATerm) ATgetAnnotations(t);
if((trm1211 == NULL))
trm1211 = (ATerm) ATempty;
if(match_cons(t, sym_chain_1))
{
o_160 = ATgetArgument(t, 0);
}
else
goto fail349 ;
p_160 = trm1211;
t = o_160;
t = cl_fun(s_53)(cl_sl(s_53), t);
if((t == NULL))
goto fail349 ;
q_160 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_chain_1, q_160), p_160);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail349 :
--__tracing_table_counter;
return(NULL);
}
ATerm assoc_3_0 (StrSL sl, StrCL p_53, StrCL q_53, StrCL r_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "assoc_3_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_160 = NULL,e_160 = NULL,f_160 = NULL,g_160 = NULL,j_160 = NULL,k_160 = NULL,l_160 = NULL;
ATerm trm1210;
trm1210 = (ATerm) ATgetAnnotations(t);
if((trm1210 == NULL))
trm1210 = (ATerm) ATempty;
if(match_cons(t, sym_assoc_3))
{
e_160 = ATgetArgument(t, 0);
f_160 = ATgetArgument(t, 1);
g_160 = ATgetArgument(t, 2);
}
else
goto fail348 ;
h_160 = trm1210;
t = e_160;
t = cl_fun(p_53)(cl_sl(p_53), t);
if((t == NULL))
goto fail348 ;
j_160 = t;
t = f_160;
t = cl_fun(q_53)(cl_sl(q_53), t);
if((t == NULL))
goto fail348 ;
k_160 = t;
t = g_160;
t = cl_fun(r_53)(cl_sl(r_53), t);
if((t == NULL))
goto fail348 ;
l_160 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_assoc_3, j_160, k_160, l_160), h_160);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail348 :
--__tracing_table_counter;
return(NULL);
}
ATerm numeric_1_0 (StrSL sl, StrCL m_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "numeric_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_160 = NULL,a_160 = NULL,c_160 = NULL;
ATerm trm1209;
trm1209 = (ATerm) ATgetAnnotations(t);
if((trm1209 == NULL))
trm1209 = (ATerm) ATempty;
if(match_cons(t, sym_numeric_1))
{
a_160 = ATgetArgument(t, 0);
}
else
goto fail347 ;
b_160 = trm1209;
t = a_160;
t = cl_fun(m_53)(cl_sl(m_53), t);
if((t == NULL))
goto fail347 ;
c_160 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_numeric_1, c_160), b_160);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail347 :
--__tracing_table_counter;
return(NULL);
}
ATerm short_1_0 (StrSL sl, StrCL l_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "short_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_159 = NULL,w_159 = NULL,z_159 = NULL;
ATerm trm1208;
trm1208 = (ATerm) ATgetAnnotations(t);
if((trm1208 == NULL))
trm1208 = (ATerm) ATempty;
if(match_cons(t, sym_short_1))
{
w_159 = ATgetArgument(t, 0);
}
else
goto fail346 ;
x_159 = trm1208;
t = w_159;
t = cl_fun(l_53)(cl_sl(l_53), t);
if((t == NULL))
goto fail346 ;
z_159 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_short_1, z_159), x_159);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail346 :
--__tracing_table_counter;
return(NULL);
}
ATerm top_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "top_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_top_0)))
goto fail345 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail345 :
--__tracing_table_counter;
return(NULL);
}
ATerm eof_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "eof_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_eof_0)))
goto fail344 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail344 :
--__tracing_table_counter;
return(NULL);
}
ATerm bot_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "bot_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_bot_0)))
goto fail343 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail343 :
--__tracing_table_counter;
return(NULL);
}
ATerm label__start_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "label__start_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_label__start_0)))
goto fail342 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail342 :
--__tracing_table_counter;
return(NULL);
}
ATerm range_2_0 (StrSL sl, StrCL j_53, StrCL k_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "range_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_159 = NULL,q_159 = NULL,r_159 = NULL,u_159 = NULL,v_159 = NULL;
ATerm trm1207;
trm1207 = (ATerm) ATgetAnnotations(t);
if((trm1207 == NULL))
trm1207 = (ATerm) ATempty;
if(match_cons(t, sym_range_2))
{
q_159 = ATgetArgument(t, 0);
r_159 = ATgetArgument(t, 1);
}
else
goto fail341 ;
s_159 = trm1207;
t = q_159;
t = cl_fun(j_53)(cl_sl(j_53), t);
if((t == NULL))
goto fail341 ;
u_159 = t;
t = r_159;
t = cl_fun(k_53)(cl_sl(k_53), t);
if((t == NULL))
goto fail341 ;
v_159 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_range_2, u_159, v_159), s_159);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail341 :
--__tracing_table_counter;
return(NULL);
}
ATerm conc_2_0 (StrSL sl, StrCL h_53, StrCL i_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "conc_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_159 = NULL,z_158 = NULL,d_159 = NULL,n_159 = NULL,p_159 = NULL;
ATerm trm1206;
trm1206 = (ATerm) ATgetAnnotations(t);
if((trm1206 == NULL))
trm1206 = (ATerm) ATempty;
if(match_cons(t, sym_conc_2))
{
z_158 = ATgetArgument(t, 0);
d_159 = ATgetArgument(t, 1);
}
else
goto fail340 ;
i_159 = trm1206;
t = z_158;
t = cl_fun(h_53)(cl_sl(h_53), t);
if((t == NULL))
goto fail340 ;
n_159 = t;
t = d_159;
t = cl_fun(i_53)(cl_sl(i_53), t);
if((t == NULL))
goto fail340 ;
p_159 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_conc_2, n_159, p_159), i_159);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail340 :
--__tracing_table_counter;
return(NULL);
}
ATerm absent_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "absent_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_absent_0)))
goto fail339 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail339 :
--__tracing_table_counter;
return(NULL);
}
ATerm present_1_0 (StrSL sl, StrCL g_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "present_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_158 = NULL,t_158 = NULL,y_158 = NULL;
ATerm trm1205;
trm1205 = (ATerm) ATgetAnnotations(t);
if((trm1205 == NULL))
trm1205 = (ATerm) ATempty;
if(match_cons(t, sym_present_1))
{
t_158 = ATgetArgument(t, 0);
}
else
goto fail338 ;
x_158 = trm1205;
t = t_158;
t = cl_fun(g_53)(cl_sl(g_53), t);
if((t == NULL))
goto fail338 ;
y_158 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_present_1, y_158), x_158);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail338 :
--__tracing_table_counter;
return(NULL);
}
ATerm simple_charclass_1_0 (StrSL sl, StrCL f_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "simple_charclass_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_158 = NULL,n_158 = NULL,s_158 = NULL;
ATerm trm1204;
trm1204 = (ATerm) ATgetAnnotations(t);
if((trm1204 == NULL))
trm1204 = (ATerm) ATempty;
if(match_cons(t, sym_simple_charclass_1))
{
n_158 = ATgetArgument(t, 0);
}
else
goto fail337 ;
r_158 = trm1204;
t = n_158;
t = cl_fun(f_53)(cl_sl(f_53), t);
if((t == NULL))
goto fail337 ;
s_158 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_simple_charclass_1, s_158), r_158);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail337 :
--__tracing_table_counter;
return(NULL);
}
ATerm comp_1_0 (StrSL sl, StrCL c_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "comp_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_158 = NULL,i_158 = NULL,m_158 = NULL;
ATerm trm1203;
trm1203 = (ATerm) ATgetAnnotations(t);
if((trm1203 == NULL))
trm1203 = (ATerm) ATempty;
if(match_cons(t, sym_comp_1))
{
i_158 = ATgetArgument(t, 0);
}
else
goto fail336 ;
l_158 = trm1203;
t = i_158;
t = cl_fun(c_53)(cl_sl(c_53), t);
if((t == NULL))
goto fail336 ;
m_158 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_comp_1, m_158), l_158);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail336 :
--__tracing_table_counter;
return(NULL);
}
ATerm diff_2_0 (StrSL sl, StrCL a_53, StrCL b_53, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "diff_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_158 = NULL,v_157 = NULL,w_157 = NULL,c_158 = NULL,d_158 = NULL;
ATerm trm1202;
trm1202 = (ATerm) ATgetAnnotations(t);
if((trm1202 == NULL))
trm1202 = (ATerm) ATempty;
if(match_cons(t, sym_diff_2))
{
v_157 = ATgetArgument(t, 0);
w_157 = ATgetArgument(t, 1);
}
else
goto fail335 ;
b_158 = trm1202;
t = v_157;
t = cl_fun(a_53)(cl_sl(a_53), t);
if((t == NULL))
goto fail335 ;
c_158 = t;
t = w_157;
t = cl_fun(b_53)(cl_sl(b_53), t);
if((t == NULL))
goto fail335 ;
d_158 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_diff_2, c_158, d_158), b_158);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail335 :
--__tracing_table_counter;
return(NULL);
}
ATerm isect_2_0 (StrSL sl, StrCL y_52, StrCL z_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "isect_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_157 = NULL,j_157 = NULL,n_157 = NULL,p_157 = NULL,u_157 = NULL;
ATerm trm1201;
trm1201 = (ATerm) ATgetAnnotations(t);
if((trm1201 == NULL))
trm1201 = (ATerm) ATempty;
if(match_cons(t, sym_isect_2))
{
j_157 = ATgetArgument(t, 0);
n_157 = ATgetArgument(t, 1);
}
else
goto fail334 ;
o_157 = trm1201;
t = j_157;
t = cl_fun(y_52)(cl_sl(y_52), t);
if((t == NULL))
goto fail334 ;
p_157 = t;
t = n_157;
t = cl_fun(z_52)(cl_sl(z_52), t);
if((t == NULL))
goto fail334 ;
u_157 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_isect_2, p_157, u_157), o_157);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail334 :
--__tracing_table_counter;
return(NULL);
}
ATerm union_2_0 (StrSL sl, StrCL w_52, StrCL x_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "union_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_157 = NULL,e_157 = NULL,f_157 = NULL,h_157 = NULL,i_157 = NULL;
ATerm trm1200;
trm1200 = (ATerm) ATgetAnnotations(t);
if((trm1200 == NULL))
trm1200 = (ATerm) ATempty;
if(match_cons(t, sym_union_2))
{
e_157 = ATgetArgument(t, 0);
f_157 = ATgetArgument(t, 1);
}
else
goto fail333 ;
g_157 = trm1200;
t = e_157;
t = cl_fun(w_52)(cl_sl(w_52), t);
if((t == NULL))
goto fail333 ;
h_157 = t;
t = f_157;
t = cl_fun(x_52)(cl_sl(x_52), t);
if((t == NULL))
goto fail333 ;
i_157 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_union_2, h_157, i_157), g_157);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail333 :
--__tracing_table_counter;
return(NULL);
}
ATerm unquoted_fun_1_0 (StrSL sl, StrCL v_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unquoted_fun_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_156 = NULL,t_156 = NULL,v_156 = NULL;
ATerm trm1199;
trm1199 = (ATerm) ATgetAnnotations(t);
if((trm1199 == NULL))
trm1199 = (ATerm) ATempty;
if(match_cons(t, sym_unquoted_fun_1))
{
t_156 = ATgetArgument(t, 0);
}
else
goto fail332 ;
u_156 = trm1199;
t = t_156;
t = cl_fun(v_52)(cl_sl(v_52), t);
if((t == NULL))
goto fail332 ;
v_156 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_unquoted_fun_1, v_156), u_156);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail332 :
--__tracing_table_counter;
return(NULL);
}
ATerm quoted_fun_1_0 (StrSL sl, StrCL u_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "quoted_fun_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_156 = NULL,o_156 = NULL,q_156 = NULL;
ATerm trm1198;
trm1198 = (ATerm) ATgetAnnotations(t);
if((trm1198 == NULL))
trm1198 = (ATerm) ATempty;
if(match_cons(t, sym_quoted_fun_1))
{
o_156 = ATgetArgument(t, 0);
}
else
goto fail331 ;
p_156 = trm1198;
t = o_156;
t = cl_fun(u_52)(cl_sl(u_52), t);
if((t == NULL))
goto fail331 ;
q_156 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_quoted_fun_1, q_156), p_156);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail331 :
--__tracing_table_counter;
return(NULL);
}
ATerm quoted_1_0 (StrSL sl, StrCL r_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "quoted_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_156 = NULL,e_156 = NULL,j_156 = NULL;
ATerm trm1197;
trm1197 = (ATerm) ATgetAnnotations(t);
if((trm1197 == NULL))
trm1197 = (ATerm) ATempty;
if(match_cons(t, sym_quoted_1))
{
e_156 = ATgetArgument(t, 0);
}
else
goto fail330 ;
g_156 = trm1197;
t = e_156;
t = cl_fun(r_52)(cl_sl(r_52), t);
if((t == NULL))
goto fail330 ;
j_156 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_quoted_1, j_156), g_156);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail330 :
--__tracing_table_counter;
return(NULL);
}
ATerm unquoted_1_0 (StrSL sl, StrCL q_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unquoted_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_156 = NULL,z_155 = NULL,c_156 = NULL;
ATerm trm1196;
trm1196 = (ATerm) ATgetAnnotations(t);
if((trm1196 == NULL))
trm1196 = (ATerm) ATempty;
if(match_cons(t, sym_unquoted_1))
{
z_155 = ATgetArgument(t, 0);
}
else
goto fail329 ;
a_156 = trm1196;
t = z_155;
t = cl_fun(q_52)(cl_sl(q_52), t);
if((t == NULL))
goto fail329 ;
c_156 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_unquoted_1, c_156), a_156);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail329 :
--__tracing_table_counter;
return(NULL);
}
ATerm char_class_1_0 (StrSL sl, StrCL p_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "char_class_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_155 = NULL,s_155 = NULL,x_155 = NULL;
ATerm trm1195;
trm1195 = (ATerm) ATgetAnnotations(t);
if((trm1195 == NULL))
trm1195 = (ATerm) ATempty;
if(match_cons(t, sym_char_class_1))
{
s_155 = ATgetArgument(t, 0);
}
else
goto fail328 ;
w_155 = trm1195;
t = s_155;
t = cl_fun(p_52)(cl_sl(p_52), t);
if((t == NULL))
goto fail328 ;
x_155 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_char_class_1, x_155), w_155);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail328 :
--__tracing_table_counter;
return(NULL);
}
ATerm seq_2_0 (StrSL sl, StrCL n_52, StrCL o_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "seq_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_155 = NULL,i_155 = NULL,j_155 = NULL,m_155 = NULL,q_155 = NULL;
ATerm trm1194;
trm1194 = (ATerm) ATgetAnnotations(t);
if((trm1194 == NULL))
trm1194 = (ATerm) ATempty;
if(match_cons(t, sym_seq_2))
{
i_155 = ATgetArgument(t, 0);
j_155 = ATgetArgument(t, 1);
}
else
goto fail327 ;
l_155 = trm1194;
t = i_155;
t = cl_fun(n_52)(cl_sl(n_52), t);
if((t == NULL))
goto fail327 ;
m_155 = t;
t = j_155;
t = cl_fun(o_52)(cl_sl(o_52), t);
if((t == NULL))
goto fail327 ;
q_155 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_seq_2, m_155, q_155), l_155);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail327 :
--__tracing_table_counter;
return(NULL);
}
ATerm single_1_0 (StrSL sl, StrCL m_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "single_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_155 = NULL,f_155 = NULL,h_155 = NULL;
ATerm trm1193;
trm1193 = (ATerm) ATgetAnnotations(t);
if((trm1193 == NULL))
trm1193 = (ATerm) ATempty;
if(match_cons(t, sym_single_1))
{
f_155 = ATgetArgument(t, 0);
}
else
goto fail326 ;
g_155 = trm1193;
t = f_155;
t = cl_fun(m_52)(cl_sl(m_52), t);
if((t == NULL))
goto fail326 ;
h_155 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_single_1, h_155), g_155);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail326 :
--__tracing_table_counter;
return(NULL);
}
ATerm alt_2_0 (StrSL sl, StrCL k_52, StrCL l_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "alt_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_155 = NULL,z_154 = NULL,a_155 = NULL,c_155 = NULL,e_155 = NULL;
ATerm trm1192;
trm1192 = (ATerm) ATgetAnnotations(t);
if((trm1192 == NULL))
trm1192 = (ATerm) ATempty;
if(match_cons(t, sym_alt_2))
{
z_154 = ATgetArgument(t, 0);
a_155 = ATgetArgument(t, 1);
}
else
goto fail325 ;
b_155 = trm1192;
t = z_154;
t = cl_fun(k_52)(cl_sl(k_52), t);
if((t == NULL))
goto fail325 ;
c_155 = t;
t = a_155;
t = cl_fun(l_52)(cl_sl(l_52), t);
if((t == NULL))
goto fail325 ;
e_155 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_alt_2, c_155, e_155), b_155);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail325 :
--__tracing_table_counter;
return(NULL);
}
ATerm follow_2_0 (StrSL sl, StrCL g_52, StrCL h_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "follow_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_154 = NULL,t_154 = NULL,u_154 = NULL,w_154 = NULL,x_154 = NULL;
ATerm trm1191;
trm1191 = (ATerm) ATgetAnnotations(t);
if((trm1191 == NULL))
trm1191 = (ATerm) ATempty;
if(match_cons(t, sym_follow_2))
{
t_154 = ATgetArgument(t, 0);
u_154 = ATgetArgument(t, 1);
}
else
goto fail324 ;
v_154 = trm1191;
t = t_154;
t = cl_fun(g_52)(cl_sl(g_52), t);
if((t == NULL))
goto fail324 ;
w_154 = t;
t = u_154;
t = cl_fun(h_52)(cl_sl(h_52), t);
if((t == NULL))
goto fail324 ;
x_154 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_follow_2, w_154, x_154), v_154);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail324 :
--__tracing_table_counter;
return(NULL);
}
ATerm alias_2_0 (StrSL sl, StrCL e_52, StrCL f_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "alias_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_154 = NULL,m_154 = NULL,n_154 = NULL,r_154 = NULL,s_154 = NULL;
ATerm trm1190;
trm1190 = (ATerm) ATgetAnnotations(t);
if((trm1190 == NULL))
trm1190 = (ATerm) ATempty;
if(match_cons(t, sym_alias_2))
{
m_154 = ATgetArgument(t, 0);
n_154 = ATgetArgument(t, 1);
}
else
goto fail323 ;
o_154 = trm1190;
t = m_154;
t = cl_fun(e_52)(cl_sl(e_52), t);
if((t == NULL))
goto fail323 ;
r_154 = t;
t = n_154;
t = cl_fun(f_52)(cl_sl(f_52), t);
if((t == NULL))
goto fail323 ;
s_154 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_alias_2, r_154, s_154), o_154);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail323 :
--__tracing_table_counter;
return(NULL);
}
ATerm definition_1_0 (StrSL sl, StrCL d_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "definition_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_154 = NULL,i_154 = NULL,k_154 = NULL;
ATerm trm1189;
trm1189 = (ATerm) ATgetAnnotations(t);
if((trm1189 == NULL))
trm1189 = (ATerm) ATempty;
if(match_cons(t, sym_definition_1))
{
i_154 = ATgetArgument(t, 0);
}
else
goto fail322 ;
j_154 = trm1189;
t = i_154;
t = cl_fun(d_52)(cl_sl(d_52), t);
if((t == NULL))
goto fail322 ;
k_154 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_definition_1, k_154), j_154);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail322 :
--__tracing_table_counter;
return(NULL);
}
ATerm ParseTable_1_0 (StrSL sl, StrCL c_52, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ParseTable_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_154 = NULL,a_154 = NULL,h_154 = NULL;
ATerm trm1188;
trm1188 = (ATerm) ATgetAnnotations(t);
if((trm1188 == NULL))
trm1188 = (ATerm) ATempty;
if(match_cons(t, sym_ParseTable_1))
{
a_154 = ATgetArgument(t, 0);
}
else
goto fail321 ;
f_154 = trm1188;
t = a_154;
t = cl_fun(c_52)(cl_sl(c_52), t);
if((t == NULL))
goto fail321 ;
h_154 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ParseTable_1, h_154), f_154);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail321 :
--__tracing_table_counter;
return(NULL);
}
ATerm AsFix2ME_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "AsFix2ME_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_AsFix2ME_0)))
goto fail320 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail320 :
--__tracing_table_counter;
return(NULL);
}
ATerm AsFix2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "AsFix2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_AsFix2_0)))
goto fail319 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail319 :
--__tracing_table_counter;
return(NULL);
}
ATerm RejectFilter_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "RejectFilter_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_RejectFilter_0)))
goto fail318 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail318 :
--__tracing_table_counter;
return(NULL);
}
ATerm PriorityFilter_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "PriorityFilter_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_PriorityFilter_0)))
goto fail317 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail317 :
--__tracing_table_counter;
return(NULL);
}
ATerm InjectionCountFilter_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "InjectionCountFilter_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_InjectionCountFilter_0)))
goto fail316 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail316 :
--__tracing_table_counter;
return(NULL);
}
ATerm EagernessFilter_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "EagernessFilter_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_EagernessFilter_0)))
goto fail315 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail315 :
--__tracing_table_counter;
return(NULL);
}
ATerm DirectEagernessFilter_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DirectEagernessFilter_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_DirectEagernessFilter_0)))
goto fail314 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail314 :
--__tracing_table_counter;
return(NULL);
}
ATerm AssociativityFilter_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "AssociativityFilter_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!(match_cons(t, sym_AssociativityFilter_0)))
goto fail313 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail313 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_remove_seq_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_remove_seq_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_211 = { &(lifted228) , &(frame) };
StrCL lifted228_cl = &(y_211);
t = topdown_1_0(sl, lifted228_cl, t);
if((t == NULL))
goto fail311 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail311 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted228 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted228";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_211 = { &(ImplodeTuple_0_0) , sl_up(sl) };
StrCL lifted229_cl = &(x_211);
t = try_1_0(sl_up(sl), lifted229_cl, t);
if((t == NULL))
goto fail312 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail312 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_flat_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_flat_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_211 = { &(lifted226) , &(frame) };
StrCL lifted226_cl = &(t_211);
t = topdown_1_0(sl, lifted226_cl, t);
if((t == NULL))
goto fail309 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail309 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted226 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted226";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_211 = { &(FlatList_0_0) , sl_up(sl) };
StrCL lifted227_cl = &(s_211);
t = try_1_0(sl_up(sl), lifted227_cl, t);
if((t == NULL))
goto fail310 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail310 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_flat_injections_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_flat_injections_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_211 = { &(lifted224) , &(frame) };
StrCL lifted224_cl = &(o_211);
t = bottomup_1_0(sl, lifted224_cl, t);
if((t == NULL))
goto fail307 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail307 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted224 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted224";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_211 = { &(ImplodeInjection_0_0) , sl_up(sl) };
StrCL lifted225_cl = &(n_211);
t = try_1_0(sl_up(sl), lifted225_cl, t);
if((t == NULL))
goto fail308 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail308 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_replace_appl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_replace_appl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_211 = { &(lifted220) , &(frame) };
StrCL lifted220_cl = &(k_211);
t = topdown_1_0(sl, lifted220_cl, t);
if((t == NULL))
goto fail304 ;
t = conc_to_cons_0_0(sl, t);
if((t == NULL))
goto fail304 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail304 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted220 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted220";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_211 = { &(lifted221) , &(frame) };
StrCL lifted221_cl = &(j_211);
t = try_1_0(sl_up(sl), lifted221_cl, t);
if((t == NULL))
goto fail305 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail305 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted221 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted221";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_211 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted222_cl = &(e_211);
struct str_closure f_211 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted223_cl = &(f_211);
t = appl_2_0(sl_up(sl_up(sl)), lifted222_cl, lifted223_cl, t);
if((t == NULL))
goto fail306 ;
{
ATerm trm1187 = t;
ATerm f_197 = NULL,g_197 = NULL,h_197 = NULL,i_197 = NULL;
if(match_cons(t, sym_appl_2))
{
g_197 = ATgetArgument(t, 0);
f_197 = ATgetArgument(t, 1);
}
else
goto label404 ;
i_197 = t;
t = g_197;
t = ConstrNil_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label404 ;
h_197 = t;
t = i_197;
t = (ATerm) ATempty;
goto label403 ;
label404 :
t = trm1187;
t = CnsGeneric_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail306 ;
else
goto label403 ;
label403 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail306 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_flat_alt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_flat_alt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_211 = { &(lifted218) , &(frame) };
StrCL lifted218_cl = &(a_211);
t = topdown_1_0(sl, lifted218_cl, t);
if((t == NULL))
goto fail302 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail302 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted218 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted218";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_210 = { &(ImplodeAlternative_0_0) , sl_up(sl) };
StrCL lifted219_cl = &(z_210);
t = try_1_0(sl_up(sl), lifted219_cl, t);
if((t == NULL))
goto fail303 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail303 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_remove_lit_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_remove_lit_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_210 = { &(lifted215) , &(frame) };
StrCL lifted215_cl = &(y_210);
t = topdown_1_0(sl, lifted215_cl, t);
if((t == NULL))
goto fail298 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail298 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted215 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted215";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_210 = { &(lifted216) , &(frame) };
StrCL lifted216_cl = &(x_210);
t = try_1_0(sl_up(sl), lifted216_cl, t);
if((t == NULL))
goto fail299 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail299 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted216 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted216";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_210 = { &(lifted217) , &(frame) };
StrCL lifted217_cl = &(s_210);
t = is_list_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail300 ;
t = filter_1_0(sl_up(sl_up(sl)), lifted217_cl, t);
if((t == NULL))
goto fail300 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail300 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted217 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted217";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1185 = t;
ATerm b_197 = NULL,c_197 = NULL,d_197 = NULL;
ATerm trm1186;
trm1186 = (ATerm) ATgetAnnotations(t);
if((trm1186 == NULL))
trm1186 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
c_197 = ATgetArgument(t, 0);
}
else
goto label402 ;
b_197 = trm1186;
t = c_197;
d_197 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, d_197), b_197);
goto fail301 ;
label402 :
t = trm1185;
goto label401 ;
label401 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail301 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_remove_layout_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_remove_layout_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_210 = { &(lifted206) , &(frame) };
StrCL lifted206_cl = &(r_210);
t = topdown_1_0(sl, lifted206_cl, t);
if((t == NULL))
goto fail290 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail290 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted206 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted206";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_210 = { &(lifted207) , &(frame) };
StrCL lifted207_cl = &(n_210);
t = try_1_0(sl_up(sl), lifted207_cl, t);
if((t == NULL))
goto fail291 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail291 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted207 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted207";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_210 = { &(lifted208) , &(frame) };
StrCL lifted208_cl = &(k_210);
struct str_closure m_210 = { &(lifted213) , &(frame) };
StrCL lifted213_cl = &(m_210);
t = appl_2_0(sl_up(sl_up(sl)), lifted208_cl, lifted213_cl, t);
if((t == NULL))
goto fail292 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail292 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted213 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted213";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_210 = { &(lifted214) , &(frame) };
StrCL lifted214_cl = &(j_210);
t = filter_1_0(sl_up(sl_up(sl_up(sl))), lifted214_cl, t);
if((t == NULL))
goto fail296 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail296 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted214 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted214";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1184 = t;
t = is_layout_p__0_0(sl_up(sl_up(sl_up(sl_up(sl)))), t);
if((t == NULL))
goto label400 ;
goto fail297 ;
label400 :
t = trm1184;
goto label399 ;
label399 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail297 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted208 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted208";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_210 = { &(lifted209) , &(frame) };
StrCL lifted209_cl = &(g_210);
struct str_closure h_210 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted211_cl = &(h_210);
struct str_closure i_210 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted212_cl = &(i_210);
t = prod_3_0(sl_up(sl_up(sl_up(sl))), lifted209_cl, lifted211_cl, lifted212_cl, t);
if((t == NULL))
goto fail293 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail293 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted209 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted209";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_210 = { &(lifted210) , &(frame) };
StrCL lifted210_cl = &(f_210);
t = filter_1_0(sl_up(sl_up(sl_up(sl_up(sl)))), lifted210_cl, t);
if((t == NULL))
goto fail294 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail294 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted210 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted210";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1183 = t;
t = is_layout_p__0_0(sl_up(sl_up(sl_up(sl_up(sl_up(sl))))), t);
if((t == NULL))
goto label398 ;
goto fail295 ;
label398 :
t = trm1183;
goto label397 ;
label397 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail295 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_flat_lex_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_flat_lex_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_210 = { &(lifted202) , &(frame) };
StrCL lifted202_cl = &(d_210);
struct str_closure e_210 = { &(lifted204) , &(frame) };
StrCL lifted204_cl = &(e_210);
t = downup2_2_0(sl, lifted202_cl, lifted204_cl, t);
if((t == NULL))
goto fail287 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail287 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted204 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted204";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_210 = { &(ImplodeLayout_0_0) , sl_up(sl) };
StrCL lifted205_cl = &(c_210);
t = try_1_0(sl_up(sl), lifted205_cl, t);
if((t == NULL))
goto fail289 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail289 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted202 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted202";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_210 = { &(ImplodeLexical_0_0) , sl_up(sl) };
StrCL lifted203_cl = &(b_210);
t = try_1_0(sl_up(sl), lifted203_cl, t);
if((t == NULL))
goto fail288 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail288 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_appl_to_sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_appl_to_sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_210 = { &(lifted200) , &(frame) };
StrCL lifted200_cl = &(a_210);
t = topdown_1_0(sl, lifted200_cl, t);
if((t == NULL))
goto fail285 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail285 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted200 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted200";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_209 = { &(ApplToSort_0_0) , sl_up(sl) };
StrCL lifted201_cl = &(z_209);
t = repeat_1_0(sl_up(sl), lifted201_cl, t);
if((t == NULL))
goto fail286 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail286 :
--__tracing_table_counter;
return(NULL);
}
ATerm implode_parsetree_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "implode_parsetree_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_52 = NULL;
b_52 = t;
t = STRSGLR_implode_parsetree(b_52);
if((t == NULL))
goto fail284 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail284 :
--__tracing_table_counter;
return(NULL);
}
ATerm implode_asfix_1_0 (StrSL sl, StrCL y_51, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "implode_asfix_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, y_51);
{
struct str_closure x_209 = { &(z_51) , &(frame) };
StrCL z_51_cl = &(x_209);
sl_init_fun(1, z_51_cl);
{
ATerm a_52 = NULL;
if(match_cons(t, sym_parsetree_2))
{
a_52 = ATgetArgument(t, 0);
{
ATerm trm1182 = ATgetArgument(t, 1);
}
}
else
goto fail280 ;
t = a_52;
t = z_51(&(frame), t);
if((t == NULL))
goto fail280 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail280 :
--__tracing_table_counter;
return(NULL);
}
static ATerm z_51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "z_51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1171 = t;
t = ImplodeLexical_0_0(sl_up(sl), t);
if((t == NULL))
goto label384 ;
goto label383 ;
label384 :
t = trm1171;
{
ATerm trm1172 = t;
ATerm x_51 = NULL;
x_51 = t;
{
ATerm trm1173 = t;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label387 ;
goto label385 ;
label387 :
t = trm1173;
goto label386 ;
label386 :
;
t = x_51;
t = skip_concrete_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto label385 ;
}
goto label383 ;
label385 :
t = trm1172;
{
ATerm trm1174 = t;
struct str_closure v_209 = { &(_Id) , sl_up(sl) };
StrCL lifted197_cl = &(v_209);
struct str_closure w_209 = { &(lifted198) , &(frame) };
StrCL lifted198_cl = &(w_209);
t = appl_2_0(sl_up(sl), lifted197_cl, lifted198_cl, t);
if((t == NULL))
goto label388 ;
{
ATerm trm1176 = t;
t = ImplodeOptionalList_0_0(sl_up(sl), t);
if((t == NULL))
goto label392 ;
t = z_51(sl, t);
if((t == NULL))
goto label392 ;
goto label391 ;
label392 :
t = trm1176;
{
ATerm trm1177 = t;
t = ReplCons_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto label393 ;
goto label391 ;
label393 :
t = trm1177;
{
ATerm trm1178 = t;
t = ImplodeInjection_0_0(sl_up(sl), t);
if((t == NULL))
goto label394 ;
t = z_51(sl, t);
if((t == NULL))
goto label394 ;
goto label391 ;
label394 :
t = trm1178;
{
ATerm trm1179 = t;
t = ImplodeTuple_0_0(sl_up(sl), t);
if((t == NULL))
goto label395 ;
t = z_51(sl, t);
if((t == NULL))
goto label395 ;
goto label391 ;
label395 :
t = trm1179;
t = ImplodeAlternative_0_0(sl_up(sl), t);
if((t == NULL))
goto label388 ;
t = z_51(sl, t);
if((t == NULL))
goto label388 ;
else
goto label391 ;
}
}
}
label391 :
;
}
goto label383 ;
label388 :
t = trm1174;
{
ATerm trm1180 = t;
ATerm x_196 = NULL,y_196 = NULL,z_196 = NULL;
ATerm trm1181;
trm1181 = (ATerm) ATgetAnnotations(t);
if((trm1181 == NULL))
trm1181 = (ATerm) ATempty;
if(match_cons(t, sym_amb_1))
{
y_196 = ATgetArgument(t, 0);
}
else
goto label396 ;
x_196 = trm1181;
t = y_196;
t = map_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto label396 ;
z_196 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_amb_1, z_196), x_196);
goto label383 ;
label396 :
t = trm1180;
t = SRTS_all(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail281 ;
else
goto label383 ;
}
}
}
label383 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail281 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted198 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted198";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_209 = { &(lifted199) , &(frame) };
StrCL lifted199_cl = &(t_209);
t = filter_1_0(sl_up(sl_up(sl)), lifted199_cl, t);
if((t == NULL))
goto fail282 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail282 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted199 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted199";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1175 = t;
t = is_ignorable_syntax_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label390 ;
goto fail283 ;
label390 :
t = trm1175;
goto label389 ;
label389 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail283 :
--__tracing_table_counter;
return(NULL);
}
ATerm implode_asfix_skip_concrete_syntax_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "implode_asfix_skip_concrete_syntax_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_209 = { &(false_0_0) , sl };
StrCL lifted196_cl = &(s_209);
t = implode_asfix_1_0(sl, lifted196_cl, t);
if((t == NULL))
goto fail279 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail279 :
--__tracing_table_counter;
return(NULL);
}
ATerm implode_asfix_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "implode_asfix_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_209 = { &(true_0_0) , sl };
StrCL lifted195_cl = &(r_209);
t = implode_asfix_1_0(sl, lifted195_cl, t);
if((t == NULL))
goto fail278 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail278 :
--__tracing_table_counter;
return(NULL);
}
ATerm ImplodeAlternative_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ImplodeAlternative_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(5);
{
ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL;
sl_init_var(0, c_51);
sl_init_var(1, d_51);
sl_init_var(2, e_51);
sl_init_var(3, f_51);
sl_init_var(4, g_51);
{
ATerm trm1163 = t;
struct str_closure k_209 = { &(lifted184) , &(frame) };
StrCL lifted184_cl = &(k_209);
struct str_closure l_209 = { &(lifted189) , &(frame) };
StrCL lifted189_cl = &(l_209);
t = appl_2_0(sl, lifted184_cl, lifted189_cl, t);
if((t == NULL))
goto label380 ;
goto label379 ;
label380 :
t = trm1163;
{
struct str_closure p_209 = { &(lifted190) , &(frame) };
StrCL lifted190_cl = &(p_209);
struct str_closure q_209 = { &(lifted194) , &(frame) };
StrCL lifted194_cl = &(q_209);
t = appl_2_0(sl, lifted190_cl, lifted194_cl, t);
if((t == NULL))
goto fail267 ;
else
goto label379 ;
}
label379 :
;
if(((c_51 == NULL) || (d_51 == NULL)))
goto fail267 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, c_51, d_51), term109);
}
t = u_51(&(frame), t);
if((t == NULL))
goto fail267 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail267 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted194 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted194";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(4, sl) == NULL))
{
sl_readvar(4, sl) = t;
}
else
if((sl_readvar(4, sl) != t))
goto fail277 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail277 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted190 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted190";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_209 = { &(lifted191) , &(frame) };
StrCL lifted191_cl = &(m_209);
struct str_closure n_209 = { &(lifted192) , &(frame) };
StrCL lifted192_cl = &(n_209);
struct str_closure o_209 = { &(_Id) , sl_up(sl) };
StrCL lifted193_cl = &(o_209);
t = prod_3_0(sl_up(sl), lifted191_cl, lifted192_cl, lifted193_cl, t);
if((t == NULL))
goto fail274 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail274 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted192 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted192";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_196 = NULL,u_196 = NULL,v_196 = NULL;
ATerm trm1170;
trm1170 = (ATerm) ATgetAnnotations(t);
if((trm1170 == NULL))
trm1170 = (ATerm) ATempty;
if(match_cons(t, sym_lex_1))
{
u_196 = ATgetArgument(t, 0);
}
else
goto fail276 ;
t_196 = trm1170;
t = u_196;
if(match_cons(t, sym_alt_2))
{
if((sl_readvar(0, sl_up(sl)) == NULL))
{
sl_readvar(0, sl_up(sl)) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl_up(sl)) != ATgetArgument(t, 0)))
goto fail276 ;
if((sl_readvar(1, sl_up(sl)) == NULL))
{
sl_readvar(1, sl_up(sl)) = ATgetArgument(t, 1);
}
else
if((sl_readvar(1, sl_up(sl)) != ATgetArgument(t, 1)))
goto fail276 ;
}
else
goto fail276 ;
v_196 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lex_1, v_196), t_196);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail276 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted191 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted191";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
ATerm trm1168;
trm1168 = (ATerm) ATgetAnnotations(t);
if((trm1168 == NULL))
trm1168 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
m_51 = ATgetFirst((ATermList) t);
n_51 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail275 ;
q_51 = trm1168;
t = m_51;
if((sl_readvar(2, sl_up(sl)) == NULL))
{
sl_readvar(2, sl_up(sl)) = t;
}
else
if((sl_readvar(2, sl_up(sl)) != t))
goto fail275 ;
o_51 = t;
t = n_51;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail275 ;
p_51 = t;
{
ATerm trm1169;
trm1169 = CheckATermList(p_51);
if((trm1169 == NULL))
goto fail275 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm1169, o_51), q_51);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail275 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted189 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted189";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(4, sl) == NULL))
{
sl_readvar(4, sl) = t;
}
else
if((sl_readvar(4, sl) != t))
goto fail273 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail273 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted184 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted184";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_209 = { &(lifted185) , &(frame) };
StrCL lifted185_cl = &(h_209);
struct str_closure i_209 = { &(lifted186) , &(frame) };
StrCL lifted186_cl = &(i_209);
struct str_closure j_209 = { &(_Id) , sl_up(sl) };
StrCL lifted188_cl = &(j_209);
t = prod_3_0(sl_up(sl), lifted185_cl, lifted186_cl, lifted188_cl, t);
if((t == NULL))
goto fail269 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail269 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted186 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted186";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_209 = { &(lifted187) , &(frame) };
StrCL lifted187_cl = &(g_209);
t = cf_1_0(sl_up(sl_up(sl)), lifted187_cl, t);
if((t == NULL))
goto fail271 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail271 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted187 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted187";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_alt_2))
{
if((sl_readvar(0, sl_up(sl_up(sl))) == NULL))
{
sl_readvar(0, sl_up(sl_up(sl))) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl_up(sl_up(sl))) != ATgetArgument(t, 0)))
goto fail272 ;
if((sl_readvar(1, sl_up(sl_up(sl))) == NULL))
{
sl_readvar(1, sl_up(sl_up(sl))) = ATgetArgument(t, 1);
}
else
if((sl_readvar(1, sl_up(sl_up(sl))) != ATgetArgument(t, 1)))
goto fail272 ;
}
else
goto fail272 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail272 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted185 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted185";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL;
ATerm trm1164;
trm1164 = (ATerm) ATgetAnnotations(t);
if((trm1164 == NULL))
trm1164 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
h_51 = ATgetFirst((ATermList) t);
i_51 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail270 ;
l_51 = trm1164;
t = h_51;
{
ATerm trm1165 = t;
ATerm p_196 = NULL,q_196 = NULL,r_196 = NULL;
ATerm trm1166;
trm1166 = (ATerm) ATgetAnnotations(t);
if((trm1166 == NULL))
trm1166 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
q_196 = ATgetArgument(t, 0);
}
else
goto label382 ;
p_196 = trm1166;
t = q_196;
if((sl_readvar(2, sl_up(sl)) == NULL))
{
sl_readvar(2, sl_up(sl)) = t;
}
else
if((sl_readvar(2, sl_up(sl)) != t))
goto label382 ;
r_196 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, r_196), p_196);
goto label381 ;
label382 :
t = trm1165;
if((sl_readvar(2, sl_up(sl)) == NULL))
{
sl_readvar(2, sl_up(sl)) = t;
goto label381 ;
}
else
if((sl_readvar(2, sl_up(sl)) != t))
goto fail270 ;
else
goto label381 ;
label381 :
;
j_51 = t;
t = i_51;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail270 ;
k_51 = t;
{
ATerm trm1167;
trm1167 = CheckATermList(k_51);
if((trm1167 == NULL))
goto fail270 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm1167, j_51), l_51);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail270 :
--__tracing_table_counter;
return(NULL);
}
static ATerm u_51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "u_51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
ATerm trm1159 = t;
if(match_cons(t, sym__2))
{
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(2, sl) != ATgetArgument(t, 0)))
goto label377 ;
r_51 = ATgetArgument(t, 1);
}
else
goto label377 ;
if((sl_readvar(4, sl) == NULL))
goto label377 ;
else
{
t = (ATerm) ATmakeAppl(sym_alt_2, r_51, sl_readvar(4, sl));
}
goto label376 ;
label377 :
t = trm1159;
{
ATerm trm1160 = t;
if(match_cons(t, sym__2))
{
ATerm trm1161 = ATgetArgument(t, 0);
if(match_cons(trm1161, sym_alt_2))
{
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = ATgetArgument(trm1161, 0);
}
else
if((sl_readvar(2, sl) != ATgetArgument(trm1161, 0)))
goto label378 ;
if((sl_readvar(3, sl) == NULL))
{
sl_readvar(3, sl) = ATgetArgument(trm1161, 1);
}
else
if((sl_readvar(3, sl) != ATgetArgument(trm1161, 1)))
goto label378 ;
}
else
goto label378 ;
r_51 = ATgetArgument(t, 1);
}
else
goto label378 ;
if((sl_readvar(4, sl) == NULL))
goto label378 ;
else
{
t = (ATerm) ATmakeAppl(sym_alt_2, r_51, sl_readvar(4, sl));
}
goto label376 ;
label378 :
t = trm1160;
{
ATerm v_51 = NULL,w_51 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm1162 = ATgetArgument(t, 0);
if(match_cons(trm1162, sym_alt_2))
{
s_51 = ATgetArgument(trm1162, 0);
t_51 = ATgetArgument(trm1162, 1);
}
else
goto fail268 ;
r_51 = ATgetArgument(t, 1);
}
else
goto fail268 ;
w_51 = t;
t = (ATerm) ATmakeAppl(sym__2, r_51, term109);
t = add_0_0(sl_up(sl), t);
if((t == NULL))
goto fail268 ;
v_51 = t;
t = w_51;
t = (ATerm) ATmakeAppl(sym__2, t_51, v_51);
t = u_51(sl, t);
if((t == NULL))
goto fail268 ;
else
goto label376 ;
}
}
label376 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail268 :
--__tracing_table_counter;
return(NULL);
}
ATerm Constr23_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Constr23_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
if(match_cons(t, sym_prod_3))
{
y_50 = ATgetArgument(t, 0);
{
ATerm trm1143 = ATgetArgument(t, 1);
if(match_cons(trm1143, sym_cf_1))
{
ATerm trm1144 = ATgetArgument(trm1143, 0);
if(match_cons(trm1144, sym_iter_sep_2))
{
z_50 = ATgetArgument(trm1144, 0);
x_50 = ATgetArgument(trm1144, 1);
}
else
goto fail266 ;
}
else
goto fail266 ;
}
{
ATerm trm1145 = ATgetArgument(t, 2);
}
}
else
goto fail266 ;
b_51 = t;
t = y_50;
{
ATerm trm1146 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm1147 = ATgetFirst((ATermList) t);
if(match_cons(trm1147, sym_cf_1))
{
if(!((z_50 == ATgetArgument(trm1147, 0))))
goto label375 ;
}
else
goto label375 ;
{
ATerm trm1148 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm1148) == AT_LIST) && ATisEmpty(trm1148))))
goto label375 ;
}
}
else
goto label375 ;
t = term115;
goto label374 ;
label375 :
t = trm1146;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm1149 = ATgetFirst((ATermList) t);
ATerm trm1150 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm1150) == AT_LIST) && !(ATisEmpty(trm1150))))
{
ATerm trm1151 = ATgetFirst((ATermList) trm1150);
ATerm trm1152 = (ATerm) ATgetNext((ATermList) trm1150);
if(((ATgetType(trm1152) == AT_LIST) && !(ATisEmpty(trm1152))))
{
ATerm trm1153 = ATgetFirst((ATermList) trm1152);
ATerm trm1154 = (ATerm) ATgetNext((ATermList) trm1152);
if(((ATgetType(trm1154) == AT_LIST) && !(ATisEmpty(trm1154))))
{
ATerm trm1155 = ATgetFirst((ATermList) trm1154);
ATerm trm1156 = (ATerm) ATgetNext((ATermList) trm1154);
if(((ATgetType(trm1156) == AT_LIST) && !(ATisEmpty(trm1156))))
{
ATerm trm1157 = ATgetFirst((ATermList) trm1156);
ATerm trm1158 = (ATerm) ATgetNext((ATermList) trm1156);
if(!(((ATgetType(trm1158) == AT_LIST) && ATisEmpty(trm1158))))
goto fail266 ;
}
else
goto fail266 ;
}
else
goto fail266 ;
}
else
goto fail266 ;
}
else
goto fail266 ;
}
else
goto fail266 ;
t = term111;
goto label374 ;
label374 :
;
a_51 = t;
t = b_51;
t = a_51;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail266 :
--__tracing_table_counter;
return(NULL);
}
ATerm Constr1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Constr1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm992 = t;
ATerm w_50 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm993 = ATgetArgument(t, 0);
if(((ATgetType(trm993) == AT_LIST) && !(ATisEmpty(trm993))))
{
ATerm trm994 = ATgetFirst((ATermList) trm993);
if(match_cons(trm994, sym_cf_1))
{
w_50 = ATgetArgument(trm994, 0);
}
else
goto label359 ;
{
ATerm trm995 = (ATerm) ATgetNext((ATermList) trm993);
if(!(((ATgetType(trm995) == AT_LIST) && ATisEmpty(trm995))))
goto label359 ;
}
}
else
goto label359 ;
{
ATerm trm996 = ATgetArgument(t, 1);
if(match_cons(trm996, sym_cf_1))
{
ATerm trm997 = ATgetArgument(trm996, 0);
if(match_cons(trm997, sym_iter_sep_2))
{
if(!((w_50 == ATgetArgument(trm997, 0))))
goto label359 ;
{
ATerm trm998 = ATgetArgument(trm997, 1);
}
}
else
goto label359 ;
}
else
goto label359 ;
}
{
ATerm trm999 = ATgetArgument(t, 2);
}
}
else
goto label359 ;
t = term115;
goto label358 ;
label359 :
t = trm992;
{
ATerm trm1000 = t;
ATerm v_50 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm1001 = ATgetArgument(t, 0);
if(((ATgetType(trm1001) == AT_LIST) && !(ATisEmpty(trm1001))))
{
ATerm trm1002 = ATgetFirst((ATermList) trm1001);
if(match_cons(trm1002, sym_cf_1))
{
v_50 = ATgetArgument(trm1002, 0);
}
else
goto label360 ;
{
ATerm trm1003 = (ATerm) ATgetNext((ATermList) trm1001);
if(!(((ATgetType(trm1003) == AT_LIST) && ATisEmpty(trm1003))))
goto label360 ;
}
}
else
goto label360 ;
{
ATerm trm1004 = ATgetArgument(t, 1);
if(match_cons(trm1004, sym_cf_1))
{
ATerm trm1005 = ATgetArgument(trm1004, 0);
if(match_cons(trm1005, sym_iter_1))
{
if(!((v_50 == ATgetArgument(trm1005, 0))))
goto label360 ;
}
else
goto label360 ;
}
else
goto label360 ;
}
{
ATerm trm1006 = ATgetArgument(t, 2);
}
}
else
goto label360 ;
t = term115;
goto label358 ;
label360 :
t = trm1000;
{
ATerm trm1007 = t;
ATerm u_50 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm1008 = ATgetArgument(t, 0);
if(((ATgetType(trm1008) == AT_LIST) && !(ATisEmpty(trm1008))))
{
u_50 = ATgetFirst((ATermList) trm1008);
{
ATerm trm1009 = (ATerm) ATgetNext((ATermList) trm1008);
if(!(((ATgetType(trm1009) == AT_LIST) && ATisEmpty(trm1009))))
goto label361 ;
}
}
else
goto label361 ;
{
ATerm trm1010 = ATgetArgument(t, 1);
if(match_cons(trm1010, sym_iter_sep_2))
{
if(!((u_50 == ATgetArgument(trm1010, 0))))
goto label361 ;
{
ATerm trm1011 = ATgetArgument(trm1010, 1);
}
}
else
goto label361 ;
}
{
ATerm trm1012 = ATgetArgument(t, 2);
}
}
else
goto label361 ;
t = term115;
goto label358 ;
label361 :
t = trm1007;
{
ATerm trm1013 = t;
ATerm t_50 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm1014 = ATgetArgument(t, 0);
if(((ATgetType(trm1014) == AT_LIST) && !(ATisEmpty(trm1014))))
{
t_50 = ATgetFirst((ATermList) trm1014);
{
ATerm trm1015 = (ATerm) ATgetNext((ATermList) trm1014);
if(!(((ATgetType(trm1015) == AT_LIST) && ATisEmpty(trm1015))))
goto label362 ;
}
}
else
goto label362 ;
{
ATerm trm1016 = ATgetArgument(t, 1);
if(match_cons(trm1016, sym_iter_1))
{
if(!((t_50 == ATgetArgument(trm1016, 0))))
goto label362 ;
}
else
goto label362 ;
}
{
ATerm trm1017 = ATgetArgument(t, 2);
}
}
else
goto label362 ;
t = term115;
goto label358 ;
label362 :
t = trm1013;
{
ATerm trm1018 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1019 = ATgetArgument(t, 0);
if(((ATgetType(trm1019) == AT_LIST) && !(ATisEmpty(trm1019))))
{
ATerm trm1020 = ATgetFirst((ATermList) trm1019);
ATerm trm1021 = (ATerm) ATgetNext((ATermList) trm1019);
if(((ATgetType(trm1021) == AT_LIST) && !(ATisEmpty(trm1021))))
{
ATerm trm1022 = ATgetFirst((ATermList) trm1021);
ATerm trm1023 = (ATerm) ATgetNext((ATermList) trm1021);
if(((ATgetType(trm1023) == AT_LIST) && !(ATisEmpty(trm1023))))
{
ATerm trm1024 = ATgetFirst((ATermList) trm1023);
ATerm trm1025 = (ATerm) ATgetNext((ATermList) trm1023);
if(((ATgetType(trm1025) == AT_LIST) && !(ATisEmpty(trm1025))))
{
ATerm trm1026 = ATgetFirst((ATermList) trm1025);
ATerm trm1027 = (ATerm) ATgetNext((ATermList) trm1025);
if(((ATgetType(trm1027) == AT_LIST) && !(ATisEmpty(trm1027))))
{
ATerm trm1028 = ATgetFirst((ATermList) trm1027);
ATerm trm1029 = (ATerm) ATgetNext((ATermList) trm1027);
if(!(((ATgetType(trm1029) == AT_LIST) && ATisEmpty(trm1029))))
goto label363 ;
}
else
goto label363 ;
}
else
goto label363 ;
}
else
goto label363 ;
}
else
goto label363 ;
}
else
goto label363 ;
{
ATerm trm1030 = ATgetArgument(t, 1);
if(match_cons(trm1030, sym_cf_1))
{
ATerm trm1031 = ATgetArgument(trm1030, 0);
if(match_cons(trm1031, sym_iter_sep_2))
{
ATerm trm1032 = ATgetArgument(trm1031, 0);
ATerm trm1033 = ATgetArgument(trm1031, 1);
}
else
goto label363 ;
}
else
goto label363 ;
}
{
ATerm trm1034 = ATgetArgument(t, 2);
}
}
else
goto label363 ;
t = term111;
goto label358 ;
label363 :
t = trm1018;
{
ATerm trm1035 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1036 = ATgetArgument(t, 0);
if(((ATgetType(trm1036) == AT_LIST) && !(ATisEmpty(trm1036))))
{
ATerm trm1037 = ATgetFirst((ATermList) trm1036);
ATerm trm1038 = (ATerm) ATgetNext((ATermList) trm1036);
if(((ATgetType(trm1038) == AT_LIST) && !(ATisEmpty(trm1038))))
{
ATerm trm1039 = ATgetFirst((ATermList) trm1038);
ATerm trm1040 = (ATerm) ATgetNext((ATermList) trm1038);
if(((ATgetType(trm1040) == AT_LIST) && !(ATisEmpty(trm1040))))
{
ATerm trm1041 = ATgetFirst((ATermList) trm1040);
ATerm trm1042 = (ATerm) ATgetNext((ATermList) trm1040);
if(!(((ATgetType(trm1042) == AT_LIST) && ATisEmpty(trm1042))))
goto label364 ;
}
else
goto label364 ;
}
else
goto label364 ;
}
else
goto label364 ;
{
ATerm trm1043 = ATgetArgument(t, 1);
if(match_cons(trm1043, sym_cf_1))
{
ATerm trm1044 = ATgetArgument(trm1043, 0);
if(match_cons(trm1044, sym_iter_sep_2))
{
ATerm trm1045 = ATgetArgument(trm1044, 0);
ATerm trm1046 = ATgetArgument(trm1044, 1);
}
else
goto label364 ;
}
else
goto label364 ;
}
{
ATerm trm1047 = ATgetArgument(t, 2);
}
}
else
goto label364 ;
t = term111;
goto label358 ;
label364 :
t = trm1035;
{
ATerm trm1048 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1049 = ATgetArgument(t, 0);
if(((ATgetType(trm1049) == AT_LIST) && !(ATisEmpty(trm1049))))
{
ATerm trm1050 = ATgetFirst((ATermList) trm1049);
ATerm trm1051 = (ATerm) ATgetNext((ATermList) trm1049);
if(((ATgetType(trm1051) == AT_LIST) && !(ATisEmpty(trm1051))))
{
ATerm trm1052 = ATgetFirst((ATermList) trm1051);
ATerm trm1053 = (ATerm) ATgetNext((ATermList) trm1051);
if(((ATgetType(trm1053) == AT_LIST) && !(ATisEmpty(trm1053))))
{
ATerm trm1054 = ATgetFirst((ATermList) trm1053);
ATerm trm1055 = (ATerm) ATgetNext((ATermList) trm1053);
if(!(((ATgetType(trm1055) == AT_LIST) && ATisEmpty(trm1055))))
goto label365 ;
}
else
goto label365 ;
}
else
goto label365 ;
}
else
goto label365 ;
{
ATerm trm1056 = ATgetArgument(t, 1);
if(match_cons(trm1056, sym_cf_1))
{
ATerm trm1057 = ATgetArgument(trm1056, 0);
if(match_cons(trm1057, sym_iter_1))
{
ATerm trm1058 = ATgetArgument(trm1057, 0);
}
else
goto label365 ;
}
else
goto label365 ;
}
{
ATerm trm1059 = ATgetArgument(t, 2);
}
}
else
goto label365 ;
t = term111;
goto label358 ;
label365 :
t = trm1048;
{
ATerm trm1060 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1061 = ATgetArgument(t, 0);
if(((ATgetType(trm1061) == AT_LIST) && !(ATisEmpty(trm1061))))
{
ATerm trm1062 = ATgetFirst((ATermList) trm1061);
ATerm trm1063 = (ATerm) ATgetNext((ATermList) trm1061);
if(((ATgetType(trm1063) == AT_LIST) && !(ATisEmpty(trm1063))))
{
ATerm trm1064 = ATgetFirst((ATermList) trm1063);
ATerm trm1065 = (ATerm) ATgetNext((ATermList) trm1063);
if(!(((ATgetType(trm1065) == AT_LIST) && ATisEmpty(trm1065))))
goto label366 ;
}
else
goto label366 ;
}
else
goto label366 ;
{
ATerm trm1066 = ATgetArgument(t, 1);
if(match_cons(trm1066, sym_cf_1))
{
ATerm trm1067 = ATgetArgument(trm1066, 0);
if(match_cons(trm1067, sym_iter_1))
{
ATerm trm1068 = ATgetArgument(trm1067, 0);
}
else
goto label366 ;
}
else
goto label366 ;
}
{
ATerm trm1069 = ATgetArgument(t, 2);
}
}
else
goto label366 ;
t = term111;
goto label358 ;
label366 :
t = trm1060;
{
ATerm trm1070 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1071 = ATgetArgument(t, 0);
if(((ATgetType(trm1071) == AT_LIST) && !(ATisEmpty(trm1071))))
{
ATerm trm1072 = ATgetFirst((ATermList) trm1071);
ATerm trm1073 = (ATerm) ATgetNext((ATermList) trm1071);
if(((ATgetType(trm1073) == AT_LIST) && !(ATisEmpty(trm1073))))
{
ATerm trm1074 = ATgetFirst((ATermList) trm1073);
ATerm trm1075 = (ATerm) ATgetNext((ATermList) trm1073);
if(((ATgetType(trm1075) == AT_LIST) && !(ATisEmpty(trm1075))))
{
ATerm trm1076 = ATgetFirst((ATermList) trm1075);
ATerm trm1077 = (ATerm) ATgetNext((ATermList) trm1075);
if(!(((ATgetType(trm1077) == AT_LIST) && ATisEmpty(trm1077))))
goto label367 ;
}
else
goto label367 ;
}
else
goto label367 ;
}
else
goto label367 ;
{
ATerm trm1078 = ATgetArgument(t, 1);
if(match_cons(trm1078, sym_iter_sep_2))
{
ATerm trm1079 = ATgetArgument(trm1078, 0);
ATerm trm1080 = ATgetArgument(trm1078, 1);
}
else
goto label367 ;
}
{
ATerm trm1081 = ATgetArgument(t, 2);
}
}
else
goto label367 ;
t = term111;
goto label358 ;
label367 :
t = trm1070;
{
ATerm trm1082 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1083 = ATgetArgument(t, 0);
if(((ATgetType(trm1083) == AT_LIST) && !(ATisEmpty(trm1083))))
{
ATerm trm1084 = ATgetFirst((ATermList) trm1083);
ATerm trm1085 = (ATerm) ATgetNext((ATermList) trm1083);
if(((ATgetType(trm1085) == AT_LIST) && !(ATisEmpty(trm1085))))
{
ATerm trm1086 = ATgetFirst((ATermList) trm1085);
ATerm trm1087 = (ATerm) ATgetNext((ATermList) trm1085);
if(!(((ATgetType(trm1087) == AT_LIST) && ATisEmpty(trm1087))))
goto label368 ;
}
else
goto label368 ;
}
else
goto label368 ;
{
ATerm trm1088 = ATgetArgument(t, 1);
if(match_cons(trm1088, sym_iter_1))
{
ATerm trm1089 = ATgetArgument(trm1088, 0);
}
else
goto label368 ;
}
{
ATerm trm1090 = ATgetArgument(t, 2);
}
}
else
goto label368 ;
t = term111;
goto label358 ;
label368 :
t = trm1082;
{
ATerm trm1091 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1092 = ATgetArgument(t, 0);
if(((ATgetType(trm1092) == AT_LIST) && !(ATisEmpty(trm1092))))
{
ATerm trm1093 = ATgetFirst((ATermList) trm1092);
ATerm trm1094 = (ATerm) ATgetNext((ATermList) trm1092);
if(((ATgetType(trm1094) == AT_LIST) && !(ATisEmpty(trm1094))))
{
ATerm trm1095 = ATgetFirst((ATermList) trm1094);
ATerm trm1096 = (ATerm) ATgetNext((ATermList) trm1094);
if(((ATgetType(trm1096) == AT_LIST) && !(ATisEmpty(trm1096))))
{
ATerm trm1097 = ATgetFirst((ATermList) trm1096);
ATerm trm1098 = (ATerm) ATgetNext((ATermList) trm1096);
if(((ATgetType(trm1098) == AT_LIST) && !(ATisEmpty(trm1098))))
{
ATerm trm1099 = ATgetFirst((ATermList) trm1098);
ATerm trm1100 = (ATerm) ATgetNext((ATermList) trm1098);
if(((ATgetType(trm1100) == AT_LIST) && !(ATisEmpty(trm1100))))
{
ATerm trm1101 = ATgetFirst((ATermList) trm1100);
ATerm trm1102 = (ATerm) ATgetNext((ATermList) trm1100);
if(!(((ATgetType(trm1102) == AT_LIST) && ATisEmpty(trm1102))))
goto label369 ;
}
else
goto label369 ;
}
else
goto label369 ;
}
else
goto label369 ;
}
else
goto label369 ;
}
else
goto label369 ;
{
ATerm trm1103 = ATgetArgument(t, 1);
if(match_cons(trm1103, sym_cf_1))
{
ATerm trm1104 = ATgetArgument(trm1103, 0);
if(match_cons(trm1104, sym_iter_star_sep_2))
{
ATerm trm1105 = ATgetArgument(trm1104, 0);
ATerm trm1106 = ATgetArgument(trm1104, 1);
}
else
goto label369 ;
}
else
goto label369 ;
}
{
ATerm trm1107 = ATgetArgument(t, 2);
}
}
else
goto label369 ;
t = term111;
goto label358 ;
label369 :
t = trm1091;
{
ATerm trm1108 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1109 = ATgetArgument(t, 0);
if(((ATgetType(trm1109) == AT_LIST) && !(ATisEmpty(trm1109))))
{
ATerm trm1110 = ATgetFirst((ATermList) trm1109);
ATerm trm1111 = (ATerm) ATgetNext((ATermList) trm1109);
if(((ATgetType(trm1111) == AT_LIST) && !(ATisEmpty(trm1111))))
{
ATerm trm1112 = ATgetFirst((ATermList) trm1111);
ATerm trm1113 = (ATerm) ATgetNext((ATermList) trm1111);
if(((ATgetType(trm1113) == AT_LIST) && !(ATisEmpty(trm1113))))
{
ATerm trm1114 = ATgetFirst((ATermList) trm1113);
ATerm trm1115 = (ATerm) ATgetNext((ATermList) trm1113);
if(!(((ATgetType(trm1115) == AT_LIST) && ATisEmpty(trm1115))))
goto label370 ;
}
else
goto label370 ;
}
else
goto label370 ;
}
else
goto label370 ;
{
ATerm trm1116 = ATgetArgument(t, 1);
if(match_cons(trm1116, sym_cf_1))
{
ATerm trm1117 = ATgetArgument(trm1116, 0);
if(match_cons(trm1117, sym_iter_star_sep_2))
{
ATerm trm1118 = ATgetArgument(trm1117, 0);
ATerm trm1119 = ATgetArgument(trm1117, 1);
}
else
goto label370 ;
}
else
goto label370 ;
}
{
ATerm trm1120 = ATgetArgument(t, 2);
}
}
else
goto label370 ;
t = term111;
goto label358 ;
label370 :
t = trm1108;
{
ATerm trm1121 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1122 = ATgetArgument(t, 0);
if(!(((ATgetType(trm1122) == AT_LIST) && ATisEmpty(trm1122))))
goto label371 ;
{
ATerm trm1123 = ATgetArgument(t, 1);
if(match_cons(trm1123, sym_cf_1))
{
ATerm trm1124 = ATgetArgument(trm1123, 0);
if(match_cons(trm1124, sym_opt_1))
{
ATerm trm1125 = ATgetArgument(trm1124, 0);
}
else
goto label371 ;
}
else
goto label371 ;
}
{
ATerm trm1126 = ATgetArgument(t, 2);
}
}
else
goto label371 ;
t = term117;
goto label358 ;
label371 :
t = trm1121;
{
ATerm trm1127 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm1128 = ATgetArgument(t, 0);
if(!(((ATgetType(trm1128) == AT_LIST) && ATisEmpty(trm1128))))
goto label372 ;
{
ATerm trm1129 = ATgetArgument(t, 1);
if(match_cons(trm1129, sym_opt_1))
{
ATerm trm1130 = ATgetArgument(trm1129, 0);
}
else
goto label372 ;
}
{
ATerm trm1131 = ATgetArgument(t, 2);
}
}
else
goto label372 ;
t = term117;
goto label358 ;
label372 :
t = trm1127;
{
ATerm trm1132 = t;
ATerm s_50 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm1133 = ATgetArgument(t, 0);
if(((ATgetType(trm1133) == AT_LIST) && !(ATisEmpty(trm1133))))
{
ATerm trm1134 = ATgetFirst((ATermList) trm1133);
if(match_cons(trm1134, sym_cf_1))
{
s_50 = ATgetArgument(trm1134, 0);
}
else
goto label373 ;
{
ATerm trm1135 = (ATerm) ATgetNext((ATermList) trm1133);
if(!(((ATgetType(trm1135) == AT_LIST) && ATisEmpty(trm1135))))
goto label373 ;
}
}
else
goto label373 ;
{
ATerm trm1136 = ATgetArgument(t, 1);
if(match_cons(trm1136, sym_cf_1))
{
ATerm trm1137 = ATgetArgument(trm1136, 0);
if(match_cons(trm1137, sym_opt_1))
{
if(!((s_50 == ATgetArgument(trm1137, 0))))
goto label373 ;
}
else
goto label373 ;
}
else
goto label373 ;
}
{
ATerm trm1138 = ATgetArgument(t, 2);
}
}
else
goto label373 ;
t = term119;
goto label358 ;
label373 :
t = trm1132;
{
ATerm r_50 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm1139 = ATgetArgument(t, 0);
if(((ATgetType(trm1139) == AT_LIST) && !(ATisEmpty(trm1139))))
{
r_50 = ATgetFirst((ATermList) trm1139);
{
ATerm trm1140 = (ATerm) ATgetNext((ATermList) trm1139);
if(!(((ATgetType(trm1140) == AT_LIST) && ATisEmpty(trm1140))))
goto fail265 ;
}
}
else
goto fail265 ;
{
ATerm trm1141 = ATgetArgument(t, 1);
if(match_cons(trm1141, sym_opt_1))
{
if(!((r_50 == ATgetArgument(trm1141, 0))))
goto fail265 ;
}
else
goto fail265 ;
}
{
ATerm trm1142 = ATgetArgument(t, 2);
}
}
else
goto fail265 ;
t = term119;
goto label358 ;
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
label358 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail265 :
--__tracing_table_counter;
return(NULL);
}
ATerm Constr0_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Constr0_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
sl_init_var(0, p_50);
if(match_cons(t, sym_prod_3))
{
ATerm trm990 = ATgetArgument(t, 0);
ATerm trm991 = ATgetArgument(t, 1);
o_50 = ATgetArgument(t, 2);
}
else
goto fail263 ;
q_50 = t;
t = o_50;
{
struct str_closure f_209 = { &(lifted183) , &(frame) };
StrCL lifted183_cl = &(f_209);
t = oncetd_1_0(sl, lifted183_cl, t);
if((t == NULL))
goto fail263 ;
t = q_50;
if((p_50 == NULL))
goto fail263 ;
else
{
t = p_50;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail263 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted183 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted183";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail264 ;
}
else
goto fail264 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail264 :
--__tracing_table_counter;
return(NULL);
}
ATerm CnsGeneric_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "CnsGeneric_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm h_50 = NULL,i_50 = NULL,m_50 = NULL,n_50 = NULL;
if(match_cons(t, sym_appl_2))
{
i_50 = ATgetArgument(t, 0);
h_50 = ATgetArgument(t, 1);
}
else
goto fail261 ;
n_50 = t;
t = i_50;
{
ATerm trm986 = t;
ATerm m_196 = NULL,n_196 = NULL,o_196 = NULL;
sl_init_var(0, n_196);
if(match_cons(t, sym_prod_3))
{
ATerm trm987 = ATgetArgument(t, 0);
ATerm trm988 = ATgetArgument(t, 1);
m_196 = ATgetArgument(t, 2);
}
else
goto label357 ;
o_196 = t;
t = m_196;
{
struct str_closure e_209 = { &(lifted182) , &(frame) };
StrCL lifted182_cl = &(e_209);
t = oncetd_1_0(sl, lifted182_cl, t);
if((t == NULL))
goto label357 ;
t = o_196;
if((n_196 == NULL))
goto label357 ;
else
{
t = n_196;
}
}
goto label356 ;
label357 :
t = trm986;
t = Constr1_0_0(sl, t);
if((t == NULL))
goto fail261 ;
else
goto label356 ;
label356 :
;
m_50 = t;
t = n_50;
{
ATerm trm989;
trm989 = SSL_mkterm(m_50, h_50);
if((trm989 == NULL))
goto fail261 ;
t = trm989;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail261 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted182 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted182";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail262 ;
}
else
goto fail262 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail262 :
--__tracing_table_counter;
return(NULL);
}
ATerm ConstrNil_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ConstrNil_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm963 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm964 = ATgetArgument(t, 0);
if(!(((ATgetType(trm964) == AT_LIST) && ATisEmpty(trm964))))
goto label353 ;
{
ATerm trm965 = ATgetArgument(t, 1);
if(match_cons(trm965, sym_cf_1))
{
ATerm trm966 = ATgetArgument(trm965, 0);
if(match_cons(trm966, sym_iter_star_sep_2))
{
ATerm trm967 = ATgetArgument(trm966, 0);
ATerm trm968 = ATgetArgument(trm966, 1);
}
else
goto label353 ;
}
else
goto label353 ;
}
{
ATerm trm969 = ATgetArgument(t, 2);
}
}
else
goto label353 ;
t = term113;
goto label352 ;
label353 :
t = trm963;
{
ATerm trm970 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm971 = ATgetArgument(t, 0);
if(!(((ATgetType(trm971) == AT_LIST) && ATisEmpty(trm971))))
goto label354 ;
{
ATerm trm972 = ATgetArgument(t, 1);
if(match_cons(trm972, sym_cf_1))
{
ATerm trm973 = ATgetArgument(trm972, 0);
if(match_cons(trm973, sym_iter_star_1))
{
ATerm trm974 = ATgetArgument(trm973, 0);
}
else
goto label354 ;
}
else
goto label354 ;
}
{
ATerm trm975 = ATgetArgument(t, 2);
}
}
else
goto label354 ;
t = term113;
goto label352 ;
label354 :
t = trm970;
{
ATerm trm976 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm977 = ATgetArgument(t, 0);
if(!(((ATgetType(trm977) == AT_LIST) && ATisEmpty(trm977))))
goto label355 ;
{
ATerm trm978 = ATgetArgument(t, 1);
if(match_cons(trm978, sym_iter_star_sep_2))
{
ATerm trm979 = ATgetArgument(trm978, 0);
ATerm trm980 = ATgetArgument(trm978, 1);
}
else
goto label355 ;
}
{
ATerm trm981 = ATgetArgument(t, 2);
}
}
else
goto label355 ;
t = term113;
goto label352 ;
label355 :
t = trm976;
if(match_cons(t, sym_prod_3))
{
ATerm trm982 = ATgetArgument(t, 0);
if(!(((ATgetType(trm982) == AT_LIST) && ATisEmpty(trm982))))
goto fail260 ;
{
ATerm trm983 = ATgetArgument(t, 1);
if(match_cons(trm983, sym_iter_star_1))
{
ATerm trm984 = ATgetArgument(trm983, 0);
}
else
goto fail260 ;
}
{
ATerm trm985 = ATgetArgument(t, 2);
}
}
else
goto fail260 ;
t = term113;
goto label352 ;
}
}
label352 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail260 :
--__tracing_table_counter;
return(NULL);
}
ATerm CnsNil_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "CnsNil_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
if(match_cons(t, sym_appl_2))
{
e_50 = ATgetArgument(t, 0);
d_50 = ATgetArgument(t, 1);
}
else
goto fail259 ;
g_50 = t;
t = e_50;
t = ConstrNil_0_0(sl, t);
if((t == NULL))
goto fail259 ;
f_50 = t;
t = g_50;
t = (ATerm) ATempty;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail259 :
--__tracing_table_counter;
return(NULL);
}
ATerm Cns_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "Cns_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm962 = t;
ATerm h_196 = NULL,i_196 = NULL,k_196 = NULL,l_196 = NULL;
if(match_cons(t, sym_appl_2))
{
i_196 = ATgetArgument(t, 0);
h_196 = ATgetArgument(t, 1);
}
else
goto label351 ;
l_196 = t;
t = i_196;
t = ConstrNil_0_0(sl, t);
if((t == NULL))
goto label351 ;
k_196 = t;
t = l_196;
t = (ATerm) ATempty;
goto label350 ;
label351 :
t = trm962;
t = CnsGeneric_0_0(sl, t);
if((t == NULL))
goto fail258 ;
else
goto label350 ;
label350 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail258 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_some_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_some_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm951 = t;
ATerm c_50 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm952 = ATgetArgument(t, 0);
if(((ATgetType(trm952) == AT_LIST) && !(ATisEmpty(trm952))))
{
ATerm trm953 = ATgetFirst((ATermList) trm952);
if(match_cons(trm953, sym_cf_1))
{
c_50 = ATgetArgument(trm953, 0);
}
else
goto label349 ;
{
ATerm trm954 = (ATerm) ATgetNext((ATermList) trm952);
if(!(((ATgetType(trm954) == AT_LIST) && ATisEmpty(trm954))))
goto label349 ;
}
}
else
goto label349 ;
{
ATerm trm955 = ATgetArgument(t, 1);
if(match_cons(trm955, sym_cf_1))
{
ATerm trm956 = ATgetArgument(trm955, 0);
if(match_cons(trm956, sym_opt_1))
{
if(!((c_50 == ATgetArgument(trm956, 0))))
goto label349 ;
}
else
goto label349 ;
}
else
goto label349 ;
}
{
ATerm trm957 = ATgetArgument(t, 2);
}
}
else
goto label349 ;
goto label348 ;
label349 :
t = trm951;
{
ATerm b_50 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm958 = ATgetArgument(t, 0);
if(((ATgetType(trm958) == AT_LIST) && !(ATisEmpty(trm958))))
{
b_50 = ATgetFirst((ATermList) trm958);
{
ATerm trm959 = (ATerm) ATgetNext((ATermList) trm958);
if(!(((ATgetType(trm959) == AT_LIST) && ATisEmpty(trm959))))
goto fail257 ;
}
}
else
goto fail257 ;
{
ATerm trm960 = ATgetArgument(t, 1);
if(match_cons(trm960, sym_opt_1))
{
if(!((b_50 == ATgetArgument(trm960, 0))))
goto fail257 ;
}
else
goto fail257 ;
}
{
ATerm trm961 = ATgetArgument(t, 2);
}
goto label348 ;
}
else
goto fail257 ;
}
label348 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail257 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_none_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_none_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm941 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm942 = ATgetArgument(t, 0);
if(!(((ATgetType(trm942) == AT_LIST) && ATisEmpty(trm942))))
goto label347 ;
{
ATerm trm943 = ATgetArgument(t, 1);
if(match_cons(trm943, sym_cf_1))
{
ATerm trm944 = ATgetArgument(trm943, 0);
if(match_cons(trm944, sym_opt_1))
{
ATerm trm945 = ATgetArgument(trm944, 0);
}
else
goto label347 ;
}
else
goto label347 ;
}
{
ATerm trm946 = ATgetArgument(t, 2);
}
}
else
goto label347 ;
goto label346 ;
label347 :
t = trm941;
if(match_cons(t, sym_prod_3))
{
ATerm trm947 = ATgetArgument(t, 0);
if(!(((ATgetType(trm947) == AT_LIST) && ATisEmpty(trm947))))
goto fail256 ;
{
ATerm trm948 = ATgetArgument(t, 1);
if(match_cons(trm948, sym_opt_1))
{
ATerm trm949 = ATgetArgument(trm948, 0);
}
else
goto fail256 ;
}
{
ATerm trm950 = ATgetArgument(t, 2);
}
goto label346 ;
}
else
goto fail256 ;
label346 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail256 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_conc_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_conc_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm828 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm829 = ATgetArgument(t, 0);
if(((ATgetType(trm829) == AT_LIST) && !(ATisEmpty(trm829))))
{
ATerm trm830 = ATgetFirst((ATermList) trm829);
ATerm trm831 = (ATerm) ATgetNext((ATermList) trm829);
if(((ATgetType(trm831) == AT_LIST) && !(ATisEmpty(trm831))))
{
ATerm trm832 = ATgetFirst((ATermList) trm831);
ATerm trm833 = (ATerm) ATgetNext((ATermList) trm831);
if(((ATgetType(trm833) == AT_LIST) && !(ATisEmpty(trm833))))
{
ATerm trm834 = ATgetFirst((ATermList) trm833);
ATerm trm835 = (ATerm) ATgetNext((ATermList) trm833);
if(!(((ATgetType(trm835) == AT_LIST) && ATisEmpty(trm835))))
goto label338 ;
}
else
goto label338 ;
}
else
goto label338 ;
}
else
goto label338 ;
{
ATerm trm836 = ATgetArgument(t, 1);
if(match_cons(trm836, sym_cf_1))
{
ATerm trm837 = ATgetArgument(trm836, 0);
if(match_cons(trm837, sym_iter_1))
{
ATerm trm838 = ATgetArgument(trm837, 0);
}
else
goto label338 ;
}
else
goto label338 ;
}
{
ATerm trm839 = ATgetArgument(t, 2);
}
}
else
goto label338 ;
goto label337 ;
label338 :
t = trm828;
{
ATerm trm840 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm841 = ATgetArgument(t, 0);
if(((ATgetType(trm841) == AT_LIST) && !(ATisEmpty(trm841))))
{
ATerm trm842 = ATgetFirst((ATermList) trm841);
ATerm trm843 = (ATerm) ATgetNext((ATermList) trm841);
if(((ATgetType(trm843) == AT_LIST) && !(ATisEmpty(trm843))))
{
ATerm trm844 = ATgetFirst((ATermList) trm843);
ATerm trm845 = (ATerm) ATgetNext((ATermList) trm843);
if(!(((ATgetType(trm845) == AT_LIST) && ATisEmpty(trm845))))
goto label339 ;
}
else
goto label339 ;
}
else
goto label339 ;
{
ATerm trm846 = ATgetArgument(t, 1);
if(match_cons(trm846, sym_iter_1))
{
ATerm trm847 = ATgetArgument(trm846, 0);
}
else
goto label339 ;
}
{
ATerm trm848 = ATgetArgument(t, 2);
}
}
else
goto label339 ;
goto label337 ;
label339 :
t = trm840;
{
ATerm trm849 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm850 = ATgetArgument(t, 0);
if(((ATgetType(trm850) == AT_LIST) && !(ATisEmpty(trm850))))
{
ATerm trm851 = ATgetFirst((ATermList) trm850);
ATerm trm852 = (ATerm) ATgetNext((ATermList) trm850);
if(((ATgetType(trm852) == AT_LIST) && !(ATisEmpty(trm852))))
{
ATerm trm853 = ATgetFirst((ATermList) trm852);
ATerm trm854 = (ATerm) ATgetNext((ATermList) trm852);
if(((ATgetType(trm854) == AT_LIST) && !(ATisEmpty(trm854))))
{
ATerm trm855 = ATgetFirst((ATermList) trm854);
ATerm trm856 = (ATerm) ATgetNext((ATermList) trm854);
if(!(((ATgetType(trm856) == AT_LIST) && ATisEmpty(trm856))))
goto label340 ;
}
else
goto label340 ;
}
else
goto label340 ;
}
else
goto label340 ;
{
ATerm trm857 = ATgetArgument(t, 1);
if(match_cons(trm857, sym_cf_1))
{
ATerm trm858 = ATgetArgument(trm857, 0);
if(match_cons(trm858, sym_iter_star_1))
{
ATerm trm859 = ATgetArgument(trm858, 0);
}
else
goto label340 ;
}
else
goto label340 ;
}
{
ATerm trm860 = ATgetArgument(t, 2);
}
}
else
goto label340 ;
goto label337 ;
label340 :
t = trm849;
{
ATerm trm861 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm862 = ATgetArgument(t, 0);
if(((ATgetType(trm862) == AT_LIST) && !(ATisEmpty(trm862))))
{
ATerm trm863 = ATgetFirst((ATermList) trm862);
ATerm trm864 = (ATerm) ATgetNext((ATermList) trm862);
if(((ATgetType(trm864) == AT_LIST) && !(ATisEmpty(trm864))))
{
ATerm trm865 = ATgetFirst((ATermList) trm864);
ATerm trm866 = (ATerm) ATgetNext((ATermList) trm864);
if(((ATgetType(trm866) == AT_LIST) && !(ATisEmpty(trm866))))
{
ATerm trm867 = ATgetFirst((ATermList) trm866);
ATerm trm868 = (ATerm) ATgetNext((ATermList) trm866);
if(!(((ATgetType(trm868) == AT_LIST) && ATisEmpty(trm868))))
goto label341 ;
}
else
goto label341 ;
}
else
goto label341 ;
}
else
goto label341 ;
{
ATerm trm869 = ATgetArgument(t, 1);
if(match_cons(trm869, sym_iter_star_1))
{
ATerm trm870 = ATgetArgument(trm869, 0);
}
else
goto label341 ;
}
{
ATerm trm871 = ATgetArgument(t, 2);
}
}
else
goto label341 ;
goto label337 ;
label341 :
t = trm861;
{
ATerm trm872 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm873 = ATgetArgument(t, 0);
if(((ATgetType(trm873) == AT_LIST) && !(ATisEmpty(trm873))))
{
ATerm trm874 = ATgetFirst((ATermList) trm873);
ATerm trm875 = (ATerm) ATgetNext((ATermList) trm873);
if(((ATgetType(trm875) == AT_LIST) && !(ATisEmpty(trm875))))
{
ATerm trm876 = ATgetFirst((ATermList) trm875);
ATerm trm877 = (ATerm) ATgetNext((ATermList) trm875);
if(((ATgetType(trm877) == AT_LIST) && !(ATisEmpty(trm877))))
{
ATerm trm878 = ATgetFirst((ATermList) trm877);
ATerm trm879 = (ATerm) ATgetNext((ATermList) trm877);
if(((ATgetType(trm879) == AT_LIST) && !(ATisEmpty(trm879))))
{
ATerm trm880 = ATgetFirst((ATermList) trm879);
ATerm trm881 = (ATerm) ATgetNext((ATermList) trm879);
if(((ATgetType(trm881) == AT_LIST) && !(ATisEmpty(trm881))))
{
ATerm trm882 = ATgetFirst((ATermList) trm881);
ATerm trm883 = (ATerm) ATgetNext((ATermList) trm881);
if(!(((ATgetType(trm883) == AT_LIST) && ATisEmpty(trm883))))
goto label342 ;
}
else
goto label342 ;
}
else
goto label342 ;
}
else
goto label342 ;
}
else
goto label342 ;
}
else
goto label342 ;
{
ATerm trm884 = ATgetArgument(t, 1);
if(match_cons(trm884, sym_cf_1))
{
ATerm trm885 = ATgetArgument(trm884, 0);
if(match_cons(trm885, sym_iter_sep_2))
{
ATerm trm886 = ATgetArgument(trm885, 0);
ATerm trm887 = ATgetArgument(trm885, 1);
}
else
goto label342 ;
}
else
goto label342 ;
}
{
ATerm trm888 = ATgetArgument(t, 2);
}
}
else
goto label342 ;
goto label337 ;
label342 :
t = trm872;
{
ATerm trm889 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm890 = ATgetArgument(t, 0);
if(((ATgetType(trm890) == AT_LIST) && !(ATisEmpty(trm890))))
{
ATerm trm891 = ATgetFirst((ATermList) trm890);
ATerm trm892 = (ATerm) ATgetNext((ATermList) trm890);
if(((ATgetType(trm892) == AT_LIST) && !(ATisEmpty(trm892))))
{
ATerm trm893 = ATgetFirst((ATermList) trm892);
ATerm trm894 = (ATerm) ATgetNext((ATermList) trm892);
if(((ATgetType(trm894) == AT_LIST) && !(ATisEmpty(trm894))))
{
ATerm trm895 = ATgetFirst((ATermList) trm894);
ATerm trm896 = (ATerm) ATgetNext((ATermList) trm894);
if(!(((ATgetType(trm896) == AT_LIST) && ATisEmpty(trm896))))
goto label343 ;
}
else
goto label343 ;
}
else
goto label343 ;
}
else
goto label343 ;
{
ATerm trm897 = ATgetArgument(t, 1);
if(match_cons(trm897, sym_iter_sep_2))
{
ATerm trm898 = ATgetArgument(trm897, 0);
ATerm trm899 = ATgetArgument(trm897, 1);
}
else
goto label343 ;
}
{
ATerm trm900 = ATgetArgument(t, 2);
}
}
else
goto label343 ;
goto label337 ;
label343 :
t = trm889;
{
ATerm trm901 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm902 = ATgetArgument(t, 0);
if(((ATgetType(trm902) == AT_LIST) && !(ATisEmpty(trm902))))
{
ATerm trm903 = ATgetFirst((ATermList) trm902);
ATerm trm904 = (ATerm) ATgetNext((ATermList) trm902);
if(((ATgetType(trm904) == AT_LIST) && !(ATisEmpty(trm904))))
{
ATerm trm905 = ATgetFirst((ATermList) trm904);
ATerm trm906 = (ATerm) ATgetNext((ATermList) trm904);
if(((ATgetType(trm906) == AT_LIST) && !(ATisEmpty(trm906))))
{
ATerm trm907 = ATgetFirst((ATermList) trm906);
ATerm trm908 = (ATerm) ATgetNext((ATermList) trm906);
if(((ATgetType(trm908) == AT_LIST) && !(ATisEmpty(trm908))))
{
ATerm trm909 = ATgetFirst((ATermList) trm908);
ATerm trm910 = (ATerm) ATgetNext((ATermList) trm908);
if(((ATgetType(trm910) == AT_LIST) && !(ATisEmpty(trm910))))
{
ATerm trm911 = ATgetFirst((ATermList) trm910);
ATerm trm912 = (ATerm) ATgetNext((ATermList) trm910);
if(!(((ATgetType(trm912) == AT_LIST) && ATisEmpty(trm912))))
goto label344 ;
}
else
goto label344 ;
}
else
goto label344 ;
}
else
goto label344 ;
}
else
goto label344 ;
}
else
goto label344 ;
{
ATerm trm913 = ATgetArgument(t, 1);
if(match_cons(trm913, sym_cf_1))
{
ATerm trm914 = ATgetArgument(trm913, 0);
if(match_cons(trm914, sym_iter_star_sep_2))
{
ATerm trm915 = ATgetArgument(trm914, 0);
ATerm trm916 = ATgetArgument(trm914, 1);
}
else
goto label344 ;
}
else
goto label344 ;
}
{
ATerm trm917 = ATgetArgument(t, 2);
}
}
else
goto label344 ;
goto label337 ;
label344 :
t = trm901;
{
ATerm trm918 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm919 = ATgetArgument(t, 0);
if(((ATgetType(trm919) == AT_LIST) && !(ATisEmpty(trm919))))
{
ATerm trm920 = ATgetFirst((ATermList) trm919);
ATerm trm921 = (ATerm) ATgetNext((ATermList) trm919);
if(((ATgetType(trm921) == AT_LIST) && !(ATisEmpty(trm921))))
{
ATerm trm922 = ATgetFirst((ATermList) trm921);
ATerm trm923 = (ATerm) ATgetNext((ATermList) trm921);
if(((ATgetType(trm923) == AT_LIST) && !(ATisEmpty(trm923))))
{
ATerm trm924 = ATgetFirst((ATermList) trm923);
ATerm trm925 = (ATerm) ATgetNext((ATermList) trm923);
if(!(((ATgetType(trm925) == AT_LIST) && ATisEmpty(trm925))))
goto label345 ;
}
else
goto label345 ;
}
else
goto label345 ;
}
else
goto label345 ;
{
ATerm trm926 = ATgetArgument(t, 1);
if(match_cons(trm926, sym_cf_1))
{
ATerm trm927 = ATgetArgument(trm926, 0);
if(match_cons(trm927, sym_iter_star_sep_2))
{
ATerm trm928 = ATgetArgument(trm927, 0);
ATerm trm929 = ATgetArgument(trm927, 1);
}
else
goto label345 ;
}
else
goto label345 ;
}
{
ATerm trm930 = ATgetArgument(t, 2);
}
}
else
goto label345 ;
goto label337 ;
label345 :
t = trm918;
if(match_cons(t, sym_prod_3))
{
ATerm trm931 = ATgetArgument(t, 0);
if(((ATgetType(trm931) == AT_LIST) && !(ATisEmpty(trm931))))
{
ATerm trm932 = ATgetFirst((ATermList) trm931);
ATerm trm933 = (ATerm) ATgetNext((ATermList) trm931);
if(((ATgetType(trm933) == AT_LIST) && !(ATisEmpty(trm933))))
{
ATerm trm934 = ATgetFirst((ATermList) trm933);
ATerm trm935 = (ATerm) ATgetNext((ATermList) trm933);
if(!(((ATgetType(trm935) == AT_LIST) && ATisEmpty(trm935))))
goto fail255 ;
}
else
goto fail255 ;
}
else
goto fail255 ;
{
ATerm trm936 = ATgetArgument(t, 1);
if(match_cons(trm936, sym_cf_1))
{
ATerm trm937 = ATgetArgument(trm936, 0);
if(match_cons(trm937, sym_iter_star_sep_2))
{
ATerm trm938 = ATgetArgument(trm937, 0);
ATerm trm939 = ATgetArgument(trm937, 1);
}
else
goto fail255 ;
}
else
goto fail255 ;
}
{
ATerm trm940 = ATgetArgument(t, 2);
}
goto label337 ;
}
else
goto fail255 ;
}
}
}
}
}
}
}
label337 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail255 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_ins_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_ins_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm803 = t;
ATerm a_50 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm804 = ATgetArgument(t, 0);
if(((ATgetType(trm804) == AT_LIST) && !(ATisEmpty(trm804))))
{
ATerm trm805 = ATgetFirst((ATermList) trm804);
if(match_cons(trm805, sym_cf_1))
{
a_50 = ATgetArgument(trm805, 0);
}
else
goto label334 ;
{
ATerm trm806 = (ATerm) ATgetNext((ATermList) trm804);
if(!(((ATgetType(trm806) == AT_LIST) && ATisEmpty(trm806))))
goto label334 ;
}
}
else
goto label334 ;
{
ATerm trm807 = ATgetArgument(t, 1);
if(match_cons(trm807, sym_cf_1))
{
ATerm trm808 = ATgetArgument(trm807, 0);
if(match_cons(trm808, sym_iter_sep_2))
{
if(!((a_50 == ATgetArgument(trm808, 0))))
goto label334 ;
{
ATerm trm809 = ATgetArgument(trm808, 1);
}
}
else
goto label334 ;
}
else
goto label334 ;
}
{
ATerm trm810 = ATgetArgument(t, 2);
}
}
else
goto label334 ;
goto label333 ;
label334 :
t = trm803;
{
ATerm trm811 = t;
ATerm z_49 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm812 = ATgetArgument(t, 0);
if(((ATgetType(trm812) == AT_LIST) && !(ATisEmpty(trm812))))
{
ATerm trm813 = ATgetFirst((ATermList) trm812);
if(match_cons(trm813, sym_cf_1))
{
z_49 = ATgetArgument(trm813, 0);
}
else
goto label335 ;
{
ATerm trm814 = (ATerm) ATgetNext((ATermList) trm812);
if(!(((ATgetType(trm814) == AT_LIST) && ATisEmpty(trm814))))
goto label335 ;
}
}
else
goto label335 ;
{
ATerm trm815 = ATgetArgument(t, 1);
if(match_cons(trm815, sym_cf_1))
{
ATerm trm816 = ATgetArgument(trm815, 0);
if(match_cons(trm816, sym_iter_1))
{
if(!((z_49 == ATgetArgument(trm816, 0))))
goto label335 ;
}
else
goto label335 ;
}
else
goto label335 ;
}
{
ATerm trm817 = ATgetArgument(t, 2);
}
}
else
goto label335 ;
goto label333 ;
label335 :
t = trm811;
{
ATerm trm818 = t;
ATerm y_49 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm819 = ATgetArgument(t, 0);
if(((ATgetType(trm819) == AT_LIST) && !(ATisEmpty(trm819))))
{
y_49 = ATgetFirst((ATermList) trm819);
{
ATerm trm820 = (ATerm) ATgetNext((ATermList) trm819);
if(!(((ATgetType(trm820) == AT_LIST) && ATisEmpty(trm820))))
goto label336 ;
}
}
else
goto label336 ;
{
ATerm trm821 = ATgetArgument(t, 1);
if(match_cons(trm821, sym_iter_sep_2))
{
if(!((y_49 == ATgetArgument(trm821, 0))))
goto label336 ;
{
ATerm trm822 = ATgetArgument(trm821, 1);
}
}
else
goto label336 ;
}
{
ATerm trm823 = ATgetArgument(t, 2);
}
}
else
goto label336 ;
goto label333 ;
label336 :
t = trm818;
{
ATerm x_49 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm824 = ATgetArgument(t, 0);
if(((ATgetType(trm824) == AT_LIST) && !(ATisEmpty(trm824))))
{
x_49 = ATgetFirst((ATermList) trm824);
{
ATerm trm825 = (ATerm) ATgetNext((ATermList) trm824);
if(!(((ATgetType(trm825) == AT_LIST) && ATisEmpty(trm825))))
goto fail254 ;
}
}
else
goto fail254 ;
{
ATerm trm826 = ATgetArgument(t, 1);
if(match_cons(trm826, sym_iter_1))
{
if(!((x_49 == ATgetArgument(trm826, 0))))
goto fail254 ;
}
else
goto fail254 ;
}
{
ATerm trm827 = ATgetArgument(t, 2);
}
goto label333 ;
}
else
goto fail254 ;
}
}
}
label333 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail254 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_nil_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_nil_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm780 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm781 = ATgetArgument(t, 0);
if(!(((ATgetType(trm781) == AT_LIST) && ATisEmpty(trm781))))
goto label330 ;
{
ATerm trm782 = ATgetArgument(t, 1);
if(match_cons(trm782, sym_cf_1))
{
ATerm trm783 = ATgetArgument(trm782, 0);
if(match_cons(trm783, sym_iter_star_sep_2))
{
ATerm trm784 = ATgetArgument(trm783, 0);
ATerm trm785 = ATgetArgument(trm783, 1);
}
else
goto label330 ;
}
else
goto label330 ;
}
{
ATerm trm786 = ATgetArgument(t, 2);
}
}
else
goto label330 ;
goto label329 ;
label330 :
t = trm780;
{
ATerm trm787 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm788 = ATgetArgument(t, 0);
if(!(((ATgetType(trm788) == AT_LIST) && ATisEmpty(trm788))))
goto label331 ;
{
ATerm trm789 = ATgetArgument(t, 1);
if(match_cons(trm789, sym_cf_1))
{
ATerm trm790 = ATgetArgument(trm789, 0);
if(match_cons(trm790, sym_iter_star_1))
{
ATerm trm791 = ATgetArgument(trm790, 0);
}
else
goto label331 ;
}
else
goto label331 ;
}
{
ATerm trm792 = ATgetArgument(t, 2);
}
}
else
goto label331 ;
goto label329 ;
label331 :
t = trm787;
{
ATerm trm793 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm794 = ATgetArgument(t, 0);
if(!(((ATgetType(trm794) == AT_LIST) && ATisEmpty(trm794))))
goto label332 ;
{
ATerm trm795 = ATgetArgument(t, 1);
if(match_cons(trm795, sym_iter_star_sep_2))
{
ATerm trm796 = ATgetArgument(trm795, 0);
ATerm trm797 = ATgetArgument(trm795, 1);
}
else
goto label332 ;
}
{
ATerm trm798 = ATgetArgument(t, 2);
}
}
else
goto label332 ;
goto label329 ;
label332 :
t = trm793;
if(match_cons(t, sym_prod_3))
{
ATerm trm799 = ATgetArgument(t, 0);
if(!(((ATgetType(trm799) == AT_LIST) && ATisEmpty(trm799))))
goto fail253 ;
{
ATerm trm800 = ATgetArgument(t, 1);
if(match_cons(trm800, sym_iter_star_1))
{
ATerm trm801 = ATgetArgument(trm800, 0);
}
else
goto fail253 ;
}
{
ATerm trm802 = ATgetArgument(t, 2);
}
goto label329 ;
}
else
goto fail253 ;
}
}
label329 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail253 :
--__tracing_table_counter;
return(NULL);
}
ATerm ReplConsConc_1_0 (StrSL sl, StrCL c_72, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ReplConsConc_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm766 = t;
ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,j_49 = NULL,k_49 = NULL,n_49 = NULL,w_49 = NULL;
if(match_cons(t, sym_appl_2))
{
f_49 = ATgetArgument(t, 0);
{
ATerm trm767 = ATgetArgument(t, 1);
if(((ATgetType(trm767) == AT_LIST) && !(ATisEmpty(trm767))))
{
g_49 = ATgetFirst((ATermList) trm767);
{
ATerm trm768 = (ATerm) ATgetNext((ATermList) trm767);
if(((ATgetType(trm768) == AT_LIST) && !(ATisEmpty(trm768))))
{
h_49 = ATgetFirst((ATermList) trm768);
{
ATerm trm769 = (ATerm) ATgetNext((ATermList) trm768);
if(!(((ATgetType(trm769) == AT_LIST) && ATisEmpty(trm769))))
goto label324 ;
}
}
else
goto label324 ;
}
}
else
goto label324 ;
}
}
else
goto label324 ;
w_49 = t;
t = f_49;
t = is_conc_0_0(sl, t);
if((t == NULL))
goto label324 ;
t = g_49;
t = cl_fun(c_72)(cl_sl(c_72), t);
if((t == NULL))
goto label324 ;
j_49 = t;
t = h_49;
t = cl_fun(c_72)(cl_sl(c_72), t);
if((t == NULL))
goto label324 ;
k_49 = t;
{
ATerm trm770 = t;
t = k_49;
{
ATerm trm771 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label328 ;
goto label327 ;
label328 :
t = trm771;
{
ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,t_49 = NULL,u_49 = NULL;
ATerm trm772;
trm772 = (ATerm) ATgetAnnotations(t);
if((trm772 == NULL))
trm772 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
p_49 = ATgetFirst((ATermList) t);
q_49 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label326 ;
u_49 = trm772;
t = p_49;
r_49 = t;
t = q_49;
t_49 = t;
{
ATerm trm773;
trm773 = CheckATermList(t_49);
if((trm773 == NULL))
goto label326 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm773, r_49), u_49);
goto label327 ;
}
}
label327 :
;
t = (ATerm) ATmakeAppl(sym__2, j_49, k_49);
t = conc_0_0(sl, t);
if((t == NULL))
goto label326 ;
}
goto label325 ;
label326 :
t = trm770;
{
ATerm trm774;
trm774 = SSL_mkterm(term111, (ATerm) ATinsert(ATinsert(ATempty, k_49), j_49));
if((trm774 == NULL))
goto label324 ;
t = trm774;
goto label325 ;
}
label325 :
;
n_49 = t;
t = w_49;
t = n_49;
}
goto label323 ;
label324 :
t = trm766;
{
ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,y_48 = NULL,z_48 = NULL,c_49 = NULL,a_49 = NULL,d_49 = NULL,b_49 = NULL,e_49 = NULL;
if(match_cons(t, sym_appl_2))
{
w_48 = ATgetArgument(t, 0);
{
ATerm trm775 = ATgetArgument(t, 1);
if(((ATgetType(trm775) == AT_LIST) && !(ATisEmpty(trm775))))
{
t_48 = ATgetFirst((ATermList) trm775);
{
ATerm trm776 = (ATerm) ATgetNext((ATermList) trm775);
if(((ATgetType(trm776) == AT_LIST) && !(ATisEmpty(trm776))))
{
u_48 = ATgetFirst((ATermList) trm776);
{
ATerm trm777 = (ATerm) ATgetNext((ATermList) trm776);
if(((ATgetType(trm777) == AT_LIST) && !(ATisEmpty(trm777))))
{
v_48 = ATgetFirst((ATermList) trm777);
{
ATerm trm778 = (ATerm) ATgetNext((ATermList) trm777);
if(!(((ATgetType(trm778) == AT_LIST) && ATisEmpty(trm778))))
goto fail252 ;
}
}
else
goto fail252 ;
}
}
else
goto fail252 ;
}
}
else
goto fail252 ;
}
}
else
goto fail252 ;
y_48 = t;
t = w_48;
t = is_conc_0_0(sl, t);
if((t == NULL))
goto fail252 ;
t = y_48;
c_49 = t;
t = t_48;
t = cl_fun(c_72)(cl_sl(c_72), t);
if((t == NULL))
goto fail252 ;
z_48 = t;
t = c_49;
d_49 = t;
t = u_48;
t = cl_fun(c_72)(cl_sl(c_72), t);
if((t == NULL))
goto fail252 ;
a_49 = t;
t = d_49;
e_49 = t;
t = v_48;
t = cl_fun(c_72)(cl_sl(c_72), t);
if((t == NULL))
goto fail252 ;
b_49 = t;
t = e_49;
{
ATerm trm779;
trm779 = CheckATermList(b_49);
if((trm779 == NULL))
goto fail252 ;
t = (ATerm) ATmakeAppl(sym__2, z_48, (ATerm) ATinsert((ATermList)trm779, a_49));
t = conc_0_0(sl, t);
if((t == NULL))
goto fail252 ;
else
goto label323 ;
}
}
label323 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail252 :
--__tracing_table_counter;
return(NULL);
}
ATerm ReplConsSome_1_0 (StrSL sl, StrCL p_48, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ReplConsSome_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_48 = NULL,o_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
if(match_cons(t, sym_appl_2))
{
o_48 = ATgetArgument(t, 0);
{
ATerm trm764 = ATgetArgument(t, 1);
if(((ATgetType(trm764) == AT_LIST) && !(ATisEmpty(trm764))))
{
n_48 = ATgetFirst((ATermList) trm764);
{
ATerm trm765 = (ATerm) ATgetNext((ATermList) trm764);
if(!(((ATgetType(trm765) == AT_LIST) && ATisEmpty(trm765))))
goto fail251 ;
}
}
else
goto fail251 ;
}
}
else
goto fail251 ;
q_48 = t;
t = o_48;
t = is_some_0_0(sl, t);
if((t == NULL))
goto fail251 ;
t = q_48;
s_48 = t;
t = n_48;
t = cl_fun(p_48)(cl_sl(p_48), t);
if((t == NULL))
goto fail251 ;
r_48 = t;
t = s_48;
t = (ATerm) ATmakeAppl(sym_Some_1, r_48);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail251 :
--__tracing_table_counter;
return(NULL);
}
ATerm implode_constant_literal_0_1 (StrSL sl, ATerm u_47, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "implode_constant_literal_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, u_47);
t = v_47(&(frame), t);
if((t == NULL))
goto fail249 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail249 :
--__tracing_table_counter;
return(NULL);
}
static ATerm v_47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "v_47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm752 = t;
ATerm w_47 = NULL;
if(match_cons(t, sym_cf_1))
{
w_47 = ATgetArgument(t, 0);
}
else
goto label315 ;
t = w_47;
t = v_47(sl, t);
if((t == NULL))
goto label315 ;
goto label314 ;
label315 :
t = trm752;
{
ATerm trm753 = t;
ATerm x_47 = NULL;
if(match_cons(t, sym_lex_1))
{
x_47 = ATgetArgument(t, 0);
}
else
goto label316 ;
t = x_47;
t = v_47(sl, t);
if((t == NULL))
goto label316 ;
goto label314 ;
label316 :
t = trm753;
{
ATerm trm754 = t;
ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
if(match_cons(t, sym_iter_1))
{
y_47 = ATgetArgument(t, 0);
}
else
goto label317 ;
t = y_47;
t = v_47(sl, t);
if((t == NULL))
goto label317 ;
a_48 = t;
z_47 = t;
t = (ATerm) ATinsert(ATempty, z_47);
goto label314 ;
label317 :
t = trm754;
{
ATerm trm755 = t;
ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
if(match_cons(t, sym_iter_star_1))
{
b_48 = ATgetArgument(t, 0);
}
else
goto label318 ;
t = b_48;
t = v_47(sl, t);
if((t == NULL))
goto label318 ;
d_48 = t;
c_48 = t;
t = (ATerm) ATinsert(ATempty, c_48);
goto label314 ;
label318 :
t = trm755;
{
ATerm trm756 = t;
ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL;
if(match_cons(t, sym_iter_sep_2))
{
e_48 = ATgetArgument(t, 0);
{
ATerm trm757 = ATgetArgument(t, 1);
}
}
else
goto label319 ;
t = e_48;
t = v_47(sl, t);
if((t == NULL))
goto label319 ;
g_48 = t;
f_48 = t;
t = (ATerm) ATinsert(ATempty, f_48);
goto label314 ;
label319 :
t = trm756;
{
ATerm trm758 = t;
ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
if(match_cons(t, sym_iter_star_sep_2))
{
h_48 = ATgetArgument(t, 0);
{
ATerm trm759 = ATgetArgument(t, 1);
}
}
else
goto label320 ;
t = h_48;
t = v_47(sl, t);
if((t == NULL))
goto label320 ;
j_48 = t;
i_48 = t;
t = (ATerm) ATinsert(ATempty, i_48);
goto label314 ;
label320 :
t = trm758;
{
ATerm trm760 = t;
ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
if(match_cons(t, sym_opt_1))
{
k_48 = ATgetArgument(t, 0);
}
else
goto label321 ;
t = k_48;
t = v_47(sl, t);
if((t == NULL))
goto label321 ;
m_48 = t;
l_48 = t;
t = (ATerm) ATmakeAppl(sym_Some_1, l_48);
goto label314 ;
label321 :
t = trm760;
{
ATerm trm761 = t;
if(match_cons(t, sym_lit_1))
{
ATerm trm762 = ATgetArgument(t, 0);
}
else
goto label322 ;
if((sl_readvar(0, sl) == NULL))
goto label322 ;
else
{
t = sl_readvar(0, sl);
}
goto label314 ;
label322 :
t = trm761;
if(match_cons(t, sym_cilit_1))
{
ATerm trm763 = ATgetArgument(t, 0);
}
else
goto fail250 ;
if((sl_readvar(0, sl) == NULL))
goto fail250 ;
else
{
t = sl_readvar(0, sl);
goto label314 ;
}
}
}
}
}
}
}
}
label314 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail250 :
--__tracing_table_counter;
return(NULL);
}
ATerm ReplConsIns_1_0 (StrSL sl, StrCL b_72, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ReplConsIns_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm736 = t;
ATerm o_47 = NULL,p_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL;
if(match_cons(t, sym_appl_2))
{
p_47 = ATgetArgument(t, 0);
{
ATerm trm737 = ATgetArgument(t, 1);
if(((ATgetType(trm737) == AT_LIST) && !(ATisEmpty(trm737))))
{
o_47 = ATgetFirst((ATermList) trm737);
{
ATerm trm738 = (ATerm) ATgetNext((ATermList) trm737);
if(!(((ATgetType(trm738) == AT_LIST) && ATisEmpty(trm738))))
goto label312 ;
}
}
else
goto label312 ;
}
}
else
goto label312 ;
r_47 = t;
t = p_47;
t = is_ins_0_0(sl, t);
if((t == NULL))
goto label312 ;
t = r_47;
t_47 = t;
t = o_47;
t = cl_fun(b_72)(cl_sl(b_72), t);
if((t == NULL))
goto label312 ;
s_47 = t;
t = t_47;
t = (ATerm) ATinsert(ATempty, s_47);
goto label311 ;
label312 :
t = trm736;
{
ATerm trm739 = t;
ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,n_47 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm740 = ATgetArgument(t, 0);
if(match_cons(trm740, sym_prod_3))
{
ATerm trm741 = ATgetArgument(trm740, 0);
if(((ATgetType(trm741) == AT_LIST) && !(ATisEmpty(trm741))))
{
ATerm trm742 = ATgetFirst((ATermList) trm741);
if(match_cons(trm742, sym_lit_1))
{
j_47 = ATgetArgument(trm742, 0);
}
else
goto label313 ;
{
ATerm trm743 = (ATerm) ATgetNext((ATermList) trm741);
if(!(((ATgetType(trm743) == AT_LIST) && ATisEmpty(trm743))))
goto label313 ;
}
}
else
goto label313 ;
k_47 = ATgetArgument(trm740, 1);
{
ATerm trm744 = ATgetArgument(trm740, 2);
}
}
else
goto label313 ;
{
ATerm trm745 = ATgetArgument(t, 1);
if(!(((ATgetType(trm745) == AT_LIST) && ATisEmpty(trm745))))
goto label313 ;
}
}
else
goto label313 ;
n_47 = t;
t = k_47;
t = implode_constant_literal_0_1(sl, j_47, t);
if((t == NULL))
goto label313 ;
l_47 = t;
t = n_47;
t = l_47;
goto label311 ;
label313 :
t = trm739;
{
ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,i_47 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm746 = ATgetArgument(t, 0);
if(match_cons(trm746, sym_prod_3))
{
ATerm trm747 = ATgetArgument(trm746, 0);
if(((ATgetType(trm747) == AT_LIST) && !(ATisEmpty(trm747))))
{
ATerm trm748 = ATgetFirst((ATermList) trm747);
if(match_cons(trm748, sym_cilit_1))
{
e_47 = ATgetArgument(trm748, 0);
}
else
goto fail248 ;
{
ATerm trm749 = (ATerm) ATgetNext((ATermList) trm747);
if(!(((ATgetType(trm749) == AT_LIST) && ATisEmpty(trm749))))
goto fail248 ;
}
}
else
goto fail248 ;
f_47 = ATgetArgument(trm746, 1);
{
ATerm trm750 = ATgetArgument(trm746, 2);
}
}
else
goto fail248 ;
{
ATerm trm751 = ATgetArgument(t, 1);
if(!(((ATgetType(trm751) == AT_LIST) && ATisEmpty(trm751))))
goto fail248 ;
}
}
else
goto fail248 ;
i_47 = t;
t = f_47;
t = implode_constant_literal_0_1(sl, e_47, t);
if((t == NULL))
goto fail248 ;
g_47 = t;
t = i_47;
t = g_47;
goto label311 ;
}
}
label311 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail248 :
--__tracing_table_counter;
return(NULL);
}
ATerm ReplConsNone_1_0 (StrSL sl, StrCL c_47, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ReplConsNone_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_47 = NULL,d_47 = NULL;
if(match_cons(t, sym_appl_2))
{
b_47 = ATgetArgument(t, 0);
{
ATerm trm725 = ATgetArgument(t, 1);
if(!(((ATgetType(trm725) == AT_LIST) && ATisEmpty(trm725))))
goto fail247 ;
}
}
else
goto fail247 ;
d_47 = t;
t = b_47;
{
ATerm trm726 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm727 = ATgetArgument(t, 0);
if(!(((ATgetType(trm727) == AT_LIST) && ATisEmpty(trm727))))
goto label310 ;
{
ATerm trm728 = ATgetArgument(t, 1);
if(match_cons(trm728, sym_cf_1))
{
ATerm trm729 = ATgetArgument(trm728, 0);
if(match_cons(trm729, sym_opt_1))
{
ATerm trm730 = ATgetArgument(trm729, 0);
}
else
goto label310 ;
}
else
goto label310 ;
}
{
ATerm trm731 = ATgetArgument(t, 2);
}
}
else
goto label310 ;
goto label309 ;
label310 :
t = trm726;
if(match_cons(t, sym_prod_3))
{
ATerm trm732 = ATgetArgument(t, 0);
if(!(((ATgetType(trm732) == AT_LIST) && ATisEmpty(trm732))))
goto fail247 ;
{
ATerm trm733 = ATgetArgument(t, 1);
if(match_cons(trm733, sym_opt_1))
{
ATerm trm734 = ATgetArgument(trm733, 0);
}
else
goto fail247 ;
}
{
ATerm trm735 = ATgetArgument(t, 2);
}
goto label309 ;
}
else
goto fail247 ;
label309 :
;
t = d_47;
t = term9;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail247 :
--__tracing_table_counter;
return(NULL);
}
ATerm ReplConsNil_1_0 (StrSL sl, StrCL z_46, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ReplConsNil_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_46 = NULL,a_47 = NULL;
if(match_cons(t, sym_appl_2))
{
y_46 = ATgetArgument(t, 0);
{
ATerm trm724 = ATgetArgument(t, 1);
if(!(((ATgetType(trm724) == AT_LIST) && ATisEmpty(trm724))))
goto fail246 ;
}
}
else
goto fail246 ;
a_47 = t;
t = y_46;
t = is_nil_0_0(sl, t);
if((t == NULL))
goto fail246 ;
t = a_47;
t = (ATerm) ATempty;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail246 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_ast_pattern_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_ast_pattern_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
sl_init_var(0, w_46);
if(match_cons(t, sym_prod_3))
{
ATerm trm722 = ATgetArgument(t, 0);
ATerm trm723 = ATgetArgument(t, 1);
v_46 = ATgetArgument(t, 2);
}
else
goto fail244 ;
x_46 = t;
t = v_46;
{
struct str_closure d_209 = { &(lifted181) , &(frame) };
StrCL lifted181_cl = &(d_209);
t = oncetd_1_0(sl, lifted181_cl, t);
if((t == NULL))
goto fail244 ;
t = x_46;
if((w_46 == NULL))
goto fail244 ;
else
{
t = w_46;
}
t = read_from_string_0_0(sl, t);
if((t == NULL))
goto fail244 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail244 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted181 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted181";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_ast_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail245 ;
}
else
goto fail245 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail245 :
--__tracing_table_counter;
return(NULL);
}
ATerm ReplAstPattern_1_0 (StrSL sl, StrCL x_45, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ReplAstPattern_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(6);
{
ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
sl_init_var(0, v_43);
sl_init_var(1, w_43);
sl_init_var(2, x_43);
sl_init_var(3, y_43);
sl_init_var(4, z_43);
sl_init_var(5, a_44);
{
ATerm trm684;
trm684 = (ATerm) ATgetAnnotations(t);
if((trm684 == NULL))
trm684 = (ATerm) ATempty;
if(match_cons(t, sym_appl_2))
{
t_43 = ATgetArgument(t, 0);
u_43 = ATgetArgument(t, 1);
}
else
goto fail239 ;
if((z_43 == NULL))
{
z_43 = trm684;
}
else
if((z_43 != trm684))
goto fail239 ;
z_45 = t;
t = t_43;
t = get_ast_pattern_0_0(sl, t);
if((t == NULL))
goto fail239 ;
if((w_43 == NULL))
{
w_43 = t;
}
else
if((w_43 != t))
goto fail239 ;
t = u_43;
t = map_1_0(sl, x_45, t);
if((t == NULL))
goto fail239 ;
if((v_43 == NULL))
{
v_43 = t;
}
else
if((v_43 != t))
goto fail239 ;
b_46 = t;
t = term101;
a_46 = t;
t = b_46;
{
struct str_closure c_209 = { &(lifted178) , &(frame) };
StrCL lifted178_cl = &(c_209);
t = dr_scope_1_1(sl, lifted178_cl, a_46, t);
if((t == NULL))
goto fail239 ;
t = z_45;
if(((x_43 == NULL) || (a_44 == NULL)))
goto fail239 ;
else
{
t = (ATerm) SRTS_setAnnotations(x_43, a_44);
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail239 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted178 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted178";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
if((sl_readvar(0, sl) == NULL))
goto fail240 ;
else
{
t = sl_readvar(0, sl);
}
{
struct str_closure y_208 = { &(lifted179) , &(frame) };
StrCL lifted179_cl = &(y_208);
t = map_with_index_1_0(sl_up(sl), lifted179_cl, t);
if((t == NULL))
goto fail240 ;
if((sl_readvar(1, sl) == NULL))
goto fail240 ;
else
{
t = sl_readvar(1, sl);
}
{
struct str_closure a_209 = { &(y_45) , &(frame) };
StrCL y_45_cl = &(a_209);
sl_init_fun(0, y_45_cl);
t = y_45(&(frame), t);
if((t == NULL))
goto fail240 ;
{
ATerm trm719;
trm719 = (ATerm) ATgetAnnotations(t);
if((trm719 == NULL))
trm719 = (ATerm) ATempty;
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = t;
}
else
if((sl_readvar(2, sl) != t))
goto fail240 ;
if((sl_readvar(3, sl) == NULL))
{
sl_readvar(3, sl) = trm719;
}
else
if((sl_readvar(3, sl) != trm719))
goto fail240 ;
{
ATerm trm720 = t;
ATerm v_45 = NULL;
v_45 = t;
if((sl_readvar(4, sl) == NULL))
goto label307 ;
else
{
t = sl_readvar(4, sl);
}
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label307 ;
t = v_45;
if((sl_readvar(3, sl) == NULL))
goto fail240 ;
else
{
t = sl_readvar(3, sl);
goto label306 ;
}
label307 :
t = trm720;
{
ATerm trm721 = t;
ATerm w_45 = NULL;
w_45 = t;
if((sl_readvar(3, sl) == NULL))
goto label308 ;
else
{
t = sl_readvar(3, sl);
}
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label308 ;
t = w_45;
if(((sl_readvar(4, sl) == NULL) || (sl_readvar(3, sl) == NULL)))
goto fail240 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(4, sl), sl_readvar(3, sl));
}
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail240 ;
else
goto label306 ;
label308 :
t = trm721;
if((sl_readvar(4, sl) == NULL))
goto fail240 ;
else
{
t = sl_readvar(4, sl);
goto label306 ;
}
}
label306 :
;
if((sl_readvar(5, sl) == NULL))
{
sl_readvar(5, sl) = t;
}
else
if((sl_readvar(5, sl) != t))
goto fail240 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail240 :
--__tracing_table_counter;
return(NULL);
}
static ATerm y_45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "y_45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_208 = { &(lifted180) , &(frame) };
StrCL lifted180_cl = &(z_208);
t = alltd_1_0(sl_up(sl_up(sl)), lifted180_cl, t);
if((t == NULL))
goto fail242 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail242 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted180 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted180";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
ATerm trm685 = t;
ATerm k_44 = NULL;
k_44 = t;
t = is_placeholder_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label296 ;
t = k_44;
{
ATerm trm686;
trm686 = (ATerm) ATgetAnnotations(t);
if((trm686 == NULL))
trm686 = (ATerm) ATempty;
h_44 = trm686;
t = get_placeholder_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail243 ;
e_44 = t;
{
ATerm trm687 = t;
t = ReplacePlaceholder_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label298 ;
goto label297 ;
label298 :
t = trm687;
{
ATerm trm688 = t;
ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,g_46 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
ATerm trm689,trm690;
trm689 = SSL_get_constructor(t);
trm690 = SSL_get_arguments(t);
l_44 = trm689;
n_44 = trm690;
g_46 = t;
t = l_44;
if(!((ATgetSymbol(t) == ATmakeSymbol("conc", 0, ATtrue))))
goto label299 ;
m_44 = t;
t = n_44;
{
ATerm trm691;
trm691 = (ATerm) ATgetAnnotations(t);
if((trm691 == NULL))
trm691 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
p_44 = ATgetFirst((ATermList) t);
q_44 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label299 ;
t_44 = trm691;
t = p_44;
t = y_45(sl_up(sl), t);
if((t == NULL))
goto label299 ;
r_44 = t;
t = q_44;
{
ATerm trm692;
trm692 = (ATerm) ATgetAnnotations(t);
if((trm692 == NULL))
trm692 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
u_44 = ATgetFirst((ATermList) t);
v_44 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label299 ;
y_44 = trm692;
t = u_44;
t = y_45(sl_up(sl), t);
if((t == NULL))
goto label299 ;
w_44 = t;
t = v_44;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label299 ;
x_44 = t;
{
ATerm trm693;
trm693 = CheckATermList(x_44);
if((trm693 == NULL))
goto label299 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm693, w_44), y_44);
s_44 = t;
{
ATerm trm694;
trm694 = CheckATermList(s_44);
if((trm694 == NULL))
goto label299 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm694, r_44), t_44);
o_44 = t;
t = g_46;
{
ATerm trm695;
trm695 = SSL_mkterm(m_44, o_44);
if((trm695 == NULL))
goto label299 ;
t = trm695;
{
ATerm trm696 = t;
ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,h_46 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
z_44 = t;
{
ATerm trm697,trm698;
trm697 = SSL_get_constructor(t);
trm698 = SSL_get_arguments(t);
a_45 = trm697;
c_45 = trm698;
h_46 = t;
t = a_45;
if(!((ATgetSymbol(t) == ATmakeSymbol("conc", 0, ATtrue))))
goto label301 ;
b_45 = t;
t = c_45;
{
ATerm trm699;
trm699 = (ATerm) ATgetAnnotations(t);
if((trm699 == NULL))
trm699 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
e_45 = ATgetFirst((ATermList) t);
f_45 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label301 ;
i_45 = trm699;
t = e_45;
t = is_list_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label301 ;
g_45 = t;
t = f_45;
{
ATerm trm700;
trm700 = (ATerm) ATgetAnnotations(t);
if((trm700 == NULL))
trm700 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
j_45 = ATgetFirst((ATermList) t);
k_45 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label301 ;
n_45 = trm700;
t = j_45;
t = is_list_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label301 ;
l_45 = t;
t = k_45;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label301 ;
m_45 = t;
{
ATerm trm701;
trm701 = CheckATermList(m_45);
if((trm701 == NULL))
goto label301 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm701, l_45), n_45);
h_45 = t;
{
ATerm trm702;
trm702 = CheckATermList(h_45);
if((trm702 == NULL))
goto label301 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm702, g_45), i_45);
d_45 = t;
t = h_46;
{
ATerm trm703;
trm703 = SSL_mkterm(b_45, d_45);
if((trm703 == NULL))
goto label301 ;
t = trm703;
t = z_44;
}
}
}
}
}
}
{
ATerm o_45 = NULL,p_45 = NULL;
ATerm trm704,trm705;
trm704 = SSL_get_constructor(t);
trm705 = SSL_get_arguments(t);
if(!((ATgetSymbol(trm704) == ATmakeSymbol("conc", 0, ATtrue))))
goto label299 ;
if(((ATgetType(trm705) == AT_LIST) && !(ATisEmpty(trm705))))
{
o_45 = ATgetFirst((ATermList) trm705);
{
ATerm trm706 = (ATerm) ATgetNext((ATermList) trm705);
if(((ATgetType(trm706) == AT_LIST) && !(ATisEmpty(trm706))))
{
p_45 = ATgetFirst((ATermList) trm706);
{
ATerm trm707 = (ATerm) ATgetNext((ATermList) trm706);
if(!(((ATgetType(trm707) == AT_LIST) && ATisEmpty(trm707))))
goto label299 ;
}
}
else
goto label299 ;
}
}
else
goto label299 ;
t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
t = conc_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label299 ;
else
goto label300 ;
}
label301 :
t = trm696;
goto label300 ;
label300 :
;
}
}
}
}
}
}
goto label297 ;
label299 :
t = trm688;
{
ATerm trm708 = t;
ATerm i_46 = NULL;
ATerm trm709,trm710;
trm709 = SSL_get_constructor(t);
trm710 = SSL_get_arguments(t);
if(!((ATgetSymbol(trm709) == ATmakeSymbol("yield", 0, ATtrue))))
goto label302 ;
if(((ATgetType(trm710) == AT_LIST) && !(ATisEmpty(trm710))))
{
i_46 = ATgetFirst((ATermList) trm710);
{
ATerm trm711 = (ATerm) ATgetNext((ATermList) trm710);
if(!(((ATgetType(trm711) == AT_LIST) && ATisEmpty(trm711))))
goto label302 ;
}
}
else
goto label302 ;
t = i_46;
t = ReplacePlaceholder_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label302 ;
t = asfix_yield_appl_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto label302 ;
goto label297 ;
label302 :
t = trm708;
{
ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,p_46 = NULL,o_46 = NULL,q_46 = NULL;
l_46 = t;
t = term15;
j_46 = t;
t = l_46;
m_46 = t;
p_46 = t;
t = e_44;
t = write_to_string_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail243 ;
n_46 = t;
t = p_46;
q_46 = t;
if((sl_readvar(1, sl_up(sl_up(sl))) == NULL))
goto fail243 ;
else
{
t = sl_readvar(1, sl_up(sl_up(sl)));
}
t = write_to_string_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail243 ;
o_46 = t;
t = q_46;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_46), term105), n_46), term107);
t = concat_strings_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail243 ;
k_46 = t;
t = m_46;
t = log_0_2(sl_up(sl_up(sl_up(sl))), j_46, k_46, t);
if((t == NULL))
goto fail243 ;
t = term109;
t = exit_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail243 ;
else
goto label297 ;
}
}
}
label297 :
;
{
ATerm trm712 = t;
ATerm q_45 = NULL;
q_45 = t;
{
ATerm trm713 = t;
t = h_44;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label305 ;
goto label303 ;
label305 :
t = trm713;
goto label304 ;
label304 :
;
t = q_45;
}
{
ATerm r_45 = NULL,s_45 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL;
ATerm trm714;
trm714 = (ATerm) ATgetAnnotations(t);
if((trm714 == NULL))
trm714 = (ATerm) ATempty;
r_45 = t;
s_45 = trm714;
r_46 = t;
t_46 = t;
t = h_44;
t = map_1_0(sl_up(sl_up(sl_up(sl))), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail243 ;
s_46 = t;
t = t_46;
t = (ATerm) ATmakeAppl(sym__2, s_46, s_45);
t = conc_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail243 ;
j_44 = t;
t = r_46;
t = (ATerm) SRTS_setAnnotations(r_45, j_44);
goto label295 ;
}
label303 :
t = trm712;
goto label295 ;
}
}
}
label296 :
t = trm685;
{
ATerm t_45 = NULL,u_45 = NULL,u_46 = NULL;
ATerm trm715;
trm715 = (ATerm) ATgetAnnotations(t);
if((trm715 == NULL))
trm715 = (ATerm) ATempty;
if(((ATgetType(trm715) == AT_LIST) && !(ATisEmpty(trm715))))
{
ATerm trm716 = ATgetFirst((ATermList) trm715);
ATerm trm717 = (ATerm) ATgetNext((ATermList) trm715);
}
else
goto fail243 ;
{
ATerm trm718;
trm718 = (ATerm) ATgetAnnotations(t);
if((trm718 == NULL))
trm718 = (ATerm) ATempty;
t_45 = t;
u_45 = trm718;
u_46 = t;
t = u_45;
t = map_1_0(sl_up(sl_up(sl_up(sl))), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail243 ;
i_44 = t;
t = (ATerm) SRTS_setAnnotations(t_45, (ATerm) ATempty);
t = y_45(sl_up(sl), t);
if((t == NULL))
goto fail243 ;
g_44 = t;
t = u_46;
t = (ATerm) SRTS_setAnnotations(g_44, i_44);
goto label295 ;
}
}
label295 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail243 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted179 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted179";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
if(match_cons(t, sym__2))
{
b_44 = ATgetArgument(t, 0);
c_44 = ATgetArgument(t, 1);
}
else
goto fail241 ;
d_44 = t;
e_46 = t;
t = term101;
c_46 = t;
t = e_46;
f_46 = t;
t = (ATerm) ATmakeAppl(sym__2, term103, c_44);
d_46 = t;
t = f_46;
t = dr_set_rule_0_3(sl_up(sl_up(sl)), c_46, b_44, d_46, t);
if((t == NULL))
goto fail241 ;
t = d_44;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail241 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_cons_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_cons_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
sl_init_var(0, q_43);
if(match_cons(t, sym_prod_3))
{
ATerm trm682 = ATgetArgument(t, 0);
ATerm trm683 = ATgetArgument(t, 1);
p_43 = ATgetArgument(t, 2);
}
else
goto fail237 ;
r_43 = t;
t = p_43;
{
struct str_closure x_208 = { &(lifted177) , &(frame) };
StrCL lifted177_cl = &(x_208);
t = oncetd_1_0(sl, lifted177_cl, t);
if((t == NULL))
goto fail237 ;
t = r_43;
if((q_43 == NULL))
goto fail237 ;
else
{
t = q_43;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail237 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted177 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted177";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail238 ;
}
else
goto fail238 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail238 :
--__tracing_table_counter;
return(NULL);
}
ATerm ReplNamedCons_1_0 (StrSL sl, StrCL l_43, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ReplNamedCons_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,e_196 = NULL,f_196 = NULL,g_196 = NULL;
sl_init_var(0, f_196);
{
ATerm trm678;
trm678 = (ATerm) ATgetAnnotations(t);
if((trm678 == NULL))
trm678 = (ATerm) ATempty;
if(match_cons(t, sym_appl_2))
{
j_43 = ATgetArgument(t, 0);
h_43 = ATgetArgument(t, 1);
}
else
goto fail235 ;
i_43 = trm678;
m_43 = t;
t = j_43;
if(match_cons(t, sym_prod_3))
{
ATerm trm679 = ATgetArgument(t, 0);
ATerm trm680 = ATgetArgument(t, 1);
e_196 = ATgetArgument(t, 2);
}
else
goto fail235 ;
g_196 = t;
t = e_196;
{
struct str_closure w_208 = { &(lifted176) , &(frame) };
StrCL lifted176_cl = &(w_208);
t = oncetd_1_0(sl, lifted176_cl, t);
if((t == NULL))
goto fail235 ;
t = g_196;
if((f_196 == NULL))
goto fail235 ;
else
{
t = f_196;
}
k_43 = t;
t = m_43;
o_43 = t;
t = h_43;
t = map_1_0(sl, l_43, t);
if((t == NULL))
goto fail235 ;
n_43 = t;
t = o_43;
{
ATerm trm681;
trm681 = SSL_mkterm(k_43, n_43);
if((trm681 == NULL))
goto fail235 ;
t = (ATerm) SRTS_setAnnotations(trm681, i_43);
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail235 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted176 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted176";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail236 ;
}
else
goto fail236 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail236 :
--__tracing_table_counter;
return(NULL);
}
ATerm ReplCons_1_0 (StrSL sl, StrCL g_43, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ReplCons_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm660 = t;
t = ReplNamedCons_1_0(sl, g_43, t);
if((t == NULL))
goto label287 ;
goto label286 ;
label287 :
t = trm660;
{
ATerm trm661 = t;
t = ReplAstPattern_1_0(sl, g_43, t);
if((t == NULL))
goto label288 ;
goto label286 ;
label288 :
t = trm661;
{
ATerm trm662 = t;
ATerm y_195 = NULL,z_195 = NULL;
if(match_cons(t, sym_appl_2))
{
y_195 = ATgetArgument(t, 0);
{
ATerm trm663 = ATgetArgument(t, 1);
if(!(((ATgetType(trm663) == AT_LIST) && ATisEmpty(trm663))))
goto label289 ;
}
}
else
goto label289 ;
z_195 = t;
t = y_195;
t = is_nil_0_0(sl, t);
if((t == NULL))
goto label289 ;
t = z_195;
t = (ATerm) ATempty;
goto label286 ;
label289 :
t = trm662;
{
ATerm trm664 = t;
ATerm b_196 = NULL,c_196 = NULL;
if(match_cons(t, sym_appl_2))
{
b_196 = ATgetArgument(t, 0);
{
ATerm trm665 = ATgetArgument(t, 1);
if(!(((ATgetType(trm665) == AT_LIST) && ATisEmpty(trm665))))
goto label290 ;
}
}
else
goto label290 ;
c_196 = t;
t = b_196;
{
ATerm trm666 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm667 = ATgetArgument(t, 0);
if(!(((ATgetType(trm667) == AT_LIST) && ATisEmpty(trm667))))
goto label292 ;
{
ATerm trm668 = ATgetArgument(t, 1);
if(match_cons(trm668, sym_cf_1))
{
ATerm trm669 = ATgetArgument(trm668, 0);
if(match_cons(trm669, sym_opt_1))
{
ATerm trm670 = ATgetArgument(trm669, 0);
}
else
goto label292 ;
}
else
goto label292 ;
}
{
ATerm trm671 = ATgetArgument(t, 2);
}
}
else
goto label292 ;
goto label291 ;
label292 :
t = trm666;
if(match_cons(t, sym_prod_3))
{
ATerm trm672 = ATgetArgument(t, 0);
if(!(((ATgetType(trm672) == AT_LIST) && ATisEmpty(trm672))))
goto label290 ;
{
ATerm trm673 = ATgetArgument(t, 1);
if(match_cons(trm673, sym_opt_1))
{
ATerm trm674 = ATgetArgument(trm673, 0);
}
else
goto label290 ;
}
{
ATerm trm675 = ATgetArgument(t, 2);
}
goto label291 ;
}
else
goto label290 ;
label291 :
;
t = c_196;
t = term9;
}
goto label286 ;
label290 :
t = trm664;
{
ATerm trm676 = t;
t = ReplConsIns_1_0(sl, g_43, t);
if((t == NULL))
goto label293 ;
goto label286 ;
label293 :
t = trm676;
{
ATerm trm677 = t;
t = ReplConsSome_1_0(sl, g_43, t);
if((t == NULL))
goto label294 ;
goto label286 ;
label294 :
t = trm677;
t = ReplConsConc_1_0(sl, g_43, t);
if((t == NULL))
goto fail234 ;
else
goto label286 ;
}
}
}
}
}
label286 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail234 :
--__tracing_table_counter;
return(NULL);
}
ATerm conc_to_cons_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "conc_to_cons_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure v_208 = { &(f_43) , &(frame) };
StrCL f_43_cl = &(v_208);
sl_init_fun(0, f_43_cl);
t = f_43(&(frame), t);
if((t == NULL))
goto fail230 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail230 :
--__tracing_table_counter;
return(NULL);
}
static ATerm f_43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "f_43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_208 = { &(lifted174) , &(frame) };
StrCL lifted174_cl = &(p_208);
struct str_closure t_208 = { &(lifted170) , &(frame) };
StrCL lifted170_cl = &(t_208);
t = repeat_1_0(sl_up(sl), lifted170_cl, t);
if((t == NULL))
goto fail231 ;
{
ATerm trm659 = t;
struct str_closure u_208 = { &(_Id) , sl_up(sl) };
StrCL lifted173_cl = &(u_208);
t = Conc_2_0(sl_up(sl), lifted173_cl, sl_fun_cl(0, sl), t);
if((t == NULL))
goto label285 ;
goto label284 ;
label285 :
t = trm659;
t = SRTS_all(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail231 ;
else
goto label284 ;
label284 :
;
t = try_1_0(sl_up(sl), lifted174_cl, t);
if((t == NULL))
goto fail231 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail231 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted170 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted170";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm657 = t;
t = CTC0_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label282 ;
goto label281 ;
label282 :
t = trm657;
{
ATerm trm658 = t;
t = CTC1_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label283 ;
goto label281 ;
label283 :
t = trm658;
{
struct str_closure q_208 = { &(CTC0_0_0) , sl_up(sl_up(sl)) };
StrCL lifted171_cl = &(q_208);
struct str_closure s_208 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted172_cl = &(s_208);
t = Conc_2_0(sl_up(sl_up(sl)), lifted171_cl, lifted172_cl, t);
if((t == NULL))
goto fail233 ;
else
goto label281 ;
}
}
label281 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail233 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted174 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted174";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm656 = t;
struct str_closure o_208 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted175_cl = &(o_208);
t = CTC2_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label280 ;
t = Cons_2_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), lifted175_cl, t);
if((t == NULL))
goto label280 ;
goto label279 ;
label280 :
t = trm656;
{
ATerm x_195 = NULL;
if(match_cons(t, sym_Ins_1))
{
x_195 = ATgetArgument(t, 0);
}
else
goto fail232 ;
t = (ATerm) ATinsert(ATempty, x_195);
goto label279 ;
}
label279 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail232 :
--__tracing_table_counter;
return(NULL);
}
ATerm CTC4_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "CTC4_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
if(match_cons(t, sym_Conc_2))
{
ATerm trm655 = ATgetArgument(t, 0);
if(((ATgetType(trm655) == AT_LIST) && !(ATisEmpty(trm655))))
{
a_43 = ATgetFirst((ATermList) trm655);
b_43 = (ATerm) ATgetNext((ATermList) trm655);
}
else
goto fail229 ;
c_43 = ATgetArgument(t, 1);
}
else
goto fail229 ;
e_43 = t;
t = (ATerm) ATmakeAppl(sym__2, b_43, c_43);
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail229 ;
d_43 = t;
t = e_43;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Ins_1, a_43), d_43);
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail229 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail229 :
--__tracing_table_counter;
return(NULL);
}
ATerm CTC3_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "CTC3_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_42 = NULL;
if(match_cons(t, sym_Ins_1))
{
z_42 = ATgetArgument(t, 0);
}
else
goto fail228 ;
t = (ATerm) ATinsert(ATempty, z_42);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail228 :
--__tracing_table_counter;
return(NULL);
}
ATerm CTC2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "CTC2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm645 = t;
ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
if(match_cons(t, sym_Conc_3))
{
w_42 = ATgetArgument(t, 0);
x_42 = ATgetArgument(t, 1);
y_42 = ATgetArgument(t, 2);
}
else
goto label276 ;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_42), (ATerm) ATinsert(ATempty, x_42)), w_42);
t = concat_0_0(sl, t);
if((t == NULL))
goto label276 ;
goto label275 ;
label276 :
t = trm645;
{
ATerm trm646 = t;
ATerm v_42 = NULL;
if(match_cons(t, sym_Conc_2))
{
ATerm trm647 = ATgetArgument(t, 0);
if(match_cons(trm647, sym_Ins_1))
{
v_42 = ATgetArgument(trm647, 0);
}
else
goto label277 ;
{
ATerm trm648 = ATgetArgument(t, 1);
if(!(((ATgetType(trm648) == AT_LIST) && ATisEmpty(trm648))))
goto label277 ;
}
}
else
goto label277 ;
t = (ATerm) ATinsert(ATempty, v_42);
goto label275 ;
label277 :
t = trm646;
{
ATerm trm649 = t;
ATerm t_42 = NULL,u_42 = NULL;
if(match_cons(t, sym_Conc_2))
{
ATerm trm650 = ATgetArgument(t, 0);
if(match_cons(trm650, sym_Ins_1))
{
t_42 = ATgetArgument(trm650, 0);
}
else
goto label278 ;
{
ATerm trm651 = ATgetArgument(t, 1);
if(match_cons(trm651, sym_Ins_1))
{
u_42 = ATgetArgument(trm651, 0);
}
else
goto label278 ;
}
}
else
goto label278 ;
t = (ATerm) ATinsert(ATinsert(ATempty, u_42), t_42);
goto label275 ;
label278 :
t = trm649;
{
ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
if(match_cons(t, sym_Conc_2))
{
ATerm trm652 = ATgetArgument(t, 0);
if(match_cons(trm652, sym_Ins_1))
{
q_42 = ATgetArgument(trm652, 0);
}
else
goto fail227 ;
{
ATerm trm653 = ATgetArgument(t, 1);
if(((ATgetType(trm653) == AT_LIST) && !(ATisEmpty(trm653))))
{
r_42 = ATgetFirst((ATermList) trm653);
s_42 = (ATerm) ATgetNext((ATermList) trm653);
}
else
goto fail227 ;
}
}
else
goto fail227 ;
{
ATerm trm654;
trm654 = CheckATermList(s_42);
if((trm654 == NULL))
goto fail227 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm654, r_42), q_42);
goto label275 ;
}
}
}
}
label275 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail227 :
--__tracing_table_counter;
return(NULL);
}
ATerm CTC1_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "CTC1_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm638 = t;
ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
if(match_cons(t, sym_Conc_2))
{
ATerm trm639 = ATgetArgument(t, 0);
if(match_cons(trm639, sym_Conc_2))
{
l_42 = ATgetArgument(trm639, 0);
m_42 = ATgetArgument(trm639, 1);
}
else
goto label272 ;
n_42 = ATgetArgument(t, 1);
}
else
goto label272 ;
p_42 = t;
t = (ATerm) ATmakeAppl(sym__2, m_42, n_42);
t = makeConc_0_0(sl, t);
if((t == NULL))
goto label272 ;
o_42 = t;
t = p_42;
t = (ATerm) ATmakeAppl(sym__2, l_42, o_42);
t = makeConc_0_0(sl, t);
if((t == NULL))
goto label272 ;
goto label271 ;
label272 :
t = trm638;
{
ATerm trm640 = t;
ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
if(match_cons(t, sym_Conc_3))
{
ATerm trm641 = ATgetArgument(t, 0);
if(match_cons(trm641, sym_Conc_3))
{
g_42 = ATgetArgument(trm641, 0);
h_42 = ATgetArgument(trm641, 1);
i_42 = ATgetArgument(trm641, 2);
}
else
goto label273 ;
j_42 = ATgetArgument(t, 1);
k_42 = ATgetArgument(t, 2);
}
else
goto label273 ;
t = (ATerm) ATmakeAppl(sym_Conc_3, g_42, h_42, (ATerm) ATmakeAppl(sym_Conc_3, i_42, j_42, k_42));
goto label271 ;
label273 :
t = trm640;
{
ATerm trm642 = t;
ATerm f_42 = NULL;
if(match_cons(t, sym_Conc_2))
{
ATerm trm643 = ATgetArgument(t, 0);
if(!(((ATgetType(trm643) == AT_LIST) && ATisEmpty(trm643))))
goto label274 ;
f_42 = ATgetArgument(t, 1);
}
else
goto label274 ;
t = f_42;
goto label271 ;
label274 :
t = trm642;
{
ATerm e_42 = NULL;
if(match_cons(t, sym_Conc_2))
{
e_42 = ATgetArgument(t, 0);
{
ATerm trm644 = ATgetArgument(t, 1);
if(!(((ATgetType(trm644) == AT_LIST) && ATisEmpty(trm644))))
goto fail226 ;
}
}
else
goto fail226 ;
t = e_42;
goto label271 ;
}
}
}
label271 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail226 :
--__tracing_table_counter;
return(NULL);
}
ATerm CTC0_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "CTC0_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm637 = t;
ATerm c_42 = NULL,d_42 = NULL;
if(match_cons(t, sym_Snoc_2))
{
c_42 = ATgetArgument(t, 0);
d_42 = ATgetArgument(t, 1);
}
else
goto label270 ;
t = (ATerm) ATmakeAppl(sym__2, c_42, (ATerm) ATmakeAppl(sym_Ins_1, d_42));
t = makeConc_0_0(sl, t);
if((t == NULL))
goto label270 ;
goto label269 ;
label270 :
t = trm637;
{
ATerm a_42 = NULL,b_42 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
a_42 = ATgetFirst((ATermList) t);
b_42 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail225 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Ins_1, a_42), b_42);
t = makeConc_0_0(sl, t);
if((t == NULL))
goto fail225 ;
else
goto label269 ;
}
label269 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail225 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_yield_quote_acc_1_1 (StrSL sl, StrCL z_71, ATerm a_72, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_yield_quote_acc_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm628 = t;
ATerm w_41 = NULL,x_41 = NULL,z_41 = NULL;
if(match_cons(t, sym_amb_1))
{
ATerm trm629 = ATgetArgument(t, 0);
if(((ATgetType(trm629) == AT_LIST) && !(ATisEmpty(trm629))))
{
w_41 = ATgetFirst((ATermList) trm629);
{
ATerm trm630 = (ATerm) ATgetNext((ATermList) trm629);
}
}
else
goto label265 ;
}
else
goto label265 ;
z_41 = t;
t = w_41;
t = cl_fun(z_71)(cl_sl(z_71), a_72, t);
if((t == NULL))
goto label265 ;
x_41 = t;
t = z_41;
t = x_41;
goto label264 ;
label265 :
t = trm628;
{
ATerm trm631 = t;
ATerm t_41 = NULL,u_41 = NULL;
ATerm trm632 = t;
ATerm m_195 = NULL,n_195 = NULL,o_195 = NULL;
ATerm trm633;
trm633 = (ATerm) ATgetAnnotations(t);
if((trm633 == NULL))
trm633 = (ATerm) ATempty;
if(match_cons(t, sym_meta_var_1))
{
n_195 = ATgetArgument(t, 0);
}
else
goto label268 ;
m_195 = trm633;
t = n_195;
o_195 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_meta_var_1, o_195), m_195);
goto label267 ;
label268 :
t = trm632;
{
ATerm r_195 = NULL,s_195 = NULL,t_195 = NULL;
ATerm trm634;
trm634 = (ATerm) ATgetAnnotations(t);
if((trm634 == NULL))
trm634 = (ATerm) ATempty;
if(match_cons(t, sym_meta_listvar_1))
{
s_195 = ATgetArgument(t, 0);
}
else
goto label266 ;
r_195 = trm634;
t = s_195;
t_195 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_meta_listvar_1, t_195), r_195);
goto label267 ;
}
label267 :
;
u_41 = t;
t_41 = t;
{
ATerm trm635;
trm635 = CheckATermList(a_72);
if((trm635 == NULL))
goto label266 ;
t = (ATerm) ATinsert((ATermList)trm635, t_41);
}
goto label264 ;
label266 :
t = trm631;
{
ATerm p_41 = NULL,q_41 = NULL;
struct str_closure n_208 = { &(lifted167) , &(frame) };
StrCL lifted167_cl = &(n_208);
t = strsglr_antiquote_cong_1_0(sl, lifted167_cl, t);
if((t == NULL))
goto fail222 ;
q_41 = t;
p_41 = t;
{
ATerm trm636;
trm636 = CheckATermList(a_72);
if((trm636 == NULL))
goto fail222 ;
t = (ATerm) ATinsert((ATermList)trm636, p_41);
goto label264 ;
}
}
}
label264 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail222 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted167 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted167";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_208 = { &(lifted168) , &(frame) };
StrCL lifted168_cl = &(m_208);
t = alltd_1_0(sl_up(sl), lifted168_cl, t);
if((t == NULL))
goto fail223 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail223 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted168 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted168";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure l_208 = { &(asfix_yield_quote_0_0) , sl_up(sl_up(sl)) };
StrCL lifted169_cl = &(l_208);
t = strsglr_quote_cong_1_0(sl_up(sl_up(sl)), lifted169_cl, t);
if((t == NULL))
goto fail224 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail224 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_yield_quote_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_yield_quote_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm623 = t;
struct str_closure g_208 = { &(lifted162) , &(frame) };
StrCL lifted162_cl = &(g_208);
struct str_closure h_208 = { &(lifted163) , &(frame) };
StrCL lifted163_cl = &(h_208);
t = appl_2_0(sl, lifted162_cl, lifted163_cl, t);
if((t == NULL))
goto label260 ;
goto label259 ;
label260 :
t = trm623;
{
ATerm trm624 = t;
ATerm trm625 = t;
ATerm d_195 = NULL,e_195 = NULL,f_195 = NULL;
ATerm trm626;
trm626 = (ATerm) ATgetAnnotations(t);
if((trm626 == NULL))
trm626 = (ATerm) ATempty;
if(match_cons(t, sym_meta_var_1))
{
e_195 = ATgetArgument(t, 0);
}
else
goto label263 ;
d_195 = trm626;
t = e_195;
f_195 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_meta_var_1, f_195), d_195);
goto label262 ;
label263 :
t = trm625;
{
ATerm h_195 = NULL,i_195 = NULL,j_195 = NULL;
ATerm trm627;
trm627 = (ATerm) ATgetAnnotations(t);
if((trm627 == NULL))
trm627 = (ATerm) ATempty;
if(match_cons(t, sym_meta_listvar_1))
{
i_195 = ATgetArgument(t, 0);
}
else
goto label261 ;
h_195 = trm627;
t = i_195;
j_195 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_meta_listvar_1, j_195), h_195);
goto label262 ;
}
label262 :
;
goto label259 ;
label261 :
t = trm624;
{
struct str_closure k_208 = { &(lifted164) , &(frame) };
StrCL lifted164_cl = &(k_208);
t = strsglr_antiquote_cong_1_0(sl, lifted164_cl, t);
if((t == NULL))
goto fail216 ;
else
goto label259 ;
}
}
label259 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail216 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted164 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted164";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_208 = { &(lifted165) , &(frame) };
StrCL lifted165_cl = &(j_208);
t = alltd_1_0(sl_up(sl), lifted165_cl, t);
if((t == NULL))
goto fail220 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail220 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted165 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted165";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_208 = { &(asfix_yield_quote_0_0) , sl_up(sl_up(sl)) };
StrCL lifted166_cl = &(i_208);
t = strsglr_quote_cong_1_0(sl_up(sl_up(sl)), lifted166_cl, t);
if((t == NULL))
goto fail221 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail221 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted163 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted163";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_41 = NULL,m_41 = NULL;
m_41 = t;
t = (ATerm) ATempty;
l_41 = t;
t = m_41;
t = k_41(sl, l_41, t);
if((t == NULL))
goto fail219 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail219 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted162 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted162";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail218 :
--__tracing_table_counter;
return(NULL);
}
static ATerm k_41 (StrSL sl, ATerm j_41, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "k_41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm622 = t;
struct str_closure e_208 = { &(k_41) , sl };
StrCL lifted160_cl = &(e_208);
t = asfix_yield_acc_1_1(sl_up(sl), lifted160_cl, j_41, t);
if((t == NULL))
goto label258 ;
goto label257 ;
label258 :
t = trm622;
{
struct str_closure f_208 = { &(k_41) , sl };
StrCL lifted161_cl = &(f_208);
t = asfix_yield_quote_acc_1_1(sl_up(sl), lifted161_cl, j_41, t);
if((t == NULL))
goto fail217 ;
else
goto label257 ;
}
label257 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail217 :
--__tracing_table_counter;
return(NULL);
}
ATerm yield_asfix_quotes_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "yield_asfix_quotes_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_208 = { &(lifted158) , &(frame) };
StrCL lifted158_cl = &(d_208);
t = alltd_1_0(sl, lifted158_cl, t);
if((t == NULL))
goto fail214 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail214 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted158 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted158";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_208 = { &(asfix_yield_quote_0_0) , sl_up(sl) };
StrCL lifted159_cl = &(c_208);
t = strsglr_quote_cong_1_0(sl_up(sl), lifted159_cl, t);
if((t == NULL))
goto fail215 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail215 :
--__tracing_table_counter;
return(NULL);
}
ATerm annotation_2_0 (StrSL sl, StrCL c_41, StrCL d_41, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "annotation_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,e_41 = NULL,b_41 = NULL,f_41 = NULL,h_41 = NULL,g_41 = NULL,i_41 = NULL,v_194 = NULL,w_194 = NULL,x_194 = NULL;
sl_init_var(0, w_194);
if(match_cons(t, sym_appl_2))
{
y_40 = ATgetArgument(t, 0);
e_41 = ATgetArgument(t, 1);
}
else
goto fail208 ;
t = e_41;
b_41 = t;
t = y_40;
if(match_cons(t, sym_prod_3))
{
ATerm trm615 = ATgetArgument(t, 0);
ATerm trm616 = ATgetArgument(t, 1);
v_194 = ATgetArgument(t, 2);
}
else
goto fail208 ;
x_194 = t;
t = v_194;
{
struct str_closure u_207 = { &(lifted150) , &(frame) };
StrCL lifted150_cl = &(u_207);
t = oncetd_1_0(sl, lifted150_cl, t);
if((t == NULL))
goto fail208 ;
t = x_194;
if((w_194 == NULL))
goto fail208 ;
else
{
t = w_194;
}
if(!((ATgetSymbol(t) == ATmakeSymbol("WithAnno", 0, ATtrue))))
goto fail208 ;
t = b_41;
{
struct str_closure b_208 = { &(lifted151) , &(frame) };
StrCL lifted151_cl = &(b_208);
t = filter_1_0(sl, lifted151_cl, t);
if((t == NULL))
goto fail208 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
z_40 = ATgetFirst((ATermList) t);
a_41 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail208 ;
h_41 = t;
t = z_40;
t = cl_fun(d_41)(cl_sl(d_41), t);
if((t == NULL))
goto fail208 ;
f_41 = t;
t = h_41;
i_41 = t;
t = a_41;
t = cl_fun(c_41)(cl_sl(c_41), t);
if((t == NULL))
goto fail208 ;
g_41 = t;
t = i_41;
{
ATerm trm620;
ATerm trm621;
trm621 = CheckATermList(g_41);
if((trm621 == NULL))
goto fail208 ;
trm620 = SSL_mkterm(term93, (ATerm) ATinsert((ATermList)trm621, f_41));
if((trm620 == NULL))
goto fail208 ;
t = trm620;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail208 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted151 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted151";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm617 = t;
t = is_ignorable_syntax_0_0(sl_up(sl), t);
if((t == NULL))
goto label254 ;
goto fail210 ;
label254 :
t = trm617;
goto label253 ;
label253 :
;
{
ATerm trm618 = t;
struct str_closure z_207 = { &(lifted152) , &(frame) };
StrCL lifted152_cl = &(z_207);
struct str_closure a_208 = { &(_Id) , sl_up(sl) };
StrCL lifted157_cl = &(a_208);
t = appl_2_0(sl_up(sl), lifted152_cl, lifted157_cl, t);
if((t == NULL))
goto label256 ;
goto fail210 ;
label256 :
t = trm618;
goto label255 ;
label255 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail210 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted152 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted152";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_207 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted153_cl = &(w_207);
struct str_closure x_207 = { &(lifted154) , &(frame) };
StrCL lifted154_cl = &(x_207);
struct str_closure y_207 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted156_cl = &(y_207);
t = prod_3_0(sl_up(sl_up(sl)), lifted153_cl, lifted154_cl, lifted156_cl, t);
if((t == NULL))
goto fail211 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail211 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted154 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted154";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_207 = { &(lifted155) , &(frame) };
StrCL lifted155_cl = &(v_207);
t = oncetd_1_0(sl_up(sl_up(sl_up(sl))), lifted155_cl, t);
if((t == NULL))
goto fail212 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail212 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted155 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted155";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_194 = NULL,z_194 = NULL,a_195 = NULL;
ATerm trm619;
trm619 = (ATerm) ATgetAnnotations(t);
if((trm619 == NULL))
trm619 = (ATerm) ATempty;
if(match_cons(t, sym_lex_1))
{
z_194 = ATgetArgument(t, 0);
}
else
goto fail213 ;
y_194 = trm619;
t = z_194;
a_195 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lex_1, a_195), y_194);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail213 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted150 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted150";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail209 ;
}
else
goto fail209 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail209 :
--__tracing_table_counter;
return(NULL);
}
ATerm skip_concrete_1_0 (StrSL sl, StrCL w_40, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "skip_concrete_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_vars(1);
sl_init_fun(0, w_40);
{
ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
struct str_closure r_207 = { &(x_40) , &(frame) };
StrCL x_40_cl = &(r_207);
sl_init_fun(1, x_40_cl);
{
ATerm u_40 = NULL,s_194 = NULL,t_194 = NULL,u_194 = NULL;
sl_init_var(0, t_194);
if(match_cons(t, sym_appl_2))
{
q_40 = ATgetArgument(t, 0);
r_40 = ATgetArgument(t, 1);
}
else
goto fail199 ;
t = q_40;
if(match_cons(t, sym_prod_3))
{
ATerm trm607 = ATgetArgument(t, 0);
ATerm trm608 = ATgetArgument(t, 1);
s_194 = ATgetArgument(t, 2);
}
else
goto fail199 ;
u_194 = t;
t = s_194;
{
struct str_closure s_207 = { &(lifted148) , &(frame) };
StrCL lifted148_cl = &(s_207);
t = oncetd_1_0(sl, lifted148_cl, t);
if((t == NULL))
goto fail199 ;
t = u_194;
if((t_194 == NULL))
goto fail199 ;
else
{
t = t_194;
}
s_40 = t;
{
ATerm trm609 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("ToTerm", 0, ATtrue))))
goto label249 ;
goto label248 ;
label249 :
t = trm609;
{
ATerm trm610 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("ToMetaExpr", 0, ATtrue))))
goto label250 ;
goto label248 ;
label250 :
t = trm610;
{
ATerm trm611 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("ToMetaListExpr", 0, ATtrue))))
goto label251 ;
goto label248 ;
label251 :
t = trm611;
{
ATerm trm612 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("ToBuild", 0, ATtrue))))
goto label252 ;
goto label248 ;
label252 :
t = trm612;
if((ATgetSymbol(t) == ATmakeSymbol("ToStrategy", 0, ATtrue)))
goto label248 ;
else
goto fail199 ;
}
}
}
label248 :
;
u_40 = t;
t = r_40;
{
struct str_closure t_207 = { &(is_ignorable_syntax_0_0) , sl };
StrCL lifted149_cl = &(t_207);
t = remove_all_1_0(sl, lifted149_cl, t);
if((t == NULL))
goto fail199 ;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
t_40 = ATgetFirst((ATermList) t);
{
ATerm trm613 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm613) == AT_LIST) && ATisEmpty(trm613))))
goto fail199 ;
}
}
else
goto fail199 ;
t = u_40;
{
ATerm trm614;
trm614 = SSL_mkterm(s_40, (ATerm) ATinsert(ATempty, t_40));
if((trm614 == NULL))
goto fail199 ;
t = trm614;
t = x_40(&(frame), t);
if((t == NULL))
goto fail199 ;
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail199 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted148 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted148";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail207 ;
}
else
goto fail207 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail207 :
--__tracing_table_counter;
return(NULL);
}
static ATerm x_40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "x_40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_207 = { &(lifted138) , &(frame) };
StrCL lifted138_cl = &(q_207);
t = alltd_1_0(sl_up(sl), lifted138_cl, t);
if((t == NULL))
goto fail200 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail200 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted138 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted138";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm598 = t;
struct str_closure l_207 = { &(lifted139) , &(frame) };
StrCL lifted139_cl = &(l_207);
struct str_closure m_207 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted144_cl = &(m_207);
t = appl_2_0(sl_up(sl_up(sl)), lifted139_cl, lifted144_cl, t);
if((t == NULL))
goto label241 ;
t = sl_fun(0, sl_up(sl))(sl_fun_sl(0, sl_up(sl)), t);
if((t == NULL))
goto label241 ;
goto label240 ;
label241 :
t = trm598;
{
ATerm trm600 = t;
struct str_closure o_207 = { &(lifted145) , &(frame) };
StrCL lifted145_cl = &(o_207);
struct str_closure p_207 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted147_cl = &(p_207);
t = appl_2_0(sl_up(sl_up(sl)), lifted145_cl, lifted147_cl, t);
if((t == NULL))
goto label242 ;
t = sl_fun(0, sl_up(sl))(sl_fun_sl(0, sl_up(sl)), t);
if((t == NULL))
goto label242 ;
goto label240 ;
label242 :
t = trm600;
t = annotation_2_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), sl_fun_cl(1, sl_up(sl)), t);
if((t == NULL))
goto fail201 ;
else
goto label240 ;
}
label240 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail201 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted145 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted145";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm v_40 = NULL,p_194 = NULL,q_194 = NULL,r_194 = NULL;
sl_init_var(0, q_194);
v_40 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm601 = ATgetArgument(t, 0);
ATerm trm602 = ATgetArgument(t, 1);
p_194 = ATgetArgument(t, 2);
}
else
goto fail205 ;
r_194 = t;
t = p_194;
{
struct str_closure n_207 = { &(lifted146) , &(frame) };
StrCL lifted146_cl = &(n_207);
t = oncetd_1_0(sl_up(sl_up(sl_up(sl))), lifted146_cl, t);
if((t == NULL))
goto fail205 ;
t = r_194;
if((q_194 == NULL))
goto fail205 ;
else
{
t = q_194;
}
{
ATerm trm603 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("FromTerm", 0, ATtrue))))
goto label244 ;
goto label243 ;
label244 :
t = trm603;
{
ATerm trm604 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("FromMetaExpr", 0, ATtrue))))
goto label245 ;
goto label243 ;
label245 :
t = trm604;
{
ATerm trm605 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("FromMetaListExpr", 0, ATtrue))))
goto label246 ;
goto label243 ;
label246 :
t = trm605;
{
ATerm trm606 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("FromStrategy", 0, ATtrue))))
goto label247 ;
goto label243 ;
label247 :
t = trm606;
if((ATgetSymbol(t) == ATmakeSymbol("FromApp", 0, ATtrue)))
goto label243 ;
else
goto fail205 ;
}
}
}
label243 :
;
t = v_40;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail205 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted146 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted146";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 0)))
goto fail206 ;
}
else
goto fail206 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail206 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted139 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted139";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_207 = { &(lifted140) , &(frame) };
StrCL lifted140_cl = &(i_207);
struct str_closure j_207 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted142_cl = &(j_207);
struct str_closure k_207 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted143_cl = &(k_207);
t = prod_3_0(sl_up(sl_up(sl_up(sl))), lifted140_cl, lifted142_cl, lifted143_cl, t);
if((t == NULL))
goto fail202 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail202 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted140 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted140";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_207 = { &(lifted141) , &(frame) };
StrCL lifted141_cl = &(h_207);
t = SRTS_one(sl_up(sl_up(sl_up(sl_up(sl)))), lifted141_cl, t);
if((t == NULL))
goto fail203 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail203 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted141 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted141";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_194 = NULL,m_194 = NULL,n_194 = NULL;
ATerm trm599;
trm599 = (ATerm) ATgetAnnotations(t);
if((trm599 == NULL))
trm599 = (ATerm) ATempty;
if(match_cons(t, sym_varsym_1))
{
m_194 = ATgetArgument(t, 0);
}
else
goto fail204 ;
j_194 = trm599;
t = m_194;
n_194 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_varsym_1, n_194), j_194);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail204 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_is_sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_is_sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm596 = t;
ATerm f_194 = NULL,g_194 = NULL,h_194 = NULL;
ATerm trm597;
trm597 = (ATerm) ATgetAnnotations(t);
if((trm597 == NULL))
trm597 = (ATerm) ATempty;
if(match_cons(t, sym_sort_1))
{
g_194 = ATgetArgument(t, 0);
}
else
goto label239 ;
f_194 = trm597;
t = g_194;
h_194 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_sort_1, h_194), f_194);
goto label238 ;
label239 :
t = trm596;
{
struct str_closure f_207 = { &(_Id) , sl };
StrCL lifted135_cl = &(f_207);
struct str_closure g_207 = { &(lifted136) , &(frame) };
StrCL lifted136_cl = &(g_207);
t = parameterized_sort_2_0(sl, lifted135_cl, lifted136_cl, t);
if((t == NULL))
goto fail197 ;
else
goto label238 ;
}
label238 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail197 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted136 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted136";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_207 = { &(asfix_is_sort_0_0) , sl_up(sl) };
StrCL lifted137_cl = &(e_207);
t = map_1_0(sl_up(sl), lifted137_cl, t);
if((t == NULL))
goto fail198 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail198 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_injective_alt_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_injective_alt_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure d_207 = { &(p_40) , &(frame) };
StrCL p_40_cl = &(d_207);
sl_init_fun(0, p_40_cl);
t = p_40(&(frame), t);
if((t == NULL))
goto fail195 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail195 :
--__tracing_table_counter;
return(NULL);
}
static ATerm p_40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "p_40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm593 = t;
t = asfix_is_sort_0_0(sl_up(sl), t);
if((t == NULL))
goto label236 ;
goto label235 ;
label236 :
t = trm593;
{
ATerm trm594 = t;
ATerm b_194 = NULL,c_194 = NULL,d_194 = NULL;
ATerm trm595;
trm595 = (ATerm) ATgetAnnotations(t);
if((trm595 == NULL))
trm595 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
c_194 = ATgetArgument(t, 0);
}
else
goto label237 ;
b_194 = trm595;
t = c_194;
t = p_40(sl, t);
if((t == NULL))
goto label237 ;
d_194 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, d_194), b_194);
goto label235 ;
label237 :
t = trm594;
t = alt_2_0(sl_up(sl), sl_fun_cl(0, sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail196 ;
else
goto label235 ;
}
label235 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail196 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_injection_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_injection_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm543 = t;
if(match_cons(t, sym_prod_3))
{
ATerm trm544 = ATgetArgument(t, 0);
ATerm trm545 = ATgetArgument(t, 1);
if(match_cons(trm545, sym_sort_1))
{
ATerm trm546 = ATgetArgument(trm545, 0);
if(!((ATgetSymbol(trm546) == ATmakeSymbol("<START>", 0, ATtrue))))
goto label206 ;
}
else
goto label206 ;
{
ATerm trm547 = ATgetArgument(t, 2);
}
}
else
goto label206 ;
goto label205 ;
label206 :
t = trm543;
{
ATerm trm548 = t;
struct str_closure b_206 = { &(_Id) , sl };
StrCL lifted109_cl = &(b_206);
struct str_closure c_206 = { &(_Id) , sl };
StrCL lifted110_cl = &(c_206);
struct str_closure d_206 = { &(lifted111) , &(frame) };
StrCL lifted111_cl = &(d_206);
t = prod_3_0(sl, lifted109_cl, lifted110_cl, lifted111_cl, t);
if((t == NULL))
goto label207 ;
goto label205 ;
label207 :
t = trm548;
{
ATerm trm550 = t;
ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm551 = ATgetArgument(t, 0);
if(((ATgetType(trm551) == AT_LIST) && !(ATisEmpty(trm551))))
{
ATerm trm552 = ATgetFirst((ATermList) trm551);
if(match_cons(trm552, sym_cf_1))
{
ATerm trm553 = ATgetArgument(trm552, 0);
if(match_cons(trm553, sym_iter_1))
{
m_40 = ATgetArgument(trm553, 0);
}
else
goto label210 ;
}
else
goto label210 ;
{
ATerm trm554 = (ATerm) ATgetNext((ATermList) trm551);
if(!(((ATgetType(trm554) == AT_LIST) && ATisEmpty(trm554))))
goto label210 ;
}
}
else
goto label210 ;
{
ATerm trm555 = ATgetArgument(t, 1);
if(match_cons(trm555, sym_cf_1))
{
ATerm trm556 = ATgetArgument(trm555, 0);
if(match_cons(trm556, sym_iter_star_1))
{
if(!((m_40 == ATgetArgument(trm556, 0))))
goto label210 ;
}
else
goto label210 ;
}
else
goto label210 ;
}
n_40 = ATgetArgument(t, 2);
}
else
goto label210 ;
o_40 = t;
t = n_40;
{
ATerm trm557 = t;
struct str_closure e_206 = { &(lifted113) , &(frame) };
StrCL lifted113_cl = &(e_206);
t = oncetd_1_0(sl, lifted113_cl, t);
if((t == NULL))
goto label212 ;
goto label210 ;
label212 :
t = trm557;
goto label211 ;
label211 :
;
t = o_40;
}
goto label205 ;
label210 :
t = trm550;
{
ATerm trm559 = t;
ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
if(match_cons(t, sym_prod_3))
{
ATerm trm560 = ATgetArgument(t, 0);
if(((ATgetType(trm560) == AT_LIST) && !(ATisEmpty(trm560))))
{
ATerm trm561 = ATgetFirst((ATermList) trm560);
if(match_cons(trm561, sym_cf_1))
{
ATerm trm562 = ATgetArgument(trm561, 0);
if(match_cons(trm562, sym_iter_sep_2))
{
i_40 = ATgetArgument(trm562, 0);
j_40 = ATgetArgument(trm562, 1);
}
else
goto label213 ;
}
else
goto label213 ;
{
ATerm trm563 = (ATerm) ATgetNext((ATermList) trm560);
if(!(((ATgetType(trm563) == AT_LIST) && ATisEmpty(trm563))))
goto label213 ;
}
}
else
goto label213 ;
{
ATerm trm564 = ATgetArgument(t, 1);
if(match_cons(trm564, sym_cf_1))
{
ATerm trm565 = ATgetArgument(trm564, 0);
if(match_cons(trm565, sym_iter_star_sep_2))
{
if(!((i_40 == ATgetArgument(trm565, 0))))
goto label213 ;
if(!((j_40 == ATgetArgument(trm565, 1))))
goto label213 ;
}
else
goto label213 ;
}
else
goto label213 ;
}
k_40 = ATgetArgument(t, 2);
}
else
goto label213 ;
l_40 = t;
t = k_40;
{
ATerm trm566 = t;
struct str_closure g_206 = { &(lifted114) , &(frame) };
StrCL lifted114_cl = &(g_206);
t = oncetd_1_0(sl, lifted114_cl, t);
if((t == NULL))
goto label215 ;
goto label213 ;
label215 :
t = trm566;
goto label214 ;
label214 :
;
t = l_40;
}
goto label205 ;
label213 :
t = trm559;
{
ATerm trm567 = t;
struct str_closure q_206 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(q_206);
struct str_closure r_206 = { &(lifted117) , &(frame) };
StrCL lifted117_cl = &(r_206);
struct str_closure s_206 = { &(lifted122) , &(frame) };
StrCL lifted122_cl = &(s_206);
t = prod_3_0(sl, lifted116_cl, lifted117_cl, lifted122_cl, t);
if((t == NULL))
goto label216 ;
goto label205 ;
label216 :
t = trm567;
{
ATerm trm583 = t;
struct str_closure v_206 = { &(lifted125) , &(frame) };
StrCL lifted125_cl = &(v_206);
struct str_closure w_206 = { &(is_injective_alt_0_0) , sl };
StrCL lifted126_cl = &(w_206);
struct str_closure x_206 = { &(lifted127) , &(frame) };
StrCL lifted127_cl = &(x_206);
t = prod_3_0(sl, lifted125_cl, lifted126_cl, lifted127_cl, t);
if((t == NULL))
goto label228 ;
goto label205 ;
label228 :
t = trm583;
{
struct str_closure a_207 = { &(lifted130) , &(frame) };
StrCL lifted130_cl = &(a_207);
struct str_closure b_207 = { &(_Id) , sl };
StrCL lifted131_cl = &(b_207);
struct str_closure c_207 = { &(lifted132) , &(frame) };
StrCL lifted132_cl = &(c_207);
t = prod_3_0(sl, lifted130_cl, lifted131_cl, lifted132_cl, t);
if((t == NULL))
goto fail177 ;
else
goto label205 ;
}
}
}
}
}
}
label205 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail177 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted132 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted132";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm592 = t;
struct str_closure z_206 = { &(lifted133) , &(frame) };
StrCL lifted133_cl = &(z_206);
t = oncetd_1_0(sl_up(sl), lifted133_cl, t);
if((t == NULL))
goto label234 ;
goto fail193 ;
label234 :
t = trm592;
goto label233 ;
label233 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail193 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted133 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted133";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_206 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted134_cl = &(y_206);
t = cons_1_0(sl_up(sl_up(sl)), lifted134_cl, t);
if((t == NULL))
goto fail194 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail194 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted130 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted130";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_193 = NULL,y_193 = NULL,z_193 = NULL;
ATerm trm589;
trm589 = (ATerm) ATgetAnnotations(t);
if((trm589 == NULL))
trm589 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
s_39 = ATgetFirst((ATermList) t);
t_39 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail192 ;
w_39 = trm589;
t = s_39;
{
ATerm trm590;
trm590 = (ATerm) ATgetAnnotations(t);
if((trm590 == NULL))
trm590 = (ATerm) ATempty;
if(match_cons(t, sym_varsym_1))
{
y_193 = ATgetArgument(t, 0);
}
else
goto fail192 ;
x_193 = trm590;
t = y_193;
z_193 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_varsym_1, z_193), x_193);
u_39 = t;
t = t_39;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail192 ;
v_39 = t;
{
ATerm trm591;
trm591 = CheckATermList(v_39);
if((trm591 == NULL))
goto fail192 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm591, u_39), w_39);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail192 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted127 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted127";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm588 = t;
struct str_closure u_206 = { &(lifted128) , &(frame) };
StrCL lifted128_cl = &(u_206);
t = oncetd_1_0(sl_up(sl), lifted128_cl, t);
if((t == NULL))
goto label232 ;
goto fail190 ;
label232 :
t = trm588;
goto label231 ;
label231 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail190 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted128 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted128";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_206 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted129_cl = &(t_206);
t = cons_1_0(sl_up(sl_up(sl)), lifted129_cl, t);
if((t == NULL))
goto fail191 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail191 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted125 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted125";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
ATerm trm584;
trm584 = (ATerm) ATgetAnnotations(t);
if((trm584 == NULL))
trm584 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
x_39 = ATgetFirst((ATermList) t);
y_39 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail189 ;
b_40 = trm584;
t = x_39;
{
ATerm trm585 = t;
t = asfix_is_sort_0_0(sl_up(sl), t);
if((t == NULL))
goto label230 ;
goto label229 ;
label230 :
t = trm585;
{
ATerm t_193 = NULL,u_193 = NULL,v_193 = NULL;
ATerm trm586;
trm586 = (ATerm) ATgetAnnotations(t);
if((trm586 == NULL))
trm586 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
u_193 = ATgetArgument(t, 0);
}
else
goto fail189 ;
t_193 = trm586;
t = u_193;
t = asfix_is_sort_0_0(sl_up(sl), t);
if((t == NULL))
goto fail189 ;
v_193 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, v_193), t_193);
goto label229 ;
}
label229 :
;
z_39 = t;
t = y_39;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail189 ;
a_40 = t;
{
ATerm trm587;
trm587 = CheckATermList(a_40);
if((trm587 == NULL))
goto fail189 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm587, z_39), b_40);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail189 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted122 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted122";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm582 = t;
struct str_closure n_206 = { &(lifted123) , &(frame) };
StrCL lifted123_cl = &(n_206);
t = oncetd_1_0(sl_up(sl), lifted123_cl, t);
if((t == NULL))
goto label227 ;
goto fail187 ;
label227 :
t = trm582;
goto label226 ;
label226 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail187 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted123 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted123";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_206 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted124_cl = &(m_206);
t = cons_1_0(sl_up(sl_up(sl)), lifted124_cl, t);
if((t == NULL))
goto fail188 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail188 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted117 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted117";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure l_206 = { &(h_40) , &(frame) };
StrCL h_40_cl = &(l_206);
sl_init_fun(0, h_40_cl);
t = h_40(&(frame), t);
if((t == NULL))
goto fail183 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail183 :
--__tracing_table_counter;
return(NULL);
}
static ATerm h_40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "h_40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm572 = t;
t = asfix_is_sort_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label220 ;
goto label219 ;
label220 :
t = trm572;
{
ATerm trm573 = t;
ATerm b_193 = NULL,c_193 = NULL,d_193 = NULL;
ATerm trm574;
trm574 = (ATerm) ATgetAnnotations(t);
if((trm574 == NULL))
trm574 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
c_193 = ATgetArgument(t, 0);
}
else
goto label221 ;
b_193 = trm574;
t = c_193;
t = h_40(sl, t);
if((t == NULL))
goto label221 ;
d_193 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, d_193), b_193);
goto label219 ;
label221 :
t = trm573;
{
ATerm trm575 = t;
ATerm f_193 = NULL,g_193 = NULL,h_193 = NULL;
ATerm trm576;
trm576 = (ATerm) ATgetAnnotations(t);
if((trm576 == NULL))
trm576 = (ATerm) ATempty;
if(match_cons(t, sym_lex_1))
{
g_193 = ATgetArgument(t, 0);
}
else
goto label222 ;
f_193 = trm576;
t = g_193;
t = h_40(sl, t);
if((t == NULL))
goto label222 ;
h_193 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lex_1, h_193), f_193);
goto label219 ;
label222 :
t = trm575;
{
ATerm trm577 = t;
ATerm j_193 = NULL,k_193 = NULL,l_193 = NULL;
ATerm trm578;
trm578 = (ATerm) ATgetAnnotations(t);
if((trm578 == NULL))
trm578 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
k_193 = ATgetArgument(t, 0);
}
else
goto label223 ;
j_193 = trm578;
t = k_193;
t = h_40(sl, t);
if((t == NULL))
goto label223 ;
l_193 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, l_193), j_193);
goto label219 ;
label223 :
t = trm577;
{
ATerm trm579 = t;
ATerm p_193 = NULL,q_193 = NULL,r_193 = NULL;
ATerm trm580;
trm580 = (ATerm) ATgetAnnotations(t);
if((trm580 == NULL))
trm580 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
q_193 = ATgetArgument(t, 0);
}
else
goto label224 ;
p_193 = trm580;
t = q_193;
t = h_40(sl, t);
if((t == NULL))
goto label224 ;
r_193 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, r_193), p_193);
goto label219 ;
label224 :
t = trm579;
{
ATerm trm581 = t;
struct str_closure i_206 = { &(lifted118) , &(frame) };
StrCL lifted118_cl = &(i_206);
t = iter_sep_2_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl), lifted118_cl, t);
if((t == NULL))
goto label225 ;
goto label219 ;
label225 :
t = trm581;
{
struct str_closure k_206 = { &(lifted120) , &(frame) };
StrCL lifted120_cl = &(k_206);
t = iter_star_sep_2_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl), lifted120_cl, t);
if((t == NULL))
goto fail184 ;
else
goto label219 ;
}
}
}
}
}
}
label219 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail184 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted120 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted120";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_206 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted121_cl = &(j_206);
t = lit_1_0(sl_up(sl_up(sl_up(sl))), lifted121_cl, t);
if((t == NULL))
goto fail186 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail186 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted118 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted118";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_206 = { &(_Id) , sl_up(sl_up(sl_up(sl))) };
StrCL lifted119_cl = &(h_206);
t = lit_1_0(sl_up(sl_up(sl_up(sl))), lifted119_cl, t);
if((t == NULL))
goto fail185 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail185 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
ATerm trm568;
trm568 = (ATerm) ATgetAnnotations(t);
if((trm568 == NULL))
trm568 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
c_40 = ATgetFirst((ATermList) t);
d_40 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail182 ;
g_40 = trm568;
t = c_40;
{
ATerm trm569 = t;
ATerm w_192 = NULL,x_192 = NULL,y_192 = NULL;
ATerm trm570;
trm570 = (ATerm) ATgetAnnotations(t);
if((trm570 == NULL))
trm570 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
x_192 = ATgetArgument(t, 0);
}
else
goto label218 ;
w_192 = trm570;
t = x_192;
y_192 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, y_192), w_192);
goto fail182 ;
label218 :
t = trm569;
goto label217 ;
label217 :
;
e_40 = t;
t = d_40;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto fail182 ;
f_40 = t;
{
ATerm trm571;
trm571 = CheckATermList(f_40);
if((trm571 == NULL))
goto fail182 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm571, e_40), g_40);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail182 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted114 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted114";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_206 = { &(_Id) , sl_up(sl) };
StrCL lifted115_cl = &(f_206);
t = cons_1_0(sl_up(sl), lifted115_cl, t);
if((t == NULL))
goto fail181 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail181 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted113 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted113";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_192 = NULL,t_192 = NULL,u_192 = NULL;
ATerm trm558;
trm558 = (ATerm) ATgetAnnotations(t);
if((trm558 == NULL))
trm558 = (ATerm) ATempty;
if(match_cons(t, sym_cons_1))
{
t_192 = ATgetArgument(t, 0);
}
else
goto fail180 ;
s_192 = trm558;
t = t_192;
u_192 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cons_1, u_192), s_192);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail180 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted111 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted111";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_206 = { &(lifted112) , &(frame) };
StrCL lifted112_cl = &(a_206);
t = oncetd_1_0(sl_up(sl), lifted112_cl, t);
if((t == NULL))
goto fail178 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail178 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted112 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted112";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm549 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("bracket", 0, ATtrue))))
goto label209 ;
goto label208 ;
label209 :
t = trm549;
if(match_cons(t, sym_bracket_0))
{
goto label208 ;
}
else
goto fail179 ;
label208 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail179 :
--__tracing_table_counter;
return(NULL);
}
ATerm ImplodeInjection_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ImplodeInjection_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm523 = t;
ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
if(match_cons(t, sym_appl_2))
{
q_39 = ATgetArgument(t, 0);
{
ATerm trm524 = ATgetArgument(t, 1);
if(((ATgetType(trm524) == AT_LIST) && !(ATisEmpty(trm524))))
{
p_39 = ATgetFirst((ATermList) trm524);
{
ATerm trm525 = (ATerm) ATgetNext((ATermList) trm524);
if(!(((ATgetType(trm525) == AT_LIST) && ATisEmpty(trm525))))
goto label195 ;
}
}
else
goto label195 ;
}
}
else
goto label195 ;
r_39 = t;
t = q_39;
t = is_injection_0_0(sl, t);
if((t == NULL))
goto label195 ;
t = r_39;
t = p_39;
goto label194 ;
label195 :
t = trm523;
{
ATerm trm526 = t;
ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm527 = ATgetArgument(t, 0);
if(match_cons(trm527, sym_prod_3))
{
ATerm trm528 = ATgetArgument(trm527, 0);
if(((ATgetType(trm528) == AT_LIST) && !(ATisEmpty(trm528))))
{
ATerm trm529 = ATgetFirst((ATermList) trm528);
if(match_cons(trm529, sym_lit_1))
{
l_39 = ATgetArgument(trm529, 0);
}
else
goto label196 ;
{
ATerm trm530 = (ATerm) ATgetNext((ATermList) trm528);
if(!(((ATgetType(trm530) == AT_LIST) && ATisEmpty(trm530))))
goto label196 ;
}
}
else
goto label196 ;
m_39 = ATgetArgument(trm527, 1);
n_39 = ATgetArgument(trm527, 2);
}
else
goto label196 ;
{
ATerm trm531 = ATgetArgument(t, 1);
if(!(((ATgetType(trm531) == AT_LIST) && ATisEmpty(trm531))))
goto label196 ;
}
}
else
goto label196 ;
o_39 = t;
t = m_39;
{
ATerm trm532 = t;
t = asfix_is_sort_0_0(sl, t);
if((t == NULL))
goto label198 ;
goto label197 ;
label198 :
t = trm532;
{
ATerm j_192 = NULL,k_192 = NULL,l_192 = NULL;
ATerm trm533;
trm533 = (ATerm) ATgetAnnotations(t);
if((trm533 == NULL))
trm533 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
k_192 = ATgetArgument(t, 0);
}
else
goto label196 ;
j_192 = trm533;
t = k_192;
t = asfix_is_sort_0_0(sl, t);
if((t == NULL))
goto label196 ;
l_192 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, l_192), j_192);
goto label197 ;
}
label197 :
;
t = n_39;
{
ATerm trm534 = t;
struct str_closure w_205 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(w_205);
t = oncetd_1_0(sl, lifted105_cl, t);
if((t == NULL))
goto label200 ;
goto label196 ;
label200 :
t = trm534;
goto label199 ;
label199 :
;
t = o_39;
t = l_39;
}
}
goto label194 ;
label196 :
t = trm526;
{
ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm536 = ATgetArgument(t, 0);
if(match_cons(trm536, sym_prod_3))
{
ATerm trm537 = ATgetArgument(trm536, 0);
if(((ATgetType(trm537) == AT_LIST) && !(ATisEmpty(trm537))))
{
ATerm trm538 = ATgetFirst((ATermList) trm537);
if(match_cons(trm538, sym_cilit_1))
{
h_39 = ATgetArgument(trm538, 0);
}
else
goto fail174 ;
{
ATerm trm539 = (ATerm) ATgetNext((ATermList) trm537);
if(!(((ATgetType(trm539) == AT_LIST) && ATisEmpty(trm539))))
goto fail174 ;
}
}
else
goto fail174 ;
i_39 = ATgetArgument(trm536, 1);
j_39 = ATgetArgument(trm536, 2);
}
else
goto fail174 ;
{
ATerm trm540 = ATgetArgument(t, 1);
if(!(((ATgetType(trm540) == AT_LIST) && ATisEmpty(trm540))))
goto fail174 ;
}
}
else
goto fail174 ;
k_39 = t;
t = i_39;
{
ATerm trm541 = t;
t = asfix_is_sort_0_0(sl, t);
if((t == NULL))
goto label202 ;
goto label201 ;
label202 :
t = trm541;
{
struct str_closure x_205 = { &(asfix_is_sort_0_0) , sl };
StrCL lifted106_cl = &(x_205);
t = cf_1_0(sl, lifted106_cl, t);
if((t == NULL))
goto fail174 ;
else
goto label201 ;
}
label201 :
;
t = j_39;
{
ATerm trm542 = t;
struct str_closure z_205 = { &(lifted107) , &(frame) };
StrCL lifted107_cl = &(z_205);
t = oncetd_1_0(sl, lifted107_cl, t);
if((t == NULL))
goto label204 ;
goto fail174 ;
label204 :
t = trm542;
goto label203 ;
label203 :
;
t = k_39;
t = h_39;
goto label194 ;
}
}
}
}
label194 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail174 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted107 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted107";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_205 = { &(_Id) , sl_up(sl) };
StrCL lifted108_cl = &(y_205);
t = cons_1_0(sl_up(sl), lifted108_cl, t);
if((t == NULL))
goto fail176 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail176 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_192 = NULL,p_192 = NULL,q_192 = NULL;
ATerm trm535;
trm535 = (ATerm) ATgetAnnotations(t);
if((trm535 == NULL))
trm535 = (ATerm) ATempty;
if(match_cons(t, sym_cons_1))
{
p_192 = ATgetArgument(t, 0);
}
else
goto fail175 ;
o_192 = trm535;
t = p_192;
q_192 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cons_1, q_192), o_192);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail175 :
--__tracing_table_counter;
return(NULL);
}
ATerm ImplodeLayout_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ImplodeLayout_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm501 = t;
ATerm g_39 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm502 = ATgetArgument(t, 0);
if(match_cons(trm502, sym_prod_3))
{
ATerm trm503 = ATgetArgument(trm502, 0);
ATerm trm504 = ATgetArgument(trm502, 1);
if(match_cons(trm504, sym_cf_1))
{
ATerm trm505 = ATgetArgument(trm504, 0);
if(!(match_cons(trm505, sym_layout_0)))
goto label192 ;
}
else
goto label192 ;
{
ATerm trm506 = ATgetArgument(trm502, 2);
}
}
else
goto label192 ;
g_39 = ATgetArgument(t, 1);
}
else
goto label192 ;
t = g_39;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label192 ;
goto label191 ;
label192 :
t = trm501;
{
ATerm trm507 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm508 = ATgetArgument(t, 0);
if(match_cons(trm508, sym_prod_3))
{
ATerm trm509 = ATgetArgument(trm508, 0);
ATerm trm510 = ATgetArgument(trm508, 1);
if(match_cons(trm510, sym_cf_1))
{
ATerm trm511 = ATgetArgument(trm510, 0);
if(match_cons(trm511, sym_opt_1))
{
ATerm trm512 = ATgetArgument(trm511, 0);
if(!(match_cons(trm512, sym_layout_0)))
goto label193 ;
}
else
goto label193 ;
}
else
goto label193 ;
{
ATerm trm513 = ATgetArgument(trm508, 2);
}
}
else
goto label193 ;
{
ATerm trm514 = ATgetArgument(t, 1);
if(!(((ATgetType(trm514) == AT_LIST) && ATisEmpty(trm514))))
goto label193 ;
}
}
else
goto label193 ;
t = term91;
goto label191 ;
label193 :
t = trm507;
{
ATerm f_39 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm515 = ATgetArgument(t, 0);
if(match_cons(trm515, sym_prod_3))
{
ATerm trm516 = ATgetArgument(trm515, 0);
ATerm trm517 = ATgetArgument(trm515, 1);
if(match_cons(trm517, sym_cf_1))
{
ATerm trm518 = ATgetArgument(trm517, 0);
if(match_cons(trm518, sym_opt_1))
{
ATerm trm519 = ATgetArgument(trm518, 0);
if(!(match_cons(trm519, sym_layout_0)))
goto fail173 ;
}
else
goto fail173 ;
}
else
goto fail173 ;
{
ATerm trm520 = ATgetArgument(trm515, 2);
}
}
else
goto fail173 ;
{
ATerm trm521 = ATgetArgument(t, 1);
if(((ATgetType(trm521) == AT_LIST) && !(ATisEmpty(trm521))))
{
f_39 = ATgetFirst((ATermList) trm521);
{
ATerm trm522 = (ATerm) ATgetNext((ATermList) trm521);
if(!(((ATgetType(trm522) == AT_LIST) && ATisEmpty(trm522))))
goto fail173 ;
}
}
else
goto fail173 ;
}
}
else
goto fail173 ;
t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, f_39));
goto label191 ;
}
}
label191 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail173 :
--__tracing_table_counter;
return(NULL);
}
ATerm rm_layout_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rm_layout_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure v_205 = { &(e_39) , &(frame) };
StrCL e_39_cl = &(v_205);
sl_init_fun(0, e_39_cl);
t = e_39(&(frame), t);
if((t == NULL))
goto fail168 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail168 :
--__tracing_table_counter;
return(NULL);
}
static ATerm e_39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "e_39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_205 = { &(lifted101) , &(frame) };
StrCL lifted101_cl = &(u_205);
t = try_1_0(sl_up(sl), lifted101_cl, t);
if((t == NULL))
goto fail169 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail169 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted101 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted101";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm488 = t;
struct str_closure s_205 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted102_cl = &(s_205);
struct str_closure t_205 = { &(lifted103) , &(frame) };
StrCL lifted103_cl = &(t_205);
t = appl_2_0(sl_up(sl_up(sl)), lifted102_cl, lifted103_cl, t);
if((t == NULL))
goto label186 ;
goto label185 ;
label186 :
t = trm488;
{
ATerm f_192 = NULL,g_192 = NULL,h_192 = NULL;
ATerm trm500;
trm500 = (ATerm) ATgetAnnotations(t);
if((trm500 == NULL))
trm500 = (ATerm) ATempty;
if(match_cons(t, sym_amb_1))
{
g_192 = ATgetArgument(t, 0);
}
else
goto fail170 ;
f_192 = trm500;
t = g_192;
t = map_1_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail170 ;
h_192 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_amb_1, h_192), f_192);
goto label185 ;
}
label185 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail170 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted103 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted103";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_205 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(r_205);
t = filter_1_0(sl_up(sl_up(sl_up(sl))), lifted104_cl, t);
if((t == NULL))
goto fail171 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail171 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm489 = t;
ATerm trm490 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm491 = ATgetArgument(t, 0);
if(match_cons(trm491, sym_prod_3))
{
ATerm trm492 = ATgetArgument(trm491, 0);
ATerm trm493 = ATgetArgument(trm491, 1);
if(match_cons(trm493, sym_cf_1))
{
ATerm trm494 = ATgetArgument(trm493, 0);
if(match_cons(trm494, sym_opt_1))
{
ATerm trm495 = ATgetArgument(trm494, 0);
if(!(match_cons(trm495, sym_layout_0)))
goto label190 ;
}
else
goto label190 ;
}
else
goto label190 ;
{
ATerm trm496 = ATgetArgument(trm491, 2);
}
}
else
goto label190 ;
{
ATerm trm497 = ATgetArgument(t, 1);
}
}
else
goto label190 ;
goto label189 ;
label190 :
t = trm490;
{
ATerm x_191 = NULL,y_191 = NULL,z_191 = NULL,b_192 = NULL,c_192 = NULL,d_192 = NULL;
ATerm trm498;
trm498 = (ATerm) ATgetAnnotations(t);
if((trm498 == NULL))
trm498 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
y_191 = ATgetArgument(t, 0);
}
else
goto label188 ;
x_191 = trm498;
t = y_191;
{
ATerm trm499;
trm499 = (ATerm) ATgetAnnotations(t);
if((trm499 == NULL))
trm499 = (ATerm) ATempty;
if(match_cons(t, sym_opt_1))
{
c_192 = ATgetArgument(t, 0);
}
else
goto label188 ;
b_192 = trm499;
t = c_192;
if(!(match_cons(t, sym_layout_0)))
goto label188 ;
d_192 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_opt_1, d_192), b_192);
z_191 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, z_191), x_191);
goto label189 ;
}
}
label189 :
;
goto fail172 ;
label188 :
t = trm489;
goto label187 ;
label187 :
;
t = e_39(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail172 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail172 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_layout_p__0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_layout_p__0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm483 = t;
struct str_closure n_205 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(n_205);
struct str_closure o_205 = { &(_Id) , sl };
StrCL lifted98_cl = &(o_205);
t = appl_2_0(sl, lifted94_cl, lifted98_cl, t);
if((t == NULL))
goto label183 ;
goto label182 ;
label183 :
t = trm483;
{
ATerm trm486 = t;
struct str_closure q_205 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(q_205);
t = cf_1_0(sl, lifted99_cl, t);
if((t == NULL))
goto label184 ;
goto label182 ;
label184 :
t = trm486;
{
ATerm t_191 = NULL,u_191 = NULL,v_191 = NULL;
ATerm trm487;
trm487 = (ATerm) ATgetAnnotations(t);
if((trm487 == NULL))
trm487 = (ATerm) ATempty;
if(match_cons(t, sym_layout_1))
{
u_191 = ATgetArgument(t, 0);
}
else
goto fail164 ;
t_191 = trm487;
t = u_191;
v_191 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_layout_1, v_191), t_191);
goto label182 ;
}
}
label182 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail164 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_205 = { &(layout_0_0) , sl_up(sl) };
StrCL lifted100_cl = &(p_205);
t = opt_1_0(sl_up(sl), lifted100_cl, t);
if((t == NULL))
goto fail167 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail167 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_205 = { &(_Id) , sl_up(sl) };
StrCL lifted95_cl = &(k_205);
struct str_closure l_205 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(l_205);
struct str_closure m_205 = { &(_Id) , sl_up(sl) };
StrCL lifted97_cl = &(m_205);
t = prod_3_0(sl_up(sl), lifted95_cl, lifted96_cl, lifted97_cl, t);
if((t == NULL))
goto fail165 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail165 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_191 = NULL,j_191 = NULL,k_191 = NULL,p_191 = NULL,q_191 = NULL,r_191 = NULL;
ATerm trm484;
trm484 = (ATerm) ATgetAnnotations(t);
if((trm484 == NULL))
trm484 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
j_191 = ATgetArgument(t, 0);
}
else
goto fail166 ;
i_191 = trm484;
t = j_191;
{
ATerm trm485;
trm485 = (ATerm) ATgetAnnotations(t);
if((trm485 == NULL))
trm485 = (ATerm) ATempty;
if(match_cons(t, sym_opt_1))
{
q_191 = ATgetArgument(t, 0);
}
else
goto fail166 ;
p_191 = trm485;
t = q_191;
if(!(match_cons(t, sym_layout_0)))
goto fail166 ;
r_191 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_opt_1, r_191), p_191);
k_191 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, k_191), i_191);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail166 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_layout_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_layout_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm473 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm474 = ATgetArgument(t, 0);
if(match_cons(trm474, sym_prod_3))
{
ATerm trm475 = ATgetArgument(trm474, 0);
ATerm trm476 = ATgetArgument(trm474, 1);
if(match_cons(trm476, sym_cf_1))
{
ATerm trm477 = ATgetArgument(trm476, 0);
if(match_cons(trm477, sym_opt_1))
{
ATerm trm478 = ATgetArgument(trm477, 0);
if(!(match_cons(trm478, sym_layout_0)))
goto label181 ;
}
else
goto label181 ;
}
else
goto label181 ;
{
ATerm trm479 = ATgetArgument(trm474, 2);
}
}
else
goto label181 ;
{
ATerm trm480 = ATgetArgument(t, 1);
}
}
else
goto label181 ;
goto label180 ;
label181 :
t = trm473;
{
ATerm y_190 = NULL,z_190 = NULL,c_191 = NULL,e_191 = NULL,f_191 = NULL,g_191 = NULL;
ATerm trm481;
trm481 = (ATerm) ATgetAnnotations(t);
if((trm481 == NULL))
trm481 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
z_190 = ATgetArgument(t, 0);
}
else
goto fail163 ;
y_190 = trm481;
t = z_190;
{
ATerm trm482;
trm482 = (ATerm) ATgetAnnotations(t);
if((trm482 == NULL))
trm482 = (ATerm) ATempty;
if(match_cons(t, sym_opt_1))
{
f_191 = ATgetArgument(t, 0);
}
else
goto fail163 ;
e_191 = trm482;
t = f_191;
if(!(match_cons(t, sym_layout_0)))
goto fail163 ;
g_191 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_opt_1, g_191), e_191);
c_191 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, c_191), y_190);
goto label180 ;
}
}
label180 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail163 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_ignorable_syntax_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_ignorable_syntax_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm445 = t;
ATerm trm446 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm447 = ATgetArgument(t, 0);
if(match_cons(trm447, sym_prod_3))
{
ATerm trm448 = ATgetArgument(trm447, 0);
ATerm trm449 = ATgetArgument(trm447, 1);
if(match_cons(trm449, sym_cf_1))
{
ATerm trm450 = ATgetArgument(trm449, 0);
if(match_cons(trm450, sym_opt_1))
{
ATerm trm451 = ATgetArgument(trm450, 0);
if(!(match_cons(trm451, sym_layout_0)))
goto label176 ;
}
else
goto label176 ;
}
else
goto label176 ;
{
ATerm trm452 = ATgetArgument(trm447, 2);
}
}
else
goto label176 ;
{
ATerm trm453 = ATgetArgument(t, 1);
}
}
else
goto label176 ;
goto label175 ;
label176 :
t = trm446;
{
ATerm q_190 = NULL,r_190 = NULL,s_190 = NULL,u_190 = NULL,v_190 = NULL,w_190 = NULL;
ATerm trm454;
trm454 = (ATerm) ATgetAnnotations(t);
if((trm454 == NULL))
trm454 = (ATerm) ATempty;
if(match_cons(t, sym_cf_1))
{
r_190 = ATgetArgument(t, 0);
}
else
goto label174 ;
q_190 = trm454;
t = r_190;
{
ATerm trm455;
trm455 = (ATerm) ATgetAnnotations(t);
if((trm455 == NULL))
trm455 = (ATerm) ATempty;
if(match_cons(t, sym_opt_1))
{
v_190 = ATgetArgument(t, 0);
}
else
goto label174 ;
u_190 = trm455;
t = v_190;
if(!(match_cons(t, sym_layout_0)))
goto label174 ;
w_190 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_opt_1, w_190), u_190);
s_190 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_cf_1, s_190), q_190);
goto label175 ;
}
}
label175 :
;
goto label173 ;
label174 :
t = trm445;
{
ATerm trm456 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm457 = ATgetArgument(t, 0);
if(match_cons(trm457, sym_prod_3))
{
ATerm trm458 = ATgetArgument(trm457, 0);
ATerm trm459 = ATgetArgument(trm457, 1);
if(match_cons(trm459, sym_lit_1))
{
ATerm trm460 = ATgetArgument(trm459, 0);
}
else
goto label177 ;
{
ATerm trm461 = ATgetArgument(trm457, 2);
}
}
else
goto label177 ;
{
ATerm trm462 = ATgetArgument(t, 1);
}
}
else
goto label177 ;
goto label173 ;
label177 :
t = trm456;
{
ATerm trm463 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm464 = ATgetArgument(t, 0);
if(match_cons(trm464, sym_prod_3))
{
ATerm trm465 = ATgetArgument(trm464, 0);
ATerm trm466 = ATgetArgument(trm464, 1);
if(match_cons(trm466, sym_cilit_1))
{
ATerm trm467 = ATgetArgument(trm466, 0);
}
else
goto label178 ;
{
ATerm trm468 = ATgetArgument(trm464, 2);
}
}
else
goto label178 ;
{
ATerm trm469 = ATgetArgument(t, 1);
}
}
else
goto label178 ;
goto label173 ;
label178 :
t = trm463;
{
ATerm trm470 = t;
if(match_cons(t, sym_lit_1))
{
ATerm trm471 = ATgetArgument(t, 0);
}
else
goto label179 ;
goto label173 ;
label179 :
t = trm470;
if(match_cons(t, sym_cilit_1))
{
ATerm trm472 = ATgetArgument(t, 0);
goto label173 ;
}
else
goto fail162 ;
}
}
}
label173 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail162 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_yield_acc_1_1 (StrSL sl, StrCL w_71, ATerm y_71, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_yield_acc_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm440 = t;
ATerm a_39 = NULL,b_39 = NULL,d_39 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm441 = ATgetArgument(t, 0);
a_39 = ATgetArgument(t, 1);
}
else
goto label170 ;
d_39 = t;
t = a_39;
t = cl_fun(w_71)(cl_sl(w_71), y_71, t);
if((t == NULL))
goto label170 ;
b_39 = t;
t = d_39;
t = b_39;
goto label169 ;
label170 :
t = trm440;
{
ATerm trm442 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label171 ;
t = y_71;
goto label169 ;
label171 :
t = trm442;
{
ATerm trm443 = t;
ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,w_38 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
t_38 = ATgetFirst((ATermList) t);
r_38 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label172 ;
w_38 = t;
t = r_38;
t = cl_fun(w_71)(cl_sl(w_71), y_71, t);
if((t == NULL))
goto label172 ;
s_38 = t;
t = t_38;
t = cl_fun(w_71)(cl_sl(w_71), s_38, t);
if((t == NULL))
goto label172 ;
u_38 = t;
t = w_38;
t = u_38;
goto label169 ;
label172 :
t = trm443;
{
ATerm n_38 = NULL,p_38 = NULL;
n_38 = t;
p_38 = t;
t = is_int_0_0(sl, t);
if((t == NULL))
goto fail161 ;
t = p_38;
{
ATerm trm444;
trm444 = CheckATermList(y_71);
if((trm444 == NULL))
goto fail161 ;
t = (ATerm) ATinsert((ATermList)trm444, n_38);
goto label169 ;
}
}
}
}
label169 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail161 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_yield_appl_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_yield_appl_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_38 = NULL,g_38 = NULL;
ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
ATerm trm438;
trm438 = (ATerm) ATgetAnnotations(t);
if((trm438 == NULL))
trm438 = (ATerm) ATempty;
if(match_cons(t, sym_appl_2))
{
ATerm trm439 = ATgetArgument(t, 0);
j_38 = ATgetArgument(t, 1);
}
else
goto fail159 ;
g_38 = trm438;
t = j_38;
l_38 = t;
t = (ATerm) ATempty;
k_38 = t;
t = l_38;
t = i_38(&(frame), k_38, t);
if((t == NULL))
goto fail159 ;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail159 ;
f_38 = t;
t = (ATerm) SRTS_setAnnotations(f_38, g_38);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail159 :
--__tracing_table_counter;
return(NULL);
}
static ATerm i_38 (StrSL sl, ATerm h_38, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "i_38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_205 = { &(i_38) , sl };
StrCL lifted93_cl = &(j_205);
t = asfix_yield_acc_1_1(sl_up(sl), lifted93_cl, h_38, t);
if((t == NULL))
goto fail160 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail160 :
--__tracing_table_counter;
return(NULL);
}
ATerm ImplodeLexicalVar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ImplodeLexicalVar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_38 = NULL,e_38 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm432 = ATgetArgument(t, 0);
if(match_cons(trm432, sym_prod_3))
{
ATerm trm433 = ATgetArgument(trm432, 0);
ATerm trm434 = ATgetArgument(trm432, 1);
if(match_cons(trm434, sym_varsym_1))
{
ATerm trm435 = ATgetArgument(trm434, 0);
}
else
goto fail158 ;
{
ATerm trm436 = ATgetArgument(trm432, 2);
}
}
else
goto fail158 ;
{
ATerm trm437 = ATgetArgument(t, 1);
}
}
else
goto fail158 ;
e_38 = t;
t = asfix_yield_appl_0_0(sl, t);
if((t == NULL))
goto fail158 ;
d_38 = t;
t = e_38;
t = (ATerm) ATmakeAppl(sym_meta_var_1, d_38);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail158 :
--__tracing_table_counter;
return(NULL);
}
ATerm ImplodeLexicalListVar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ImplodeLexicalListVar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm395 = t;
ATerm b_38 = NULL,c_38 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm396 = ATgetArgument(t, 0);
if(match_cons(trm396, sym_prod_3))
{
ATerm trm397 = ATgetArgument(trm396, 0);
ATerm trm398 = ATgetArgument(trm396, 1);
if(match_cons(trm398, sym_varsym_1))
{
ATerm trm399 = ATgetArgument(trm398, 0);
if(match_cons(trm399, sym_cf_1))
{
ATerm trm400 = ATgetArgument(trm399, 0);
if(match_cons(trm400, sym_iter_star_1))
{
ATerm trm401 = ATgetArgument(trm400, 0);
}
else
goto label166 ;
}
else
goto label166 ;
}
else
goto label166 ;
{
ATerm trm402 = ATgetArgument(trm396, 2);
}
}
else
goto label166 ;
{
ATerm trm403 = ATgetArgument(t, 1);
}
}
else
goto label166 ;
c_38 = t;
t = asfix_yield_appl_0_0(sl, t);
if((t == NULL))
goto label166 ;
b_38 = t;
t = c_38;
t = (ATerm) ATmakeAppl(sym_meta_listvar_1, b_38);
goto label165 ;
label166 :
t = trm395;
{
ATerm trm404 = t;
ATerm z_37 = NULL,a_38 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm405 = ATgetArgument(t, 0);
if(match_cons(trm405, sym_prod_3))
{
ATerm trm406 = ATgetArgument(trm405, 0);
ATerm trm407 = ATgetArgument(trm405, 1);
if(match_cons(trm407, sym_varsym_1))
{
ATerm trm408 = ATgetArgument(trm407, 0);
if(match_cons(trm408, sym_cf_1))
{
ATerm trm409 = ATgetArgument(trm408, 0);
if(match_cons(trm409, sym_iter_star_sep_2))
{
ATerm trm410 = ATgetArgument(trm409, 0);
ATerm trm411 = ATgetArgument(trm409, 1);
}
else
goto label167 ;
}
else
goto label167 ;
}
else
goto label167 ;
{
ATerm trm412 = ATgetArgument(trm405, 2);
}
}
else
goto label167 ;
{
ATerm trm413 = ATgetArgument(t, 1);
}
}
else
goto label167 ;
a_38 = t;
t = asfix_yield_appl_0_0(sl, t);
if((t == NULL))
goto label167 ;
z_37 = t;
t = a_38;
t = (ATerm) ATmakeAppl(sym_meta_listvar_1, z_37);
goto label165 ;
label167 :
t = trm404;
{
ATerm trm414 = t;
ATerm x_37 = NULL,y_37 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm415 = ATgetArgument(t, 0);
if(match_cons(trm415, sym_prod_3))
{
ATerm trm416 = ATgetArgument(trm415, 0);
ATerm trm417 = ATgetArgument(trm415, 1);
if(match_cons(trm417, sym_varsym_1))
{
ATerm trm418 = ATgetArgument(trm417, 0);
if(match_cons(trm418, sym_cf_1))
{
ATerm trm419 = ATgetArgument(trm418, 0);
if(match_cons(trm419, sym_iter_1))
{
ATerm trm420 = ATgetArgument(trm419, 0);
}
else
goto label168 ;
}
else
goto label168 ;
}
else
goto label168 ;
{
ATerm trm421 = ATgetArgument(trm415, 2);
}
}
else
goto label168 ;
{
ATerm trm422 = ATgetArgument(t, 1);
}
}
else
goto label168 ;
y_37 = t;
t = asfix_yield_appl_0_0(sl, t);
if((t == NULL))
goto label168 ;
x_37 = t;
t = y_37;
t = (ATerm) ATmakeAppl(sym_meta_listvar_1, x_37);
goto label165 ;
label168 :
t = trm414;
{
ATerm v_37 = NULL,w_37 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm423 = ATgetArgument(t, 0);
if(match_cons(trm423, sym_prod_3))
{
ATerm trm424 = ATgetArgument(trm423, 0);
ATerm trm425 = ATgetArgument(trm423, 1);
if(match_cons(trm425, sym_varsym_1))
{
ATerm trm426 = ATgetArgument(trm425, 0);
if(match_cons(trm426, sym_cf_1))
{
ATerm trm427 = ATgetArgument(trm426, 0);
if(match_cons(trm427, sym_iter_sep_2))
{
ATerm trm428 = ATgetArgument(trm427, 0);
ATerm trm429 = ATgetArgument(trm427, 1);
}
else
goto fail157 ;
}
else
goto fail157 ;
}
else
goto fail157 ;
{
ATerm trm430 = ATgetArgument(trm423, 2);
}
}
else
goto fail157 ;
{
ATerm trm431 = ATgetArgument(t, 1);
}
}
else
goto fail157 ;
w_37 = t;
t = asfix_yield_appl_0_0(sl, t);
if((t == NULL))
goto fail157 ;
v_37 = t;
t = w_37;
t = (ATerm) ATmakeAppl(sym_meta_listvar_1, v_37);
goto label165 ;
}
}
}
label165 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail157 :
--__tracing_table_counter;
return(NULL);
}
ATerm ImplodeLexical_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ImplodeLexical_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm363 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm364 = ATgetArgument(t, 0);
if(match_cons(trm364, sym_prod_3))
{
ATerm trm365 = ATgetArgument(trm364, 0);
if(((ATgetType(trm365) == AT_LIST) && !(ATisEmpty(trm365))))
{
ATerm trm366 = ATgetFirst((ATermList) trm365);
if(match_cons(trm366, sym_lex_1))
{
ATerm trm367 = ATgetArgument(trm366, 0);
}
else
goto label160 ;
{
ATerm trm368 = (ATerm) ATgetNext((ATermList) trm365);
if(!(((ATgetType(trm368) == AT_LIST) && ATisEmpty(trm368))))
goto label160 ;
}
}
else
goto label160 ;
{
ATerm trm369 = ATgetArgument(trm364, 1);
if(match_cons(trm369, sym_cf_1))
{
ATerm trm370 = ATgetArgument(trm369, 0);
}
else
goto label160 ;
}
{
ATerm trm371 = ATgetArgument(trm364, 2);
}
}
else
goto label160 ;
{
ATerm trm372 = ATgetArgument(t, 1);
}
}
else
goto label160 ;
t = asfix_yield_appl_0_0(sl, t);
if((t == NULL))
goto label160 ;
goto label159 ;
label160 :
t = trm363;
{
ATerm trm373 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm374 = ATgetArgument(t, 0);
if(match_cons(trm374, sym_prod_3))
{
ATerm trm375 = ATgetArgument(trm374, 0);
ATerm trm376 = ATgetArgument(trm374, 1);
if(match_cons(trm376, sym_lex_1))
{
ATerm trm377 = ATgetArgument(trm376, 0);
}
else
goto label161 ;
{
ATerm trm378 = ATgetArgument(trm374, 2);
}
}
else
goto label161 ;
{
ATerm trm379 = ATgetArgument(t, 1);
}
}
else
goto label161 ;
t = asfix_yield_appl_0_0(sl, t);
if((t == NULL))
goto label161 ;
goto label159 ;
label161 :
t = trm373;
{
ATerm trm380 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm381 = ATgetArgument(t, 0);
if(match_cons(trm381, sym_prod_3))
{
ATerm trm382 = ATgetArgument(trm381, 0);
ATerm trm383 = ATgetArgument(trm381, 1);
if(match_cons(trm383, sym_lit_1))
{
ATerm trm384 = ATgetArgument(trm383, 0);
}
else
goto label162 ;
{
ATerm trm385 = ATgetArgument(trm381, 2);
}
}
else
goto label162 ;
{
ATerm trm386 = ATgetArgument(t, 1);
}
}
else
goto label162 ;
t = asfix_yield_appl_0_0(sl, t);
if((t == NULL))
goto label162 ;
goto label159 ;
label162 :
t = trm380;
{
ATerm trm387 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm388 = ATgetArgument(t, 0);
if(match_cons(trm388, sym_prod_3))
{
ATerm trm389 = ATgetArgument(trm388, 0);
ATerm trm390 = ATgetArgument(trm388, 1);
if(match_cons(trm390, sym_cilit_1))
{
ATerm trm391 = ATgetArgument(trm390, 0);
}
else
goto label163 ;
{
ATerm trm392 = ATgetArgument(trm388, 2);
}
}
else
goto label163 ;
{
ATerm trm393 = ATgetArgument(t, 1);
}
}
else
goto label163 ;
t = asfix_yield_appl_0_0(sl, t);
if((t == NULL))
goto label163 ;
goto label159 ;
label163 :
t = trm387;
{
ATerm trm394 = t;
t = ImplodeLexicalListVar_0_0(sl, t);
if((t == NULL))
goto label164 ;
goto label159 ;
label164 :
t = trm394;
t = ImplodeLexicalVar_0_0(sl, t);
if((t == NULL))
goto fail156 ;
else
goto label159 ;
}
}
}
}
label159 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail156 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_asfix_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_asfix_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = u_37(&(frame), t);
if((t == NULL))
goto fail153 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail153 :
--__tracing_table_counter;
return(NULL);
}
static ATerm u_37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "u_37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm353 = t;
ATerm trm354 = t;
ATerm a_190 = NULL,b_190 = NULL,c_190 = NULL;
ATerm trm355;
trm355 = (ATerm) ATgetAnnotations(t);
if((trm355 == NULL))
trm355 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
b_190 = ATgetArgument(t, 0);
}
else
goto label153 ;
a_190 = trm355;
t = b_190;
c_190 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, c_190), a_190);
goto label152 ;
label153 :
t = trm354;
{
ATerm trm356 = t;
struct str_closure e_205 = { &(_Id) , sl_up(sl) };
StrCL lifted88_cl = &(e_205);
struct str_closure f_205 = { &(_Id) , sl_up(sl) };
StrCL lifted89_cl = &(f_205);
t = iter_sep_2_0(sl_up(sl), lifted88_cl, lifted89_cl, t);
if((t == NULL))
goto label154 ;
goto label152 ;
label154 :
t = trm356;
{
ATerm trm357 = t;
ATerm e_190 = NULL,f_190 = NULL,g_190 = NULL;
ATerm trm358;
trm358 = (ATerm) ATgetAnnotations(t);
if((trm358 == NULL))
trm358 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
f_190 = ATgetArgument(t, 0);
}
else
goto label155 ;
e_190 = trm358;
t = f_190;
g_190 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, g_190), e_190);
goto label152 ;
label155 :
t = trm357;
{
struct str_closure g_205 = { &(_Id) , sl_up(sl) };
StrCL lifted90_cl = &(g_205);
struct str_closure h_205 = { &(_Id) , sl_up(sl) };
StrCL lifted91_cl = &(h_205);
t = iter_star_sep_2_0(sl_up(sl), lifted90_cl, lifted91_cl, t);
if((t == NULL))
goto label151 ;
else
goto label152 ;
}
}
}
label152 :
;
goto label150 ;
label151 :
t = trm353;
{
ATerm i_190 = NULL,j_190 = NULL,k_190 = NULL;
ATerm trm359;
trm359 = (ATerm) ATgetAnnotations(t);
if((trm359 == NULL))
trm359 = (ATerm) ATempty;
if(match_cons(t, sym_seq_1))
{
j_190 = ATgetArgument(t, 0);
}
else
goto fail154 ;
i_190 = trm359;
t = j_190;
{
struct str_closure i_205 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(i_205);
t = map_1_0(sl_up(sl), lifted92_cl, t);
if((t == NULL))
goto fail154 ;
k_190 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_seq_1, k_190), i_190);
goto label150 ;
}
}
label150 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail154 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm360 = t;
ATerm m_190 = NULL,n_190 = NULL,o_190 = NULL;
ATerm trm361;
trm361 = (ATerm) ATgetAnnotations(t);
if((trm361 == NULL))
trm361 = (ATerm) ATempty;
if(match_cons(t, sym_lit_1))
{
n_190 = ATgetArgument(t, 0);
}
else
goto label157 ;
m_190 = trm361;
t = n_190;
o_190 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_lit_1, o_190), m_190);
goto label156 ;
label157 :
t = trm360;
{
ATerm trm362 = t;
if(!(match_cons(t, sym_layout_0)))
goto label158 ;
goto label156 ;
label158 :
t = trm362;
t = u_37(sl_up(sl), t);
if((t == NULL))
goto fail155 ;
else
goto label156 ;
}
label156 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail155 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_list_sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_list_sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm348 = t;
ATerm s_189 = NULL,t_189 = NULL,u_189 = NULL;
ATerm trm349;
trm349 = (ATerm) ATgetAnnotations(t);
if((trm349 == NULL))
trm349 = (ATerm) ATempty;
if(match_cons(t, sym_iter_1))
{
t_189 = ATgetArgument(t, 0);
}
else
goto label147 ;
s_189 = trm349;
t = t_189;
u_189 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_1, u_189), s_189);
goto label146 ;
label147 :
t = trm348;
{
ATerm trm350 = t;
struct str_closure z_204 = { &(_Id) , sl };
StrCL lifted84_cl = &(z_204);
struct str_closure a_205 = { &(_Id) , sl };
StrCL lifted85_cl = &(a_205);
t = iter_sep_2_0(sl, lifted84_cl, lifted85_cl, t);
if((t == NULL))
goto label148 ;
goto label146 ;
label148 :
t = trm350;
{
ATerm trm351 = t;
ATerm w_189 = NULL,x_189 = NULL,y_189 = NULL;
ATerm trm352;
trm352 = (ATerm) ATgetAnnotations(t);
if((trm352 == NULL))
trm352 = (ATerm) ATempty;
if(match_cons(t, sym_iter_star_1))
{
x_189 = ATgetArgument(t, 0);
}
else
goto label149 ;
w_189 = trm352;
t = x_189;
y_189 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, y_189), w_189);
goto label146 ;
label149 :
t = trm351;
{
struct str_closure c_205 = { &(_Id) , sl };
StrCL lifted86_cl = &(c_205);
struct str_closure d_205 = { &(_Id) , sl };
StrCL lifted87_cl = &(d_205);
t = iter_star_sep_2_0(sl, lifted86_cl, lifted87_cl, t);
if((t == NULL))
goto fail152 ;
else
goto label146 ;
}
}
}
label146 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail152 :
--__tracing_table_counter;
return(NULL);
}
ATerm ImplodeOptionalList_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ImplodeOptionalList_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm318 = t;
ATerm s_37 = NULL,t_37 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm319 = ATgetArgument(t, 0);
if(match_cons(trm319, sym_prod_3))
{
ATerm trm320 = ATgetArgument(trm319, 0);
if(!(((ATgetType(trm320) == AT_LIST) && ATisEmpty(trm320))))
goto label143 ;
{
ATerm trm321 = ATgetArgument(trm319, 1);
if(match_cons(trm321, sym_cf_1))
{
ATerm trm322 = ATgetArgument(trm321, 0);
if(match_cons(trm322, sym_opt_1))
{
s_37 = ATgetArgument(trm322, 0);
}
else
goto label143 ;
}
else
goto label143 ;
}
{
ATerm trm323 = ATgetArgument(trm319, 2);
}
}
else
goto label143 ;
{
ATerm trm324 = ATgetArgument(t, 1);
if(!(((ATgetType(trm324) == AT_LIST) && ATisEmpty(trm324))))
goto label143 ;
}
}
else
goto label143 ;
t_37 = t;
t = s_37;
t = is_asfix_list_0_0(sl, t);
if((t == NULL))
goto label143 ;
t = t_37;
t = (ATerm) ATempty;
goto label142 ;
label143 :
t = trm318;
{
ATerm trm325 = t;
ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm326 = ATgetArgument(t, 0);
if(match_cons(trm326, sym_prod_3))
{
ATerm trm327 = ATgetArgument(trm326, 0);
if(((ATgetType(trm327) == AT_LIST) && !(ATisEmpty(trm327))))
{
ATerm trm328 = ATgetFirst((ATermList) trm327);
if(match_cons(trm328, sym_cf_1))
{
q_37 = ATgetArgument(trm328, 0);
}
else
goto label144 ;
{
ATerm trm329 = (ATerm) ATgetNext((ATermList) trm327);
if(!(((ATgetType(trm329) == AT_LIST) && ATisEmpty(trm329))))
goto label144 ;
}
}
else
goto label144 ;
{
ATerm trm330 = ATgetArgument(trm326, 1);
if(match_cons(trm330, sym_cf_1))
{
ATerm trm331 = ATgetArgument(trm330, 0);
if(match_cons(trm331, sym_opt_1))
{
if(!((q_37 == ATgetArgument(trm331, 0))))
goto label144 ;
}
else
goto label144 ;
}
else
goto label144 ;
}
{
ATerm trm332 = ATgetArgument(trm326, 2);
}
}
else
goto label144 ;
{
ATerm trm333 = ATgetArgument(t, 1);
if(((ATgetType(trm333) == AT_LIST) && !(ATisEmpty(trm333))))
{
p_37 = ATgetFirst((ATermList) trm333);
{
ATerm trm334 = (ATerm) ATgetNext((ATermList) trm333);
if(!(((ATgetType(trm334) == AT_LIST) && ATisEmpty(trm334))))
goto label144 ;
}
}
else
goto label144 ;
}
}
else
goto label144 ;
r_37 = t;
t = q_37;
t = is_asfix_list_0_0(sl, t);
if((t == NULL))
goto label144 ;
t = r_37;
t = p_37;
goto label142 ;
label144 :
t = trm325;
{
ATerm trm335 = t;
ATerm n_37 = NULL,o_37 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm336 = ATgetArgument(t, 0);
if(match_cons(trm336, sym_prod_3))
{
ATerm trm337 = ATgetArgument(trm336, 0);
if(!(((ATgetType(trm337) == AT_LIST) && ATisEmpty(trm337))))
goto label145 ;
{
ATerm trm338 = ATgetArgument(trm336, 1);
if(match_cons(trm338, sym_opt_1))
{
n_37 = ATgetArgument(trm338, 0);
}
else
goto label145 ;
}
{
ATerm trm339 = ATgetArgument(trm336, 2);
}
}
else
goto label145 ;
{
ATerm trm340 = ATgetArgument(t, 1);
if(!(((ATgetType(trm340) == AT_LIST) && ATisEmpty(trm340))))
goto label145 ;
}
}
else
goto label145 ;
o_37 = t;
t = n_37;
t = is_asfix_list_0_0(sl, t);
if((t == NULL))
goto label145 ;
t = o_37;
t = (ATerm) ATempty;
goto label142 ;
label145 :
t = trm335;
{
ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm341 = ATgetArgument(t, 0);
if(match_cons(trm341, sym_prod_3))
{
ATerm trm342 = ATgetArgument(trm341, 0);
if(((ATgetType(trm342) == AT_LIST) && !(ATisEmpty(trm342))))
{
l_37 = ATgetFirst((ATermList) trm342);
{
ATerm trm343 = (ATerm) ATgetNext((ATermList) trm342);
if(!(((ATgetType(trm343) == AT_LIST) && ATisEmpty(trm343))))
goto fail151 ;
}
}
else
goto fail151 ;
{
ATerm trm344 = ATgetArgument(trm341, 1);
if(match_cons(trm344, sym_opt_1))
{
if(!((l_37 == ATgetArgument(trm344, 0))))
goto fail151 ;
}
else
goto fail151 ;
}
{
ATerm trm345 = ATgetArgument(trm341, 2);
}
}
else
goto fail151 ;
{
ATerm trm346 = ATgetArgument(t, 1);
if(((ATgetType(trm346) == AT_LIST) && !(ATisEmpty(trm346))))
{
k_37 = ATgetFirst((ATermList) trm346);
{
ATerm trm347 = (ATerm) ATgetNext((ATermList) trm346);
if(!(((ATgetType(trm347) == AT_LIST) && ATisEmpty(trm347))))
goto fail151 ;
}
}
else
goto fail151 ;
}
}
else
goto fail151 ;
m_37 = t;
t = l_37;
t = is_asfix_list_0_0(sl, t);
if((t == NULL))
goto fail151 ;
t = m_37;
t = k_37;
goto label142 ;
}
}
}
label142 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail151 :
--__tracing_table_counter;
return(NULL);
}
ATerm FlatList_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "FlatList_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm174 = t;
ATerm j_37 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm175 = ATgetArgument(t, 0);
if(match_cons(trm175, sym_prod_3))
{
ATerm trm176 = ATgetArgument(trm175, 0);
if(((ATgetType(trm176) == AT_LIST) && !(ATisEmpty(trm176))))
{
ATerm trm177 = ATgetFirst((ATermList) trm176);
if(match_cons(trm177, sym_cf_1))
{
ATerm trm178 = ATgetArgument(trm177, 0);
if(match_cons(trm178, sym_iter_1))
{
ATerm trm179 = ATgetArgument(trm178, 0);
}
else
goto label129 ;
}
else
goto label129 ;
{
ATerm trm180 = (ATerm) ATgetNext((ATermList) trm176);
if(!(((ATgetType(trm180) == AT_LIST) && ATisEmpty(trm180))))
goto label129 ;
}
}
else
goto label129 ;
{
ATerm trm181 = ATgetArgument(trm175, 1);
if(match_cons(trm181, sym_cf_1))
{
ATerm trm182 = ATgetArgument(trm181, 0);
if(match_cons(trm182, sym_iter_star_1))
{
ATerm trm183 = ATgetArgument(trm182, 0);
}
else
goto label129 ;
}
else
goto label129 ;
}
{
ATerm trm184 = ATgetArgument(trm175, 2);
}
}
else
goto label129 ;
{
ATerm trm185 = ATgetArgument(t, 1);
if(((ATgetType(trm185) == AT_LIST) && !(ATisEmpty(trm185))))
{
j_37 = ATgetFirst((ATermList) trm185);
{
ATerm trm186 = (ATerm) ATgetNext((ATermList) trm185);
if(!(((ATgetType(trm186) == AT_LIST) && ATisEmpty(trm186))))
goto label129 ;
}
}
else
goto label129 ;
}
}
else
goto label129 ;
t = j_37;
t = FlatList_0_0(sl, t);
if((t == NULL))
goto label129 ;
goto label128 ;
label129 :
t = trm174;
{
ATerm trm187 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm188 = ATgetArgument(t, 0);
if(match_cons(trm188, sym_prod_3))
{
ATerm trm189 = ATgetArgument(trm188, 0);
if(!(((ATgetType(trm189) == AT_LIST) && ATisEmpty(trm189))))
goto label130 ;
{
ATerm trm190 = ATgetArgument(trm188, 1);
if(match_cons(trm190, sym_cf_1))
{
ATerm trm191 = ATgetArgument(trm190, 0);
if(match_cons(trm191, sym_iter_star_1))
{
ATerm trm192 = ATgetArgument(trm191, 0);
}
else
goto label130 ;
}
else
goto label130 ;
}
{
ATerm trm193 = ATgetArgument(trm188, 2);
}
}
else
goto label130 ;
{
ATerm trm194 = ATgetArgument(t, 1);
if(!(((ATgetType(trm194) == AT_LIST) && ATisEmpty(trm194))))
goto label130 ;
}
}
else
goto label130 ;
t = (ATerm) ATempty;
goto label128 ;
label130 :
t = trm187;
{
ATerm trm195 = t;
ATerm i_37 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm196 = ATgetArgument(t, 0);
if(match_cons(trm196, sym_prod_3))
{
ATerm trm197 = ATgetArgument(trm196, 0);
ATerm trm198 = ATgetArgument(trm196, 1);
if(match_cons(trm198, sym_cf_1))
{
ATerm trm199 = ATgetArgument(trm198, 0);
if(match_cons(trm199, sym_iter_1))
{
ATerm trm200 = ATgetArgument(trm199, 0);
}
else
goto label131 ;
}
else
goto label131 ;
{
ATerm trm201 = ATgetArgument(trm196, 2);
}
}
else
goto label131 ;
{
ATerm trm202 = ATgetArgument(t, 1);
if(((ATgetType(trm202) == AT_LIST) && !(ATisEmpty(trm202))))
{
i_37 = ATgetFirst((ATermList) trm202);
{
ATerm trm203 = (ATerm) ATgetNext((ATermList) trm202);
if(!(((ATgetType(trm203) == AT_LIST) && ATisEmpty(trm203))))
goto label131 ;
}
}
else
goto label131 ;
}
}
else
goto label131 ;
t = (ATerm) ATinsert(ATempty, i_37);
goto label128 ;
label131 :
t = trm195;
{
ATerm trm204 = t;
ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,z_36 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm205 = ATgetArgument(t, 0);
if(match_cons(trm205, sym_prod_3))
{
ATerm trm206 = ATgetArgument(trm205, 0);
ATerm trm207 = ATgetArgument(trm205, 1);
if(match_cons(trm207, sym_cf_1))
{
ATerm trm208 = ATgetArgument(trm207, 0);
if(match_cons(trm208, sym_iter_1))
{
ATerm trm209 = ATgetArgument(trm208, 0);
}
else
goto label132 ;
}
else
goto label132 ;
{
ATerm trm210 = ATgetArgument(trm205, 2);
}
}
else
goto label132 ;
{
ATerm trm211 = ATgetArgument(t, 1);
if(((ATgetType(trm211) == AT_LIST) && !(ATisEmpty(trm211))))
{
p_36 = ATgetFirst((ATermList) trm211);
q_36 = (ATerm) ATgetNext((ATermList) trm211);
}
else
goto label132 ;
}
}
else
goto label132 ;
z_36 = t;
t = y_36(&(frame), t);
if((t == NULL))
goto label132 ;
r_36 = t;
t = z_36;
t = r_36;
goto label128 ;
label132 :
t = trm204;
{
ATerm trm241 = t;
ATerm o_36 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm242 = ATgetArgument(t, 0);
if(match_cons(trm242, sym_prod_3))
{
ATerm trm243 = ATgetArgument(trm242, 0);
if(((ATgetType(trm243) == AT_LIST) && !(ATisEmpty(trm243))))
{
ATerm trm244 = ATgetFirst((ATermList) trm243);
if(match_cons(trm244, sym_cf_1))
{
ATerm trm245 = ATgetArgument(trm244, 0);
if(match_cons(trm245, sym_iter_sep_2))
{
ATerm trm246 = ATgetArgument(trm245, 0);
ATerm trm247 = ATgetArgument(trm245, 1);
}
else
goto label136 ;
}
else
goto label136 ;
{
ATerm trm248 = (ATerm) ATgetNext((ATermList) trm243);
if(!(((ATgetType(trm248) == AT_LIST) && ATisEmpty(trm248))))
goto label136 ;
}
}
else
goto label136 ;
{
ATerm trm249 = ATgetArgument(trm242, 1);
if(match_cons(trm249, sym_cf_1))
{
ATerm trm250 = ATgetArgument(trm249, 0);
if(match_cons(trm250, sym_iter_star_sep_2))
{
ATerm trm251 = ATgetArgument(trm250, 0);
ATerm trm252 = ATgetArgument(trm250, 1);
}
else
goto label136 ;
}
else
goto label136 ;
}
{
ATerm trm253 = ATgetArgument(trm242, 2);
}
}
else
goto label136 ;
{
ATerm trm254 = ATgetArgument(t, 1);
if(((ATgetType(trm254) == AT_LIST) && !(ATisEmpty(trm254))))
{
o_36 = ATgetFirst((ATermList) trm254);
{
ATerm trm255 = (ATerm) ATgetNext((ATermList) trm254);
if(!(((ATgetType(trm255) == AT_LIST) && ATisEmpty(trm255))))
goto label136 ;
}
}
else
goto label136 ;
}
}
else
goto label136 ;
t = o_36;
t = FlatList_0_0(sl, t);
if((t == NULL))
goto label136 ;
goto label128 ;
label136 :
t = trm241;
{
ATerm trm256 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm257 = ATgetArgument(t, 0);
if(match_cons(trm257, sym_prod_3))
{
ATerm trm258 = ATgetArgument(trm257, 0);
if(!(((ATgetType(trm258) == AT_LIST) && ATisEmpty(trm258))))
goto label137 ;
{
ATerm trm259 = ATgetArgument(trm257, 1);
if(match_cons(trm259, sym_cf_1))
{
ATerm trm260 = ATgetArgument(trm259, 0);
if(match_cons(trm260, sym_iter_star_sep_2))
{
ATerm trm261 = ATgetArgument(trm260, 0);
ATerm trm262 = ATgetArgument(trm260, 1);
}
else
goto label137 ;
}
else
goto label137 ;
}
{
ATerm trm263 = ATgetArgument(trm257, 2);
}
}
else
goto label137 ;
{
ATerm trm264 = ATgetArgument(t, 1);
if(!(((ATgetType(trm264) == AT_LIST) && ATisEmpty(trm264))))
goto label137 ;
}
}
else
goto label137 ;
t = (ATerm) ATempty;
goto label128 ;
label137 :
t = trm256;
{
ATerm trm265 = t;
ATerm n_36 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm266 = ATgetArgument(t, 0);
if(match_cons(trm266, sym_prod_3))
{
ATerm trm267 = ATgetArgument(trm266, 0);
ATerm trm268 = ATgetArgument(trm266, 1);
if(match_cons(trm268, sym_cf_1))
{
ATerm trm269 = ATgetArgument(trm268, 0);
if(match_cons(trm269, sym_iter_sep_2))
{
ATerm trm270 = ATgetArgument(trm269, 0);
ATerm trm271 = ATgetArgument(trm269, 1);
}
else
goto label138 ;
}
else
goto label138 ;
{
ATerm trm272 = ATgetArgument(trm266, 2);
}
}
else
goto label138 ;
{
ATerm trm273 = ATgetArgument(t, 1);
if(((ATgetType(trm273) == AT_LIST) && !(ATisEmpty(trm273))))
{
n_36 = ATgetFirst((ATermList) trm273);
{
ATerm trm274 = (ATerm) ATgetNext((ATermList) trm273);
if(!(((ATgetType(trm274) == AT_LIST) && ATisEmpty(trm274))))
goto label138 ;
}
}
else
goto label138 ;
}
}
else
goto label138 ;
t = (ATerm) ATinsert(ATempty, n_36);
goto label128 ;
label138 :
t = trm265;
{
ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,e_36 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm275 = ATgetArgument(t, 0);
if(match_cons(trm275, sym_prod_3))
{
ATerm trm276 = ATgetArgument(trm275, 0);
ATerm trm277 = ATgetArgument(trm275, 1);
if(match_cons(trm277, sym_cf_1))
{
ATerm trm278 = ATgetArgument(trm277, 0);
if(match_cons(trm278, sym_iter_sep_2))
{
ATerm trm279 = ATgetArgument(trm278, 0);
ATerm trm280 = ATgetArgument(trm278, 1);
}
else
goto fail148 ;
}
else
goto fail148 ;
{
ATerm trm281 = ATgetArgument(trm275, 2);
}
}
else
goto fail148 ;
{
ATerm trm282 = ATgetArgument(t, 1);
if(((ATgetType(trm282) == AT_LIST) && !(ATisEmpty(trm282))))
{
r_35 = ATgetFirst((ATermList) trm282);
s_35 = (ATerm) ATgetNext((ATermList) trm282);
}
else
goto fail148 ;
}
}
else
goto fail148 ;
e_36 = t;
t = d_36(&(frame), t);
if((t == NULL))
goto fail148 ;
t_35 = t;
t = e_36;
t = t_35;
goto label128 ;
}
}
}
}
}
}
}
label128 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail148 :
--__tracing_table_counter;
return(NULL);
}
static ATerm d_36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "d_36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm283 = t;
ATerm u_35 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm284 = ATgetArgument(t, 0);
if(match_cons(trm284, sym_prod_3))
{
ATerm trm285 = ATgetArgument(trm284, 0);
ATerm trm286 = ATgetArgument(trm284, 1);
if(match_cons(trm286, sym_cf_1))
{
ATerm trm287 = ATgetArgument(trm286, 0);
if(match_cons(trm287, sym_iter_sep_2))
{
ATerm trm288 = ATgetArgument(trm287, 0);
ATerm trm289 = ATgetArgument(trm287, 1);
}
else
goto label140 ;
}
else
goto label140 ;
{
ATerm trm290 = ATgetArgument(trm284, 2);
}
}
else
goto label140 ;
{
ATerm trm291 = ATgetArgument(t, 1);
if(((ATgetType(trm291) == AT_LIST) && !(ATisEmpty(trm291))))
{
u_35 = ATgetFirst((ATermList) trm291);
{
ATerm trm292 = (ATerm) ATgetNext((ATermList) trm291);
if(!(((ATgetType(trm292) == AT_LIST) && ATisEmpty(trm292))))
goto label140 ;
}
}
else
goto label140 ;
}
}
else
goto label140 ;
t = (ATerm) ATinsert(ATempty, u_35);
goto label139 ;
label140 :
t = trm283;
{
ATerm trm293 = t;
ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,f_36 = NULL,h_36 = NULL,g_36 = NULL,i_36 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm294 = ATgetArgument(t, 0);
if(match_cons(trm294, sym_prod_3))
{
ATerm trm295 = ATgetArgument(trm294, 0);
ATerm trm296 = ATgetArgument(trm294, 1);
if(match_cons(trm296, sym_cf_1))
{
ATerm trm297 = ATgetArgument(trm296, 0);
if(match_cons(trm297, sym_iter_sep_2))
{
ATerm trm298 = ATgetArgument(trm297, 0);
ATerm trm299 = ATgetArgument(trm297, 1);
}
else
goto label141 ;
}
else
goto label141 ;
{
ATerm trm300 = ATgetArgument(trm294, 2);
}
}
else
goto label141 ;
{
ATerm trm301 = ATgetArgument(t, 1);
if(((ATgetType(trm301) == AT_LIST) && !(ATisEmpty(trm301))))
{
v_35 = ATgetFirst((ATermList) trm301);
{
ATerm trm302 = (ATerm) ATgetNext((ATermList) trm301);
if(((ATgetType(trm302) == AT_LIST) && !(ATisEmpty(trm302))))
{
w_35 = ATgetFirst((ATermList) trm302);
{
ATerm trm303 = (ATerm) ATgetNext((ATermList) trm302);
if(((ATgetType(trm303) == AT_LIST) && !(ATisEmpty(trm303))))
{
x_35 = ATgetFirst((ATermList) trm303);
{
ATerm trm304 = (ATerm) ATgetNext((ATermList) trm303);
if(!(((ATgetType(trm304) == AT_LIST) && ATisEmpty(trm304))))
goto label141 ;
}
}
else
goto label141 ;
}
}
else
goto label141 ;
}
}
else
goto label141 ;
}
}
else
goto label141 ;
h_36 = t;
t = v_35;
t = d_36(sl, t);
if((t == NULL))
goto label141 ;
f_36 = t;
t = h_36;
i_36 = t;
t = x_35;
t = d_36(sl, t);
if((t == NULL))
goto label141 ;
g_36 = t;
t = i_36;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_36), (ATerm) ATinsert(ATempty, w_35)), f_36);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label141 ;
goto label139 ;
label141 :
t = trm293;
{
ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,j_36 = NULL,l_36 = NULL,k_36 = NULL,m_36 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm305 = ATgetArgument(t, 0);
if(match_cons(trm305, sym_prod_3))
{
ATerm trm306 = ATgetArgument(trm305, 0);
ATerm trm307 = ATgetArgument(trm305, 1);
if(match_cons(trm307, sym_cf_1))
{
ATerm trm308 = ATgetArgument(trm307, 0);
if(match_cons(trm308, sym_iter_sep_2))
{
ATerm trm309 = ATgetArgument(trm308, 0);
ATerm trm310 = ATgetArgument(trm308, 1);
}
else
goto fail150 ;
}
else
goto fail150 ;
{
ATerm trm311 = ATgetArgument(trm305, 2);
}
}
else
goto fail150 ;
{
ATerm trm312 = ATgetArgument(t, 1);
if(((ATgetType(trm312) == AT_LIST) && !(ATisEmpty(trm312))))
{
y_35 = ATgetFirst((ATermList) trm312);
{
ATerm trm313 = (ATerm) ATgetNext((ATermList) trm312);
if(((ATgetType(trm313) == AT_LIST) && !(ATisEmpty(trm313))))
{
z_35 = ATgetFirst((ATermList) trm313);
{
ATerm trm314 = (ATerm) ATgetNext((ATermList) trm313);
if(((ATgetType(trm314) == AT_LIST) && !(ATisEmpty(trm314))))
{
a_36 = ATgetFirst((ATermList) trm314);
{
ATerm trm315 = (ATerm) ATgetNext((ATermList) trm314);
if(((ATgetType(trm315) == AT_LIST) && !(ATisEmpty(trm315))))
{
b_36 = ATgetFirst((ATermList) trm315);
{
ATerm trm316 = (ATerm) ATgetNext((ATermList) trm315);
if(((ATgetType(trm316) == AT_LIST) && !(ATisEmpty(trm316))))
{
c_36 = ATgetFirst((ATermList) trm316);
{
ATerm trm317 = (ATerm) ATgetNext((ATermList) trm316);
if(!(((ATgetType(trm317) == AT_LIST) && ATisEmpty(trm317))))
goto fail150 ;
}
}
else
goto fail150 ;
}
}
else
goto fail150 ;
}
}
else
goto fail150 ;
}
}
else
goto fail150 ;
}
}
else
goto fail150 ;
}
}
else
goto fail150 ;
l_36 = t;
t = y_35;
t = d_36(sl, t);
if((t == NULL))
goto fail150 ;
j_36 = t;
t = l_36;
m_36 = t;
t = c_36;
t = d_36(sl, t);
if((t == NULL))
goto fail150 ;
k_36 = t;
t = m_36;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_36), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_36), a_36), z_35)), j_36);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto fail150 ;
else
goto label139 ;
}
}
label139 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail150 :
--__tracing_table_counter;
return(NULL);
}
static ATerm y_36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "y_36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm212 = t;
ATerm s_36 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm213 = ATgetArgument(t, 0);
if(match_cons(trm213, sym_prod_3))
{
ATerm trm214 = ATgetArgument(trm213, 0);
ATerm trm215 = ATgetArgument(trm213, 1);
if(match_cons(trm215, sym_cf_1))
{
ATerm trm216 = ATgetArgument(trm215, 0);
if(match_cons(trm216, sym_iter_1))
{
ATerm trm217 = ATgetArgument(trm216, 0);
}
else
goto label134 ;
}
else
goto label134 ;
{
ATerm trm218 = ATgetArgument(trm213, 2);
}
}
else
goto label134 ;
{
ATerm trm219 = ATgetArgument(t, 1);
if(((ATgetType(trm219) == AT_LIST) && !(ATisEmpty(trm219))))
{
s_36 = ATgetFirst((ATermList) trm219);
{
ATerm trm220 = (ATerm) ATgetNext((ATermList) trm219);
if(!(((ATgetType(trm220) == AT_LIST) && ATisEmpty(trm220))))
goto label134 ;
}
}
else
goto label134 ;
}
}
else
goto label134 ;
t = (ATerm) ATinsert(ATempty, s_36);
goto label133 ;
label134 :
t = trm212;
{
ATerm trm221 = t;
ATerm t_36 = NULL,u_36 = NULL,a_37 = NULL,c_37 = NULL,b_37 = NULL,d_37 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm222 = ATgetArgument(t, 0);
if(match_cons(trm222, sym_prod_3))
{
ATerm trm223 = ATgetArgument(trm222, 0);
ATerm trm224 = ATgetArgument(trm222, 1);
if(match_cons(trm224, sym_cf_1))
{
ATerm trm225 = ATgetArgument(trm224, 0);
if(match_cons(trm225, sym_iter_1))
{
ATerm trm226 = ATgetArgument(trm225, 0);
}
else
goto label135 ;
}
else
goto label135 ;
{
ATerm trm227 = ATgetArgument(trm222, 2);
}
}
else
goto label135 ;
{
ATerm trm228 = ATgetArgument(t, 1);
if(((ATgetType(trm228) == AT_LIST) && !(ATisEmpty(trm228))))
{
t_36 = ATgetFirst((ATermList) trm228);
{
ATerm trm229 = (ATerm) ATgetNext((ATermList) trm228);
if(((ATgetType(trm229) == AT_LIST) && !(ATisEmpty(trm229))))
{
u_36 = ATgetFirst((ATermList) trm229);
{
ATerm trm230 = (ATerm) ATgetNext((ATermList) trm229);
if(!(((ATgetType(trm230) == AT_LIST) && ATisEmpty(trm230))))
goto label135 ;
}
}
else
goto label135 ;
}
}
else
goto label135 ;
}
}
else
goto label135 ;
c_37 = t;
t = t_36;
t = y_36(sl, t);
if((t == NULL))
goto label135 ;
a_37 = t;
t = c_37;
d_37 = t;
t = u_36;
t = y_36(sl, t);
if((t == NULL))
goto label135 ;
b_37 = t;
t = d_37;
t = (ATerm) ATinsert(ATinsert(ATempty, b_37), a_37);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label135 ;
goto label133 ;
label135 :
t = trm221;
{
ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,e_37 = NULL,g_37 = NULL,f_37 = NULL,h_37 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm231 = ATgetArgument(t, 0);
if(match_cons(trm231, sym_prod_3))
{
ATerm trm232 = ATgetArgument(trm231, 0);
ATerm trm233 = ATgetArgument(trm231, 1);
if(match_cons(trm233, sym_cf_1))
{
ATerm trm234 = ATgetArgument(trm233, 0);
if(match_cons(trm234, sym_iter_1))
{
ATerm trm235 = ATgetArgument(trm234, 0);
}
else
goto fail149 ;
}
else
goto fail149 ;
{
ATerm trm236 = ATgetArgument(trm231, 2);
}
}
else
goto fail149 ;
{
ATerm trm237 = ATgetArgument(t, 1);
if(((ATgetType(trm237) == AT_LIST) && !(ATisEmpty(trm237))))
{
v_36 = ATgetFirst((ATermList) trm237);
{
ATerm trm238 = (ATerm) ATgetNext((ATermList) trm237);
if(((ATgetType(trm238) == AT_LIST) && !(ATisEmpty(trm238))))
{
w_36 = ATgetFirst((ATermList) trm238);
{
ATerm trm239 = (ATerm) ATgetNext((ATermList) trm238);
if(((ATgetType(trm239) == AT_LIST) && !(ATisEmpty(trm239))))
{
x_36 = ATgetFirst((ATermList) trm239);
{
ATerm trm240 = (ATerm) ATgetNext((ATermList) trm239);
if(!(((ATgetType(trm240) == AT_LIST) && ATisEmpty(trm240))))
goto fail149 ;
}
}
else
goto fail149 ;
}
}
else
goto fail149 ;
}
}
else
goto fail149 ;
}
}
else
goto fail149 ;
g_37 = t;
t = v_36;
t = y_36(sl, t);
if((t == NULL))
goto fail149 ;
e_37 = t;
t = g_37;
h_37 = t;
t = x_36;
t = y_36(sl, t);
if((t == NULL))
goto fail149 ;
f_37 = t;
t = h_37;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_37), (ATerm) ATinsert(ATempty, w_36)), e_37);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto fail149 ;
else
goto label133 ;
}
}
label133 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail149 :
--__tracing_table_counter;
return(NULL);
}
ATerm ApplToSort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ApplToSort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm155 = t;
ATerm p_35 = NULL,q_35 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm156 = ATgetArgument(t, 0);
if(match_cons(trm156, sym_prod_3))
{
p_35 = ATgetArgument(trm156, 0);
{
ATerm trm157 = ATgetArgument(trm156, 1);
if(match_cons(trm157, sym_sort_1))
{
ATerm trm158 = ATgetArgument(trm157, 0);
if(!((ATgetSymbol(trm158) == ATmakeSymbol("<START>", 0, ATtrue))))
goto label124 ;
}
else
goto label124 ;
}
{
ATerm trm159 = ATgetArgument(trm156, 2);
}
}
else
goto label124 ;
{
ATerm trm160 = ATgetArgument(t, 1);
if(((ATgetType(trm160) == AT_LIST) && !(ATisEmpty(trm160))))
{
q_35 = ATgetFirst((ATermList) trm160);
{
ATerm trm161 = (ATerm) ATgetNext((ATermList) trm160);
if(!(((ATgetType(trm161) == AT_LIST) && ATisEmpty(trm161))))
goto label124 ;
}
}
else
goto label124 ;
}
}
else
goto label124 ;
t = q_35;
goto label123 ;
label124 :
t = trm155;
{
ATerm trm162 = t;
ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm163 = ATgetArgument(t, 0);
if(match_cons(trm163, sym_prod_3))
{
k_35 = ATgetArgument(trm163, 0);
{
ATerm trm164 = ATgetArgument(trm163, 1);
if(match_cons(trm164, sym_cf_1))
{
ATerm trm165 = ATgetArgument(trm164, 0);
if(match_cons(trm165, sym_sort_1))
{
m_35 = ATgetArgument(trm165, 0);
}
else
goto label125 ;
}
else
goto label125 ;
}
{
ATerm trm166 = ATgetArgument(trm163, 2);
}
}
else
goto label125 ;
l_35 = ATgetArgument(t, 1);
}
else
goto label125 ;
o_35 = t;
t = (ATerm) ATmakeAppl(sym_sort_1, m_35);
t = pp_sdf_symbol_0_0(sl, t);
if((t == NULL))
goto label125 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto label125 ;
n_35 = t;
t = o_35;
{
ATerm trm167;
trm167 = SSL_mkterm(n_35, l_35);
if((trm167 == NULL))
goto label125 ;
t = trm167;
}
goto label123 ;
label125 :
t = trm162;
{
ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm168 = ATgetArgument(t, 0);
if(match_cons(trm168, sym_prod_3))
{
d_35 = ATgetArgument(trm168, 0);
{
ATerm trm169 = ATgetArgument(trm168, 1);
if(match_cons(trm169, sym_cf_1))
{
f_35 = ATgetArgument(trm169, 0);
}
else
goto fail147 ;
}
{
ATerm trm170 = ATgetArgument(trm168, 2);
}
}
else
goto fail147 ;
e_35 = ATgetArgument(t, 1);
}
else
goto fail147 ;
h_35 = t;
t = f_35;
{
ATerm trm171 = t;
if(match_cons(t, sym_sort_1))
{
ATerm trm172 = ATgetArgument(t, 0);
}
else
goto label127 ;
goto fail147 ;
label127 :
t = trm171;
goto label126 ;
label126 :
;
t = f_35;
t = pp_sdf_symbol_0_0(sl, t);
if((t == NULL))
goto fail147 ;
j_35 = t;
i_35 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term89)), i_35), (ATerm) ATinsert(ATempty, term89));
t = concat_0_0(sl, t);
if((t == NULL))
goto fail147 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail147 ;
g_35 = t;
t = h_35;
{
ATerm trm173;
trm173 = SSL_mkterm(g_35, e_35);
if((trm173 == NULL))
goto fail147 ;
t = trm173;
goto label123 ;
}
}
}
}
label123 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail147 :
--__tracing_table_counter;
return(NULL);
}
ATerm ImplodeTuple_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "ImplodeTuple_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm141 = t;
ATerm c_35 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm142 = ATgetArgument(t, 0);
if(match_cons(trm142, sym_prod_3))
{
ATerm trm143 = ATgetArgument(trm142, 0);
ATerm trm144 = ATgetArgument(trm142, 1);
if(match_cons(trm144, sym_cf_1))
{
ATerm trm145 = ATgetArgument(trm144, 0);
if(match_cons(trm145, sym_seq_1))
{
ATerm trm146 = ATgetArgument(trm145, 0);
}
else
goto label122 ;
}
else
goto label122 ;
{
ATerm trm147 = ATgetArgument(trm142, 2);
}
}
else
goto label122 ;
c_35 = ATgetArgument(t, 1);
}
else
goto label122 ;
{
ATerm trm148;
trm148 = SSL_mkterm(term57, c_35);
if((trm148 == NULL))
goto label122 ;
t = trm148;
}
goto label121 ;
label122 :
t = trm141;
{
ATerm b_35 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm149 = ATgetArgument(t, 0);
if(match_cons(trm149, sym_prod_3))
{
ATerm trm150 = ATgetArgument(trm149, 0);
ATerm trm151 = ATgetArgument(trm149, 1);
if(match_cons(trm151, sym_seq_1))
{
ATerm trm152 = ATgetArgument(trm151, 0);
}
else
goto fail146 ;
{
ATerm trm153 = ATgetArgument(trm149, 2);
}
}
else
goto fail146 ;
b_35 = ATgetArgument(t, 1);
}
else
goto fail146 ;
{
ATerm trm154;
trm154 = SSL_mkterm(term57, b_35);
if((trm154 == NULL))
goto fail146 ;
t = trm154;
goto label121 ;
}
}
label121 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail146 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_anno_yield_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_anno_yield_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure y_204 = { &(a_35) , &(frame) };
StrCL a_35_cl = &(y_204);
sl_init_fun(0, a_35_cl);
t = a_35(&(frame), t);
if((t == NULL))
goto fail143 ;
t = implode_string_0_0(sl, t);
if((t == NULL))
goto fail143 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail143 :
--__tracing_table_counter;
return(NULL);
}
static ATerm a_35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "a_35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm140 = t;
ATerm n_189 = NULL,q_189 = NULL;
struct str_closure w_204 = { &(_Id) , sl_up(sl) };
StrCL lifted82_cl = &(w_204);
struct str_closure x_204 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(x_204);
t = appl_2_0(sl_up(sl), lifted82_cl, lifted83_cl, t);
if((t == NULL))
goto label120 ;
if(match_cons(t, sym_appl_2))
{
n_189 = ATgetArgument(t, 0);
q_189 = ATgetArgument(t, 1);
}
else
goto label120 ;
t = q_189;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label120 ;
goto label119 ;
label120 :
t = trm140;
{
ATerm r_189 = NULL;
r_189 = t;
t = (ATerm) ATinsert(ATempty, r_189);
goto label119 ;
}
label119 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail144 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = map_1_0(sl_up(sl_up(sl)), sl_fun_cl(0, sl_up(sl)), t);
if((t == NULL))
goto fail145 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail145 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_anno_Kids_p__0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_anno_Kids_p__0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_34 = NULL;
z_34 = t;
t = (ATerm) ATinsert(ATempty, z_34);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail142 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_anno_Kids_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_anno_Kids_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_34 = NULL,y_34 = NULL;
if(match_cons(t, sym_appl_2))
{
x_34 = ATgetArgument(t, 0);
y_34 = ATgetArgument(t, 1);
}
else
goto fail141 ;
t = y_34;
t = concat_0_0(sl, t);
if((t == NULL))
goto fail141 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail141 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_anno_all_consnil_1_0 (StrSL sl, StrCL w_34, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_anno_all_consnil_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm135 = t;
ATerm l_34 = NULL;
l_34 = t;
t = is_list_0_0(sl, t);
if((t == NULL))
goto label117 ;
t = l_34;
{
ATerm trm136 = t;
ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
ATerm trm137;
trm137 = (ATerm) ATgetAnnotations(t);
if((trm137 == NULL))
trm137 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
m_34 = ATgetFirst((ATermList) t);
n_34 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label118 ;
q_34 = trm137;
t = m_34;
t = cl_fun(w_34)(cl_sl(w_34), t);
if((t == NULL))
goto label118 ;
o_34 = t;
t = n_34;
p_34 = t;
t = o_34;
r_34 = t;
t = p_34;
s_34 = t;
t = (ATerm) SRTS_setAnnotations(q_34, (ATerm) ATempty);
v_34 = t;
{
ATerm trm138;
trm138 = CheckATermList(p_34);
if((trm138 == NULL))
goto label118 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm138, o_34), q_34);
t = r_34;
t_34 = t;
t = s_34;
t = cl_fun(w_34)(cl_sl(w_34), t);
if((t == NULL))
goto label118 ;
u_34 = t;
{
ATerm trm139;
trm139 = CheckATermList(u_34);
if((trm139 == NULL))
goto label118 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm139, t_34), v_34);
}
}
goto label116 ;
label118 :
t = trm136;
if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
goto label116 ;
else
goto fail140 ;
}
label117 :
t = trm135;
t = SRTS_all(sl, w_34, t);
if((t == NULL))
goto fail140 ;
else
goto label116 ;
label116 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail140 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_anno_topdown_consnil_1_0 (StrSL sl, StrCL j_34, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_anno_topdown_consnil_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, j_34);
{
struct str_closure v_204 = { &(k_34) , &(frame) };
StrCL k_34_cl = &(v_204);
sl_init_fun(1, k_34_cl);
t = k_34(&(frame), t);
if((t == NULL))
goto fail138 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail138 :
--__tracing_table_counter;
return(NULL);
}
static ATerm k_34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "k_34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail139 ;
t = asfix_anno_all_consnil_1_0(sl_up(sl), sl_fun_cl(1, sl), t);
if((t == NULL))
goto fail139 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail139 :
--__tracing_table_counter;
return(NULL);
}
ATerm has_cons_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "has_cons_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_34 = NULL,i_34 = NULL;
h_34 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm130 = ATgetArgument(t, 0);
if(match_cons(trm130, sym_prod_3))
{
ATerm trm131 = ATgetArgument(trm130, 0);
ATerm trm132 = ATgetArgument(trm130, 1);
i_34 = ATgetArgument(trm130, 2);
}
else
goto fail136 ;
{
ATerm trm133 = ATgetArgument(t, 1);
}
}
else
goto fail136 ;
t = i_34;
{
struct str_closure u_204 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(u_204);
t = oncetd_1_0(sl, lifted81_cl, t);
if((t == NULL))
goto fail136 ;
t = h_34;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail136 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
ATerm trm134 = ATgetArgument(t, 0);
}
else
goto fail137 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail137 :
--__tracing_table_counter;
return(NULL);
}
ATerm fetch_comment_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "fetch_comment_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
sl_init_var(0, z_33);
sl_init_var(1, a_34);
sl_init_var(2, b_34);
c_34 = t;
t = get_comment_sorts_0_0(sl, t);
if((t == NULL))
goto fail133 ;
if((z_33 == NULL))
{
z_33 = t;
}
else
if((z_33 != t))
goto fail133 ;
t = c_34;
{
struct str_closure t_204 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(t_204);
t = oncetd_1_0(sl, lifted79_cl, t);
if((t == NULL))
goto fail133 ;
if((b_34 == NULL))
goto fail133 ;
else
{
t = b_34;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail133 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
sl_init_var(0, d_34);
if(match_cons(t, sym_appl_2))
{
ATerm trm124 = ATgetArgument(t, 0);
if(match_cons(trm124, sym_prod_3))
{
ATerm trm125 = ATgetArgument(trm124, 0);
ATerm trm126 = ATgetArgument(trm124, 1);
if(match_cons(trm126, sym_lex_1))
{
ATerm trm127 = ATgetArgument(trm126, 0);
if(match_cons(trm127, sym_sort_1))
{
if((d_34 == NULL))
{
d_34 = ATgetArgument(trm127, 0);
}
else
if((d_34 != ATgetArgument(trm127, 0)))
goto fail134 ;
}
else
goto fail134 ;
}
else
goto fail134 ;
{
ATerm trm128 = ATgetArgument(trm124, 2);
}
}
else
goto fail134 ;
{
ATerm trm129 = ATgetArgument(t, 1);
}
}
else
goto fail134 ;
e_34 = t;
if((sl_readvar(0, sl) == NULL))
goto fail134 ;
else
{
t = sl_readvar(0, sl);
}
{
struct str_closure s_204 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(s_204);
t = fetch_1_0(sl_up(sl), lifted80_cl, t);
if((t == NULL))
goto fail134 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail134 ;
t = e_34;
t = asfix_anno_yield_0_0(sl_up(sl), t);
if((t == NULL))
goto fail134 ;
g_34 = t;
f_34 = t;
if((d_34 == NULL))
goto fail134 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, f_34, d_34);
}
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = t;
}
else
if((sl_readvar(2, sl) != t))
goto fail134 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail134 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail135 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail135 :
--__tracing_table_counter;
return(NULL);
}
ATerm AnnoComment_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "AnnoComment_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,y_33 = NULL;
sl_init_var(0, t_33);
sl_init_var(1, u_33);
sl_init_var(2, v_33);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm105 = ATgetFirst((ATermList) t);
p_33 = trm105;
if(match_cons(trm105, sym_appl_2))
{
ATerm trm106 = ATgetArgument(trm105, 0);
if(match_cons(trm106, sym_prod_3))
{
ATerm trm107 = ATgetArgument(trm106, 0);
if(((ATgetType(trm107) == AT_LIST) && !(ATisEmpty(trm107))))
{
ATerm trm108 = ATgetFirst((ATermList) trm107);
if(match_cons(trm108, sym_cf_1))
{
ATerm trm109 = ATgetArgument(trm108, 0);
if(!(match_cons(trm109, sym_layout_0)))
goto fail129 ;
}
else
goto fail129 ;
{
ATerm trm110 = (ATerm) ATgetNext((ATermList) trm107);
if(!(((ATgetType(trm110) == AT_LIST) && ATisEmpty(trm110))))
goto fail129 ;
}
}
else
goto fail129 ;
{
ATerm trm111 = ATgetArgument(trm106, 1);
if(match_cons(trm111, sym_cf_1))
{
ATerm trm112 = ATgetArgument(trm111, 0);
if(match_cons(trm112, sym_opt_1))
{
ATerm trm113 = ATgetArgument(trm112, 0);
if(!(match_cons(trm113, sym_layout_0)))
goto fail129 ;
}
else
goto fail129 ;
}
else
goto fail129 ;
}
{
ATerm trm114 = ATgetArgument(trm106, 2);
}
}
else
goto fail129 ;
r_33 = ATgetArgument(trm105, 1);
}
else
goto fail129 ;
{
ATerm trm115 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm115) == AT_LIST) && !(ATisEmpty(trm115))))
{
s_33 = ATgetFirst((ATermList) trm115);
q_33 = (ATerm) ATgetNext((ATermList) trm115);
}
else
goto fail129 ;
}
}
else
goto fail129 ;
y_33 = t;
t = r_33;
t = fetch_comment_0_0(sl, t);
if((t == NULL))
goto fail129 ;
if(match_cons(t, sym__2))
{
if((u_33 == NULL))
{
u_33 = ATgetArgument(t, 0);
}
else
if((u_33 != ATgetArgument(t, 0)))
goto fail129 ;
if((t_33 == NULL))
{
t_33 = ATgetArgument(t, 1);
}
else
if((t_33 != ATgetArgument(t, 1)))
goto fail129 ;
}
else
goto fail129 ;
t = s_33;
{
struct str_closure r_204 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(r_204);
t = try_1_0(sl, lifted76_cl, t);
if((t == NULL))
goto fail129 ;
w_33 = t;
t = y_33;
{
ATerm trm123;
trm123 = CheckATermList(q_33);
if((trm123 == NULL))
goto fail129 ;
t = (ATerm) ATinsert(ATinsert((ATermList)trm123, w_33), p_33);
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail129 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure q_204 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(q_204);
t = oncetd_1_0(sl_up(sl), lifted77_cl, t);
if((t == NULL))
goto fail130 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail130 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_33 = NULL,l_189 = NULL,m_189 = NULL;
l_189 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm116 = ATgetArgument(t, 0);
if(match_cons(trm116, sym_prod_3))
{
ATerm trm117 = ATgetArgument(trm116, 0);
ATerm trm118 = ATgetArgument(trm116, 1);
m_189 = ATgetArgument(trm116, 2);
}
else
goto fail131 ;
{
ATerm trm119 = ATgetArgument(t, 1);
}
}
else
goto fail131 ;
t = m_189;
{
struct str_closure p_204 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(p_204);
t = oncetd_1_0(sl_up(sl_up(sl)), lifted78_cl, t);
if((t == NULL))
goto fail131 ;
t = l_189;
{
ATerm trm121;
trm121 = (ATerm) ATgetAnnotations(t);
if((trm121 == NULL))
trm121 = (ATerm) ATempty;
x_33 = t;
if((sl_readvar(2, sl_up(sl)) == NULL))
{
sl_readvar(2, sl_up(sl)) = trm121;
}
else
if((sl_readvar(2, sl_up(sl)) != trm121))
goto fail131 ;
if(((sl_readvar(0, sl_up(sl)) == NULL) || ((sl_readvar(1, sl_up(sl)) == NULL) || (sl_readvar(2, sl_up(sl)) == NULL))))
goto fail131 ;
else
{
ATerm trm122;
trm122 = CheckATermList((ATerm) SRTS_setAnnotations(sl_readvar(2, sl_up(sl)), (ATerm) ATempty));
if((trm122 == NULL))
goto fail131 ;
t = (ATerm) SRTS_setAnnotations(x_33, (ATerm) ATinsert((ATermList)trm122, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Comment_1, sl_readvar(0, sl_up(sl))), sl_readvar(1, sl_up(sl)))));
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail131 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_cons_1))
{
ATerm trm120 = ATgetArgument(t, 0);
}
else
goto fail132 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail132 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_anno_comments_0_1 (StrSL sl, ATerm f_33, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_anno_comments_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, f_33);
{
ATerm h_33 = NULL,i_33 = NULL;
struct str_closure o_204 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(o_204);
i_33 = t;
t = term83;
h_33 = t;
t = i_33;
t = dr_scope_1_1(sl, lifted73_cl, h_33, t);
if((t == NULL))
goto fail126 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
struct str_closure n_204 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(n_204);
g_33 = t;
m_33 = t;
t = term83;
j_33 = t;
t = m_33;
n_33 = t;
t = (ATerm) ATinsert(ATempty, term85);
k_33 = t;
t = n_33;
o_33 = t;
if((sl_readvar(0, sl) == NULL))
goto fail127 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, term87, sl_readvar(0, sl));
}
l_33 = t;
t = o_33;
t = dr_set_rule_0_3(sl_up(sl), j_33, k_33, l_33, t);
if((t == NULL))
goto fail127 ;
t = g_33;
t = asfix_anno_topdown_consnil_1_0(sl_up(sl), lifted74_cl, t);
if((t == NULL))
goto fail127 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_204 = { &(AnnoComment_0_0) , sl_up(sl_up(sl)) };
StrCL lifted75_cl = &(m_204);
t = try_1_0(sl_up(sl_up(sl)), lifted75_cl, t);
if((t == NULL))
goto fail128 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail128 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_anno_comments_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_anno_comments_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_33 = NULL,d_33 = NULL;
d_33 = t;
t = (ATerm) ATinsert(ATempty, term81);
c_33 = t;
t = d_33;
t = asfix_anno_comments_0_1(sl, c_33, t);
if((t == NULL))
goto fail125 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_anno_location_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_anno_location_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_33 = NULL;
b_33 = t;
t = STRSGLR_anno_location(b_33);
if((t == NULL))
goto fail124 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail124 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_anno_position_info_0_1 (StrSL sl, ATerm z_32, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_anno_position_info_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_33 = NULL;
a_33 = t;
t = STRSGLR_anno_position_info(a_33, z_32);
if((t == NULL))
goto fail123 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
ATerm strsglr_quote_cong_1_0 (StrSL sl, StrCL y_32, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strsglr_quote_cong_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm96 = t;
ATerm r_188 = NULL,s_188 = NULL,t_188 = NULL;
ATerm trm97;
trm97 = (ATerm) ATgetAnnotations(t);
if((trm97 == NULL))
trm97 = (ATerm) ATempty;
if(match_cons(t, sym_ToTerm_1))
{
s_188 = ATgetArgument(t, 0);
}
else
goto label112 ;
r_188 = trm97;
t = s_188;
t = cl_fun(y_32)(cl_sl(y_32), t);
if((t == NULL))
goto label112 ;
t_188 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToTerm_1, t_188), r_188);
goto label111 ;
label112 :
t = trm96;
{
ATerm trm98 = t;
ATerm v_188 = NULL,w_188 = NULL,x_188 = NULL;
ATerm trm99;
trm99 = (ATerm) ATgetAnnotations(t);
if((trm99 == NULL))
trm99 = (ATerm) ATempty;
if(match_cons(t, sym_ToMetaExpr_1))
{
w_188 = ATgetArgument(t, 0);
}
else
goto label113 ;
v_188 = trm99;
t = w_188;
t = cl_fun(y_32)(cl_sl(y_32), t);
if((t == NULL))
goto label113 ;
x_188 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToMetaExpr_1, x_188), v_188);
goto label111 ;
label113 :
t = trm98;
{
ATerm trm100 = t;
ATerm z_188 = NULL,a_189 = NULL,b_189 = NULL;
ATerm trm101;
trm101 = (ATerm) ATgetAnnotations(t);
if((trm101 == NULL))
trm101 = (ATerm) ATempty;
if(match_cons(t, sym_ToMetaListExpr_1))
{
a_189 = ATgetArgument(t, 0);
}
else
goto label114 ;
z_188 = trm101;
t = a_189;
t = cl_fun(y_32)(cl_sl(y_32), t);
if((t == NULL))
goto label114 ;
b_189 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToMetaListExpr_1, b_189), z_188);
goto label111 ;
label114 :
t = trm100;
{
ATerm trm102 = t;
ATerm d_189 = NULL,e_189 = NULL,f_189 = NULL;
ATerm trm103;
trm103 = (ATerm) ATgetAnnotations(t);
if((trm103 == NULL))
trm103 = (ATerm) ATempty;
if(match_cons(t, sym_ToBuild_1))
{
e_189 = ATgetArgument(t, 0);
}
else
goto label115 ;
d_189 = trm103;
t = e_189;
t = cl_fun(y_32)(cl_sl(y_32), t);
if((t == NULL))
goto label115 ;
f_189 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToBuild_1, f_189), d_189);
goto label111 ;
label115 :
t = trm102;
{
ATerm h_189 = NULL,i_189 = NULL,j_189 = NULL;
ATerm trm104;
trm104 = (ATerm) ATgetAnnotations(t);
if((trm104 == NULL))
trm104 = (ATerm) ATempty;
if(match_cons(t, sym_ToStrategy_1))
{
i_189 = ATgetArgument(t, 0);
}
else
goto fail122 ;
h_189 = trm104;
t = i_189;
t = cl_fun(y_32)(cl_sl(y_32), t);
if((t == NULL))
goto fail122 ;
j_189 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_ToStrategy_1, j_189), h_189);
goto label111 ;
}
}
}
}
label111 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
ATerm strsglr_is_quote_cons_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strsglr_is_quote_cons_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm92 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("ToTerm", 0, ATtrue))))
goto label107 ;
goto label106 ;
label107 :
t = trm92;
{
ATerm trm93 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("ToMetaExpr", 0, ATtrue))))
goto label108 ;
goto label106 ;
label108 :
t = trm93;
{
ATerm trm94 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("ToMetaListExpr", 0, ATtrue))))
goto label109 ;
goto label106 ;
label109 :
t = trm94;
{
ATerm trm95 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("ToBuild", 0, ATtrue))))
goto label110 ;
goto label106 ;
label110 :
t = trm95;
if((ATgetSymbol(t) == ATmakeSymbol("ToStrategy", 0, ATtrue)))
goto label106 ;
else
goto fail121 ;
}
}
}
label106 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
ATerm strsglr_metavar_cong_1_0 (StrSL sl, StrCL x_32, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strsglr_metavar_cong_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm89 = t;
ATerm j_188 = NULL,k_188 = NULL,l_188 = NULL;
ATerm trm90;
trm90 = (ATerm) ATgetAnnotations(t);
if((trm90 == NULL))
trm90 = (ATerm) ATempty;
if(match_cons(t, sym_meta_var_1))
{
k_188 = ATgetArgument(t, 0);
}
else
goto label105 ;
j_188 = trm90;
t = k_188;
t = cl_fun(x_32)(cl_sl(x_32), t);
if((t == NULL))
goto label105 ;
l_188 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_meta_var_1, l_188), j_188);
goto label104 ;
label105 :
t = trm89;
{
ATerm n_188 = NULL,o_188 = NULL,p_188 = NULL;
ATerm trm91;
trm91 = (ATerm) ATgetAnnotations(t);
if((trm91 == NULL))
trm91 = (ATerm) ATempty;
if(match_cons(t, sym_meta_listvar_1))
{
o_188 = ATgetArgument(t, 0);
}
else
goto fail120 ;
n_188 = trm91;
t = o_188;
t = cl_fun(x_32)(cl_sl(x_32), t);
if((t == NULL))
goto fail120 ;
p_188 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_meta_listvar_1, p_188), n_188);
goto label104 ;
}
label104 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
ATerm strsglr_antiquote_cong_1_0 (StrSL sl, StrCL w_32, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strsglr_antiquote_cong_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm80 = t;
ATerm h_187 = NULL,i_187 = NULL,j_187 = NULL;
ATerm trm81;
trm81 = (ATerm) ATgetAnnotations(t);
if((trm81 == NULL))
trm81 = (ATerm) ATempty;
if(match_cons(t, sym_FromTerm_1))
{
i_187 = ATgetArgument(t, 0);
}
else
goto label100 ;
h_187 = trm81;
t = i_187;
t = cl_fun(w_32)(cl_sl(w_32), t);
if((t == NULL))
goto label100 ;
j_187 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FromTerm_1, j_187), h_187);
goto label99 ;
label100 :
t = trm80;
{
ATerm trm82 = t;
ATerm l_187 = NULL,m_187 = NULL,n_187 = NULL;
ATerm trm83;
trm83 = (ATerm) ATgetAnnotations(t);
if((trm83 == NULL))
trm83 = (ATerm) ATempty;
if(match_cons(t, sym_FromMetaExpr_1))
{
m_187 = ATgetArgument(t, 0);
}
else
goto label101 ;
l_187 = trm83;
t = m_187;
t = cl_fun(w_32)(cl_sl(w_32), t);
if((t == NULL))
goto label101 ;
n_187 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FromMetaExpr_1, n_187), l_187);
goto label99 ;
label101 :
t = trm82;
{
ATerm trm84 = t;
ATerm p_187 = NULL,t_187 = NULL,u_187 = NULL;
ATerm trm85;
trm85 = (ATerm) ATgetAnnotations(t);
if((trm85 == NULL))
trm85 = (ATerm) ATempty;
if(match_cons(t, sym_FromMetaListExpr_1))
{
t_187 = ATgetArgument(t, 0);
}
else
goto label102 ;
p_187 = trm85;
t = t_187;
t = cl_fun(w_32)(cl_sl(w_32), t);
if((t == NULL))
goto label102 ;
u_187 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FromMetaListExpr_1, u_187), p_187);
goto label99 ;
label102 :
t = trm84;
{
ATerm trm86 = t;
ATerm a_188 = NULL,b_188 = NULL,d_188 = NULL;
ATerm trm87;
trm87 = (ATerm) ATgetAnnotations(t);
if((trm87 == NULL))
trm87 = (ATerm) ATempty;
if(match_cons(t, sym_FromStrategy_1))
{
b_188 = ATgetArgument(t, 0);
}
else
goto label103 ;
a_188 = trm87;
t = b_188;
t = cl_fun(w_32)(cl_sl(w_32), t);
if((t == NULL))
goto label103 ;
d_188 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FromStrategy_1, d_188), a_188);
goto label99 ;
label103 :
t = trm86;
{
ATerm f_188 = NULL,g_188 = NULL,h_188 = NULL;
ATerm trm88;
trm88 = (ATerm) ATgetAnnotations(t);
if((trm88 == NULL))
trm88 = (ATerm) ATempty;
if(match_cons(t, sym_FromApp_1))
{
g_188 = ATgetArgument(t, 0);
}
else
goto fail119 ;
f_188 = trm88;
t = g_188;
t = cl_fun(w_32)(cl_sl(w_32), t);
if((t == NULL))
goto fail119 ;
h_188 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_FromApp_1, h_188), f_188);
goto label99 ;
}
}
}
}
label99 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail119 :
--__tracing_table_counter;
return(NULL);
}
ATerm strsglr_is_antiquote_cons_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strsglr_is_antiquote_cons_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm76 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("FromTerm", 0, ATtrue))))
goto label95 ;
goto label94 ;
label95 :
t = trm76;
{
ATerm trm77 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("FromMetaExpr", 0, ATtrue))))
goto label96 ;
goto label94 ;
label96 :
t = trm77;
{
ATerm trm78 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("FromMetaListExpr", 0, ATtrue))))
goto label97 ;
goto label94 ;
label97 :
t = trm78;
{
ATerm trm79 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("FromStrategy", 0, ATtrue))))
goto label98 ;
goto label94 ;
label98 :
t = trm79;
if((ATgetSymbol(t) == ATmakeSymbol("FromApp", 0, ATtrue)))
goto label94 ;
else
goto fail118 ;
}
}
}
label94 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
ATerm report_area_0_4 (StrSL sl, ATerm q_30, ATerm r_30, ATerm s_30, ATerm t_30, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "report_area_0_4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,m_185 = NULL,n_185 = NULL,o_185 = NULL,q_185 = NULL,r_185 = NULL,s_185 = NULL,t_185 = NULL,u_185 = NULL,v_185 = NULL,w_185 = NULL,x_185 = NULL;
sl_init_var(0, y_30);
sl_init_var(1, z_30);
d_31 = t;
t = t_30;
if(match_cons(t, sym_area_6))
{
w_30 = ATgetArgument(t, 0);
x_30 = ATgetArgument(t, 1);
{
ATerm trm60 = ATgetArgument(t, 2);
}
u_30 = ATgetArgument(t, 3);
{
ATerm trm61 = ATgetArgument(t, 4);
}
{
ATerm trm62 = ATgetArgument(t, 5);
}
}
else
goto fail115 ;
t = d_31;
m_185 = t;
q_185 = t;
t = term15;
n_185 = t;
t = q_185;
r_185 = t;
t_185 = t;
t = term3;
{
ATerm trm63 = t;
ATerm b_186 = NULL;
b_186 = t;
t = s_30;
if(!((ATgetSymbol(t) == ATmakeSymbol("-", 0, ATtrue))))
goto label81 ;
t = b_186;
t = term1;
goto label80 ;
label81 :
t = trm63;
t = s_30;
goto label80 ;
label80 :
;
s_185 = t;
t = t_185;
v_185 = t;
t = w_30;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail115 ;
u_185 = t;
t = v_185;
x_185 = t;
t = x_30;
t = int_to_string_0_0(sl, t);
if((t == NULL))
goto fail115 ;
w_185 = t;
t = x_185;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_185), term71), u_185), term73), r_30), term5), s_185);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail115 ;
o_185 = t;
t = r_185;
t = log_0_2(sl, n_185, o_185, t);
if((t == NULL))
goto fail115 ;
t = m_185;
{
ATerm trm64 = t;
ATerm m_31 = NULL;
m_31 = t;
{
ATerm trm65 = t;
ATerm c_186 = NULL;
if(match_cons(t, sym_FILE_1))
{
c_186 = ATgetArgument(t, 0);
}
else
goto label85 ;
t = c_186;
t = read_text_file_0_0(sl, t);
if((t == NULL))
goto label85 ;
goto label84 ;
label85 :
t = trm65;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label83 ;
else
goto label84 ;
label84 :
;
c_31 = t;
t = m_31;
}
{
ATerm d_186 = NULL,e_186 = NULL,f_186 = NULL,g_186 = NULL,h_186 = NULL,i_186 = NULL,l_186 = NULL,m_186 = NULL,n_186 = NULL,o_186 = NULL,p_186 = NULL;
t = c_31;
t = get_lines_0_0(sl, t);
if((t == NULL))
goto fail115 ;
t = add_indices_0_0(sl, t);
if((t == NULL))
goto fail115 ;
d_186 = t;
t = w_30;
t = dec_0_0(sl, t);
if((t == NULL))
goto fail115 ;
{
ATerm trm66 = t;
ATerm d_187 = NULL,e_187 = NULL,f_187 = NULL;
d_187 = t;
f_187 = t;
e_187 = t;
t = (ATerm) ATmakeAppl(sym__2, e_187, term75);
t = lt_0_0(sl, t);
if((t == NULL))
goto label87 ;
t = d_187;
t = term75;
goto label86 ;
label87 :
t = trm66;
goto label86 ;
label86 :
;
if((y_30 == NULL))
{
y_30 = t;
}
else
if((y_30 != t))
goto fail115 ;
t = d_186;
{
ATerm trm67 = t;
ATerm q_186 = NULL;
q_186 = t;
if((y_30 == NULL))
goto label89 ;
else
{
t = y_30;
}
if(!(((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt) t) == 0))))
goto label89 ;
t = q_186;
{
ATerm r_186 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
r_186 = ATgetFirst((ATermList) t);
{
ATerm trm68 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail115 ;
t = (ATerm) ATinsert(ATempty, r_186);
goto label88 ;
}
label89 :
t = trm67;
{
struct str_closure k_204 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(k_204);
t = at_suffix_1_0(sl, lifted71_cl, t);
if((t == NULL))
goto fail115 ;
if((z_30 == NULL))
goto fail115 ;
else
{
t = z_30;
goto label88 ;
}
}
label88 :
;
{
ATerm trm72 = t;
ATerm s_186 = NULL;
s_186 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
a_31 = ATgetFirst((ATermList) t);
{
ATerm trm73 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm73) == AT_LIST) && !(ATisEmpty(trm73))))
{
b_31 = ATgetFirst((ATermList) trm73);
{
ATerm trm74 = (ATerm) ATgetNext((ATermList) trm73);
}
}
else
goto label91 ;
}
}
else
goto label91 ;
t = (ATerm) ATinsert(ATinsert(ATempty, b_31), a_31);
goto label90 ;
label91 :
t = trm72;
goto label90 ;
label90 :
;
{
struct str_closure l_204 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(l_204);
t = map_1_0(sl, lifted72_cl, t);
if((t == NULL))
goto fail115 ;
f_186 = t;
h_186 = t;
t = term3;
t = x_30;
t = dec_0_0(sl, t);
if((t == NULL))
goto fail115 ;
v_30 = t;
{
ATerm trm75 = t;
ATerm g_187 = NULL;
g_187 = t;
t = (ATerm) ATmakeAppl(sym__2, v_30, term75);
t = lt_0_0(sl, t);
if((t == NULL))
goto label93 ;
t = g_187;
t = term75;
goto label92 ;
label93 :
t = trm75;
goto label92 ;
label92 :
;
g_186 = t;
t = h_186;
t = (ATerm) ATmakeAppl(sym__2, g_186, term77);
t = copy_char_0_0(sl, t);
if((t == NULL))
goto fail115 ;
e_186 = t;
t = f_186;
t = (ATerm) ATmakeAppl(sym__2, e_186, term79);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail115 ;
m_186 = t;
t = term15;
i_186 = t;
t = m_186;
n_186 = t;
p_186 = t;
o_186 = t;
l_186 = t;
t = n_186;
t = log_0_2(sl, i_186, l_186, t);
if((t == NULL))
goto fail115 ;
else
goto label82 ;
}
}
}
}
}
}
label83 :
t = trm64;
goto label82 ;
label82 :
;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_186 = NULL,u_186 = NULL,v_186 = NULL,a_187 = NULL,b_187 = NULL,c_187 = NULL;
v_186 = t;
t = term15;
t_186 = t;
t = v_186;
a_187 = t;
c_187 = t;
t = Snd_0_0(sl_up(sl), t);
if((t == NULL))
goto fail117 ;
b_187 = t;
t = c_187;
t = b_187;
u_186 = t;
t = a_187;
t = log_0_2(sl_up(sl), t_186, u_186, t);
if((t == NULL))
goto fail117 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm69 = ATgetFirst((ATermList) t);
if(match_cons(trm69, sym__2))
{
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(trm69, 0);
}
else
if((sl_readvar(0, sl) != ATgetArgument(trm69, 0)))
goto fail116 ;
{
ATerm trm70 = ATgetArgument(trm69, 1);
}
}
else
goto fail116 ;
{
ATerm trm71 = (ATerm) ATgetNext((ATermList) t);
}
}
else
goto fail116 ;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail116 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
ATerm report_file_0_3 (StrSL sl, ATerm j_30, ATerm k_30, ATerm l_30, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "report_file_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
o_30 = t;
t = term15;
m_30 = t;
t = o_30;
p_30 = t;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_30), term67), j_30), term69), l_30);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail114 ;
n_30 = t;
t = p_30;
t = log_0_2(sl, m_30, n_30, t);
if((t == NULL))
goto fail114 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
ATerm report_specific_error_0_2 (StrSL sl, ATerm k_29, ATerm l_29, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "report_specific_error_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_29 = NULL,q_29 = NULL;
m_29 = t;
t = l_29;
if(match_cons(t, sym_error_2))
{
ATerm trm58 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm58) == ATmakeSymbol("Ambiguity", 0, ATtrue))))
goto fail111 ;
q_29 = ATgetArgument(t, 1);
}
else
goto fail111 ;
t = q_29;
{
struct str_closure j_204 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(j_204);
t = map_1_0(sl, lifted69_cl, t);
if((t == NULL))
goto fail111 ;
t = m_29;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
if(match_cons(t, sym_localized_2))
{
n_29 = ATgetArgument(t, 0);
{
ATerm trm59 = ATgetArgument(t, 1);
if(match_cons(trm59, sym_area_in_file_2))
{
o_29 = ATgetArgument(trm59, 0);
p_29 = ATgetArgument(trm59, 1);
}
else
goto fail112 ;
}
}
else
goto fail112 ;
t_29 = t;
t = term57;
r_29 = t;
t = t_29;
u_29 = t;
t = term59;
s_29 = t;
t = u_29;
t = report_area_0_4(sl_up(sl), r_29, s_29, o_29, p_29, t);
if((t == NULL))
goto fail112 ;
x_29 = t;
t = term15;
v_29 = t;
t = x_29;
y_29 = t;
t = term61;
w_29 = t;
t = y_29;
t = log_0_2(sl_up(sl), v_29, w_29, t);
if((t == NULL))
goto fail112 ;
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term63), n_29);
t = string_tokenize_0_0(sl_up(sl), t);
if((t == NULL))
goto fail112 ;
{
struct str_closure i_204 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(i_204);
t = map_1_0(sl_up(sl), lifted70_cl, t);
if((t == NULL))
goto fail112 ;
h_30 = t;
t = term15;
f_30 = t;
t = h_30;
i_30 = t;
t = term57;
g_30 = t;
t = i_30;
t = log_0_2(sl_up(sl), f_30, g_30, t);
if((t == NULL))
goto fail112 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL;
b_30 = t;
t = term15;
z_29 = t;
t = b_30;
c_30 = t;
e_30 = t;
d_30 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, d_30), term65);
t = concat_strings_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail113 ;
a_30 = t;
t = c_30;
t = log_0_2(sl_up(sl_up(sl)), z_29, a_30, t);
if((t == NULL))
goto fail113 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
ATerm report_location_0_3 (StrSL sl, ATerm t_71, ATerm u_71, ATerm v_71, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "report_location_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm57 = t;
ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
j_29 = t;
t = v_71;
if(match_cons(t, sym_area_in_file_2))
{
h_29 = ATgetArgument(t, 0);
i_29 = ATgetArgument(t, 1);
}
else
goto label79 ;
t = j_29;
t = report_area_0_4(sl, t_71, u_71, h_29, i_29, t);
if((t == NULL))
goto label79 ;
goto label78 ;
label79 :
t = trm57;
{
ATerm c_29 = NULL,d_29 = NULL;
d_29 = t;
t = v_71;
if(match_cons(t, sym_file_1))
{
c_29 = ATgetArgument(t, 0);
}
else
goto fail110 ;
t = d_29;
t = report_file_0_3(sl, t_71, u_71, c_29, t);
if((t == NULL))
goto fail110 ;
else
goto label78 ;
}
label78 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
ATerm report_error_0_1 (StrSL sl, ATerm t_28, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "report_error_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
ATerm trm53 = t;
ATerm x_28 = NULL;
x_28 = t;
t = t_28;
if(match_cons(t, sym_error_2))
{
u_28 = ATgetArgument(t, 0);
{
ATerm trm54 = ATgetArgument(t, 1);
if(((ATgetType(trm54) == AT_LIST) && !(ATisEmpty(trm54))))
{
ATerm trm55 = ATgetFirst((ATermList) trm54);
if(match_cons(trm55, sym_localized_2))
{
v_28 = ATgetArgument(trm55, 0);
w_28 = ATgetArgument(trm55, 1);
}
else
goto label77 ;
{
ATerm trm56 = (ATerm) ATgetNext((ATermList) trm54);
if(!(((ATgetType(trm56) == AT_LIST) && ATisEmpty(trm56))))
goto label77 ;
}
}
else
goto label77 ;
}
}
else
goto label77 ;
t = x_28;
t = report_location_0_3(sl, u_28, v_28, w_28, t);
if((t == NULL))
goto label77 ;
goto label76 ;
label77 :
t = trm53;
{
ATerm y_28 = NULL;
struct str_closure g_204 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(g_204);
t = say_1_0(sl, lifted67_cl, t);
if((t == NULL))
goto fail107 ;
y_28 = t;
t = t_28;
{
struct str_closure h_204 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(h_204);
t = debug_1_0(sl, lifted68_cl, t);
if((t == NULL))
goto fail107 ;
t = y_28;
goto fail107 ;
}
}
label76 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
ATerm report_error_0_2 (StrSL sl, ATerm r_28, ATerm s_28, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "report_error_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = report_error_0_1(sl, s_28, t);
if((t == NULL))
goto fail106 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
ATerm report_error_summary_0_1 (StrSL sl, ATerm k_28, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "report_error_summary_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
sl_init_var(0, m_28);
sl_init_var(1, n_28);
{
ATerm trm50 = t;
ATerm o_28 = NULL;
if((m_28 == NULL))
{
m_28 = t;
}
else
if((m_28 != t))
goto label73 ;
o_28 = t;
t = k_28;
if(match_cons(t, sym_summary_3))
{
if((n_28 == NULL))
{
n_28 = ATgetArgument(t, 0);
}
else
if((n_28 != ATgetArgument(t, 0)))
goto label73 ;
{
ATerm trm51 = ATgetArgument(t, 1);
}
l_28 = ATgetArgument(t, 2);
}
else
goto label73 ;
t = l_28;
{
struct str_closure d_204 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(d_204);
t = map_1_0(sl, lifted64_cl, t);
if((t == NULL))
goto label73 ;
t = o_28;
}
goto label72 ;
label73 :
t = trm50;
{
ATerm q_28 = NULL;
struct str_closure e_204 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(e_204);
t = say_1_0(sl, lifted65_cl, t);
if((t == NULL))
goto fail102 ;
q_28 = t;
t = k_28;
{
struct str_closure f_204 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(f_204);
t = debug_1_0(sl, lifted66_cl, t);
if((t == NULL))
goto fail102 ;
t = q_28;
goto label72 ;
}
}
label72 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_28 = NULL;
p_28 = t;
if((sl_readvar(0, sl) == NULL))
goto fail103 ;
else
{
t = sl_readvar(0, sl);
}
{
ATerm trm52 = t;
if((sl_readvar(1, sl) == NULL))
goto label75 ;
else
{
t = report_specific_error_0_2(sl_up(sl), sl_readvar(1, sl), p_28, t);
if((t == NULL))
goto label75 ;
}
goto label74 ;
label75 :
t = trm52;
{
ATerm c_185 = NULL,d_185 = NULL,e_185 = NULL,f_185 = NULL;
e_185 = t;
if((sl_readvar(1, sl) == NULL))
goto fail103 ;
else
{
t = sl_readvar(1, sl);
}
c_185 = t;
t = e_185;
f_185 = t;
t = p_28;
d_185 = t;
t = f_185;
t = report_error_0_1(sl_up(sl), d_185, t);
if((t == NULL))
goto fail103 ;
else
goto label74 ;
}
label74 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_sdf_symbol_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_sdf_symbol_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
{
struct str_closure c_204 = { &(j_27) , &(frame) };
StrCL j_27_cl = &(c_204);
sl_init_fun(0, j_27_cl);
t = j_27(&(frame), t);
if((t == NULL))
goto fail95 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm j_27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "j_27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm34 = t;
ATerm r_26 = NULL,k_27 = NULL,l_27 = NULL;
if(match_cons(t, sym_cf_1))
{
r_26 = ATgetArgument(t, 0);
}
else
goto label58 ;
l_27 = t;
t = r_26;
t = j_27(sl, t);
if((t == NULL))
goto label58 ;
k_27 = t;
t = l_27;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term19)), k_27), (ATerm) ATinsert(ATempty, term21));
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label58 ;
goto label57 ;
label58 :
t = trm34;
{
ATerm trm35 = t;
ATerm s_26 = NULL,m_27 = NULL,n_27 = NULL;
if(match_cons(t, sym_lex_1))
{
s_26 = ATgetArgument(t, 0);
}
else
goto label59 ;
n_27 = t;
t = s_26;
t = j_27(sl, t);
if((t == NULL))
goto label59 ;
m_27 = t;
t = n_27;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term23)), m_27), (ATerm) ATinsert(ATempty, term21));
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label59 ;
goto label57 ;
label59 :
t = trm35;
{
ATerm trm36 = t;
if(!(match_cons(t, sym_empty_0)))
goto label60 ;
t = (ATerm) ATinsert(ATempty, term25);
goto label57 ;
label60 :
t = trm36;
{
ATerm trm37 = t;
ATerm t_26 = NULL,u_26 = NULL,o_27 = NULL,p_27 = NULL;
if(match_cons(t, sym_seq_2))
{
t_26 = ATgetArgument(t, 0);
u_26 = ATgetArgument(t, 1);
}
else
goto label61 ;
p_27 = t;
{
ATerm trm38;
trm38 = CheckATermList(u_26);
if((trm38 == NULL))
goto label61 ;
t = (ATerm) ATinsert((ATermList)trm38, t_26);
t = map_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label61 ;
o_27 = t;
t = p_27;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term27)), o_27), (ATerm) ATinsert(ATempty, term29));
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label61 ;
}
goto label57 ;
label61 :
t = trm37;
{
ATerm trm39 = t;
ATerm v_26 = NULL;
struct str_closure x_203 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(x_203);
if(match_cons(t, sym_opt_1))
{
v_26 = ATgetArgument(t, 0);
}
else
goto label62 ;
t = v_26;
t = j_27(sl, t);
if((t == NULL))
goto label62 ;
t = at_end_1_0(sl_up(sl), lifted59_cl, t);
if((t == NULL))
goto label62 ;
goto label57 ;
label62 :
t = trm39;
{
ATerm trm40 = t;
ATerm w_26 = NULL;
struct str_closure y_203 = { &(lifted60) , &(frame) };
StrCL lifted60_cl = &(y_203);
if(match_cons(t, sym_iter_1))
{
w_26 = ATgetArgument(t, 0);
}
else
goto label63 ;
t = w_26;
t = j_27(sl, t);
if((t == NULL))
goto label63 ;
t = at_end_1_0(sl_up(sl), lifted60_cl, t);
if((t == NULL))
goto label63 ;
goto label57 ;
label63 :
t = trm40;
{
ATerm trm41 = t;
ATerm x_26 = NULL;
struct str_closure z_203 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(z_203);
if(match_cons(t, sym_iter_star_1))
{
x_26 = ATgetArgument(t, 0);
}
else
goto label64 ;
t = x_26;
t = j_27(sl, t);
if((t == NULL))
goto label64 ;
t = at_end_1_0(sl_up(sl), lifted61_cl, t);
if((t == NULL))
goto label64 ;
goto label57 ;
label64 :
t = trm41;
{
ATerm trm42 = t;
ATerm y_26 = NULL,z_26 = NULL,q_27 = NULL,s_27 = NULL,r_27 = NULL,t_27 = NULL;
if(match_cons(t, sym_iter_sep_2))
{
y_26 = ATgetArgument(t, 0);
z_26 = ATgetArgument(t, 1);
}
else
goto label65 ;
s_27 = t;
t = y_26;
t = j_27(sl, t);
if((t == NULL))
goto label65 ;
q_27 = t;
t = s_27;
t_27 = t;
t = z_26;
t = j_27(sl, t);
if((t == NULL))
goto label65 ;
r_27 = t;
t = t_27;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term37)), r_27), q_27), (ATerm) ATinsert(ATempty, term39));
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label65 ;
goto label57 ;
label65 :
t = trm42;
{
ATerm trm43 = t;
ATerm a_27 = NULL,b_27 = NULL,u_27 = NULL,w_27 = NULL,v_27 = NULL,x_27 = NULL;
if(match_cons(t, sym_iter_star_sep_2))
{
a_27 = ATgetArgument(t, 0);
b_27 = ATgetArgument(t, 1);
}
else
goto label66 ;
w_27 = t;
t = a_27;
t = j_27(sl, t);
if((t == NULL))
goto label66 ;
u_27 = t;
t = w_27;
x_27 = t;
t = b_27;
t = j_27(sl, t);
if((t == NULL))
goto label66 ;
v_27 = t;
t = x_27;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term41)), v_27), u_27), (ATerm) ATinsert(ATempty, term39));
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label66 ;
goto label57 ;
label66 :
t = trm43;
{
ATerm trm44 = t;
ATerm c_27 = NULL,d_27 = NULL,y_27 = NULL,a_28 = NULL,z_27 = NULL,b_28 = NULL;
if(match_cons(t, sym_func_2))
{
c_27 = ATgetArgument(t, 0);
d_27 = ATgetArgument(t, 1);
}
else
goto label67 ;
a_28 = t;
t = c_27;
t = filter_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto label67 ;
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label67 ;
y_27 = t;
t = a_28;
b_28 = t;
t = d_27;
t = j_27(sl, t);
if((t == NULL))
goto label67 ;
z_27 = t;
t = b_28;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_27), (ATerm) ATinsert(ATempty, term43)), y_27);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label67 ;
goto label57 ;
label67 :
t = trm44;
{
ATerm trm45 = t;
ATerm e_27 = NULL,f_27 = NULL,c_28 = NULL,e_28 = NULL,d_28 = NULL,f_28 = NULL;
if(match_cons(t, sym_alt_2))
{
e_27 = ATgetArgument(t, 0);
f_27 = ATgetArgument(t, 1);
}
else
goto label68 ;
e_28 = t;
t = e_27;
t = j_27(sl, t);
if((t == NULL))
goto label68 ;
c_28 = t;
t = e_28;
f_28 = t;
t = f_27;
t = j_27(sl, t);
if((t == NULL))
goto label68 ;
d_28 = t;
t = f_28;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_28), (ATerm) ATinsert(ATempty, term45)), c_28);
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto label68 ;
goto label57 ;
label68 :
t = trm45;
{
ATerm trm46 = t;
ATerm g_27 = NULL;
if(match_cons(t, sym_sort_1))
{
g_27 = ATgetArgument(t, 0);
}
else
goto label69 ;
t = (ATerm) ATinsert(ATempty, g_27);
goto label57 ;
label69 :
t = trm46;
{
ATerm trm47 = t;
ATerm h_27 = NULL,g_28 = NULL,h_28 = NULL;
if(match_cons(t, sym_lit_1))
{
h_27 = ATgetArgument(t, 0);
}
else
goto label70 ;
h_28 = t;
t = h_27;
{
struct str_closure a_204 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(a_204);
t = try_1_0(sl_up(sl), lifted62_cl, t);
if((t == NULL))
goto label70 ;
g_28 = t;
t = h_28;
t = (ATerm) ATinsert(ATempty, g_28);
}
goto label57 ;
label70 :
t = trm47;
{
ATerm trm48 = t;
ATerm i_27 = NULL,i_28 = NULL,j_28 = NULL;
if(match_cons(t, sym_label_2))
{
i_27 = ATgetArgument(t, 0);
{
ATerm trm49 = ATgetArgument(t, 1);
}
}
else
goto label71 ;
j_28 = t;
t = i_27;
{
struct str_closure b_204 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(b_204);
t = try_1_0(sl_up(sl), lifted63_cl, t);
if((t == NULL))
goto label71 ;
i_28 = t;
t = j_28;
t = (ATerm) ATinsert(ATempty, i_28);
}
goto label57 ;
label71 :
t = trm48;
if(!(match_cons(t, sym_layout_0)))
goto fail96 ;
t = (ATerm) ATinsert(ATempty, term47);
goto label57 ;
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
label57 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail101 ;
t = unescape_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail101 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = un_double_quote_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail100 ;
t = unescape_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail100 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term35);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted60 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted60";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term33);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term31);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
ATerm open_parse_table_report_errors_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "open_parse_table_report_errors_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm j_26 = NULL,a_185 = NULL,b_185 = NULL;
sl_init_var(0, j_26);
{
ATerm trm29 = t;
ATerm k_26 = NULL;
k_26 = t;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label53 ;
t = k_26;
{
struct str_closure v_203 = { &(read_from_stream_0_0) , sl };
StrCL lifted57_cl = &(v_203);
struct str_closure w_203 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(w_203);
ATerm trm30 = t;
ATerm l_26 = NULL,m_26 = NULL;
m_26 = t;
l_26 = t;
t = (ATerm) ATmakeAppl(sym__2, l_26, term13);
t = fopen_0_0(sl, t);
if((t == NULL))
goto label55 ;
goto label54 ;
label55 :
t = trm30;
t = strsglr_perror_0_0(sl, t);
if((t == NULL))
goto fail93 ;
else
goto label54 ;
label54 :
;
if((j_26 == NULL))
{
j_26 = t;
}
else
if((j_26 != t))
goto fail93 ;
t = finally_2_0(sl, lifted57_cl, lifted58_cl, t);
if((t == NULL))
goto fail93 ;
else
goto label52 ;
}
label53 :
t = trm29;
{
ATerm trm31 = t;
ATerm trm32,trm33;
trm32 = SSL_get_constructor(t);
trm33 = SSL_get_arguments(t);
if(!((ATgetSymbol(trm32) == ATmakeSymbol("parse-table", 0, ATtrue))))
goto label56 ;
goto label52 ;
label56 :
t = trm31;
{
ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
p_26 = t;
t = term15;
n_26 = t;
t = p_26;
q_26 = t;
t = term17;
o_26 = t;
t = q_26;
t = log_0_2(sl, n_26, o_26, t);
if((t == NULL))
goto fail93 ;
goto fail93 ;
}
}
label52 :
;
a_185 = t;
t = STRSGLR_open_parse_table(a_185);
if((t == NULL))
goto fail93 ;
b_185 = t;
t = (ATerm) ATmakeAppl(sym_ParseTable_1, b_185);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail94 ;
else
{
t = sl_readvar(0, sl);
}
t = fclose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail94 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
ATerm open_parse_table_wrap_report_errors_1_1 (StrSL sl, StrCL i_26, ATerm f_26, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "open_parse_table_wrap_report_errors_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(1);
sl_init_fun(0, i_26);
{
ATerm g_26 = NULL,h_26 = NULL;
sl_init_var(0, g_26);
{
struct str_closure t_203 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(t_203);
struct str_closure u_203 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(u_203);
h_26 = t;
t = f_26;
t = open_parse_table_report_errors_0_0(sl, t);
if((t == NULL))
goto fail90 ;
if((g_26 == NULL))
{
g_26 = t;
}
else
if((g_26 != t))
goto fail90 ;
t = h_26;
t = finally_2_0(sl, lifted55_cl, lifted56_cl, t);
if((t == NULL))
goto fail90 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_184 = NULL;
if((sl_readvar(0, sl) == NULL))
goto fail92 ;
else
{
t = sl_readvar(0, sl);
}
if(match_cons(t, sym_ParseTable_1))
{
z_184 = ATgetArgument(t, 0);
}
else
goto fail92 ;
t = STRSGLR_close_parse_table(z_184);
if((t == NULL))
goto fail92 ;
t = term3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail91 ;
else
{
t = sl_fun(0, sl)(sl_fun_sl(0, sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail91 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_parse_table_open_0_1 (StrSL sl, ATerm d_26, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_parse_table_open_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_26 = NULL;
e_26 = t;
t = d_26;
if(match_cons(t, sym_ParseTable_1))
{
ATerm trm28 = ATgetArgument(t, 0);
}
else
goto fail89 ;
t = e_26;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
ATerm close_parse_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "close_parse_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_26 = NULL;
if(match_cons(t, sym_ParseTable_1))
{
c_26 = ATgetArgument(t, 0);
}
else
goto fail88 ;
t = STRSGLR_close_parse_table(c_26);
if((t == NULL))
goto fail88 ;
t = term3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
ATerm open_parse_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "open_parse_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_26 = NULL,b_26 = NULL;
a_26 = t;
t = STRSGLR_open_parse_table(a_26);
if((t == NULL))
goto fail87 ;
b_26 = t;
t = (ATerm) ATmakeAppl(sym_ParseTable_1, b_26);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_parse_tree_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_parse_tree_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_25 = NULL;
z_25 = t;
t = STRSGLR_is_parse_tree(z_25);
if((t == NULL))
goto fail86 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
ATerm clear_parse_error_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "clear_parse_error_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = STRSGLR_clear_parse_error();
if((t == NULL))
goto fail85 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_parse_error_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_parse_error_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = STRSGLR_get_parse_error();
if((t == NULL))
goto fail84 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
ATerm path_of_xtc_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "path_of_xtc_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm27 = t;
ATerm y_25 = NULL;
if(match_cons(t, sym_FILE_1))
{
y_25 = ATgetArgument(t, 0);
}
else
goto label51 ;
t = y_25;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label51 ;
goto label50 ;
label51 :
t = trm27;
if(!(match_cons(t, sym_stdin_0)))
goto fail83 ;
t = term1;
goto label50 ;
label50 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_pt_2_3 (StrSL sl, StrCL s_25, StrCL t_25, ATerm m_25, ATerm n_25, ATerm o_25, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_pt_2_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(4);
sl_init_fun(0, t_25);
sl_init_var(0, m_25);
sl_init_var(1, n_25);
sl_init_var(2, o_25);
{
ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
sl_init_var(3, q_25);
{
struct str_closure r_203 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(r_203);
struct str_closure s_203 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(s_203);
r_25 = t;
if((m_25 == NULL))
goto fail80 ;
else
{
t = m_25;
}
if(match_cons(t, sym_ParseTable_1))
{
p_25 = ATgetArgument(t, 0);
}
else
goto fail80 ;
t = r_25;
{
ATerm trm25 = t;
ATerm w_184 = NULL;
if(match_cons(t, sym_FILE_1))
{
w_184 = ATgetArgument(t, 0);
}
else
goto label47 ;
t = w_184;
{
ATerm trm26 = t;
ATerm x_184 = NULL,y_184 = NULL;
y_184 = t;
x_184 = t;
t = (ATerm) ATmakeAppl(sym__2, x_184, term13);
t = fopen_0_0(sl, t);
if((t == NULL))
goto label49 ;
goto label48 ;
label49 :
t = trm26;
t = cl_fun(s_25)(cl_sl(s_25), t);
if((t == NULL))
goto label47 ;
else
goto label48 ;
label48 :
;
}
goto label46 ;
label47 :
t = trm25;
if(!(match_cons(t, sym_stdin_0)))
goto fail80 ;
t = stdin_stream_0_0(sl, t);
if((t == NULL))
goto fail80 ;
else
goto label46 ;
label46 :
;
if((q_25 == NULL))
{
q_25 = t;
}
else
if((q_25 != t))
goto fail80 ;
t = finally_2_0(sl, lifted53_cl, lifted54_cl, t);
if((t == NULL))
goto fail80 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(3, sl) == NULL))
goto fail82 ;
else
{
t = sl_readvar(3, sl);
}
t = fclose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail82 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || ((sl_readvar(1, sl) == NULL) || (sl_readvar(2, sl) == NULL))))
goto fail81 ;
else
{
t = parse_stream_pt_1_3(sl_up(sl), sl_fun_cl(0, sl), sl_readvar(0, sl), sl_readvar(1, sl), sl_readvar(2, sl), t);
if((t == NULL))
goto fail81 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_pt_2_2 (StrSL sl, StrCL i_25, StrCL j_25, ATerm f_25, ATerm g_25, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_pt_2_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_25 = NULL,k_25 = NULL,l_25 = NULL;
h_25 = t;
l_25 = t;
{
ATerm trm24 = t;
ATerm v_184 = NULL;
if(match_cons(t, sym_FILE_1))
{
v_184 = ATgetArgument(t, 0);
}
else
goto label45 ;
t = v_184;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label45 ;
goto label44 ;
label45 :
t = trm24;
if(!(match_cons(t, sym_stdin_0)))
goto fail79 ;
t = term1;
goto label44 ;
label44 :
;
k_25 = t;
t = l_25;
t = parse_xtc_file_pt_2_3(sl, i_25, j_25, f_25, g_25, k_25, t);
if((t == NULL))
goto fail79 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_pt_2_1 (StrSL sl, StrCL z_24, StrCL a_25, ATerm x_24, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_pt_2_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_24 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
y_24 = t;
d_25 = t;
t = term9;
b_25 = t;
t = d_25;
e_25 = t;
t = y_24;
{
ATerm trm23 = t;
ATerm u_184 = NULL;
if(match_cons(t, sym_FILE_1))
{
u_184 = ATgetArgument(t, 0);
}
else
goto label43 ;
t = u_184;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label43 ;
goto label42 ;
label43 :
t = trm23;
if(!(match_cons(t, sym_stdin_0)))
goto fail78 ;
t = term1;
goto label42 ;
label42 :
;
c_25 = t;
t = e_25;
t = parse_xtc_file_pt_2_3(sl, z_24, a_25, x_24, b_25, c_25, t);
if((t == NULL))
goto fail78 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_pt_0_3 (StrSL sl, ATerm u_24, ATerm v_24, ATerm w_24, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_pt_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_203 = { &(_Fail) , sl };
StrCL lifted51_cl = &(p_203);
struct str_closure q_203 = { &(_Fail) , sl };
StrCL lifted52_cl = &(q_203);
t = parse_xtc_file_pt_2_3(sl, lifted51_cl, lifted52_cl, u_24, v_24, w_24, t);
if((t == NULL))
goto fail77 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_pt_0_2 (StrSL sl, ATerm p_24, ATerm q_24, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_pt_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
struct str_closure n_203 = { &(_Fail) , sl };
StrCL lifted49_cl = &(n_203);
struct str_closure o_203 = { &(_Fail) , sl };
StrCL lifted50_cl = &(o_203);
r_24 = t;
t_24 = t;
{
ATerm trm22 = t;
ATerm t_184 = NULL;
if(match_cons(t, sym_FILE_1))
{
t_184 = ATgetArgument(t, 0);
}
else
goto label41 ;
t = t_184;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label41 ;
goto label40 ;
label41 :
t = trm22;
if(!(match_cons(t, sym_stdin_0)))
goto fail76 ;
t = term1;
goto label40 ;
label40 :
;
s_24 = t;
t = t_24;
t = parse_xtc_file_pt_2_3(sl, lifted49_cl, lifted50_cl, p_24, q_24, s_24, t);
if((t == NULL))
goto fail76 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_pt_0_1 (StrSL sl, ATerm j_24, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_pt_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
struct str_closure l_203 = { &(_Fail) , sl };
StrCL lifted47_cl = &(l_203);
struct str_closure m_203 = { &(_Fail) , sl };
StrCL lifted48_cl = &(m_203);
k_24 = t;
n_24 = t;
t = term9;
l_24 = t;
t = n_24;
o_24 = t;
t = k_24;
{
ATerm trm21 = t;
ATerm s_184 = NULL;
if(match_cons(t, sym_FILE_1))
{
s_184 = ATgetArgument(t, 0);
}
else
goto label39 ;
t = s_184;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label39 ;
goto label38 ;
label39 :
t = trm21;
if(!(match_cons(t, sym_stdin_0)))
goto fail75 ;
t = term1;
goto label38 ;
label38 :
;
m_24 = t;
t = o_24;
t = parse_xtc_file_pt_2_3(sl, lifted47_cl, lifted48_cl, j_24, l_24, m_24, t);
if((t == NULL))
goto fail75 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_2_3 (StrSL sl, StrCL h_24, StrCL i_24, ATerm e_24, ATerm f_24, ATerm g_24, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_2_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_203 = { &(true_0_0) , sl };
StrCL lifted46_cl = &(k_203);
t = parse_xtc_file_pt_2_3(sl, h_24, i_24, e_24, f_24, g_24, t);
if((t == NULL))
goto fail74 ;
t = implode_asfix_1_0(sl, lifted46_cl, t);
if((t == NULL))
goto fail74 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_2_2 (StrSL sl, StrCL a_24, StrCL b_24, ATerm x_23, ATerm y_23, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_2_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_23 = NULL,c_24 = NULL,d_24 = NULL;
z_23 = t;
d_24 = t;
{
ATerm trm20 = t;
ATerm r_184 = NULL;
if(match_cons(t, sym_FILE_1))
{
r_184 = ATgetArgument(t, 0);
}
else
goto label37 ;
t = r_184;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label37 ;
goto label36 ;
label37 :
t = trm20;
if(!(match_cons(t, sym_stdin_0)))
goto fail73 ;
t = term1;
goto label36 ;
label36 :
;
c_24 = t;
t = d_24;
t = parse_xtc_file_2_3(sl, a_24, b_24, x_23, y_23, c_24, t);
if((t == NULL))
goto fail73 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_2_1 (StrSL sl, StrCL r_23, StrCL s_23, ATerm p_23, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_2_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
q_23 = t;
v_23 = t;
t = term9;
t_23 = t;
t = v_23;
w_23 = t;
t = q_23;
{
ATerm trm19 = t;
ATerm q_184 = NULL;
if(match_cons(t, sym_FILE_1))
{
q_184 = ATgetArgument(t, 0);
}
else
goto label35 ;
t = q_184;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label35 ;
goto label34 ;
label35 :
t = trm19;
if(!(match_cons(t, sym_stdin_0)))
goto fail72 ;
t = term1;
goto label34 ;
label34 :
;
u_23 = t;
t = w_23;
t = parse_xtc_file_2_3(sl, r_23, s_23, p_23, t_23, u_23, t);
if((t == NULL))
goto fail72 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_0_3 (StrSL sl, ATerm m_23, ATerm n_23, ATerm o_23, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_203 = { &(_Fail) , sl };
StrCL lifted44_cl = &(g_203);
struct str_closure j_203 = { &(_Fail) , sl };
StrCL lifted45_cl = &(j_203);
t = parse_xtc_file_2_3(sl, lifted44_cl, lifted45_cl, m_23, n_23, o_23, t);
if((t == NULL))
goto fail71 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_0_2 (StrSL sl, ATerm k_23, ATerm l_23, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_184 = NULL,h_184 = NULL,n_184 = NULL,o_184 = NULL,i_184 = NULL,j_184 = NULL,k_184 = NULL;
n_184 = t;
t = k_23;
g_184 = t;
t = n_184;
o_184 = t;
t = l_23;
h_184 = t;
t = o_184;
{
struct str_closure e_203 = { &(_Fail) , sl };
StrCL lifted42_cl = &(e_203);
struct str_closure f_203 = { &(_Fail) , sl };
StrCL lifted43_cl = &(f_203);
i_184 = t;
k_184 = t;
{
ATerm trm18 = t;
ATerm p_184 = NULL;
if(match_cons(t, sym_FILE_1))
{
p_184 = ATgetArgument(t, 0);
}
else
goto label33 ;
t = p_184;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label33 ;
goto label32 ;
label33 :
t = trm18;
if(!(match_cons(t, sym_stdin_0)))
goto fail70 ;
t = term1;
goto label32 ;
label32 :
;
j_184 = t;
t = k_184;
t = parse_xtc_file_2_3(sl, lifted42_cl, lifted43_cl, g_184, h_184, j_184, t);
if((t == NULL))
goto fail70 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_0_1 (StrSL sl, ATerm j_23, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_203 = { &(_Fail) , sl };
StrCL lifted40_cl = &(c_203);
struct str_closure d_203 = { &(_Fail) , sl };
StrCL lifted41_cl = &(d_203);
t = parse_xtc_file_2_1(sl, lifted40_cl, lifted41_cl, j_23, t);
if((t == NULL))
goto fail69 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_pt_2_3 (StrSL sl, StrCL f_23, StrCL g_23, ATerm z_22, ATerm a_23, ATerm b_23, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_pt_2_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_vars(4);
sl_init_fun(0, g_23);
sl_init_var(0, z_22);
sl_init_var(1, a_23);
sl_init_var(2, b_23);
{
ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
sl_init_var(3, d_23);
{
struct str_closure a_203 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(a_203);
struct str_closure b_203 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(b_203);
e_23 = t;
if((z_22 == NULL))
goto fail66 ;
else
{
t = z_22;
}
if(match_cons(t, sym_ParseTable_1))
{
c_23 = ATgetArgument(t, 0);
}
else
goto fail66 ;
t = e_23;
{
ATerm trm17 = t;
ATerm h_23 = NULL,i_23 = NULL;
i_23 = t;
h_23 = t;
t = (ATerm) ATmakeAppl(sym__2, h_23, term13);
t = fopen_0_0(sl, t);
if((t == NULL))
goto label31 ;
if((d_23 == NULL))
{
d_23 = t;
}
else
if((d_23 != t))
goto label31 ;
goto label30 ;
label31 :
t = trm17;
t = cl_fun(f_23)(cl_sl(f_23), t);
if((t == NULL))
goto fail66 ;
goto fail66 ;
label30 :
;
t = finally_2_0(sl, lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto fail66 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(3, sl) == NULL))
goto fail68 ;
else
{
t = sl_readvar(3, sl);
}
t = fclose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail68 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(0, sl) == NULL) || ((sl_readvar(1, sl) == NULL) || (sl_readvar(2, sl) == NULL))))
goto fail67 ;
else
{
t = parse_stream_pt_1_3(sl_up(sl), sl_fun_cl(0, sl), sl_readvar(0, sl), sl_readvar(1, sl), sl_readvar(2, sl), t);
if((t == NULL))
goto fail67 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_pt_2_2 (StrSL sl, StrCL x_22, StrCL y_22, ATerm u_22, ATerm v_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_pt_2_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_22 = NULL;
w_22 = t;
t = parse_file_pt_2_3(sl, x_22, y_22, u_22, v_22, w_22, t);
if((t == NULL))
goto fail65 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_pt_2_1 (StrSL sl, StrCL q_22, StrCL r_22, ATerm o_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_pt_2_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_22 = NULL,s_22 = NULL,t_22 = NULL;
p_22 = t;
t_22 = t;
t = term9;
s_22 = t;
t = t_22;
t = parse_file_pt_2_3(sl, q_22, r_22, o_22, s_22, p_22, t);
if((t == NULL))
goto fail64 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_pt_0_3 (StrSL sl, ATerm l_22, ATerm m_22, ATerm n_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_pt_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_202 = { &(_Fail) , sl };
StrCL lifted36_cl = &(y_202);
struct str_closure z_202 = { &(_Fail) , sl };
StrCL lifted37_cl = &(z_202);
t = parse_file_pt_2_3(sl, lifted36_cl, lifted37_cl, l_22, m_22, n_22, t);
if((t == NULL))
goto fail63 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_pt_0_2 (StrSL sl, ATerm j_22, ATerm k_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_pt_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_183 = NULL,a_184 = NULL,e_184 = NULL,f_184 = NULL,b_184 = NULL;
e_184 = t;
t = j_22;
z_183 = t;
t = e_184;
f_184 = t;
t = k_22;
a_184 = t;
t = f_184;
{
struct str_closure w_202 = { &(_Fail) , sl };
StrCL lifted34_cl = &(w_202);
struct str_closure x_202 = { &(_Fail) , sl };
StrCL lifted35_cl = &(x_202);
b_184 = t;
t = parse_file_pt_2_3(sl, lifted34_cl, lifted35_cl, z_183, a_184, b_184, t);
if((t == NULL))
goto fail62 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_pt_0_1 (StrSL sl, ATerm i_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_pt_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_202 = { &(_Fail) , sl };
StrCL lifted32_cl = &(u_202);
struct str_closure v_202 = { &(_Fail) , sl };
StrCL lifted33_cl = &(v_202);
t = parse_file_pt_2_1(sl, lifted32_cl, lifted33_cl, i_22, t);
if((t == NULL))
goto fail61 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_2_3 (StrSL sl, StrCL g_22, StrCL h_22, ATerm d_22, ATerm e_22, ATerm f_22, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_2_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure t_202 = { &(true_0_0) , sl };
StrCL lifted31_cl = &(t_202);
t = parse_file_pt_2_3(sl, g_22, h_22, d_22, e_22, f_22, t);
if((t == NULL))
goto fail60 ;
t = implode_asfix_1_0(sl, lifted31_cl, t);
if((t == NULL))
goto fail60 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_2_2 (StrSL sl, StrCL b_22, StrCL c_22, ATerm y_21, ATerm z_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_2_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_22 = NULL;
a_22 = t;
t = parse_file_2_3(sl, b_22, c_22, y_21, z_21, a_22, t);
if((t == NULL))
goto fail59 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_2_1 (StrSL sl, StrCL u_21, StrCL v_21, ATerm s_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_2_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_21 = NULL,w_21 = NULL,x_21 = NULL;
t_21 = t;
x_21 = t;
t = term9;
w_21 = t;
t = x_21;
t = parse_file_2_3(sl, u_21, v_21, s_21, w_21, t_21, t);
if((t == NULL))
goto fail58 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_0_3 (StrSL sl, ATerm p_21, ATerm q_21, ATerm r_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure r_202 = { &(_Fail) , sl };
StrCL lifted29_cl = &(r_202);
struct str_closure s_202 = { &(_Fail) , sl };
StrCL lifted30_cl = &(s_202);
t = parse_file_2_3(sl, lifted29_cl, lifted30_cl, p_21, q_21, r_21, t);
if((t == NULL))
goto fail57 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_0_2 (StrSL sl, ATerm n_21, ATerm o_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_183 = NULL,t_183 = NULL,x_183 = NULL,y_183 = NULL,u_183 = NULL;
x_183 = t;
t = n_21;
s_183 = t;
t = x_183;
y_183 = t;
t = o_21;
t_183 = t;
t = y_183;
{
struct str_closure p_202 = { &(_Fail) , sl };
StrCL lifted27_cl = &(p_202);
struct str_closure q_202 = { &(_Fail) , sl };
StrCL lifted28_cl = &(q_202);
u_183 = t;
t = parse_file_2_3(sl, lifted27_cl, lifted28_cl, s_183, t_183, u_183, t);
if((t == NULL))
goto fail56 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_file_0_1 (StrSL sl, ATerm m_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_file_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_202 = { &(_Fail) , sl };
StrCL lifted25_cl = &(n_202);
struct str_closure o_202 = { &(_Fail) , sl };
StrCL lifted26_cl = &(o_202);
t = parse_file_2_1(sl, lifted25_cl, lifted26_cl, m_21, t);
if((t == NULL))
goto fail55 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_pt_1_3 (StrSL sl, StrCL l_21, ATerm f_21, ATerm g_21, ATerm h_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_pt_1_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
k_21 = t;
t = f_21;
if(match_cons(t, sym_ParseTable_1))
{
j_21 = ATgetArgument(t, 0);
}
else
goto fail54 ;
t = k_21;
if(match_cons(t, sym_Stream_1))
{
i_21 = ATgetArgument(t, 0);
}
else
goto fail54 ;
t = STRSGLR_parse_stream_pt(l_21, i_21, j_21, g_21, h_21);
if((t == NULL))
goto fail54 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_pt_1_2 (StrSL sl, StrCL c_21, ATerm a_21, ATerm b_21, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_pt_1_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_21 = NULL,e_21 = NULL;
e_21 = t;
t = term11;
d_21 = t;
t = e_21;
t = parse_stream_pt_1_3(sl, c_21, a_21, b_21, d_21, t);
if((t == NULL))
goto fail53 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_pt_1_1 (StrSL sl, StrCL v_20, ATerm u_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_pt_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
y_20 = t;
t = term9;
w_20 = t;
t = y_20;
z_20 = t;
t = term11;
x_20 = t;
t = z_20;
t = parse_stream_pt_1_3(sl, v_20, u_20, w_20, x_20, t);
if((t == NULL))
goto fail52 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_pt_0_3 (StrSL sl, ATerm r_20, ATerm s_20, ATerm t_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_pt_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_202 = { &(_Id) , sl };
StrCL lifted24_cl = &(m_202);
t = parse_stream_pt_1_3(sl, lifted24_cl, r_20, s_20, t_20, t);
if((t == NULL))
goto fail51 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_pt_0_2 (StrSL sl, ATerm p_20, ATerm q_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_pt_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_183 = NULL,m_183 = NULL,q_183 = NULL,r_183 = NULL,n_183 = NULL,o_183 = NULL;
q_183 = t;
t = p_20;
k_183 = t;
t = q_183;
r_183 = t;
t = q_20;
m_183 = t;
t = r_183;
{
struct str_closure l_202 = { &(_Id) , sl };
StrCL lifted23_cl = &(l_202);
o_183 = t;
t = term11;
n_183 = t;
t = o_183;
t = parse_stream_pt_1_3(sl, lifted23_cl, k_183, m_183, n_183, t);
if((t == NULL))
goto fail50 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_pt_0_1 (StrSL sl, ATerm o_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_pt_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_202 = { &(_Id) , sl };
StrCL lifted22_cl = &(k_202);
t = parse_stream_pt_1_1(sl, lifted22_cl, o_20, t);
if((t == NULL))
goto fail49 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_1_3 (StrSL sl, StrCL n_20, ATerm k_20, ATerm l_20, ATerm m_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_1_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_202 = { &(true_0_0) , sl };
StrCL lifted21_cl = &(j_202);
t = parse_stream_pt_1_3(sl, n_20, k_20, l_20, m_20, t);
if((t == NULL))
goto fail48 ;
t = implode_asfix_1_0(sl, lifted21_cl, t);
if((t == NULL))
goto fail48 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_1_2 (StrSL sl, StrCL h_20, ATerm f_20, ATerm g_20, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_1_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_20 = NULL,j_20 = NULL;
j_20 = t;
t = term7;
i_20 = t;
t = j_20;
t = parse_stream_1_3(sl, h_20, f_20, g_20, i_20, t);
if((t == NULL))
goto fail47 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_1_1 (StrSL sl, StrCL a_20, ATerm z_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
d_20 = t;
t = term9;
b_20 = t;
t = d_20;
e_20 = t;
t = term7;
c_20 = t;
t = e_20;
t = parse_stream_1_3(sl, a_20, z_19, b_20, c_20, t);
if((t == NULL))
goto fail46 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_0_3 (StrSL sl, ATerm w_19, ATerm x_19, ATerm y_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure i_202 = { &(_Fail) , sl };
StrCL lifted20_cl = &(i_202);
t = parse_stream_1_3(sl, lifted20_cl, w_19, x_19, y_19, t);
if((t == NULL))
goto fail45 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_0_2 (StrSL sl, ATerm u_19, ATerm v_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_183 = NULL,e_183 = NULL,i_183 = NULL,j_183 = NULL,f_183 = NULL,g_183 = NULL;
i_183 = t;
t = u_19;
d_183 = t;
t = i_183;
j_183 = t;
t = v_19;
e_183 = t;
t = j_183;
{
struct str_closure h_202 = { &(_Fail) , sl };
StrCL lifted19_cl = &(h_202);
g_183 = t;
t = term7;
f_183 = t;
t = g_183;
t = parse_stream_1_3(sl, lifted19_cl, d_183, e_183, f_183, t);
if((t == NULL))
goto fail44 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_stream_0_1 (StrSL sl, ATerm t_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_stream_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_202 = { &(_Fail) , sl };
StrCL lifted18_cl = &(g_202);
t = parse_stream_1_1(sl, lifted18_cl, t_19, t);
if((t == NULL))
goto fail43 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_pt_1_3 (StrSL sl, StrCL s_19, ATerm m_19, ATerm n_19, ATerm o_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_pt_1_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
r_19 = t;
t = m_19;
if(match_cons(t, sym_ParseTable_1))
{
q_19 = ATgetArgument(t, 0);
}
else
goto fail42 ;
t = r_19;
p_19 = t;
t = STRSGLR_parse_string_pt(s_19, p_19, q_19, n_19, o_19);
if((t == NULL))
goto fail42 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_pt_1_2 (StrSL sl, StrCL j_19, ATerm h_19, ATerm i_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_pt_1_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_19 = NULL,l_19 = NULL,t_182 = NULL,u_182 = NULL,v_182 = NULL,a_183 = NULL,b_183 = NULL,c_183 = NULL,w_182 = NULL,x_182 = NULL,y_182 = NULL;
l_19 = t;
t = term7;
k_19 = t;
t = l_19;
a_183 = t;
t = h_19;
t_182 = t;
t = a_183;
b_183 = t;
t = i_19;
u_182 = t;
t = b_183;
c_183 = t;
t = k_19;
v_182 = t;
t = c_183;
y_182 = t;
t = t_182;
if(match_cons(t, sym_ParseTable_1))
{
x_182 = ATgetArgument(t, 0);
}
else
goto fail41 ;
t = y_182;
w_182 = t;
t = STRSGLR_parse_string_pt(j_19, w_182, x_182, u_182, v_182);
if((t == NULL))
goto fail41 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_pt_1_1 (StrSL sl, StrCL c_19, ATerm b_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_pt_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,j_182 = NULL,k_182 = NULL,l_182 = NULL,q_182 = NULL,r_182 = NULL,s_182 = NULL,m_182 = NULL,n_182 = NULL,o_182 = NULL;
f_19 = t;
t = term9;
d_19 = t;
t = f_19;
g_19 = t;
t = term7;
e_19 = t;
t = g_19;
q_182 = t;
t = b_19;
j_182 = t;
t = q_182;
r_182 = t;
t = d_19;
k_182 = t;
t = r_182;
s_182 = t;
t = e_19;
l_182 = t;
t = s_182;
o_182 = t;
t = j_182;
if(match_cons(t, sym_ParseTable_1))
{
n_182 = ATgetArgument(t, 0);
}
else
goto fail40 ;
t = o_182;
m_182 = t;
t = STRSGLR_parse_string_pt(c_19, m_182, n_182, k_182, l_182);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_pt_0_3 (StrSL sl, ATerm y_18, ATerm z_18, ATerm a_19, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_pt_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_181 = NULL,a_182 = NULL,b_182 = NULL,g_182 = NULL,h_182 = NULL,i_182 = NULL,c_182 = NULL,d_182 = NULL,e_182 = NULL;
g_182 = t;
t = y_18;
z_181 = t;
t = g_182;
h_182 = t;
t = z_18;
a_182 = t;
t = h_182;
i_182 = t;
t = a_19;
b_182 = t;
t = i_182;
{
struct str_closure f_202 = { &(_Id) , sl };
StrCL lifted17_cl = &(f_202);
e_182 = t;
t = z_181;
if(match_cons(t, sym_ParseTable_1))
{
d_182 = ATgetArgument(t, 0);
}
else
goto fail39 ;
t = e_182;
c_182 = t;
t = STRSGLR_parse_string_pt(lifted17_cl, c_182, d_182, a_182, b_182);
if((t == NULL))
goto fail39 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_pt_0_2 (StrSL sl, ATerm w_18, ATerm x_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_pt_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_181 = NULL,j_181 = NULL,n_181 = NULL,o_181 = NULL,k_181 = NULL,l_181 = NULL,p_181 = NULL,q_181 = NULL,r_181 = NULL,w_181 = NULL,x_181 = NULL,y_181 = NULL,s_181 = NULL,t_181 = NULL,u_181 = NULL;
n_181 = t;
t = w_18;
i_181 = t;
t = n_181;
o_181 = t;
t = x_18;
j_181 = t;
t = o_181;
{
struct str_closure e_202 = { &(_Id) , sl };
StrCL lifted16_cl = &(e_202);
l_181 = t;
t = term7;
k_181 = t;
t = l_181;
w_181 = t;
t = i_181;
p_181 = t;
t = w_181;
x_181 = t;
t = j_181;
q_181 = t;
t = x_181;
y_181 = t;
t = k_181;
r_181 = t;
t = y_181;
u_181 = t;
t = p_181;
if(match_cons(t, sym_ParseTable_1))
{
t_181 = ATgetArgument(t, 0);
}
else
goto fail38 ;
t = u_181;
s_181 = t;
t = STRSGLR_parse_string_pt(lifted16_cl, s_181, t_181, q_181, r_181);
if((t == NULL))
goto fail38 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_pt_0_1 (StrSL sl, ATerm v_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_pt_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_202 = { &(_Id) , sl };
StrCL lifted15_cl = &(d_202);
t = parse_string_pt_1_1(sl, lifted15_cl, v_18, t);
if((t == NULL))
goto fail37 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_1_3 (StrSL sl, StrCL u_18, ATerm r_18, ATerm s_18, ATerm t_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_1_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_180 = NULL,x_180 = NULL,y_180 = NULL,f_181 = NULL,g_181 = NULL,h_181 = NULL;
struct str_closure c_202 = { &(true_0_0) , sl };
StrCL lifted14_cl = &(c_202);
ATerm z_180 = NULL,a_181 = NULL,b_181 = NULL;
f_181 = t;
t = r_18;
w_180 = t;
t = f_181;
g_181 = t;
t = s_18;
x_180 = t;
t = g_181;
h_181 = t;
t = t_18;
y_180 = t;
t = h_181;
b_181 = t;
t = w_180;
if(match_cons(t, sym_ParseTable_1))
{
a_181 = ATgetArgument(t, 0);
}
else
goto fail36 ;
t = b_181;
z_180 = t;
t = STRSGLR_parse_string_pt(u_18, z_180, a_181, x_180, y_180);
if((t == NULL))
goto fail36 ;
t = implode_asfix_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail36 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_1_2 (StrSL sl, StrCL o_18, ATerm m_18, ATerm n_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_1_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_18 = NULL,q_18 = NULL;
q_18 = t;
t = term7;
p_18 = t;
t = q_18;
t = parse_string_1_3(sl, o_18, m_18, n_18, p_18, t);
if((t == NULL))
goto fail35 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_1_1 (StrSL sl, StrCL h_18, ATerm g_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_1_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
k_18 = t;
t = term9;
i_18 = t;
t = k_18;
l_18 = t;
t = term7;
j_18 = t;
t = l_18;
t = parse_string_1_3(sl, h_18, g_18, i_18, j_18, t);
if((t == NULL))
goto fail34 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_0_3 (StrSL sl, ATerm d_18, ATerm e_18, ATerm f_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_0_3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure b_202 = { &(_Id) , sl };
StrCL lifted13_cl = &(b_202);
t = parse_string_1_3(sl, lifted13_cl, d_18, e_18, f_18, t);
if((t == NULL))
goto fail33 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_0_2 (StrSL sl, ATerm b_18, ATerm c_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_180 = NULL,q_180 = NULL,u_180 = NULL,v_180 = NULL,r_180 = NULL,s_180 = NULL;
u_180 = t;
t = b_18;
p_180 = t;
t = u_180;
v_180 = t;
t = c_18;
q_180 = t;
t = v_180;
{
struct str_closure z_201 = { &(_Id) , sl };
StrCL lifted12_cl = &(z_201);
s_180 = t;
t = term7;
r_180 = t;
t = s_180;
t = parse_string_1_3(sl, lifted12_cl, p_180, q_180, r_180, t);
if((t == NULL))
goto fail32 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_string_0_1 (StrSL sl, ATerm a_18, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_string_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_201 = { &(_Id) , sl };
StrCL lifted11_cl = &(y_201);
t = parse_string_1_1(sl, lifted11_cl, a_18, t);
if((t == NULL))
goto fail31 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm strsglr_perror_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strsglr_perror_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_17 = NULL,y_17 = NULL,x_17 = NULL,z_17 = NULL;
y_17 = t;
t = term3;
t = whoami_0_0(sl, t);
if((t == NULL))
goto fail30 ;
w_17 = t;
t = y_17;
z_17 = t;
x_17 = t;
t = (ATerm) ATmakeAppl(sym__3, w_17, term5, x_17);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail30 ;
t = perror_0_0(sl, t);
if((t == NULL))
goto fail30 ;
goto fail30 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
ATerm strsglr_report_parse_error_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "strsglr_report_parse_error_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
{
ATerm s_17 = NULL,t_17 = NULL;
sl_init_var(0, s_17);
sl_init_var(1, t_17);
{
struct str_closure w_201 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(w_201);
struct str_closure x_201 = { &(_Fail) , sl };
StrCL lifted10_cl = &(x_201);
t = finally_2_0(sl, lifted9_cl, lifted10_cl, t);
if((t == NULL))
goto fail28 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_17 = NULL,v_17 = NULL;
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail29 ;
v_17 = t;
t = get_parse_error_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
u_17 = t;
t = v_17;
t = u_17;
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail29 ;
if((sl_readvar(0, sl) == NULL))
goto fail29 ;
else
{
t = sl_readvar(0, sl);
}
if((sl_readvar(1, sl) == NULL))
goto fail29 ;
else
{
t = report_error_0_1(sl_up(sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail29 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_xtc_file_report_errors_0_2 (StrSL sl, ATerm n_17, ATerm o_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_report_errors_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, o_17);
{
ATerm trm14 = t;
ATerm p_17 = NULL,s_179 = NULL,u_179 = NULL,t_179 = NULL;
p_17 = t;
u_179 = t;
t = n_17;
s_179 = t;
t = u_179;
t_179 = t;
t = s_179;
if(match_cons(t, sym_ParseTable_1))
{
ATerm trm15 = ATgetArgument(t, 0);
}
else
goto label27 ;
t = t_179;
t = p_17;
{
ATerm v_179 = NULL,w_179 = NULL,e_180 = NULL,f_180 = NULL;
struct str_closure r_201 = { &(true_0_0) , sl };
StrCL lifted6_cl = &(r_201);
ATerm x_179 = NULL,a_180 = NULL,b_180 = NULL;
e_180 = t;
t = n_17;
v_179 = t;
t = e_180;
f_180 = t;
if((o_17 == NULL))
goto fail25 ;
else
{
t = o_17;
}
w_179 = t;
t = f_180;
{
struct str_closure s_201 = { &(strsglr_perror_0_0) , sl };
StrCL lifted4_cl = &(s_201);
struct str_closure t_201 = { &(strsglr_report_parse_error_0_0) , sl };
StrCL lifted5_cl = &(t_201);
x_179 = t;
b_180 = t;
{
ATerm trm16 = t;
ATerm g_180 = NULL;
if(match_cons(t, sym_FILE_1))
{
g_180 = ATgetArgument(t, 0);
}
else
goto label29 ;
t = g_180;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label29 ;
goto label28 ;
label29 :
t = trm16;
if(!(match_cons(t, sym_stdin_0)))
goto fail25 ;
t = term1;
goto label28 ;
label28 :
;
a_180 = t;
t = b_180;
t = parse_xtc_file_pt_2_3(sl, lifted4_cl, lifted5_cl, v_179, w_179, a_180, t);
if((t == NULL))
goto fail25 ;
}
}
t = implode_asfix_1_0(sl, lifted6_cl, t);
if((t == NULL))
goto fail25 ;
else
goto label26 ;
}
label27 :
t = trm14;
{
ATerm h_180 = NULL,l_180 = NULL,i_180 = NULL,j_180 = NULL;
sl_init_var(1, i_180);
{
struct str_closure u_201 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(u_201);
struct str_closure v_201 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(v_201);
l_180 = t;
t = n_17;
h_180 = t;
t = l_180;
j_180 = t;
t = h_180;
t = open_parse_table_report_errors_0_0(sl, t);
if((t == NULL))
goto fail25 ;
if((i_180 == NULL))
{
i_180 = t;
}
else
if((i_180 != t))
goto fail25 ;
t = j_180;
t = finally_2_0(sl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail25 ;
else
goto label26 ;
}
}
label26 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_180 = NULL;
if((sl_readvar(1, sl) == NULL))
goto fail27 ;
else
{
t = sl_readvar(1, sl);
}
if(match_cons(t, sym_ParseTable_1))
{
o_180 = ATgetArgument(t, 0);
}
else
goto fail27 ;
t = STRSGLR_close_parse_table(o_180);
if((t == NULL))
goto fail27 ;
t = term3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_180 = NULL,n_180 = NULL;
n_180 = t;
if((sl_readvar(1, sl) == NULL))
goto fail26 ;
else
{
t = sl_readvar(1, sl);
}
m_180 = t;
t = n_180;
if((sl_readvar(0, sl) == NULL))
goto fail26 ;
else
{
t = parse_xtc_file_report_errors_0_2(sl_up(sl), m_180, sl_readvar(0, sl), t);
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
ATerm parse_xtc_file_pt_report_errors_0_2 (StrSL sl, ATerm i_17, ATerm j_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_xtc_file_pt_report_errors_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(2);
sl_init_var(0, j_17);
{
ATerm trm11 = t;
ATerm k_17 = NULL,v_178 = NULL,x_178 = NULL,w_178 = NULL;
k_17 = t;
x_178 = t;
t = i_17;
v_178 = t;
t = x_178;
w_178 = t;
t = v_178;
if(match_cons(t, sym_ParseTable_1))
{
ATerm trm12 = ATgetArgument(t, 0);
}
else
goto label23 ;
t = w_178;
t = k_17;
{
ATerm y_178 = NULL,z_178 = NULL,f_179 = NULL,g_179 = NULL,a_179 = NULL,b_179 = NULL,c_179 = NULL;
f_179 = t;
t = i_17;
y_178 = t;
t = f_179;
g_179 = t;
if((j_17 == NULL))
goto fail22 ;
else
{
t = j_17;
}
z_178 = t;
t = g_179;
{
struct str_closure l_201 = { &(strsglr_perror_0_0) , sl };
StrCL lifted0_cl = &(l_201);
struct str_closure m_201 = { &(strsglr_report_parse_error_0_0) , sl };
StrCL lifted1_cl = &(m_201);
a_179 = t;
c_179 = t;
{
ATerm trm13 = t;
ATerm h_179 = NULL;
if(match_cons(t, sym_FILE_1))
{
h_179 = ATgetArgument(t, 0);
}
else
goto label25 ;
t = h_179;
t = is_string_0_0(sl, t);
if((t == NULL))
goto label25 ;
goto label24 ;
label25 :
t = trm13;
if(!(match_cons(t, sym_stdin_0)))
goto fail22 ;
t = term1;
goto label24 ;
label24 :
;
b_179 = t;
t = c_179;
t = parse_xtc_file_pt_2_3(sl, lifted0_cl, lifted1_cl, y_178, z_178, b_179, t);
if((t == NULL))
goto fail22 ;
else
goto label22 ;
}
}
}
label23 :
t = trm11;
{
ATerm i_179 = NULL,m_179 = NULL,j_179 = NULL,k_179 = NULL;
sl_init_var(1, j_179);
{
struct str_closure p_201 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(p_201);
struct str_closure q_201 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(q_201);
m_179 = t;
t = i_17;
i_179 = t;
t = m_179;
k_179 = t;
t = i_179;
t = open_parse_table_report_errors_0_0(sl, t);
if((t == NULL))
goto fail22 ;
if((j_179 == NULL))
{
j_179 = t;
}
else
if((j_179 != t))
goto fail22 ;
t = k_179;
t = finally_2_0(sl, lifted2_cl, lifted3_cl, t);
if((t == NULL))
goto fail22 ;
else
goto label22 ;
}
}
label22 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_179 = NULL;
if((sl_readvar(1, sl) == NULL))
goto fail24 ;
else
{
t = sl_readvar(1, sl);
}
if(match_cons(t, sym_ParseTable_1))
{
r_179 = ATgetArgument(t, 0);
}
else
goto fail24 ;
t = STRSGLR_close_parse_table(r_179);
if((t == NULL))
goto fail24 ;
t = term3;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_179 = NULL,q_179 = NULL;
q_179 = t;
if((sl_readvar(1, sl) == NULL))
goto fail23 ;
else
{
t = sl_readvar(1, sl);
}
p_179 = t;
t = q_179;
if((sl_readvar(0, sl) == NULL))
goto fail23 ;
else
{
t = parse_xtc_file_pt_report_errors_0_2(sl_up(sl), p_179, sl_readvar(0, sl), t);
if((t == NULL))
goto fail23 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_asfix2me_format_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_asfix2me_format_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_17 = NULL;
h_17 = t;
t = STRSGLR_set_asfix2me_format();
if((t == NULL))
goto fail21 ;
t = h_17;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_asfix2_format_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_asfix2_format_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_17 = NULL;
g_17 = t;
t = STRSGLR_set_asfix2_format();
if((t == NULL))
goto fail20 ;
t = g_17;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_parse_tree_format_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_parse_tree_format_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm10 = t;
ATerm t_178 = NULL;
if(!(match_cons(t, sym_AsFix2_0)))
goto label21 ;
t_178 = t;
t = STRSGLR_set_asfix2_format();
if((t == NULL))
goto label21 ;
t = t_178;
goto label20 ;
label21 :
t = trm10;
{
ATerm u_178 = NULL;
if(!(match_cons(t, sym_AsFix2ME_0)))
goto fail19 ;
u_178 = t;
t = STRSGLR_set_asfix2me_format();
if((t == NULL))
goto fail19 ;
t = u_178;
goto label20 ;
}
label20 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_sglr_log_statistics_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_sglr_log_statistics_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_17 = NULL;
f_17 = t;
t = STRSGLR_get_log_statistics();
if((t == NULL))
goto fail18 ;
t = f_17;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_sglr_log_statistics_1_0 (StrSL sl, StrCL e_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_sglr_log_statistics_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm9 = t;
ATerm b_17 = NULL;
b_17 = t;
t = cl_fun(e_17)(cl_sl(e_17), t);
if((t == NULL))
goto label19 ;
t = b_17;
{
ATerm c_17 = NULL;
c_17 = t;
t = STRSGLR_set_log_statistics_on();
if((t == NULL))
goto fail17 ;
t = c_17;
goto label18 ;
}
label19 :
t = trm9;
{
ATerm d_17 = NULL;
d_17 = t;
t = STRSGLR_set_log_statistics_off();
if((t == NULL))
goto fail17 ;
t = d_17;
goto label18 ;
}
label18 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_sglr_log_stream_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_sglr_log_stream_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_17 = NULL;
if(match_cons(t, sym_Stream_1))
{
a_17 = ATgetArgument(t, 0);
}
else
goto fail16 ;
t = STRSGLR_set_log_stream(a_17);
if((t == NULL))
goto fail16 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_filtering_1_0 (StrSL sl, StrCL z_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_filtering_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm8 = t;
ATerm w_16 = NULL;
w_16 = t;
t = cl_fun(z_16)(cl_sl(z_16), t);
if((t == NULL))
goto label17 ;
t = w_16;
{
ATerm x_16 = NULL;
x_16 = t;
t = STRSGLR_set_filtering_on();
if((t == NULL))
goto fail15 ;
t = x_16;
goto label16 ;
}
label17 :
t = trm8;
{
ATerm y_16 = NULL;
y_16 = t;
t = STRSGLR_set_filtering_off();
if((t == NULL))
goto fail15 ;
t = y_16;
goto label16 ;
}
label16 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_ambiguity_is_error_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_ambiguity_is_error_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_16 = NULL;
v_16 = t;
t = STRSGLR_get_ambiguity_error();
if((t == NULL))
goto fail14 ;
t = v_16;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_ambiguity_is_error_1_0 (StrSL sl, StrCL u_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_ambiguity_is_error_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm7 = t;
ATerm r_16 = NULL;
r_16 = t;
t = cl_fun(u_16)(cl_sl(u_16), t);
if((t == NULL))
goto label15 ;
t = r_16;
{
ATerm s_16 = NULL;
s_16 = t;
t = STRSGLR_set_ambiguity_error_on();
if((t == NULL))
goto fail13 ;
t = s_16;
goto label14 ;
}
label15 :
t = trm7;
{
ATerm t_16 = NULL;
t_16 = t;
t = STRSGLR_set_ambiguity_error_off();
if((t == NULL))
goto fail13 ;
t = t_16;
goto label14 ;
}
label14 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_default_sglr_config_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_default_sglr_config_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_16 = NULL;
q_16 = t;
t = STRSGLR_set_default_config();
if((t == NULL))
goto fail12 ;
t = q_16;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_default_filters_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_default_filters_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_16 = NULL;
p_16 = t;
t = STRSGLR_set_default_filters();
if((t == NULL))
goto fail11 ;
t = p_16;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_heuristic_filters_1_0 (StrSL sl, StrCL o_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_heuristic_filters_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm5 = t;
ATerm l_178 = NULL;
l_178 = t;
t = cl_fun(o_16)(cl_sl(o_16), t);
if((t == NULL))
goto label11 ;
t = l_178;
{
ATerm m_178 = NULL;
m_178 = t;
t = STRSGLR_set_filter_eagernes_on();
if((t == NULL))
goto fail10 ;
t = m_178;
goto label10 ;
}
label11 :
t = trm5;
{
ATerm n_178 = NULL;
n_178 = t;
t = STRSGLR_set_filter_eagernes_off();
if((t == NULL))
goto fail10 ;
t = n_178;
goto label10 ;
}
label10 :
;
{
ATerm trm6 = t;
ATerm p_178 = NULL;
p_178 = t;
t = cl_fun(o_16)(cl_sl(o_16), t);
if((t == NULL))
goto label13 ;
t = p_178;
{
ATerm q_178 = NULL;
q_178 = t;
t = STRSGLR_set_filter_injection_count_on();
if((t == NULL))
goto fail10 ;
t = q_178;
goto label12 ;
}
label13 :
t = trm6;
{
ATerm r_178 = NULL;
r_178 = t;
t = STRSGLR_set_filter_injection_count_off();
if((t == NULL))
goto fail10 ;
t = r_178;
goto label12 ;
}
label12 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_filter_reject_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_filter_reject_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_16 = NULL;
n_16 = t;
t = STRSGLR_get_filter_reject();
if((t == NULL))
goto fail9 ;
t = n_16;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_filter_reject_1_0 (StrSL sl, StrCL m_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_filter_reject_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm4 = t;
ATerm j_16 = NULL;
j_16 = t;
t = cl_fun(m_16)(cl_sl(m_16), t);
if((t == NULL))
goto label9 ;
t = j_16;
{
ATerm k_16 = NULL;
k_16 = t;
t = STRSGLR_set_filter_reject_on();
if((t == NULL))
goto fail8 ;
t = k_16;
goto label8 ;
}
label9 :
t = trm4;
{
ATerm l_16 = NULL;
l_16 = t;
t = STRSGLR_set_filter_reject_off();
if((t == NULL))
goto fail8 ;
t = l_16;
goto label8 ;
}
label8 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_filter_priority_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_filter_priority_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_16 = NULL;
i_16 = t;
t = STRSGLR_get_filter_priority();
if((t == NULL))
goto fail7 ;
t = i_16;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_filter_priority_1_0 (StrSL sl, StrCL h_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_filter_priority_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3 = t;
ATerm e_16 = NULL;
e_16 = t;
t = cl_fun(h_16)(cl_sl(h_16), t);
if((t == NULL))
goto label7 ;
t = e_16;
{
ATerm f_16 = NULL;
f_16 = t;
t = STRSGLR_set_filter_priority_on();
if((t == NULL))
goto fail6 ;
t = f_16;
goto label6 ;
}
label7 :
t = trm3;
{
ATerm g_16 = NULL;
g_16 = t;
t = STRSGLR_set_filter_priority_off();
if((t == NULL))
goto fail6 ;
t = g_16;
goto label6 ;
}
label6 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_filter_injection_count_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_filter_injection_count_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_16 = NULL;
d_16 = t;
t = STRSGLR_get_filter_injection_count();
if((t == NULL))
goto fail5 ;
t = d_16;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_filter_injection_count_1_0 (StrSL sl, StrCL c_16, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_filter_injection_count_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm2 = t;
ATerm z_15 = NULL;
z_15 = t;
t = cl_fun(c_16)(cl_sl(c_16), t);
if((t == NULL))
goto label5 ;
t = z_15;
{
ATerm a_16 = NULL;
a_16 = t;
t = STRSGLR_set_filter_injection_count_on();
if((t == NULL))
goto fail4 ;
t = a_16;
goto label4 ;
}
label5 :
t = trm2;
{
ATerm b_16 = NULL;
b_16 = t;
t = STRSGLR_set_filter_injection_count_off();
if((t == NULL))
goto fail4 ;
t = b_16;
goto label4 ;
}
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_filter_eagerness_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_filter_eagerness_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_15 = NULL;
y_15 = t;
t = STRSGLR_get_filter_eagernes();
if((t == NULL))
goto fail3 ;
t = y_15;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_filter_eagerness_1_0 (StrSL sl, StrCL x_15, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_filter_eagerness_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
ATerm u_15 = NULL;
u_15 = t;
t = cl_fun(x_15)(cl_sl(x_15), t);
if((t == NULL))
goto label3 ;
t = u_15;
{
ATerm v_15 = NULL;
v_15 = t;
t = STRSGLR_set_filter_eagernes_on();
if((t == NULL))
goto fail2 ;
t = v_15;
goto label2 ;
}
label3 :
t = trm1;
{
ATerm w_15 = NULL;
w_15 = t;
t = STRSGLR_set_filter_eagernes_off();
if((t == NULL))
goto fail2 ;
t = w_15;
goto label2 ;
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
ATerm get_filter_direct_eagerness_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_filter_direct_eagerness_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_15 = NULL;
t_15 = t;
t = STRSGLR_get_filter_direct_eagernes();
if((t == NULL))
goto fail1 ;
t = t_15;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
ATerm set_filter_direct_eagerness_1_0 (StrSL sl, StrCL s_15, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "set_filter_direct_eagerness_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm p_15 = NULL;
p_15 = t;
t = cl_fun(s_15)(cl_sl(s_15), t);
if((t == NULL))
goto label1 ;
t = p_15;
{
ATerm q_15 = NULL;
q_15 = t;
t = STRSGLR_set_filter_direct_eagernes_on();
if((t == NULL))
goto fail0 ;
t = q_15;
goto label0 ;
}
label1 :
t = trm0;
{
ATerm r_15 = NULL;
r_15 = t;
t = STRSGLR_set_filter_direct_eagernes_off();
if((t == NULL))
goto fail0 ;
t = r_15;
goto label0 ;
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
