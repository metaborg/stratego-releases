#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__3;
static Symbol sym__2;
static Symbol sym_stderr_0;
static Symbol sym_Notice_0;
static Symbol sym_Error_0;
static Symbol sym_FILE_1;
static Symbol sym_Patched_1;
static Symbol sym_Prune_0;
static Symbol sym_Patch_0;
static Symbol sym_OldTable_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Arg_1;
static Symbol sym_Arg2_2;
static Symbol sym_PP_Table_1;
static Symbol sym_PP_Entry_2;
static Symbol sym_Path1_1;
static Symbol sym_Path_2;
static void init_module_constructors (void)
{
sym__3 = ATmakeSymbol("", 3, ATfalse);
ATprotectSymbol(sym__3);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
ATprotectSymbol(sym_stderr_0);
sym_Notice_0 = ATmakeSymbol("Notice", 0, ATfalse);
ATprotectSymbol(sym_Notice_0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_Patched_1 = ATmakeSymbol("Patched", 1, ATfalse);
ATprotectSymbol(sym_Patched_1);
sym_Prune_0 = ATmakeSymbol("Prune", 0, ATfalse);
ATprotectSymbol(sym_Prune_0);
sym_Patch_0 = ATmakeSymbol("Patch", 0, ATfalse);
ATprotectSymbol(sym_Patch_0);
sym_OldTable_0 = ATmakeSymbol("OldTable", 0, ATfalse);
ATprotectSymbol(sym_OldTable_0);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
ATprotectSymbol(sym_Arg_1);
sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
ATprotectSymbol(sym_Arg2_2);
sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
ATprotectSymbol(sym_PP_Table_1);
sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
ATprotectSymbol(sym_PP_Entry_2);
sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
ATprotectSymbol(sym_Path1_1);
sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
ATprotectSymbol(sym_Path_2);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("Pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeInt(1);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_Notice_0);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("Using existing parsed pretty print-table: ", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("Parsing pretty-print-table", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-to-date", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym_OldTable_0);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(sym_Patch_0);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("on", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(sym__2, term25, term27);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(sym_Prune_0);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym__2, term31, term27);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(sym_stderr_0);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: pptable-diff [options]", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("   This program writes to standard error a list of\n   pretty-print rules that are contained in\n   pretty-print table 'old' but not in the input\n   parse table.\n\n   If the '--patch' switch is specified, the table\n   'old' is updated by adding pretty-print\n   rules that are in 'new' but not in 'old'.\n\n   If the '--prune' switch is specified, the table\n   'old' is returned from which obsolete entries\n   have been removed\n   \n   Warning: the input parse table must be in abstract syntax. So,\n   .pp files have to be parsed using parse-pp-table before\n   passing them to pptable-diff.\n", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _2_0 (StrSL sl, StrCL d_75, StrCL f_75, ATerm t);
ATerm hashtable_getlist_0_0 (StrSL sl, ATerm t);
ATerm hashtable_keys_0_0 (StrSL sl, ATerm t);
ATerm hashtable_remove_0_1 (StrSL sl, ATerm z_69, ATerm t);
ATerm hashtable_get_0_1 (StrSL sl, ATerm y_69, ATerm t);
ATerm hashtable_put_0_2 (StrSL sl, ATerm w_69, ATerm x_69, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL e_63, ATerm t);
ATerm isect_0_0 (StrSL sl, ATerm t);
ATerm Fst_0_0 (StrSL sl, ATerm t);
ATerm collect_1_0 (StrSL sl, StrCL l_44, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL j_43, ATerm t);
ATerm diff_0_0 (StrSL sl, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL r_36, ATerm t);
ATerm add_extension_0_0 (StrSL sl, ATerm t);
ATerm has_extension_0_1 (StrSL sl, ATerm n_34, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm fatal_error_0_0 (StrSL sl, ATerm t);
ATerm fprintnl_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm int_to_string_0_0 (StrSL sl, ATerm t);
ATerm geq_0_0 (StrSL sl, ATerm t);
ATerm double_quote_0_0 (StrSL sl, ATerm t);
ATerm escape_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL t_22, StrCL u_22, StrCL v_22, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL o_22, StrCL p_22, StrCL q_22, ATerm t);
ATerm default_system_usage_2_0 (StrSL sl, StrCL m_22, StrCL n_22, ATerm t);
ATerm system_about_0_0 (StrSL sl, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm x_20, ATerm y_20, ATerm t);
ATerm modification_time_0_0 (StrSL sl, ATerm t);
ATerm file_exists_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_wrap_5_0 (StrSL sl, StrCL l_15, StrCL n_15, StrCL o_15, StrCL p_15, StrCL q_15, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL r_13, StrCL s_13, ATerm t);
ATerm read_from_0_0 (StrSL sl, ATerm t);
ATerm S_1_0 (StrSL sl, StrCL o_13, ATerm t);
ATerm Arg_1_0 (StrSL sl, StrCL l_12, ATerm t);
ATerm Arg2_2_0 (StrSL sl, StrCL j_12, StrCL k_12, ATerm t);
ATerm SOpt_2_0 (StrSL sl, StrCL l_11, StrCL h_12, ATerm t);
ATerm selector_2_0 (StrSL sl, StrCL l_10, StrCL m_10, ATerm t);
ATerm parse_pptable_file_0_0 (StrSL sl, ATerm t);
ATerm pptable_path_to_string_0_0 (StrSL sl, ATerm t);
ATerm pptable_make_hashtable_0_0 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm maybe_parse_pptable_0_0 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
ATerm pptable_diff_0_0 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm desugar_0_0 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
ATerm patch_0_2 (StrSL sl, ATerm j_3, ATerm k_3, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
ATerm get_elements_0_1 (StrSL sl, ATerm b_3, ATerm t);
static ATerm lifted22 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
static ATerm lifted20 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted16 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted13 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm core_pptable_diff_0_1 (StrSL sl, ATerm u_1, ATerm t);
ATerm get_old_pp_table_0_0 (StrSL sl, ATerm t);
ATerm is_prune_enabled_0_0 (StrSL sl, ATerm t);
ATerm is_patch_enabled_0_0 (StrSL sl, ATerm t);
ATerm enable_prune_0_0 (StrSL sl, ATerm t);
ATerm enable_patch_0_0 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm pp_table_diff_options_0_0 (StrSL sl, ATerm t);
ATerm parse_pptable_arg_0_0 (StrSL sl, ATerm t);
ATerm lookup_parsed_pptable_arg_0_0 (StrSL sl, ATerm t);
ATerm read_pptable_file_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_93 = { &(pp_table_diff_options_0_0) , sl };
StrCL lifted42_cl = &(a_93);
struct str_closure b_93 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(b_93);
struct str_closure c_93 = { &(system_about_0_0) , sl };
StrCL lifted46_cl = &(c_93);
struct str_closure d_93 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(d_93);
struct str_closure e_93 = { &(pptable_diff_0_0) , sl };
StrCL lifted48_cl = &(e_93);
t = xtc_io_wrap_5_0(sl, lifted42_cl, lifted43_cl, lifted46_cl, lifted47_cl, lifted48_cl, t);
if((t == NULL))
goto fail42 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_92 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(y_92);
struct str_closure z_92 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(z_92);
t = default_system_usage_2_0(sl_up(sl), lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto fail43 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term51);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term49);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
ATerm maybe_parse_pptable_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "maybe_parse_pptable_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_5 = NULL;
ATerm trm34 = t;
ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
g_5 = t;
if(match_cons(t, sym_FILE_1))
{
f_5 = ATgetArgument(t, 0);
}
else
goto label44 ;
t = f_5;
i_5 = t;
t = term3;
h_5 = t;
t = i_5;
t = has_extension_0_1(sl, h_5, t);
if((t == NULL))
goto label44 ;
t = g_5;
t = f_5;
t = parse_pptable_file_0_0(sl, t);
if((t == NULL))
goto fail41 ;
else
goto label43 ;
label44 :
t = trm34;
t = read_from_0_0(sl, t);
if((t == NULL))
goto fail41 ;
else
goto label43 ;
label43 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
ATerm pptable_diff_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pptable_diff_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
t = maybe_parse_pptable_0_0(sl, t);
if((t == NULL))
goto fail39 ;
c_5 = t;
e_5 = t;
t = get_old_pp_table_0_0(sl, t);
if((t == NULL))
goto fail39 ;
t = read_pptable_file_0_0(sl, t);
if((t == NULL))
goto fail39 ;
d_5 = t;
t = e_5;
t = d_5;
a_5 = t;
t = c_5;
t = core_pptable_diff_0_1(sl, a_5, t);
if((t == NULL))
goto fail39 ;
t = write_to_0_0(sl, t);
if((t == NULL))
goto fail39 ;
{
ATerm trm32 = t;
ATerm z_4 = NULL;
z_4 = t;
{
ATerm trm33 = t;
t = is_patch_enabled_0_0(sl, t);
if((t == NULL))
goto label42 ;
goto label41 ;
label42 :
t = trm33;
t = is_prune_enabled_0_0(sl, t);
if((t == NULL))
goto label40 ;
else
goto label41 ;
label41 :
;
t = z_4;
}
{
struct str_closure w_92 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(w_92);
struct str_closure x_92 = { &(pass_verbose_0_0) , sl };
StrCL lifted41_cl = &(x_92);
t = xtc_transform_2_0(sl, lifted40_cl, lifted41_cl, t);
if((t == NULL))
goto fail39 ;
else
goto label39 ;
}
label40 :
t = trm32;
goto label39 ;
label39 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
ATerm desugar_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "desugar_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_92 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(v_92);
t = topdown_1_0(sl, lifted30_cl, t);
if((t == NULL))
goto fail35 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_92 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(u_92);
t = try_1_0(sl_up(sl), lifted31_cl, t);
if((t == NULL))
goto fail36 ;
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
ATerm trm24 = t;
struct str_closure k_92 = { &(int_to_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted32_cl = &(k_92);
t = Arg_1_0(sl_up(sl_up(sl)), lifted32_cl, t);
if((t == NULL))
goto label33 ;
goto label32 ;
label33 :
t = trm24;
{
ATerm trm25 = t;
struct str_closure l_92 = { &(int_to_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted33_cl = &(l_92);
struct str_closure n_92 = { &(int_to_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted34_cl = &(n_92);
t = Arg2_2_0(sl_up(sl_up(sl)), lifted33_cl, lifted34_cl, t);
if((t == NULL))
goto label34 ;
goto label32 ;
label34 :
t = trm25;
{
ATerm trm26 = t;
struct str_closure o_92 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted35_cl = &(o_92);
struct str_closure p_92 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted36_cl = &(p_92);
t = SOpt_2_0(sl_up(sl_up(sl)), lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto label35 ;
goto label32 ;
label35 :
t = trm26;
{
ATerm trm27 = t;
struct str_closure q_92 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(q_92);
t = S_1_0(sl_up(sl_up(sl)), lifted37_cl, t);
if((t == NULL))
goto label36 ;
goto label32 ;
label36 :
t = trm27;
{
ATerm trm28 = t;
struct str_closure r_92 = { &(int_to_string_0_0) , sl_up(sl_up(sl)) };
StrCL lifted38_cl = &(r_92);
struct str_closure s_92 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted39_cl = &(s_92);
t = selector_2_0(sl_up(sl_up(sl)), lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto label37 ;
goto label32 ;
label37 :
t = trm28;
{
ATerm trm29 = t;
ATerm r_4 = NULL,s_4 = NULL,u_4 = NULL,v_4 = NULL;
if(match_cons(t, sym_Patched_1))
{
ATerm trm30 = ATgetArgument(t, 0);
if(match_cons(trm30, sym_Path_2))
{
r_4 = ATgetArgument(trm30, 0);
s_4 = ATgetArgument(trm30, 1);
}
else
goto label38 ;
}
else
goto label38 ;
v_4 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, r_4), term45);
t = concat_strings_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto label38 ;
u_4 = t;
t = v_4;
t = (ATerm) ATmakeAppl(sym_Path_2, u_4, s_4);
goto label32 ;
label38 :
t = trm29;
{
ATerm t_4 = NULL,x_4 = NULL,y_4 = NULL;
if(match_cons(t, sym_Patched_1))
{
ATerm trm31 = ATgetArgument(t, 0);
if(match_cons(trm31, sym_Path1_1))
{
t_4 = ATgetArgument(trm31, 0);
}
else
goto fail37 ;
}
else
goto fail37 ;
y_4 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term45);
t = concat_strings_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail37 ;
x_4 = t;
t = y_4;
t = (ATerm) ATmakeAppl(sym_Path1_1, x_4);
goto label32 ;
}
}
}
}
}
}
label32 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = escape_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail38 ;
t = double_quote_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail38 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
ATerm patch_0_2 (StrSL sl, ATerm j_3, ATerm k_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "patch_0_2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(4);
sl_init_var(0, j_3);
sl_init_var(1, k_3);
{
ATerm l_3 = NULL,o_3 = NULL,s_3 = NULL,t_3 = NULL;
sl_init_var(2, s_3);
sl_init_var(3, t_3);
{
struct str_closure i_92 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(i_92);
if(match_cons(t, sym__2))
{
l_3 = ATgetArgument(t, 0);
o_3 = ATgetArgument(t, 1);
}
else
goto fail32 ;
t = l_3;
{
struct str_closure j_92 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(j_92);
t = map_1_0(sl, lifted28_cl, t);
if((t == NULL))
goto fail32 ;
t = o_3;
t = map_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto fail32 ;
}
}
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
{
ATerm u_3 = NULL,y_3 = NULL,z_3 = NULL;
u_3 = t;
if((sl_readvar(0, sl) == NULL))
goto fail34 ;
else
{
t = sl_readvar(0, sl);
}
z_3 = t;
if((sl_readvar(1, sl) == NULL))
goto fail34 ;
else
{
t = sl_readvar(1, sl);
}
t = hashtable_get_0_1(sl_up(sl), u_3, t);
if((t == NULL))
goto fail34 ;
y_3 = t;
t = z_3;
t = hashtable_put_0_2(sl_up(sl), u_3, y_3, t);
if((t == NULL))
goto fail34 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_3 = NULL,x_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL;
x_3 = t;
a_4 = t;
if((sl_readvar(0, sl) == NULL))
goto fail33 ;
else
{
t = sl_readvar(0, sl);
}
t = hashtable_get_0_1(sl_up(sl), x_3, t);
if((t == NULL))
goto fail33 ;
if(match_cons(t, sym__2))
{
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = ATgetArgument(t, 0);
}
else
if((sl_readvar(2, sl) != ATgetArgument(t, 0)))
goto fail33 ;
if((sl_readvar(3, sl) == NULL))
{
sl_readvar(3, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(3, sl) != ATgetArgument(t, 1)))
goto fail33 ;
}
else
goto fail33 ;
if((sl_readvar(0, sl) == NULL))
goto fail33 ;
else
{
t = sl_readvar(0, sl);
}
d_4 = t;
t = (ATerm) ATmakeAppl(sym_Patched_1, x_3);
b_4 = t;
t = d_4;
e_4 = t;
if(((sl_readvar(2, sl) == NULL) || (sl_readvar(3, sl) == NULL)))
goto fail33 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Patched_1, sl_readvar(2, sl)), sl_readvar(3, sl));
}
c_4 = t;
t = e_4;
t = hashtable_put_0_2(sl_up(sl), b_4, c_4, t);
if((t == NULL))
goto fail33 ;
t = a_4;
if((sl_readvar(0, sl) == NULL))
goto fail33 ;
else
{
t = sl_readvar(0, sl);
}
g_4 = t;
if((sl_readvar(1, sl) == NULL))
goto fail33 ;
else
{
t = sl_readvar(1, sl);
}
t = hashtable_get_0_1(sl_up(sl), x_3, t);
if((t == NULL))
goto fail33 ;
f_4 = t;
t = g_4;
t = hashtable_put_0_2(sl_up(sl), x_3, f_4, t);
if((t == NULL))
goto fail33 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_elements_0_1 (StrSL sl, ATerm b_3, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_elements_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,i_3 = NULL;
d_3 = t;
i_3 = t;
t = b_3;
t = hashtable_get_0_1(sl, d_3, t);
if((t == NULL))
goto fail29 ;
{
struct str_closure g_92 = { &(_Id) , sl };
StrCL lifted23_cl = &(g_92);
struct str_closure h_92 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(h_92);
t = _2_0(sl, lifted23_cl, lifted24_cl, t);
if((t == NULL))
goto fail29 ;
if(match_cons(t, sym__2))
{
e_3 = ATgetArgument(t, 0);
f_3 = ATgetArgument(t, 1);
}
else
goto fail29 ;
t = i_3;
t = (ATerm) ATmakeAppl(sym__3, d_3, e_3, f_3);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure f_92 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(f_92);
t = collect_1_0(sl_up(sl), lifted25_cl, t);
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
ATerm trm22 = t;
struct str_closure d_92 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted26_cl = &(d_92);
t = S_1_0(sl_up(sl_up(sl)), lifted26_cl, t);
if((t == NULL))
goto label30 ;
goto label29 ;
label30 :
t = trm22;
{
ATerm trm23 = t;
struct str_closure e_92 = { &(_Id) , sl_up(sl_up(sl)) };
StrCL lifted27_cl = &(e_92);
t = Arg_1_0(sl_up(sl_up(sl)), lifted27_cl, t);
if((t == NULL))
goto label31 ;
goto label29 ;
label31 :
t = trm23;
{
ATerm g_3 = NULL,h_3 = NULL;
if(match_cons(t, sym_Arg2_2))
{
g_3 = ATgetArgument(t, 0);
h_3 = ATgetArgument(t, 1);
}
else
goto fail31 ;
t = (ATerm) ATmakeAppl(sym_Arg_1, g_3);
goto label29 ;
}
}
label29 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
ATerm core_pptable_diff_0_1 (StrSL sl, ATerm u_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "core_pptable_diff_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(5);
{
ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,i_2 = NULL,v_2 = NULL,w_2 = NULL;
sl_init_var(0, b_2);
sl_init_var(1, d_2);
sl_init_var(2, e_2);
sl_init_var(3, f_2);
v_1 = t;
t = (ATerm) ATinsert(ATempty, u_1);
t = pptable_make_hashtable_0_0(sl, t);
if((t == NULL))
goto fail16 ;
if((d_2 == NULL))
{
d_2 = t;
}
else
if((d_2 != t))
goto fail16 ;
t = (ATerm) ATinsert(ATempty, v_1);
t = pptable_make_hashtable_0_0(sl, t);
if((t == NULL))
goto fail16 ;
if((b_2 == NULL))
{
b_2 = t;
}
else
if((b_2 != t))
goto fail16 ;
if((d_2 == NULL))
goto fail16 ;
else
{
t = d_2;
}
t = hashtable_keys_0_0(sl, t);
if((t == NULL))
goto fail16 ;
x_1 = t;
if((b_2 == NULL))
goto fail16 ;
else
{
t = b_2;
}
t = hashtable_keys_0_0(sl, t);
if((t == NULL))
goto fail16 ;
w_1 = t;
t = (ATerm) ATmakeAppl(sym__2, x_1, w_1);
t = isect_0_0(sl, t);
if((t == NULL))
goto fail16 ;
y_1 = t;
t = (ATerm) ATmakeAppl(sym__2, x_1, w_1);
t = diff_0_0(sl, t);
if((t == NULL))
goto fail16 ;
c_2 = t;
{
struct str_closure q_91 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(q_91);
t = map_1_0(sl, lifted11_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure s_91 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(s_91);
t = try_1_0(sl, lifted12_cl, t);
if((t == NULL))
goto fail16 ;
t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
t = diff_0_0(sl, t);
if((t == NULL))
goto fail16 ;
if((f_2 == NULL))
{
f_2 = t;
}
else
if((f_2 != t))
goto fail16 ;
{
struct str_closure t_91 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(t_91);
t = map_1_0(sl, lifted13_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure u_91 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(u_91);
t = try_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail16 ;
t = y_1;
{
struct str_closure v_91 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(v_91);
t = map_1_0(sl, lifted15_cl, t);
if((t == NULL))
goto fail16 ;
z_1 = t;
t = y_1;
{
struct str_closure w_91 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(w_91);
t = map_1_0(sl, lifted16_cl, t);
if((t == NULL))
goto fail16 ;
a_2 = t;
t = (ATerm) ATmakeAppl(sym__2, z_1, a_2);
t = diff_0_0(sl, t);
if((t == NULL))
goto fail16 ;
i_2 = t;
w_2 = t;
{
struct str_closure x_91 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(x_91);
t = map_1_0(sl, lifted17_cl, t);
if((t == NULL))
goto fail16 ;
v_2 = t;
t = w_2;
t = v_2;
if((e_2 == NULL))
{
e_2 = t;
}
else
if((e_2 != t))
goto fail16 ;
t = i_2;
{
struct str_closure y_91 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(y_91);
t = map_1_0(sl, lifted18_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure z_91 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(z_91);
t = try_1_0(sl, lifted19_cl, t);
if((t == NULL))
goto fail16 ;
{
ATerm trm13 = t;
ATerm l_2 = NULL;
l_2 = t;
t = is_patch_enabled_0_0(sl, t);
if((t == NULL))
goto label16 ;
t = l_2;
if(((f_2 == NULL) || (e_2 == NULL)))
goto fail16 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, f_2, e_2);
}
if(((d_2 == NULL) || (b_2 == NULL)))
goto fail16 ;
else
{
t = patch_0_2(sl, d_2, b_2, t);
if((t == NULL))
goto fail16 ;
else
goto label15 ;
}
label16 :
t = trm13;
goto label15 ;
label15 :
;
{
ATerm trm14 = t;
ATerm m_2 = NULL;
m_2 = t;
t = is_prune_enabled_0_0(sl, t);
if((t == NULL))
goto label18 ;
t = m_2;
{
ATerm a_91 = NULL,d_91 = NULL;
sl_init_var(4, a_91);
{
struct str_closure a_92 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(a_92);
t = c_2;
d_91 = t;
if((d_2 == NULL))
goto fail16 ;
else
{
t = d_2;
}
if((a_91 == NULL))
{
a_91 = t;
}
else
if((a_91 != t))
goto fail16 ;
t = d_91;
t = map_1_0(sl, lifted20_cl, t);
if((t == NULL))
goto fail16 ;
else
goto label17 ;
}
}
label18 :
t = trm14;
goto label17 ;
label17 :
;
{
ATerm trm15 = t;
ATerm n_2 = NULL;
n_2 = t;
{
ATerm trm16 = t;
t = is_patch_enabled_0_0(sl, t);
if((t == NULL))
goto label22 ;
goto label21 ;
label22 :
t = trm16;
t = is_prune_enabled_0_0(sl, t);
if((t == NULL))
goto label20 ;
else
goto label21 ;
label21 :
;
t = n_2;
}
{
ATerm z_2 = NULL,a_3 = NULL;
if((d_2 == NULL))
goto fail16 ;
else
{
t = d_2;
}
t = hashtable_getlist_0_0(sl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure b_92 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(b_92);
t = map_1_0(sl, lifted21_cl, t);
if((t == NULL))
goto fail16 ;
t = desugar_0_0(sl, t);
if((t == NULL))
goto fail16 ;
a_3 = t;
z_2 = t;
t = (ATerm) ATmakeAppl(sym_PP_Table_1, z_2);
goto label19 ;
}
}
label20 :
t = trm15;
goto label19 ;
label19 :
;
{
ATerm trm19 = t;
ATerm q_2 = NULL;
q_2 = t;
{
ATerm trm20 = t;
t = is_patch_enabled_0_0(sl, t);
if((t == NULL))
goto label26 ;
goto label24 ;
label26 :
t = trm20;
goto label25 ;
label25 :
;
t = q_2;
}
{
struct str_closure c_92 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(c_92);
t = try_1_0(sl, lifted22_cl, t);
if((t == NULL))
goto fail16 ;
else
goto label23 ;
}
label24 :
t = trm19;
goto label23 ;
label23 :
;
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
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(2, sl) == NULL) || (sl_readvar(3, sl) == NULL)))
goto fail28 ;
else
{
t = (ATerm) ATinsert(ATinsert(ATempty, sl_readvar(3, sl)), sl_readvar(2, sl));
}
t = concat_0_0(sl_up(sl), t);
if((t == NULL))
goto fail28 ;
{
ATerm trm21 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label28 ;
goto fail28 ;
label28 :
t = trm21;
goto label27 ;
label27 :
;
t = term9;
t = xtc_exit_0_0(sl_up(sl), t);
if((t == NULL))
goto fail28 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_2 = NULL,p_2 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm17 = ATgetArgument(t, 0);
ATerm trm18 = ATgetArgument(t, 1);
if(match_cons(trm18, sym__2))
{
o_2 = ATgetArgument(trm18, 0);
p_2 = ATgetArgument(trm18, 1);
}
else
goto fail27 ;
}
else
goto fail27 ;
t = (ATerm) ATmakeAppl(sym_PP_Entry_2, o_2, p_2);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_91 = NULL;
c_91 = t;
if((sl_readvar(4, sl) == NULL))
goto fail26 ;
else
{
t = sl_readvar(4, sl);
}
t = hashtable_remove_0_1(sl_up(sl), c_91, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_2 = NULL,y_2 = NULL;
ATerm trm12 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label14 ;
goto fail25 ;
label14 :
t = trm12;
goto label13 ;
label13 :
;
y_2 = t;
x_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term37, (ATerm) ATinsert(ATinsert(ATempty, x_2), term43));
t = fprintnl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail25 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_2 = NULL;
if(match_cons(t, sym__3))
{
ATerm trm10 = ATgetArgument(t, 0);
k_2 = ATgetArgument(t, 1);
{
ATerm trm11 = ATgetArgument(t, 2);
}
}
else
goto fail24 ;
t = k_2;
t = pptable_path_to_string_0_0(sl_up(sl), t);
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
ATerm j_2 = NULL;
if(match_cons(t, sym__3))
{
j_2 = ATgetArgument(t, 0);
{
ATerm trm8 = ATgetArgument(t, 1);
}
{
ATerm trm9 = ATgetArgument(t, 2);
}
}
else
goto fail23 ;
t = j_2;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail22 ;
else
{
t = get_elements_0_1(sl_up(sl), sl_readvar(0, sl), t);
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
if((sl_readvar(1, sl) == NULL))
goto fail21 ;
else
{
t = get_elements_0_1(sl_up(sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail21 ;
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
ATerm t_2 = NULL,u_2 = NULL;
ATerm trm7 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label12 ;
goto fail20 ;
label12 :
t = trm7;
goto label11 ;
label11 :
;
u_2 = t;
t_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term37, (ATerm) ATinsert(ATinsert(ATempty, t_2), term41));
t = fprintnl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_2 = NULL;
h_2 = t;
if((sl_readvar(0, sl) == NULL))
goto fail19 ;
else
{
t = sl_readvar(0, sl);
}
t = hashtable_get_0_1(sl_up(sl), h_2, t);
if((t == NULL))
goto fail19 ;
t = Fst_0_0(sl_up(sl), t);
if((t == NULL))
goto fail19 ;
t = pptable_path_to_string_0_0(sl_up(sl), t);
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
{
ATerm r_2 = NULL,s_2 = NULL;
ATerm trm6 = t;
if(!(((ATgetType(t) == AT_LIST) && ATisEmpty(t))))
goto label10 ;
goto fail18 ;
label10 :
t = trm6;
goto label9 ;
label9 :
;
s_2 = t;
r_2 = t;
t = (ATerm) ATmakeAppl(sym__2, term37, (ATerm) ATinsert(ATinsert(ATempty, r_2), term39));
t = fprintnl_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_2 = NULL;
g_2 = t;
if((sl_readvar(1, sl) == NULL))
goto fail17 ;
else
{
t = sl_readvar(1, sl);
}
t = hashtable_get_0_1(sl_up(sl), g_2, t);
if((t == NULL))
goto fail17 ;
t = Fst_0_0(sl_up(sl), t);
if((t == NULL))
goto fail17 ;
t = pptable_path_to_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail17 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_old_pp_table_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_old_pp_table_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm5 = t;
t = term21;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label8 ;
goto label7 ;
label8 :
t = trm5;
t = (ATerm) ATinsert(ATempty, term35);
t = fatal_error_0_0(sl, t);
if((t == NULL))
goto fail15 ;
else
goto label7 ;
label7 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_prune_enabled_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_prune_enabled_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail14 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("on", 0, ATtrue))))
goto fail14 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm is_patch_enabled_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "is_patch_enabled_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term25;
t = get_config_0_0(sl, t);
if((t == NULL))
goto fail13 ;
if(!((ATgetSymbol(t) == ATmakeSymbol("on", 0, ATtrue))))
goto fail13 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
ATerm enable_prune_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "enable_prune_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term33;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail12 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm enable_patch_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "enable_patch_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
t = set_config_0_0(sl, t);
if((t == NULL))
goto fail11 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm pp_table_diff_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pp_table_diff_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3 = t;
struct str_closure g_91 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(g_91);
struct str_closure h_91 = { &(enable_patch_0_0) , sl };
StrCL lifted3_cl = &(h_91);
struct str_closure i_91 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(i_91);
t = Option_3_0(sl, lifted2_cl, lifted3_cl, lifted4_cl, t);
if((t == NULL))
goto label5 ;
goto label4 ;
label5 :
t = trm3;
{
ATerm trm4 = t;
struct str_closure k_91 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(k_91);
struct str_closure l_91 = { &(enable_prune_0_0) , sl };
StrCL lifted6_cl = &(l_91);
struct str_closure m_91 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(m_91);
t = Option_3_0(sl, lifted5_cl, lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto label6 ;
goto label4 ;
label6 :
t = trm4;
{
struct str_closure n_91 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(n_91);
struct str_closure o_91 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(o_91);
struct str_closure p_91 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(p_91);
t = ArgOption_3_0(sl, lifted8_cl, lifted9_cl, lifted10_cl, t);
if((t == NULL))
goto fail3 ;
else
goto label4 ;
}
}
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_1 = NULL,t_1 = NULL;
t_1 = t;
s_1 = t;
t = (ATerm) ATmakeAppl(sym__2, term21, s_1);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--old", 0, ATtrue))))
goto fail8 ;
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
t = term19;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--prune", 0, ATtrue))))
goto fail6 ;
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
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--patch", 0, ATtrue))))
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_pptable_arg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_pptable_arg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
t = parse_pptable_file_0_0(sl, t);
if((t == NULL))
goto fail2 ;
q_1 = t;
t = term11;
o_1 = t;
t = q_1;
r_1 = t;
t = term15;
p_1 = t;
t = r_1;
t = log_0_2(sl, o_1, p_1, t);
if((t == NULL))
goto fail2 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm lookup_parsed_pptable_arg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lookup_parsed_pptable_arg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,d_1 = NULL,h_1 = NULL,b_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
e_1 = t;
g_1 = t;
f_1 = t;
t = (ATerm) ATmakeAppl(sym__2, f_1, term1);
t = add_extension_0_0(sl, t);
if((t == NULL))
goto fail1 ;
t = file_exists_0_0(sl, t);
if((t == NULL))
goto fail1 ;
c_1 = t;
t = e_1;
h_1 = t;
d_1 = t;
t = (ATerm) ATmakeAppl(sym__2, c_1, d_1);
b_1 = t;
{
struct str_closure e_91 = { &(modification_time_0_0) , sl };
StrCL lifted0_cl = &(e_91);
struct str_closure f_91 = { &(modification_time_0_0) , sl };
StrCL lifted1_cl = &(f_91);
t = _2_0(sl, lifted0_cl, lifted1_cl, t);
if((t == NULL))
goto fail1 ;
t = geq_0_0(sl, t);
if((t == NULL))
goto fail1 ;
t = b_1;
t = Fst_0_0(sl, t);
if((t == NULL))
goto fail1 ;
k_1 = t;
t = term11;
i_1 = t;
t = k_1;
l_1 = t;
n_1 = t;
m_1 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, m_1), term13);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail1 ;
j_1 = t;
t = l_1;
t = log_0_2(sl, i_1, j_1, t);
if((t == NULL))
goto fail1 ;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail1 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_pptable_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_pptable_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm p_0 = NULL,r_0 = NULL,s_0 = NULL;
p_0 = t;
s_0 = t;
t = term1;
r_0 = t;
t = s_0;
t = has_extension_0_1(sl, r_0, t);
if((t == NULL))
goto label1 ;
t = p_0;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
ATerm q_0 = NULL,t_0 = NULL,u_0 = NULL;
q_0 = t;
u_0 = t;
t = term3;
t_0 = t;
t = u_0;
t = has_extension_0_1(sl, t_0, t);
if((t == NULL))
goto label2 ;
t = q_0;
{
ATerm trm2 = t;
t = lookup_parsed_pptable_arg_0_0(sl, t);
if((t == NULL))
goto label3 ;
goto label0 ;
label3 :
t = trm2;
t = parse_pptable_arg_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label0 ;
}
label2 :
t = trm1;
{
ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
x_0 = t;
t = term5;
v_0 = t;
t = x_0;
y_0 = t;
a_1 = t;
z_0 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, z_0), term7);
w_0 = t;
t = y_0;
t = log_0_2(sl, v_0, w_0, t);
if((t == NULL))
goto fail0 ;
t = term9;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
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
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_getlist_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_getlist_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_keys_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_keys_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_remove_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_remove_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_get_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_get_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(hashtable_put_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("hashtable_put_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(isect_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("isect_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Fst_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Fst_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(diff_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("diff_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_extension_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_extension_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(has_extension_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("has_extension_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fatal_error_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fatal_error_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fprintnl_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fprintnl_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(int_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("int_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(geq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("geq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(escape_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("escape_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(default_system_usage_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("default_system_usage_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(system_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("system_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(modification_time_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("modification_time_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(file_exists_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("file_exists_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_5_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_5_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(S_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("S_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Arg_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Arg_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Arg2_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Arg2_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(SOpt_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("SOpt_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(selector_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("selector_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_pptable_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_pptable_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pptable_path_to_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pptable_path_to_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pptable_make_hashtable_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pptable_make_hashtable_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(maybe_parse_pptable_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("maybe_parse_pptable_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pptable_diff_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pptable_diff_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted37);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted37", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted31);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted31", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(desugar_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("desugar_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(patch_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("patch_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted25);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted25", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted24);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted24", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_elements_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_elements_0_1", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted16);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted16", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(core_pptable_diff_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("core_pptable_diff_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_old_pp_table_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_old_pp_table_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_prune_enabled_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_prune_enabled_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_patch_enabled_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_patch_enabled_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(enable_prune_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("enable_prune_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(enable_patch_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("enable_patch_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pp_table_diff_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pp_table_diff_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_pptable_arg_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_pptable_arg_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lookup_parsed_pptable_arg_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lookup_parsed_pptable_arg_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_pptable_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_pptable_file_0_0", 0, ATtrue)), &(closures[closures_index]));
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
