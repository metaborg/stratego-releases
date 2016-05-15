#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym_Notice_0;
static Symbol sym_Error_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_Notice_0 = ATmakeSymbol("Notice", 0, ATfalse);
ATprotectSymbol(sym_Notice_0);
sym_Error_0 = ATmakeSymbol("Error", 0, ATfalse);
ATprotectSymbol(sym_Error_0);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file          Use pretty-print table in file", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(sym_Error_0);
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("Pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeInt(1);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym_Notice_0);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("Using existing parsed pretty print-table: ", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("Parsing pretty-print-table", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm _2_0 (StrSL sl, StrCL o_64, StrCL p_64, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL d_55, ATerm t);
ATerm Fst_0_0 (StrSL sl, ATerm t);
ATerm add_extension_0_0 (StrSL sl, ATerm t);
ATerm has_extension_0_1 (StrSL sl, ATerm j_23, ATerm t);
ATerm exit_0_0 (StrSL sl, ATerm t);
ATerm ReadFromFile_0_0 (StrSL sl, ATerm t);
ATerm geq_0_0 (StrSL sl, ATerm t);
ATerm concat_strings_0_0 (StrSL sl, ATerm t);
ATerm extend_config_0_0 (StrSL sl, ATerm t);
ATerm get_config_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_4_0 (StrSL sl, StrCL a_17, StrCL c_17, StrCL d_17, StrCL e_17, ATerm t);
ATerm ArgOption_3_0 (StrSL sl, StrCL o_14, StrCL p_14, StrCL q_14, ATerm t);
ATerm system_about_0_0 (StrSL sl, ATerm t);
ATerm system_usage_0_0 (StrSL sl, ATerm t);
ATerm log_0_2 (StrSL sl, ATerm r_12, ATerm s_12, ATerm t);
ATerm modification_time_0_0 (StrSL sl, ATerm t);
ATerm file_exists_0_0 (StrSL sl, ATerm t);
ATerm parse_pptable_file_0_0 (StrSL sl, ATerm t);
ATerm ast2box_0_1 (StrSL sl, ATerm t_5, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
ATerm io_ast2abox_0_0 (StrSL sl, ATerm t);
ATerm parse_pptable_arg_0_0 (StrSL sl, ATerm t);
ATerm lookup_parsed_pptable_arg_0_0 (StrSL sl, ATerm t);
ATerm read_pptable_file_0_0 (StrSL sl, ATerm t);
ATerm read_pptables_config_0_0 (StrSL sl, ATerm t);
ATerm get_pptables_config_0_0 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm pptable_option_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = io_ast2abox_0_0(sl, t);
if((t == NULL))
goto fail11 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
ATerm io_ast2abox_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "io_ast2abox_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_80 = { &(pptable_option_0_0) , sl };
StrCL lifted6_cl = &(g_80);
struct str_closure h_80 = { &(system_usage_0_0) , sl };
StrCL lifted7_cl = &(h_80);
struct str_closure i_80 = { &(system_about_0_0) , sl };
StrCL lifted8_cl = &(i_80);
struct str_closure j_80 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(j_80);
t = io_wrap_4_0(sl, lifted6_cl, lifted7_cl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail9 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
l_1 = t;
n_1 = t;
t = read_pptables_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail10 ;
m_1 = t;
t = n_1;
t = m_1;
k_1 = t;
t = l_1;
t = ast2box_0_1(sl_up(sl), k_1, t);
if((t == NULL))
goto fail10 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm parse_pptable_arg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "parse_pptable_arg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
t = parse_pptable_file_0_0(sl, t);
if((t == NULL))
goto fail8 ;
i_1 = t;
t = term15;
g_1 = t;
t = i_1;
j_1 = t;
t = term19;
h_1 = t;
t = j_1;
t = log_0_2(sl, g_1, h_1, t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm lookup_parsed_pptable_arg_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lookup_parsed_pptable_arg_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,v_0 = NULL,z_0 = NULL,t_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL;
w_0 = t;
y_0 = t;
x_0 = t;
t = (ATerm) ATmakeAppl(sym__2, x_0, term5);
t = add_extension_0_0(sl, t);
if((t == NULL))
goto fail7 ;
t = file_exists_0_0(sl, t);
if((t == NULL))
goto fail7 ;
u_0 = t;
t = w_0;
z_0 = t;
v_0 = t;
t = (ATerm) ATmakeAppl(sym__2, u_0, v_0);
t_0 = t;
{
struct str_closure e_80 = { &(modification_time_0_0) , sl };
StrCL lifted4_cl = &(e_80);
struct str_closure f_80 = { &(modification_time_0_0) , sl };
StrCL lifted5_cl = &(f_80);
t = _2_0(sl, lifted4_cl, lifted5_cl, t);
if((t == NULL))
goto fail7 ;
t = geq_0_0(sl, t);
if((t == NULL))
goto fail7 ;
t = t_0;
t = Fst_0_0(sl, t);
if((t == NULL))
goto fail7 ;
c_1 = t;
t = term15;
a_1 = t;
t = c_1;
d_1 = t;
f_1 = t;
e_1 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, e_1), term17);
t = concat_strings_0_0(sl, t);
if((t == NULL))
goto fail7 ;
b_1 = t;
t = d_1;
t = log_0_2(sl, a_1, b_1, t);
if((t == NULL))
goto fail7 ;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail7 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_pptable_file_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_pptable_file_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm1 = t;
ATerm h_0 = NULL,j_0 = NULL,k_0 = NULL;
h_0 = t;
k_0 = t;
t = term5;
j_0 = t;
t = k_0;
t = has_extension_0_1(sl, j_0, t);
if((t == NULL))
goto label3 ;
t = h_0;
t = ReadFromFile_0_0(sl, t);
if((t == NULL))
goto fail6 ;
else
goto label2 ;
label3 :
t = trm1;
{
ATerm trm2 = t;
ATerm i_0 = NULL,l_0 = NULL,m_0 = NULL;
i_0 = t;
m_0 = t;
t = term7;
l_0 = t;
t = m_0;
t = has_extension_0_1(sl, l_0, t);
if((t == NULL))
goto label4 ;
t = i_0;
{
ATerm trm3 = t;
t = lookup_parsed_pptable_arg_0_0(sl, t);
if((t == NULL))
goto label5 ;
goto label2 ;
label5 :
t = trm3;
t = parse_pptable_arg_0_0(sl, t);
if((t == NULL))
goto fail6 ;
else
goto label2 ;
}
label4 :
t = trm2;
{
ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
p_0 = t;
t = term9;
n_0 = t;
t = p_0;
q_0 = t;
s_0 = t;
r_0 = t;
t = (ATerm) ATinsert(ATinsert(ATempty, r_0), term11);
o_0 = t;
t = q_0;
t = log_0_2(sl, n_0, o_0, t);
if((t == NULL))
goto fail6 ;
t = term13;
t = exit_0_0(sl, t);
if((t == NULL))
goto fail6 ;
else
goto label2 ;
}
}
label2 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm read_pptables_config_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "read_pptables_config_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure d_80 = { &(read_pptable_file_0_0) , sl };
StrCL lifted3_cl = &(d_80);
t = get_pptables_config_0_0(sl, t);
if((t == NULL))
goto fail5 ;
t = map_1_0(sl, lifted3_cl, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_pptables_config_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_pptables_config_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm trm0 = t;
t = term1;
t = get_config_0_0(sl, t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
t = (ATerm) ATempty;
goto label0 ;
label0 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm pptable_option_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "pptable_option_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_80 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(a_80);
struct str_closure b_80 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(b_80);
struct str_closure c_80 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(c_80);
t = ArgOption_3_0(sl, lifted0_cl, lifted1_cl, lifted2_cl, t);
if((t == NULL))
goto fail0 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail0 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted2 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted2";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted1 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted1";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_0 = NULL,f_0 = NULL,g_0 = NULL;
e_0 = t;
g_0 = t;
f_0 = t;
t = (ATerm) ATmakeAppl(sym__2, term1, (ATerm) ATinsert(ATempty, f_0));
t = extend_config_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = e_0;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail2 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(!((ATgetSymbol(t) == ATmakeSymbol("-p", 0, ATtrue))))
goto fail1 ;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 32));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(Fst_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("Fst_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(ReadFromFile_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ReadFromFile_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(geq_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("geq_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(concat_strings_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("concat_strings_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(extend_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("extend_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ArgOption_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ArgOption_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(system_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("system_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(system_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("system_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(parse_pptable_file_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("parse_pptable_file_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(ast2box_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("ast2box_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted9);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted9", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_ast2abox_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_ast2abox_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(read_pptables_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("read_pptables_config_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_pptables_config_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_pptables_config_0_0", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(pptable_option_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("pptable_option_0_0", 0, ATtrue)), &(closures[closures_index]));
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
