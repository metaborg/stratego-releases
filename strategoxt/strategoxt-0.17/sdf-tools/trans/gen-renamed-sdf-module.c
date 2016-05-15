#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_module_3;
static Symbol sym_Var_1;
static Symbol sym_RenamingSchemeFlag_0;
static Symbol sym_SdfResultModuleFlag_0;
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Error_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_syntax_1;
static Symbol sym_prod_3;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_layout_0;
static Symbol sym_sort_1;
static Symbol sym_file_start_0;
static Symbol sym_renamings_1;
static Symbol sym_symbol_2;
static Symbol sym_imports_1;
static Symbol sym_renamed_module_2;
static Symbol sym_SdfMainModuleFlag_0;
static void init_module_constructors (void)
{
sym_module_3 = ATmakeSymbol("module", 3, ATfalse);
ATprotectSymbol(sym_module_3);
sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
ATprotectSymbol(sym_Var_1);
sym_RenamingSchemeFlag_0 = ATmakeSymbol("RenamingSchemeFlag", 0, ATfalse);
ATprotectSymbol(sym_RenamingSchemeFlag_0);
sym_SdfResultModuleFlag_0 = ATmakeSymbol("SdfResultModuleFlag", 0, ATfalse);
ATprotectSymbol(sym_SdfResultModuleFlag_0);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
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
sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
ATprotectSymbol(sym_sort_1);
sym_file_start_0 = ATmakeSymbol("file-start", 0, ATfalse);
ATprotectSymbol(sym_file_start_0);
sym_renamings_1 = ATmakeSymbol("renamings", 1, ATfalse);
ATprotectSymbol(sym_renamings_1);
sym_symbol_2 = ATmakeSymbol("symbol", 2, ATfalse);
ATprotectSymbol(sym_symbol_2);
sym_imports_1 = ATmakeSymbol("imports", 1, ATfalse);
ATprotectSymbol(sym_imports_1);
sym_renamed_module_2 = ATmakeSymbol("renamed-module", 2, ATfalse);
ATprotectSymbol(sym_renamed_module_2);
sym_SdfMainModuleFlag_0 = ATmakeSymbol("SdfMainModuleFlag", 0, ATfalse);
ATprotectSymbol(sym_SdfMainModuleFlag_0);
}
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
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("core-sdf-parenthesize", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-desugar", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("-n", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("implodePT", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("Specify main module in sdf definition", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeInt(1);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(sym_SdfResultModuleFlag_0);
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(sym_RenamingSchemeFlag_0);
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("Name of the resulting module (required)", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("--name mod       ", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("Sort", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(sym_Var_1, term53);
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix the sort names with `id`", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("--prefix id      ", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("Scheme for the renaming of sorts", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("--scheme [...]   ", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm table_get_0_0 (StrSL sl, ATerm t);
ATerm separate_by_0_0 (StrSL sl, ATerm t);
ATerm concat_0_0 (StrSL sl, ATerm t);
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL l_60, ATerm t);
ATerm collect_1_0 (StrSL sl, StrCL y_41, ATerm t);
ATerm collect_om_1_0 (StrSL sl, StrCL x_41, ATerm t);
ATerm read_from_string_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL b_24, StrCL c_24, StrCL d_24, ATerm t);
ATerm if_verbose3_1_0 (StrSL sl, StrCL y_22, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm h_22, ATerm i_22, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL i_17, StrCL j_17, ATerm t);
ATerm xtc_exit_0_0 (StrSL sl, ATerm t);
ATerm xtc_find_0_0 (StrSL sl, ATerm t);
ATerm xtc_io_transform_1_0 (StrSL sl, StrCL p_16, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL i_16, StrCL j_16, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
ATerm renaming_scheme_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
ATerm sdf_result_module_option_0_0 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
ATerm apply_renaming_scheme_0_0 (StrSL sl, ATerm t);
ATerm create_module_0_0 (StrSL sl, ATerm t);
ATerm rename_sort_0_0 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
ATerm collect_sorts_0_0 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
ATerm main_gen_renamed_sdf_module_0_0 (StrSL sl, ATerm t);
static ATerm lifted19 (StrSL sl, ATerm t);
static ATerm lifted18 (StrSL sl, ATerm t);
static ATerm lifted17 (StrSL sl, ATerm t);
static ATerm lifted21 (StrSL sl, ATerm t);
ATerm xtc_sdf2_normalize_0_1 (StrSL sl, ATerm k_8, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted15 (StrSL sl, ATerm t);
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t);
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL i_6, ATerm t);
ATerm get_sdf_main_module_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm sdf_main_module_option_1_0 (StrSL sl, StrCL z_5, ATerm t);
ATerm error_if_empty_grammar_1_0 (StrSL sl, StrCL t_5, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm is_empty_grammar_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_gen_renamed_sdf_module_0_0(sl, t);
if((t == NULL))
goto fail49 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
ATerm renaming_scheme_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "renaming_scheme_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm28 = t;
struct str_closure r_104 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(r_104);
struct str_closure s_104 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(s_104);
struct str_closure t_104 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(t_104);
t = ArgOption_3_0(sl, lifted34_cl, lifted35_cl, lifted36_cl, t);
if((t == NULL))
goto label19 ;
goto label18 ;
label19 :
t = trm28;
{
struct str_closure u_104 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(u_104);
struct str_closure v_104 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(v_104);
struct str_closure w_104 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(w_104);
t = ArgOption_3_0(sl, lifted37_cl, lifted38_cl, lifted39_cl, t);
if((t == NULL))
goto fail42 ;
else
goto label18 ;
}
label18 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term61), term63);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail48 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_9 = NULL,u_9 = NULL,v_9 = NULL;
r_9 = t;
v_9 = t;
t = read_from_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail47 ;
u_9 = t;
t = v_9;
t = (ATerm) ATmakeAppl(sym__2, term47, u_9);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail47 ;
t = r_9;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--scheme", 0, ATtrue))))
goto fail46 ;
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
t = (ATerm) ATinsert(ATinsert(ATempty, term57), term59);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail45 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_9 = NULL,s_9 = NULL,t_9 = NULL;
q_9 = t;
t_9 = t;
s_9 = t;
t = (ATerm) ATmakeAppl(sym__2, term47, (ATerm) ATinsert(ATinsert(ATempty, term55), s_9));
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail44 ;
t = q_9;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--prefix", 0, ATtrue))))
goto fail43 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_result_module_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_result_module_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_104 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(o_104);
struct str_closure p_104 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(p_104);
struct str_closure q_104 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(q_104);
t = ArgOption_3_0(sl, lifted31_cl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail38 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term49), term51);
t = concat_strings_0_0(sl_up(sl), t);
if((t == NULL))
goto fail41 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
n_9 = t;
p_9 = t;
o_9 = t;
t = (ATerm) ATmakeAppl(sym__2, term43, o_9);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail40 ;
t = n_9;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("--name", 0, ATtrue))))
goto fail39 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
ATerm apply_renaming_scheme_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "apply_renaming_scheme_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,b_103 = NULL,c_103 = NULL;
sl_init_var(0, i_9);
if((i_9 == NULL))
{
i_9 = t;
}
else
if((i_9 != t))
goto fail36 ;
k_9 = t;
t = term47;
c_103 = t;
b_103 = t;
t = (ATerm) ATmakeAppl(sym__2, term45, b_103);
t = table_get_0_0(sl, t);
if((t == NULL))
goto fail36 ;
{
struct str_closure n_104 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(n_104);
t = map_1_0(sl, lifted30_cl, t);
if((t == NULL))
goto fail36 ;
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail36 ;
j_9 = t;
t = k_9;
t = j_9;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail36 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted30 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted30";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm26 = t;
t = is_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label17 ;
goto label16 ;
label17 :
t = trm26;
if(match_cons(t, sym_Var_1))
{
ATerm trm27 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm27) == ATmakeSymbol("Sort", 0, ATtrue))))
goto fail37 ;
}
else
goto fail37 ;
if((sl_readvar(0, sl) == NULL))
goto fail37 ;
else
{
t = sl_readvar(0, sl);
goto label16 ;
}
label16 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
ATerm create_module_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "create_module_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,z_102 = NULL,a_103 = NULL;
e_9 = t;
h_9 = t;
t = get_sdf_main_module_0_0(sl, t);
if((t == NULL))
goto fail35 ;
f_9 = t;
t = term43;
a_103 = t;
z_102 = t;
t = (ATerm) ATmakeAppl(sym__2, term45, z_102);
t = table_get_0_0(sl, t);
if((t == NULL))
goto fail35 ;
g_9 = t;
t = h_9;
t = (ATerm) ATmakeAppl(sym_module_3, g_9, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_imports_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_renamed_module_2, f_9, (ATerm) ATmakeAppl(sym_renamings_1, e_9))))), (ATerm) ATempty);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
ATerm rename_sort_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "rename_sort_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
if(match_cons(t, sym_sort_1))
{
b_9 = ATgetArgument(t, 0);
}
else
goto fail34 ;
d_9 = t;
t = b_9;
t = apply_renaming_scheme_0_0(sl, t);
if((t == NULL))
goto fail34 ;
c_9 = t;
t = d_9;
t = (ATerm) ATmakeAppl(sym_symbol_2, (ATerm)ATmakeAppl(sym_sort_1, b_9), (ATerm) ATmakeAppl(sym_sort_1, c_9));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
ATerm collect_sorts_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "collect_sorts_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_8 = NULL;
struct str_closure m_104 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(m_104);
t = collect_1_0(sl, lifted29_cl, t);
if((t == NULL))
goto fail32 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm19 = t;
ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
if(match_cons(t, sym_prod_3))
{
s_8 = ATgetArgument(t, 0);
{
ATerm trm20 = ATgetArgument(t, 1);
if(match_cons(trm20, sym_sort_1))
{
t_8 = ATgetArgument(trm20, 0);
}
else
goto label14 ;
}
u_8 = ATgetArgument(t, 2);
}
else
goto label14 ;
t = (ATerm) ATmakeAppl(sym_sort_1, t_8);
goto label13 ;
label14 :
t = trm19;
{
ATerm trm21 = t;
ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
if(match_cons(t, sym_prod_3))
{
v_8 = ATgetArgument(t, 0);
{
ATerm trm22 = ATgetArgument(t, 1);
if(match_cons(trm22, sym_cf_1))
{
ATerm trm23 = ATgetArgument(trm22, 0);
if(match_cons(trm23, sym_sort_1))
{
w_8 = ATgetArgument(trm23, 0);
}
else
goto label15 ;
}
else
goto label15 ;
}
x_8 = ATgetArgument(t, 2);
}
else
goto label15 ;
t = (ATerm) ATmakeAppl(sym_sort_1, w_8);
goto label13 ;
label15 :
t = trm21;
{
ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
if(match_cons(t, sym_prod_3))
{
y_8 = ATgetArgument(t, 0);
{
ATerm trm24 = ATgetArgument(t, 1);
if(match_cons(trm24, sym_lex_1))
{
ATerm trm25 = ATgetArgument(trm24, 0);
if(match_cons(trm25, sym_sort_1))
{
z_8 = ATgetArgument(trm25, 0);
}
else
goto fail33 ;
}
else
goto fail33 ;
}
a_9 = ATgetArgument(t, 2);
}
else
goto fail33 ;
t = (ATerm) ATmakeAppl(sym_sort_1, z_8);
goto label13 ;
}
}
label13 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_gen_renamed_sdf_module_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_gen_renamed_sdf_module_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure k_104 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(k_104);
struct str_closure l_104 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(l_104);
t = xtc_io_wrap_2_0(sl, lifted23_cl, lifted25_cl, t);
if((t == NULL))
goto fail26 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
o_8 = t;
q_8 = t;
t = get_sdf_main_module_0_0(sl_up(sl), t);
if((t == NULL))
goto fail29 ;
p_8 = t;
t = q_8;
t = p_8;
n_8 = t;
t = o_8;
t = xtc_sdf2_normalize_0_1(sl_up(sl), n_8, t);
if((t == NULL))
goto fail29 ;
{
struct str_closure j_104 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(j_104);
t = xtc_io_transform_1_0(sl_up(sl), lifted26_cl, t);
if((t == NULL))
goto fail29 ;
t = xtc_pp_sdf2_0_0(sl_up(sl), t);
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
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_104 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(h_104);
t = error_if_empty_grammar_1_0(sl_up(sl_up(sl)), lifted27_cl, t);
if((t == NULL))
goto fail30 ;
t = collect_sorts_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail30 ;
{
struct str_closure i_104 = { &(rename_sort_0_0) , sl_up(sl_up(sl)) };
StrCL lifted28_cl = &(i_104);
t = map_1_0(sl_up(sl_up(sl)), lifted28_cl, t);
if((t == NULL))
goto fail30 ;
t = create_module_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail30 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
t = xtc_exit_0_0(sl_up(sl_up(sl_up(sl))), t);
if((t == NULL))
goto fail31 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm17 = t;
struct str_closure g_104 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(g_104);
t = sdf_main_module_option_1_0(sl_up(sl), lifted24_cl, t);
if((t == NULL))
goto label11 ;
goto label10 ;
label11 :
t = trm17;
{
ATerm trm18 = t;
t = sdf_result_module_option_0_0(sl_up(sl), t);
if((t == NULL))
goto label12 ;
goto label10 ;
label12 :
t = trm18;
t = renaming_scheme_option_0_0(sl_up(sl), t);
if((t == NULL))
goto fail27 ;
else
goto label10 ;
}
label10 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_sdf2_normalize_0_1 (StrSL sl, ATerm k_8, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_sdf2_normalize_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, k_8);
{
struct str_closure a_104 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(a_104);
struct str_closure b_104 = { &(pass_verbose_0_0) , sl };
StrCL lifted22_cl = &(b_104);
struct str_closure c_104 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(c_104);
struct str_closure d_104 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(d_104);
t = xtc_transform_2_0(sl, lifted17_cl, lifted18_cl, t);
if((t == NULL))
goto fail21 ;
{
struct str_closure e_104 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(e_104);
struct str_closure f_104 = { &(pass_v_verbose_0_0) , sl };
StrCL lifted20_cl = &(f_104);
t = xtc_transform_2_0(sl, lifted19_cl, lifted20_cl, t);
if((t == NULL))
goto fail21 ;
t = xtc_transform_2_0(sl, lifted21_cl, lifted22_cl, t);
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
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
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
ATerm l_8 = NULL,m_8 = NULL;
m_8 = t;
t = pass_v_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail24 ;
l_8 = t;
t = m_8;
if((sl_readvar(0, sl) == NULL))
goto fail24 ;
else
{
ATerm trm16;
trm16 = CheckATermList(l_8);
if((trm16 == NULL))
goto fail24 ;
t = (ATerm) ATinsert(ATinsert(ATinsert((ATermList)trm16, sl_readvar(0, sl)), term33), term35);
}
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
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_sdf2_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_sdf2_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure o_103 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(o_103);
struct str_closure p_103 = { &(pass_verbose_0_0) , sl };
StrCL lifted16_cl = &(p_103);
struct str_closure q_103 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(q_103);
struct str_closure s_103 = { &(pass_verbose_0_0) , sl };
StrCL lifted11_cl = &(s_103);
t = xtc_transform_2_0(sl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure t_103 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(t_103);
struct str_closure v_103 = { &(pass_verbose_0_0) , sl };
StrCL lifted13_cl = &(v_103);
t = xtc_transform_2_0(sl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto fail16 ;
{
struct str_closure w_103 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(w_103);
t = xtc_ast2abox_1_0(sl, lifted14_cl, t);
if((t == NULL))
goto fail16 ;
t = xtc_transform_2_0(sl, lifted15_cl, lifted16_cl, t);
if((t == NULL))
goto fail16 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term27);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
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
fail19 :
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
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm add_arg_flags_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "add_arg_flags_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm12 = t;
if(match_cons(t, sym__2))
{
ATerm trm13 = ATgetArgument(t, 0);
ATerm trm14 = ATgetArgument(t, 1);
if(!(((ATgetType(trm14) == AT_LIST) && ATisEmpty(trm14))))
goto label9 ;
}
else
goto label9 ;
t = (ATerm) ATempty;
goto label8 ;
label9 :
t = trm12;
{
ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
if(match_cons(t, sym__2))
{
v_7 = ATgetArgument(t, 0);
w_7 = ATgetArgument(t, 1);
}
else
goto fail15 ;
y_7 = t;
t = w_7;
a_8 = t;
z_7 = t;
t = (ATerm) ATmakeAppl(sym__2, v_7, z_7);
t = separate_by_0_0(sl, t);
if((t == NULL))
goto fail15 ;
x_7 = t;
t = y_7;
{
ATerm trm15;
trm15 = CheckATermList(x_7);
if((trm15 == NULL))
goto fail15 ;
t = (ATerm) ATinsert((ATermList)trm15, v_7);
goto label8 ;
}
}
label8 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
ATerm pass_v_verbose_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pass_v_verbose_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure n_103 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(n_103);
t = (ATerm) ATempty;
t = if_verbose3_1_0(sl, lifted9_cl, t);
if((t == NULL))
goto fail13 ;
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
t = (ATerm) ATinsert(ATempty, term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_ast2abox_1_0 (StrSL sl, StrCL i_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_ast2abox_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, i_6);
{
struct str_closure l_103 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(l_103);
struct str_closure m_103 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(m_103);
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
ATerm j_6 = NULL,l_6 = NULL,k_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
l_6 = t;
t = term7;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail12 ;
j_6 = t;
t = l_6;
m_6 = t;
t = term7;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail12 ;
{
struct str_closure k_103 = { &(xtc_find_0_0) , sl_up(sl) };
StrCL lifted8_cl = &(k_103);
t = map_1_0(sl_up(sl), lifted8_cl, t);
if((t == NULL))
goto fail12 ;
o_6 = t;
n_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term17, n_6);
t = add_arg_flags_0_0(sl_up(sl), t);
if((t == NULL))
goto fail12 ;
k_6 = t;
t = m_6;
t = (ATerm) ATmakeAppl(sym__2, j_6, k_6);
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
ATerm sdf_main_module_option_1_0 (StrSL sl, StrCL z_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_main_module_option_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, z_5);
{
struct str_closure g_103 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(g_103);
struct str_closure h_103 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(h_103);
struct str_closure j_103 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(j_103);
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
ATerm c_6 = NULL,d_6 = NULL;
d_6 = t;
t = term7;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail8 ;
c_6 = t;
t = d_6;
t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term9), c_6), term11);
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
ATerm y_5 = NULL,a_6 = NULL,b_6 = NULL;
y_5 = t;
b_6 = t;
a_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term5, a_6);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail7 ;
t = y_5;
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
ATerm error_if_empty_grammar_1_0 (StrSL sl, StrCL t_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "error_if_empty_grammar_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm9 = t;
ATerm s_5 = NULL;
s_5 = t;
t = is_empty_grammar_0_0(sl, t);
if((t == NULL))
goto label3 ;
t = s_5;
{
ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
w_5 = t;
t = term1;
u_5 = t;
t = w_5;
x_5 = t;
t = term3;
v_5 = t;
t = x_5;
t = log_0_2(sl, u_5, v_5, t);
if((t == NULL))
goto fail4 ;
t = cl_fun(t_5)(cl_sl(t_5), t);
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
struct str_closure d_103 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(d_103);
struct str_closure e_103 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(e_103);
t = collect_om_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
{
struct str_closure f_103 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(f_103);
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
ATerm r_5 = NULL;
if(match_cons(t, sym_syntax_1))
{
r_5 = ATgetArgument(t, 0);
}
else
goto fail3 ;
t = r_5;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 71));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(table_get_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("table_get_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_om_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_om_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted39);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted39", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted35);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted35", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted34);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted34", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(renaming_scheme_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("renaming_scheme_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(sdf_result_module_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_result_module_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_renaming_scheme_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_renaming_scheme_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(create_module_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("create_module_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rename_sort_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rename_sort_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(collect_sorts_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("collect_sorts_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted23);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted23", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_gen_renamed_sdf_module_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_gen_renamed_sdf_module_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted21);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted21", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_sdf2_normalize_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_sdf2_normalize_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted15);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted15", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_sdf2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_sdf2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(add_arg_flags_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("add_arg_flags_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(pass_v_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_v_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
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
