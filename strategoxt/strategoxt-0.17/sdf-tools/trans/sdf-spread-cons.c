#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_fun_1;
static Symbol sym_appl_2;
static Symbol sym_term_1;
static Symbol sym_attrs_1;
static Symbol sym_prod_3;
static Symbol sym_default_1;
static Symbol sym_quoted_1;
static Symbol sym_unquoted_1;
static Symbol sym__2;
static Symbol sym_DR__DUMMY_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_cons_1;
static void init_module_constructors (void)
{
sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
ATprotectSymbol(sym_fun_1);
sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
ATprotectSymbol(sym_appl_2);
sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
ATprotectSymbol(sym_term_1);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_default_1 = ATmakeSymbol("default", 1, ATfalse);
ATprotectSymbol(sym_default_1);
sym_quoted_1 = ATmakeSymbol("quoted", 1, ATfalse);
ATprotectSymbol(sym_quoted_1);
sym_unquoted_1 = ATmakeSymbol("unquoted", 1, ATfalse);
ATprotectSymbol(sym_unquoted_1);
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym_DR__DUMMY_0 = ATmakeSymbol("DR_DUMMY", 0, ATfalse);
ATprotectSymbol(sym_DR__DUMMY_0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
ATprotectSymbol(sym_cons_1);
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("AddConstr", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(sym_DR__DUMMY_0);
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("53c4b87f1d78150802a47b442566d629", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm fetch_elem_1_0 (StrSL sl, StrCL n_59, ATerm t);
ATerm fetch_1_0 (StrSL sl, StrCL m_59, ATerm t);
ATerm dr_set_rule_0_3 (StrSL sl, ATerm c_43, ATerm d_43, ATerm e_43, ATerm t);
ATerm dr_lookup_rule_0_2 (StrSL sl, ATerm v_42, ATerm w_42, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL r_39, ATerm t);
ATerm topdown_1_0 (StrSL sl, StrCL z_32, ATerm t);
ATerm un_double_quote_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_1_0 (StrSL sl, StrCL t_24, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
ATerm aux_AddConstr_0_4 (StrSL sl, ATerm x_16, ATerm y_16, ATerm z_16, ATerm a_17, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
ATerm AddConstr_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm DeclareProd_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
ATerm sdf_spread_cons_0_0 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm get_cnstr_name_0_0 (StrSL sl, ATerm t);
ATerm aux_AddConstr_0_4 (StrSL sl, ATerm x_16, ATerm y_16, ATerm z_16, ATerm a_17, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "aux_AddConstr_0_4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_17 = NULL,c_17 = NULL;
if(match_cons(t, sym__2))
{
ATerm trm16 = ATgetArgument(t, 0);
if(!((ATgetSymbol(trm16) == ATmakeSymbol("53c4b87f1d78150802a47b442566d629", 0, ATtrue))))
goto fail9 ;
b_17 = ATgetArgument(t, 1);
}
else
goto fail9 ;
c_17 = t;
t = a_17;
t = z_16;
{
ATerm trm17 = t;
struct str_closure d_102 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(d_102);
t = fetch_1_0(sl, lifted7_cl, t);
if((t == NULL))
goto label5 ;
goto fail9 ;
label5 :
t = trm17;
goto label4 ;
label4 :
;
t = c_17;
{
ATerm trm20;
trm20 = CheckATermList(z_16);
if((trm20 == NULL))
goto fail9 ;
t = (ATerm) ATmakeAppl(sym_prod_3, x_16, y_16, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert((ATermList)trm20, b_17)));
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(match_cons(t, sym_term_1))
{
ATerm trm18 = ATgetArgument(t, 0);
if(match_cons(trm18, sym_cons_1))
{
ATerm trm19 = ATgetArgument(trm18, 0);
}
else
goto fail10 ;
}
else
goto fail10 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
ATerm AddConstr_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "AddConstr_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(4);
{
ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
sl_init_var(0, n_16);
sl_init_var(1, o_16);
sl_init_var(2, p_16);
sl_init_var(3, q_16);
{
struct str_closure c_102 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(c_102);
if((o_16 == NULL))
{
o_16 = t;
}
else
if((o_16 != t))
goto fail7 ;
if(match_cons(t, sym_prod_3))
{
if((p_16 == NULL))
{
p_16 = ATgetArgument(t, 0);
}
else
if((p_16 != ATgetArgument(t, 0)))
goto fail7 ;
if((q_16 == NULL))
{
q_16 = ATgetArgument(t, 1);
}
else
if((q_16 != ATgetArgument(t, 1)))
goto fail7 ;
{
ATerm trm15 = ATgetArgument(t, 2);
if(match_cons(trm15, sym_attrs_1))
{
if((n_16 == NULL))
{
n_16 = ATgetArgument(trm15, 0);
}
else
if((n_16 != ATgetArgument(trm15, 0)))
goto fail7 ;
}
else
goto fail7 ;
}
}
else
goto fail7 ;
s_16 = t;
v_16 = t;
t = term1;
t_16 = t;
t = v_16;
w_16 = t;
if(((p_16 == NULL) || (q_16 == NULL)))
goto fail7 ;
else
{
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_prod_3, p_16, q_16, (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term3)), (ATerm) ATinsert(ATempty, term3))), (ATerm) ATinsert(ATempty, term3));
}
u_16 = t;
t = w_16;
t = dr_lookup_rule_0_2(sl, t_16, u_16, t);
if((t == NULL))
goto fail7 ;
r_16 = t;
t = s_16;
t = r_16;
t = fetch_elem_1_0(sl, lifted6_cl, t);
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
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(2, sl) == NULL) || ((sl_readvar(3, sl) == NULL) || ((sl_readvar(0, sl) == NULL) || (sl_readvar(1, sl) == NULL)))))
goto fail8 ;
else
{
t = aux_AddConstr_0_4(sl_up(sl), sl_readvar(2, sl), sl_readvar(3, sl), sl_readvar(0, sl), sl_readvar(1, sl), t);
if((t == NULL))
goto fail8 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail8 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure a_102 = { &(sdf_spread_cons_0_0) , sl };
StrCL lifted5_cl = &(a_102);
t = io_wrap_1_0(sl, lifted5_cl, t);
if((t == NULL))
goto fail6 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
ATerm DeclareProd_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "DeclareProd_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,w_5 = NULL,u_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL;
if(match_cons(t, sym_prod_3))
{
q_5 = ATgetArgument(t, 0);
r_5 = ATgetArgument(t, 1);
{
ATerm trm13 = ATgetArgument(t, 2);
if(match_cons(trm13, sym_attrs_1))
{
p_5 = ATgetArgument(trm13, 0);
}
else
goto fail5 ;
}
}
else
goto fail5 ;
t_5 = t;
if(match_cons(t, sym_prod_3))
{
s_101 = ATgetArgument(t, 0);
t_101 = ATgetArgument(t, 1);
{
ATerm trm14 = ATgetArgument(t, 2);
if(match_cons(trm14, sym_attrs_1))
{
u_101 = ATgetArgument(trm14, 0);
}
else
goto fail5 ;
}
}
else
goto fail5 ;
t = u_101;
t = get_cnstr_name_0_0(sl, t);
if((t == NULL))
goto fail5 ;
w_5 = t;
v_5 = t;
t = (ATerm) ATmakeAppl(sym_term_1, (ATerm) ATmakeAppl(sym_cons_1, v_5));
s_5 = t;
t = t_5;
u_5 = t;
a_6 = t;
t = term1;
x_5 = t;
t = a_6;
b_6 = t;
t = (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_prod_3, q_5, r_5, (ATerm) SRTS_setAnnotations((ATerm)ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term3)), (ATerm) ATinsert(ATempty, term3))), (ATerm) ATinsert(ATempty, term3));
y_5 = t;
t = b_6;
c_6 = t;
t = (ATerm) ATmakeAppl(sym__2, term5, s_5);
z_5 = t;
t = c_6;
t = dr_set_rule_0_3(sl, x_5, y_5, z_5, t);
if((t == NULL))
goto fail5 ;
t = u_5;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm sdf_spread_cons_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "sdf_spread_cons_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure x_101 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(x_101);
struct str_closure z_101 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(z_101);
t = topdown_1_0(sl, lifted1_cl, t);
if((t == NULL))
goto fail2 ;
t = topdown_1_0(sl, lifted3_cl, t);
if((t == NULL))
goto fail2 ;
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
{
struct str_closure y_101 = { &(DeclareProd_0_0) , sl_up(sl) };
StrCL lifted2_cl = &(y_101);
t = try_1_0(sl_up(sl), lifted2_cl, t);
if((t == NULL))
goto fail4 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure w_101 = { &(AddConstr_0_0) , sl_up(sl) };
StrCL lifted4_cl = &(w_101);
t = try_1_0(sl_up(sl), lifted4_cl, t);
if((t == NULL))
goto fail3 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
ATerm get_cnstr_name_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "get_cnstr_name_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure v_101 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(v_101);
t = fetch_elem_1_0(sl, lifted0_cl, t);
if((t == NULL))
goto fail0 ;
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
ATerm trm0 = t;
ATerm k_5 = NULL;
if(match_cons(t, sym_term_1))
{
ATerm trm1 = ATgetArgument(t, 0);
if(match_cons(trm1, sym_appl_2))
{
ATerm trm2 = ATgetArgument(trm1, 0);
if(match_cons(trm2, sym_unquoted_1))
{
ATerm trm3 = ATgetArgument(trm2, 0);
if(!((ATgetSymbol(trm3) == ATmakeSymbol("cons", 0, ATtrue))))
goto label1 ;
}
else
goto label1 ;
{
ATerm trm4 = ATgetArgument(trm1, 1);
if(((ATgetType(trm4) == AT_LIST) && !(ATisEmpty(trm4))))
{
ATerm trm5 = ATgetFirst((ATermList) trm4);
if(match_cons(trm5, sym_fun_1))
{
ATerm trm6 = ATgetArgument(trm5, 0);
if(match_cons(trm6, sym_quoted_1))
{
k_5 = ATgetArgument(trm6, 0);
}
else
goto label1 ;
}
else
goto label1 ;
{
ATerm trm7 = (ATerm) ATgetNext((ATermList) trm4);
if(!(((ATgetType(trm7) == AT_LIST) && ATisEmpty(trm7))))
goto label1 ;
}
}
else
goto label1 ;
}
}
else
goto label1 ;
}
else
goto label1 ;
t = k_5;
t = un_double_quote_0_0(sl_up(sl), t);
if((t == NULL))
goto label1 ;
goto label0 ;
label1 :
t = trm0;
{
ATerm trm8 = t;
ATerm l_5 = NULL;
if(match_cons(t, sym_term_1))
{
ATerm trm9 = ATgetArgument(t, 0);
if(match_cons(trm9, sym_cons_1))
{
l_5 = ATgetArgument(trm9, 0);
}
else
goto label2 ;
}
else
goto label2 ;
t = l_5;
goto label0 ;
label2 :
t = trm8;
{
ATerm trm10 = t;
ATerm m_5 = NULL;
if(match_cons(t, sym_default_1))
{
ATerm trm11 = ATgetArgument(t, 0);
if(match_cons(trm11, sym_term_1))
{
ATerm trm12 = ATgetArgument(trm11, 0);
if(match_cons(trm12, sym_cons_1))
{
m_5 = ATgetArgument(trm12, 0);
}
else
goto label3 ;
}
else
goto label3 ;
}
else
goto label3 ;
t = m_5;
goto label0 ;
label3 :
t = trm10;
{
ATerm n_5 = NULL;
if(match_cons(t, sym_cons_1))
{
n_5 = ATgetArgument(t, 0);
}
else
goto fail1 ;
t = n_5;
goto label0 ;
}
}
}
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 19));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(fetch_elem_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_elem_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(fetch_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("fetch_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_rule_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_rule_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_lookup_rule_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_lookup_rule_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(topdown_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("topdown_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(un_double_quote_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("un_double_quote_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(aux_AddConstr_0_4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("aux_AddConstr_0_4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(AddConstr_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("AddConstr_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(DeclareProd_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("DeclareProd_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(sdf_spread_cons_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("sdf_spread_cons_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(get_cnstr_name_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("get_cnstr_name_0_0", 0, ATtrue)), &(closures[closures_index]));
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
