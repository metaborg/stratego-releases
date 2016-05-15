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
static void init_module_constant_terms (void)
{
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm write_to_stream_0_0 (StrSL sl, ATerm t);
ATerm io_stream_wrap_1_0 (StrSL sl, StrCL p_27, ATerm t);
ATerm rtg_normalize_0_0 (StrSL sl, ATerm t);
ATerm parse_rtg_stream_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_rtg_normalize_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = main_rtg_normalize_0_0(sl, t);
if((t == NULL))
goto fail2 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_rtg_normalize_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_rtg_normalize_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(1);
{
ATerm a_0 = NULL;
sl_init_var(0, a_0);
{
struct str_closure v_98 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(v_98);
t = io_stream_wrap_1_0(sl, lifted0_cl, t);
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
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_0 = NULL,c_0 = NULL,d_0 = NULL;
if(match_cons(t, sym__2))
{
b_0 = ATgetArgument(t, 0);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = ATgetArgument(t, 1);
}
else
if((sl_readvar(0, sl) != ATgetArgument(t, 1)))
goto fail1 ;
}
else
goto fail1 ;
t = b_0;
t = parse_rtg_stream_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
t = rtg_normalize_0_0(sl_up(sl), t);
if((t == NULL))
goto fail1 ;
d_0 = t;
c_0 = t;
if((sl_readvar(0, sl) == NULL))
goto fail1 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(0, sl), c_0);
}
t = write_to_stream_0_0(sl_up(sl), t);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 7));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(write_to_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("write_to_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_stream_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_stream_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(rtg_normalize_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("rtg_normalize_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(parse_rtg_stream_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_rtg_stream_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_rtg_normalize_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_rtg_normalize_0_0", 0, ATtrue)), &(closures[closures_index]));
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
