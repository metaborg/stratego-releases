#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeInt(0);
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeInt(80);
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output. (default 80)", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym__2, term5, term1);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(ATmakeSymbol("-l               Add no additional newlines (same as --width 0)", 0, ATtrue));
ATprotect(&(term13));
term13 = term12;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm fputs_0_0 (StrSL sl, ATerm t);
ATerm read_from_stream_0_0 (StrSL sl, ATerm t);
ATerm string_to_int_0_0 (StrSL sl, ATerm t);
ATerm set_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm io_stream_wrap_4_0 (StrSL sl, StrCL o_16, StrCL p_16, StrCL q_16, StrCL r_16, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL j_13, StrCL k_13, StrCL m_13, ATerm t);
ATerm Option_3_0 (StrSL sl, StrCL e_13, StrCL f_13, StrCL g_13, ATerm t);
ATerm system_about_0_0 (StrSL sl, ATerm t);
ATerm system_usage_0_0 (StrSL sl, ATerm t);
ATerm gpp_topdown_fputs_0_1 (StrSL sl, ATerm b_3, ATerm t);
ATerm try_abox2text_0_2 (StrSL sl, ATerm u_0, ATerm v_0, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm abox2text_options_0_0 (StrSL sl, ATerm t);
ATerm get_width_0_0 (StrSL sl, ATerm t);
ATerm abox2text_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_79 = { &(abox2text_options_0_0) , sl };
StrCL lifted6_cl = &(j_79);
struct str_closure k_79 = { &(system_usage_0_0) , sl };
StrCL lifted7_cl = &(k_79);
struct str_closure l_79 = { &(system_about_0_0) , sl };
StrCL lifted8_cl = &(l_79);
struct str_closure m_79 = { &(abox2text_0_0) , sl };
StrCL lifted9_cl = &(m_79);
t = io_stream_wrap_4_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
ATerm abox2text_options_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "abox2text_options_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
struct str_closure d_79 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(d_79);
struct str_closure e_79 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(e_79);
struct str_closure f_79 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(f_79);
t = ArgOption_3_0(sl, lifted0_cl, lifted1_cl, lifted2_cl, t);
if((t == NULL))
goto label3 ;
goto label2 ;
label3 :
t = trm1;
{
struct str_closure g_79 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(g_79);
struct str_closure h_79 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(h_79);
struct str_closure i_79 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(i_79);
t = Option_3_0(sl, lifted3_cl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail2 ;
else
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
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
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
t = term11;
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail7 ;
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
if(!((ATgetSymbol(t) == ATmakeSymbol("-l", 0, ATtrue))))
goto fail6 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term9;
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
{
ATerm k_0 = NULL,l_0 = NULL;
l_0 = t;
t = string_to_int_0_0(sl_up(sl), t);
if((t == NULL))
goto fail4 ;
k_0 = t;
t = l_0;
t = (ATerm) ATmakeAppl(sym__2, term5, k_0);
t = set_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm2 = t;
if(!((ATgetSymbol(t) == ATmakeSymbol("-w", 0, ATtrue))))
goto label5 ;
goto label4 ;
label5 :
t = trm2;
if((ATgetSymbol(t) == ATmakeSymbol("--width", 0, ATtrue)))
goto label4 ;
else
goto fail3 ;
label4 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_width_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_width_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
t = term5;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
t = term7;
goto label0 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail1 :
--__tracing_table_counter;
return(NULL);
}
ATerm abox2text_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "abox2text_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,d_0 = NULL,e_0 = NULL,f_0 = NULL,t_78 = NULL,u_78 = NULL,x_78 = NULL,c_79 = NULL,v_78 = NULL,w_78 = NULL;
if(match_cons(t, sym__2))
{
b_0 = ATgetArgument(t, 0);
a_0 = ATgetArgument(t, 1);
}
else
goto fail0 ;
t = b_0;
t = read_from_stream_0_0(sl, t);
if((t == NULL))
goto fail0 ;
d_0 = t;
f_0 = t;
t = get_width_0_0(sl, t);
if((t == NULL))
goto fail0 ;
e_0 = t;
t = f_0;
t = e_0;
c_0 = t;
t = d_0;
x_78 = t;
t = c_0;
t_78 = t;
t = x_78;
c_79 = t;
t = a_0;
u_78 = t;
t = c_79;
w_78 = t;
t = term1;
v_78 = t;
t = w_78;
t = try_abox2text_0_2(sl, v_78, t_78, t);
if((t == NULL))
goto fail0 ;
t = gpp_topdown_fputs_0_1(sl, u_78, t);
if((t == NULL))
goto fail0 ;
t = u_78;
t = (ATerm) ATmakeAppl(sym__2, term3, a_0);
t = fputs_0_0(sl, t);
if((t == NULL))
goto fail0 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 22));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(fputs_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fputs_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(string_to_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("string_to_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(set_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("set_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_stream_wrap_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_stream_wrap_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Option_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Option_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(system_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("system_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(system_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("system_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(gpp_topdown_fputs_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("gpp_topdown_fputs_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_abox2text_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_abox2text_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abox2text_options_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abox2text_options_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_width_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_width_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(abox2text_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("abox2text_0_0", 0, ATtrue)), &(closures[closures_index]));
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
