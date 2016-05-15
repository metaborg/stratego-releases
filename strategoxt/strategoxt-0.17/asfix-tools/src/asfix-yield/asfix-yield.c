#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_appl_2;
static Symbol sym_amb_1;
static Symbol sym_parsetree_2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
ATprotectSymbol(sym_appl_2);
sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
ATprotectSymbol(sym_amb_1);
sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
ATprotectSymbol(sym_parsetree_2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: asfix-yield [options]", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("  asfix-yield unparses an asfix tree to flat text.", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeInt(0);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("Input is not in AsFix format.", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm list_1_0 (StrSL sl, StrCL a_45, ATerm t);
ATerm leaves_3_0 (StrSL sl, StrCL h_21, StrCL i_21, StrCL j_21, ATerm t);
ATerm fputc_0_0 (StrSL sl, ATerm t);
ATerm fputs_0_0 (StrSL sl, ATerm t);
ATerm fclose_0_0 (StrSL sl, ATerm t);
ATerm fopen_0_0 (StrSL sl, ATerm t);
ATerm stdout_stream_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm fatal_error_0_0 (StrSL sl, ATerm t);
ATerm is_leaf_0_0 (StrSL sl, ATerm t);
ATerm is_string_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm io_options_0_0 (StrSL sl, ATerm t);
ATerm input_1_0 (StrSL sl, StrCL h_12, ATerm t);
ATerm default_system_usage_2_0 (StrSL sl, StrCL o_9, StrCL p_9, ATerm t);
ATerm system_about_0_0 (StrSL sl, ATerm t);
ATerm parse_options_3_0 (StrSL sl, StrCL h_9, StrCL i_9, StrCL j_9, ATerm t);
ATerm appl_2_0 (StrSL sl, StrCL r_2, StrCL s_2, ATerm t);
ATerm parsetree_2_0 (StrSL sl, StrCL m_2, StrCL n_2, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted14 (StrSL sl, ATerm t);
ATerm asfix_skip2_1_0 (StrSL sl, StrCL l_2, ATerm t);
static ATerm lifted10 (StrSL sl, ATerm t);
ATerm asfix_yield2_0_1 (StrSL sl, ATerm b_2, ATerm t);
ATerm asfix_yield_0_1 (StrSL sl, ATerm z_1, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
ATerm io_asfix_yield_0_0 (StrSL sl, ATerm t);
ATerm appl_2_0 (StrSL sl, StrCL r_2, StrCL s_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "appl_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm m_69 = NULL,k_69 = NULL,l_69 = NULL,n_69 = NULL,o_69 = NULL;
ATerm trm10;
trm10 = (ATerm) ATgetAnnotations(t);
if((trm10 == NULL))
trm10 = (ATerm) ATempty;
if(match_cons(t, sym_appl_2))
{
k_69 = ATgetArgument(t, 0);
l_69 = ATgetArgument(t, 1);
}
else
goto fail12 ;
m_69 = trm10;
t = k_69;
t = cl_fun(r_2)(cl_sl(r_2), t);
if((t == NULL))
goto fail12 ;
n_69 = t;
t = l_69;
t = cl_fun(s_2)(cl_sl(s_2), t);
if((t == NULL))
goto fail12 ;
o_69 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_appl_2, n_69, o_69), m_69);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm parsetree_2_0 (StrSL sl, StrCL m_2, StrCL n_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parsetree_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_68 = NULL,o_68 = NULL,s_68 = NULL,u_68 = NULL,v_68 = NULL;
ATerm trm9;
trm9 = (ATerm) ATgetAnnotations(t);
if((trm9 == NULL))
trm9 = (ATerm) ATempty;
if(match_cons(t, sym_parsetree_2))
{
o_68 = ATgetArgument(t, 0);
s_68 = ATgetArgument(t, 1);
}
else
goto fail11 ;
t_68 = trm9;
t = o_68;
t = cl_fun(m_2)(cl_sl(m_2), t);
if((t == NULL))
goto fail11 ;
u_68 = t;
t = s_68;
t = cl_fun(n_2)(cl_sl(n_2), t);
if((t == NULL))
goto fail11 ;
v_68 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_parsetree_2, u_68, v_68), t_68);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = io_asfix_yield_0_0(sl, t);
if((t == NULL))
goto fail10 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_skip2_1_0 (StrSL sl, StrCL l_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_skip2_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, l_2);
{
ATerm trm4 = t;
struct str_closure q_74 = { &(_Id) , sl };
StrCL lifted13_cl = &(q_74);
struct str_closure r_74 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(r_74);
t = appl_2_0(sl, lifted13_cl, lifted14_cl, t);
if((t == NULL))
goto label9 ;
goto label8 ;
label9 :
t = trm4;
{
ATerm trm5 = t;
ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
ATerm trm6;
trm6 = (ATerm) ATgetAnnotations(t);
if((trm6 == NULL))
trm6 = (ATerm) ATempty;
if(match_cons(t, sym_amb_1))
{
r_73 = ATgetArgument(t, 0);
}
else
goto label10 ;
q_73 = trm6;
t = r_73;
{
ATerm trm7;
trm7 = (ATerm) ATgetAnnotations(t);
if((trm7 == NULL))
trm7 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
u_73 = ATgetFirst((ATermList) t);
v_73 = (ATerm) ATgetNext((ATermList) t);
}
else
goto label10 ;
y_73 = trm7;
t = u_73;
t = cl_fun(l_2)(cl_sl(l_2), t);
if((t == NULL))
goto label10 ;
w_73 = t;
t = v_73;
x_73 = t;
{
ATerm trm8;
trm8 = CheckATermList(x_73);
if((trm8 == NULL))
goto label10 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm8, w_73), y_73);
s_73 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_amb_1, s_73), q_73);
}
}
goto label8 ;
label10 :
t = trm5;
{
struct str_closure t_74 = { &(_Id) , sl };
StrCL lifted15_cl = &(t_74);
t = parsetree_2_0(sl, l_2, lifted15_cl, t);
if((t == NULL))
goto fail8 ;
else
goto label8 ;
}
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
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = list_1_0(sl_up(sl), sl_fun_cl(0, sl), t);
if((t == NULL))
goto fail9 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_yield2_0_1 (StrSL sl, ATerm b_2, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_yield2_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
sl_init_var(0, b_2);
{
struct str_closure l_74 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(l_74);
struct str_closure n_74 = { &(is_leaf_0_0) , sl };
StrCL lifted11_cl = &(n_74);
struct str_closure o_74 = { &(asfix_skip2_1_0) , sl };
StrCL lifted12_cl = &(o_74);
t = leaves_3_0(sl, lifted10_cl, lifted11_cl, lifted12_cl, t);
if((t == NULL))
goto fail6 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm3 = t;
ATerm c_2 = NULL,d_2 = NULL;
d_2 = t;
t = is_string_0_0(sl_up(sl), t);
if((t == NULL))
goto label7 ;
c_2 = t;
t = d_2;
if((sl_readvar(0, sl) == NULL))
goto label7 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, c_2, sl_readvar(0, sl));
}
t = fputs_0_0(sl_up(sl), t);
if((t == NULL))
goto label7 ;
goto label6 ;
label7 :
t = trm3;
{
ATerm e_2 = NULL,f_2 = NULL;
f_2 = t;
e_2 = t;
if((sl_readvar(0, sl) == NULL))
goto fail7 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, e_2, sl_readvar(0, sl));
}
t = fputc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail7 ;
else
goto label6 ;
}
label6 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm asfix_yield_0_1 (StrSL sl, ATerm z_1, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "asfix_yield_0_1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
ATerm a_2 = NULL;
a_2 = t;
{
ATerm trm2 = t;
struct str_closure f_74 = { &(_Id) , sl };
StrCL lifted6_cl = &(f_74);
struct str_closure g_74 = { &(_Id) , sl };
StrCL lifted7_cl = &(g_74);
t = parsetree_2_0(sl, lifted6_cl, lifted7_cl, t);
if((t == NULL))
goto label5 ;
goto label4 ;
label5 :
t = trm2;
{
struct str_closure i_74 = { &(_Id) , sl };
StrCL lifted8_cl = &(i_74);
struct str_closure k_74 = { &(_Id) , sl };
StrCL lifted9_cl = &(k_74);
t = appl_2_0(sl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto label3 ;
else
goto label4 ;
}
label4 :
;
t = a_2;
}
t = asfix_yield2_0_1(sl, z_1, t);
if((t == NULL))
goto fail5 ;
else
goto label2 ;
label3 :
t = trm1;
t = (ATerm) ATinsert(ATempty, term11);
t = fatal_error_0_0(sl, t);
if((t == NULL))
goto fail5 ;
else
goto label2 ;
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm io_asfix_yield_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "io_asfix_yield_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm w_1 = NULL;
sl_init_var(0, w_1);
{
struct str_closure b_74 = { &(io_options_0_0) , sl };
StrCL lifted0_cl = &(b_74);
struct str_closure c_74 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(c_74);
struct str_closure d_74 = { &(system_about_0_0) , sl };
StrCL lifted4_cl = &(d_74);
t = parse_options_3_0(sl, lifted0_cl, lifted1_cl, lifted4_cl, t);
if((t == NULL))
goto fail0 ;
{
ATerm trm0 = t;
ATerm x_1 = NULL,y_1 = NULL;
y_1 = t;
t = term5;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label1 ;
x_1 = t;
t = y_1;
t = (ATerm) ATmakeAppl(sym__2, x_1, term7);
t = fopen_0_0(sl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
t = stdout_stream_0_0(sl, t);
if((t == NULL))
goto fail0 ;
else
goto label0 ;
label0 :
;
if((w_1 == NULL))
{
w_1 = t;
}
else
if((w_1 != t))
goto fail0 ;
{
struct str_closure e_74 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(e_74);
t = input_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail0 ;
if((w_1 == NULL))
goto fail0 ;
else
{
t = w_1;
}
t = fclose_0_0(sl, t);
if((t == NULL))
goto fail0 ;
t = term9;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail0 ;
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail4 ;
else
{
t = asfix_yield_0_1(sl_up(sl), sl_readvar(0, sl), t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure z_73 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(z_73);
struct str_closure a_74 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(a_74);
t = default_system_usage_2_0(sl_up(sl), lifted2_cl, lifted3_cl, t);
if((t == NULL))
goto fail1 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term3);
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
t = (ATerm) ATinsert(ATempty, term1);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 30));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(list_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(leaves_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("leaves_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fputc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fputc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fputs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fputs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fclose_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fclose_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fopen_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fopen_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(stdout_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stdout_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fatal_error_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fatal_error_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_leaf_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_leaf_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(input_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("input_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(default_system_usage_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("default_system_usage_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(system_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("system_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_options_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_options_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(appl_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("appl_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parsetree_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parsetree_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted14);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted14", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_skip2_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_skip2_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted10);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted10", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_yield2_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_yield2_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(asfix_yield_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("asfix_yield_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_asfix_yield_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_asfix_yield_0_0", 0, ATtrue)), &(closures[closures_index]));
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
