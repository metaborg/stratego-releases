#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static Symbol sym_FILE_1;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
ATprotectSymbol(sym_Some_1);
sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
ATprotectSymbol(sym_None_0);
sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
ATprotectSymbol(sym_FILE_1);
}
static ATerm term5;
static ATerm term4;
static ATerm term3;
static ATerm term2;
static ATerm term1;
static ATerm term0;
static void init_module_constant_terms (void)
{
ATprotect(&(term0));
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("/dev/null", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym_None_0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeInt(0);
ATprotect(&(term5));
term5 = term4;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm conc_0_0 (StrSL sl, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL c_46, ATerm t);
ATerm repeat_1_0 (StrSL sl, StrCL j_24, ATerm t);
ATerm stdin_stream_0_0 (StrSL sl, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm read_from_stream_0_0 (StrSL sl, ATerm t);
ATerm dup2_0_0 (StrSL sl, ATerm t);
ATerm dup_0_0 (StrSL sl, ATerm t);
ATerm open_0_0 (StrSL sl, ATerm t);
ATerm STDERR__FILENO_0_0 (StrSL sl, ATerm t);
ATerm call_0_3 (StrSL sl, ATerm l_3, ATerm m_3, ATerm n_3, ATerm t);
ATerm xtc_temp_files_1_0 (StrSL sl, StrCL a_2, ATerm t);
ATerm write_to_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm io_map_aterm_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = io_map_aterm_0_0(sl, t);
if((t == NULL))
goto fail4 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm io_map_aterm_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "io_map_aterm_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm d_0 = NULL,e_0 = NULL,f_0 = NULL,g_0 = NULL,h_0 = NULL,i_0 = NULL,m_0 = NULL,o_0 = NULL,n_0 = NULL,p_0 = NULL,j_0 = NULL,u_0 = NULL,v_0 = NULL;
sl_init_var(0, e_0);
sl_init_var(1, g_0);
sl_init_var(2, h_0);
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
ATerm trm0 = ATgetFirst((ATermList) t);
ATerm trm1 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm1) == AT_LIST) && !(ATisEmpty(trm1))))
{
if((g_0 == NULL))
{
g_0 = ATgetFirst((ATermList) trm1);
}
else
if((g_0 != ATgetFirst((ATermList) trm1)))
goto fail0 ;
if((h_0 == NULL))
{
h_0 = (ATerm) ATgetNext((ATermList) trm1);
}
else
if((h_0 != (ATerm) ATgetNext((ATermList) trm1)))
goto fail0 ;
}
else
goto fail0 ;
}
else
goto fail0 ;
t = (ATerm) ATempty;
i_0 = t;
t = stdin_stream_0_0(sl, t);
if((t == NULL))
goto fail0 ;
if((e_0 == NULL))
{
e_0 = t;
}
else
if((e_0 != t))
goto fail0 ;
t = STDERR__FILENO_0_0(sl, t);
if((t == NULL))
goto fail0 ;
d_0 = t;
t = dup_0_0(sl, t);
if((t == NULL))
goto fail0 ;
f_0 = t;
o_0 = t;
t = term1;
t = open_0_0(sl, t);
if((t == NULL))
goto fail0 ;
m_0 = t;
t = o_0;
p_0 = t;
t = STDERR__FILENO_0_0(sl, t);
if((t == NULL))
goto fail0 ;
n_0 = t;
t = p_0;
t = (ATerm) ATmakeAppl(sym__2, m_0, n_0);
t = dup2_0_0(sl, t);
if((t == NULL))
goto fail0 ;
t = i_0;
{
struct str_closure d_70 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(d_70);
t = repeat_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
j_0 = t;
v_0 = t;
t = STDERR__FILENO_0_0(sl, t);
if((t == NULL))
goto fail0 ;
u_0 = t;
t = v_0;
t = (ATerm) ATmakeAppl(sym__2, f_0, u_0);
t = dup2_0_0(sl, t);
if((t == NULL))
goto fail0 ;
t = j_0;
{
struct str_closure f_70 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(f_70);
t = xtc_temp_files_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail0 ;
t = term5;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail0 ;
}
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
struct str_closure e_70 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(e_70);
t = map_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto fail2 ;
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
ATerm k_0 = NULL,l_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL;
t = write_to_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
l_0 = t;
if(match_cons(t, sym_FILE_1))
{
w_0 = ATgetArgument(t, 0);
}
else
goto fail3 ;
t = w_0;
t = open_0_0(sl_up(sl_up(sl)), t);
if((t == NULL))
goto fail3 ;
k_0 = t;
t = l_0;
if(((sl_readvar(1, sl_up(sl)) == NULL) || (sl_readvar(2, sl_up(sl)) == NULL)))
goto fail3 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl_up(sl)), sl_readvar(2, sl_up(sl)));
}
a_1 = t;
t = (ATerm) ATmakeAppl(sym_Some_1, k_0);
x_0 = t;
t = a_1;
b_1 = t;
t = term3;
y_0 = t;
t = b_1;
c_1 = t;
t = term3;
z_0 = t;
t = c_1;
t = call_0_3(sl_up(sl_up(sl)), x_0, y_0, z_0, t);
if((t == NULL))
goto fail3 ;
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
{
ATerm q_0 = NULL,s_0 = NULL,r_0 = NULL,t_0 = NULL;
s_0 = t;
q_0 = t;
t_0 = t;
if((sl_readvar(0, sl) == NULL))
goto fail1 ;
else
{
t = sl_readvar(0, sl);
}
t = read_from_stream_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
r_0 = t;
t = t_0;
t = (ATerm) ATmakeAppl(sym__2, q_0, (ATerm) ATinsert(ATempty, r_0));
t = conc_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 18));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(conc_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("conc_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(repeat_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("repeat_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(stdin_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("stdin_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(exit_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("exit_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(read_from_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_from_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dup2_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dup2_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dup_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dup_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(open_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("open_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(STDERR__FILENO_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("STDERR__FILENO_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(call_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("call_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(xtc_temp_files_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("xtc_temp_files_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(write_to_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(io_map_aterm_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_map_aterm_0_0", 0, ATtrue)), &(closures[closures_index]));
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
