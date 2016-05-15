#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Error_0;
static Symbol sym_Critical_0;
static Symbol sym_FILE_1;
static Symbol sym_NoneTerm_0;
static Symbol sym_SomeTerm_0;
static Symbol sym_ConcTerm_0;
static Symbol sym_TupleTerm_1;
static Symbol sym_NilTerm_0;
static Symbol sym_ConsTerm_0;
static Symbol sym_Term_1;
static Symbol sym_Nonterm_1;
static Symbol sym_Int_0;
static Symbol sym_String_0;
static Symbol sym_Ref_1;
static Symbol sym_Appl_2;
static Symbol sym_ProdRule_2;
static Symbol sym_ProdRules_1;
static Symbol sym_Start_1;
static Symbol sym_RTG_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Op_2;
static Symbol sym_NoAnnoList_1;
static Symbol sym_Wld_0;
static Symbol sym_SVar_1;
static Symbol sym_Match_1;
static Symbol sym_CallNoArgs_1;
static Symbol sym_Choice_2;
static Symbol sym_SDefNoArgs_2;
static Symbol sym_Module_2;
static Symbol sym_Strategies_1;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_Critical_0 = ATmakeSymbol("Critical", 0, ATfalse);
ATprotectSymbol(sym_Critical_0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
sym_NoneTerm_0 = ATmakeSymbol("NoneTerm", 0, ATfalse);
ATprotectSymbol(sym_NoneTerm_0);
sym_SomeTerm_0 = ATmakeSymbol("SomeTerm", 0, ATfalse);
ATprotectSymbol(sym_SomeTerm_0);
sym_ConcTerm_0 = ATmakeSymbol("ConcTerm", 0, ATfalse);
ATprotectSymbol(sym_ConcTerm_0);
sym_TupleTerm_1 = ATmakeSymbol("TupleTerm", 1, ATfalse);
ATprotectSymbol(sym_TupleTerm_1);
sym_NilTerm_0 = ATmakeSymbol("NilTerm", 0, ATfalse);
ATprotectSymbol(sym_NilTerm_0);
sym_ConsTerm_0 = ATmakeSymbol("ConsTerm", 0, ATfalse);
ATprotectSymbol(sym_ConsTerm_0);
sym_Term_1 = ATmakeSymbol("Term", 1, ATfalse);
ATprotectSymbol(sym_Term_1);
sym_Nonterm_1 = ATmakeSymbol("Nonterm", 1, ATfalse);
ATprotectSymbol(sym_Nonterm_1);
sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
ATprotectSymbol(sym_Int_0);
sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
ATprotectSymbol(sym_String_0);
sym_Ref_1 = ATmakeSymbol("Ref", 1, ATfalse);
ATprotectSymbol(sym_Ref_1);
sym_Appl_2 = ATmakeSymbol("Appl", 2, ATfalse);
ATprotectSymbol(sym_Appl_2);
sym_ProdRule_2 = ATmakeSymbol("ProdRule", 2, ATfalse);
ATprotectSymbol(sym_ProdRule_2);
sym_ProdRules_1 = ATmakeSymbol("ProdRules", 1, ATfalse);
ATprotectSymbol(sym_ProdRules_1);
sym_Start_1 = ATmakeSymbol("Start", 1, ATfalse);
ATprotectSymbol(sym_Start_1);
sym_RTG_2 = ATmakeSymbol("RTG", 2, ATfalse);
ATprotectSymbol(sym_RTG_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
ATprotectSymbol(sym_Op_2);
sym_NoAnnoList_1 = ATmakeSymbol("NoAnnoList", 1, ATfalse);
ATprotectSymbol(sym_NoAnnoList_1);
sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
ATprotectSymbol(sym_Wld_0);
sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
ATprotectSymbol(sym_SVar_1);
sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
ATprotectSymbol(sym_Match_1);
sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
ATprotectSymbol(sym_CallNoArgs_1);
sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
ATprotectSymbol(sym_Choice_2);
sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
ATprotectSymbol(sym_SDefNoArgs_2);
sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
ATprotectSymbol(sym_Module_2);
sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
ATprotectSymbol(sym_Strategies_1);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("Cannot rewrite prodrule", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_Wld_0);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("--module", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("--module n       Generated module has name n", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_Critical_0);
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("No module name specified. Use the --module option to specify a module name. See also --help.", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeInt(1);
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm map_1_0 (StrSL sl, StrCL l_195, ATerm t);
ATerm remove_extension_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm conc_strings_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL r_153, StrCL s_153, StrCL t_153, ATerm t);
ATerm pass_verbose_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm u_144, ATerm v_144, ATerm t);
ATerm log_0_3 (StrSL sl, ATerm r_144, ATerm s_144, ATerm t_144, ATerm t);
ATerm xtc_io_wrap_2_0 (StrSL sl, StrCL h_134, StrCL l_134, ATerm t);
ATerm xtc_ensure_file_0_0 (StrSL sl, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm xtc_transform_2_0 (StrSL sl, StrCL w_132, StrCL x_132, ATerm t);
ATerm parse_rtg_file_0_0 (StrSL sl, ATerm t);
ATerm rtg_reduce_0_0 (StrSL sl, ATerm t);
ATerm rtg_group_productions_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
ATerm main_rtg2typematch_0_0 (StrSL sl, ATerm t);
ATerm xtc_rtg_front_end_0_0 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
ATerm xtc_pp_abstract_stratego_0_0 (StrSL sl, ATerm t);
ATerm guess_module_name_0_0 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm module_option_0_0 (StrSL sl, ATerm t);
ATerm get_typematch_id_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm create_call_0_0 (StrSL sl, ATerm t);
ATerm alts_to_strat_0_0 (StrSL sl, ATerm t);
ATerm prodrule_to_sdef_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm core_rtg2typematch_0_1 (StrSL sl, ATerm x_27, ATerm t);
ATerm term_to_strid_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_rtg2typematch_0_0(sl, t);
if((t == NULL))
goto fail19 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_rtg2typematch_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_rtg2typematch_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_246 = { &(module_option_0_0) , sl };
StrCL lifted7_cl = &(u_246);
struct str_closure v_246 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(v_246);
t = xtc_io_wrap_2_0(sl, lifted7_cl, lifted8_cl, t);
if((t == NULL))
goto fail17 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
t = xtc_rtg_front_end_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
z_35 = t;
b_36 = t;
t = guess_module_name_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
a_36 = t;
t = b_36;
t = a_36;
y_35 = t;
t = z_35;
t = core_rtg2typematch_0_1(sl_up(sl), y_35, t);
if((t == NULL))
goto fail18 ;
t = write_to_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
t = xtc_pp_abstract_stratego_0_0(sl_up(sl), t);
if((t == NULL))
goto fail18 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_rtg_front_end_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_rtg_front_end_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_35 = NULL;
t = xtc_ensure_file_0_0(sl, t);
if((t == NULL))
goto fail16 ;
if(match_cons(t, sym_FILE_1))
{
d_35 = ATgetArgument(t, 0);
}
else
goto fail16 ;
t = d_35;
t = parse_rtg_file_0_0(sl, t);
if((t == NULL))
goto fail16 ;
t = rtg_reduce_0_0(sl, t);
if((t == NULL))
goto fail16 ;
t = rtg_group_productions_0_0(sl, t);
if((t == NULL))
goto fail16 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm xtc_pp_abstract_stratego_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "xtc_pp_abstract_stratego_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure s_246 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(s_246);
struct str_closure t_246 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(t_246);
t = xtc_transform_2_0(sl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail13 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_35 = NULL,c_35 = NULL;
c_35 = t;
t = term41;
t = pass_verbose_0_0(sl_up(sl), t);
if((t == NULL))
goto fail15 ;
b_35 = t;
t = c_35;
{
ATerm trm21;
trm21 = CheckATermList(b_35);
if((trm21 == NULL))
goto fail15 ;
t = (ATerm) ATinsert((ATermList)trm21, term43);
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm guess_module_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "guess_module_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm18 = t;
t = term25;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label17 ;
goto label16 ;
label17 :
t = trm18;
{
ATerm trm19 = t;
t = term29;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label18 ;
t = remove_extension_0_0(sl, t);
if((t == NULL))
goto label18 ;
goto label16 ;
label18 :
t = trm19;
{
ATerm trm20 = t;
t = term31;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label19 ;
t = remove_extension_0_0(sl, t);
if((t == NULL))
goto label19 ;
goto label16 ;
label19 :
t = trm20;
{
ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,d_30 = NULL;
z_29 = t;
t = term33;
x_29 = t;
t = z_29;
d_30 = t;
t = term35;
y_29 = t;
t = d_30;
t = log_0_2(sl, x_29, y_29, t);
if((t == NULL))
goto fail12 ;
t = term37;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail12 ;
else
goto label16 ;
}
}
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
ATerm module_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "module_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_246 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(p_246);
struct str_closure q_246 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(q_246);
struct str_closure r_246 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(r_246);
t = ArgOption_3_0(sl, lifted2_cl, lifted3_cl, lifted4_cl, t);
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
t = term27;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_29 = NULL,r_29 = NULL,s_29 = NULL;
n_29 = t;
s_29 = t;
r_29 = t;
t = (ATerm) ATmakeAppl(sym__2, term25, r_29);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail10 ;
t = n_29;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("--module", 0, ATtrue))))
goto fail9 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_typematch_id_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_typematch_id_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm16 = t;
if(!(match_cons(t, sym_String_0)))
goto label14 ;
t = term19;
goto label13 ;
label14 :
t = trm16;
{
ATerm trm17 = t;
if(!(match_cons(t, sym_Int_0)))
goto label15 ;
t = term21;
goto label13 ;
label15 :
t = trm17;
{
ATerm m_29 = NULL;
if(match_cons(t, sym_Nonterm_1))
{
m_29 = ATgetArgument(t, 0);
}
else
goto fail7 ;
t = (ATerm) ATmakeAppl(sym__2, term23, m_29);
t = conc_strings_0_0(sl, t);
if((t == NULL))
goto fail7 ;
else
goto label13 ;
}
}
label13 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm create_call_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "create_call_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm15 = t;
ATerm c_29 = NULL,d_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
if(match_cons(t, sym_Appl_2))
{
h_29 = ATgetArgument(t, 0);
c_29 = ATgetArgument(t, 1);
}
else
goto label12 ;
j_29 = t;
t = c_29;
{
struct str_closure n_246 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(n_246);
t = map_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto label12 ;
d_29 = t;
t = h_29;
t = term_to_strid_0_0(sl, t);
if((t == NULL))
goto label12 ;
i_29 = t;
t = j_29;
t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_NoAnnoList_1, (ATerm) ATmakeAppl(sym_Op_2, i_29, d_29)));
}
goto label11 ;
label12 :
t = trm15;
{
ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
if(match_cons(t, sym_Ref_1))
{
z_28 = ATgetArgument(t, 0);
}
else
goto fail5 ;
b_29 = t;
t = z_28;
t = get_typematch_id_0_0(sl, t);
if((t == NULL))
goto fail5 ;
a_29 = t;
t = b_29;
t = (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, a_29));
goto label11 ;
}
label11 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm alts_to_strat_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "alts_to_strat_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm10 = t;
ATerm y_28 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
y_28 = ATgetFirst((ATermList) t);
{
ATerm trm11 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm11) == AT_LIST) && ATisEmpty(trm11))))
goto label10 ;
}
}
else
goto label10 ;
t = y_28;
t = create_call_0_0(sl, t);
if((t == NULL))
goto label10 ;
goto label9 ;
label10 :
t = trm10;
{
ATerm q_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
q_28 = ATgetFirst((ATermList) t);
{
ATerm trm12 = (ATerm) ATgetNext((ATermList) t);
v_28 = trm12;
if(((ATgetType(trm12) == AT_LIST) && !(ATisEmpty(trm12))))
{
ATerm trm13 = ATgetFirst((ATermList) trm12);
ATerm trm14 = (ATerm) ATgetNext((ATermList) trm12);
}
else
goto fail4 ;
}
}
else
goto fail4 ;
x_28 = t;
t = q_28;
t = create_call_0_0(sl, t);
if((t == NULL))
goto fail4 ;
u_28 = t;
t = v_28;
t = alts_to_strat_0_0(sl, t);
if((t == NULL))
goto fail4 ;
w_28 = t;
t = x_28;
t = (ATerm) ATmakeAppl(sym_Choice_2, u_28, w_28);
goto label9 ;
}
label9 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm prodrule_to_sdef_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "prodrule_to_sdef_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
if(match_cons(t, sym_ProdRule_2))
{
l_28 = ATgetArgument(t, 0);
n_28 = ATgetArgument(t, 1);
}
else
goto fail3 ;
p_28 = t;
t = l_28;
t = get_typematch_id_0_0(sl, t);
if((t == NULL))
goto fail3 ;
m_28 = t;
t = n_28;
t = alts_to_strat_0_0(sl, t);
if((t == NULL))
goto fail3 ;
o_28 = t;
t = p_28;
t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, m_28, o_28);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm core_rtg2typematch_0_1 (StrSL sl, ATerm x_27, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "core_rtg2typematch_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
if(match_cons(t, sym_RTG_2))
{
ATerm trm7 = ATgetArgument(t, 0);
if(match_cons(trm7, sym_Start_1))
{
y_27 = ATgetArgument(trm7, 0);
}
else
goto fail1 ;
{
ATerm trm8 = ATgetArgument(t, 1);
if(match_cons(trm8, sym_ProdRules_1))
{
z_27 = ATgetArgument(trm8, 0);
}
else
goto fail1 ;
}
}
else
goto fail1 ;
b_28 = t;
t = z_27;
{
struct str_closure m_246 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(m_246);
t = map_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail1 ;
a_28 = t;
t = b_28;
t = (ATerm) ATmakeAppl(sym_Module_2, x_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, a_28)));
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm9 = t;
t = prodrule_to_sdef_0_0(sl_up(sl), t);
if((t == NULL))
goto label8 ;
goto label7 ;
label8 :
t = trm9;
{
ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
f_28 = t;
t = term13;
c_28 = t;
t = f_28;
g_28 = t;
t = term15;
d_28 = t;
t = g_28;
h_28 = t;
j_28 = t;
i_28 = t;
e_28 = t;
t = h_28;
t = log_0_3(sl_up(sl), c_28, d_28, e_28, t);
if((t == NULL))
goto fail2 ;
goto fail2 ;
}
label7 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm term_to_strid_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "term_to_strid_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
ATerm h_23 = NULL;
if(match_cons(t, sym_Term_1))
{
h_23 = ATgetArgument(t, 0);
}
else
goto label1 ;
t = h_23;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm1 = t;
if(!(match_cons(t, sym_ConsTerm_0)))
goto label2 ;
t = term1;
goto label0 ;
label2 :
t = trm1;
{
ATerm trm2 = t;
if(!(match_cons(t, sym_NilTerm_0)))
goto label3 ;
t = term3;
goto label0 ;
label3 :
t = trm2;
{
ATerm trm3 = t;
if(!(match_cons(t, sym_ConcTerm_0)))
goto label4 ;
t = term5;
goto label0 ;
label4 :
t = trm3;
{
ATerm trm4 = t;
if(!(match_cons(t, sym_SomeTerm_0)))
goto label5 ;
t = term7;
goto label0 ;
label5 :
t = trm4;
{
ATerm trm5 = t;
if(!(match_cons(t, sym_NoneTerm_0)))
goto label6 ;
t = term9;
goto label0 ;
label6 :
t = trm5;
if(match_cons(t, sym_TupleTerm_1))
{
ATerm trm6 = ATgetArgument(t, 0);
}
else
goto fail0 ;
t = term11;
goto label0 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 37));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(remove_extension_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("remove_extension_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(conc_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pass_verbose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pass_verbose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(log_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("log_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_io_wrap_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_io_wrap_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_ensure_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_ensure_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_transform_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_transform_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_rtg_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_rtg_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_reduce_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_reduce_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_group_productions_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_group_productions_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted8);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted8", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_rtg2typematch_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_rtg2typematch_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_rtg_front_end_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_rtg_front_end_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_pp_abstract_stratego_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_pp_abstract_stratego_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(guess_module_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("guess_module_name_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(module_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("module_option_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_typematch_id_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_typematch_id_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(create_call_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("create_call_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(alts_to_strat_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("alts_to_strat_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(prodrule_to_sdef_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("prodrule_to_sdef_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(core_rtg2typematch_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("core_rtg2typematch_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(term_to_strid_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("term_to_strid_0_0", 0, ATtrue)), &(closures[closures_index]));
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
