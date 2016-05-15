#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__0;
static Symbol sym_cf_1;
static Symbol sym_lex_1;
static Symbol sym_opt_1;
static Symbol sym_iter_1;
static Symbol sym_iter_star_1;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_layout_0;
static Symbol sym_char_class_1;
static Symbol sym_range_2;
static Symbol sym_left_0;
static Symbol sym_assoc_1;
static Symbol sym_no_attrs_0;
static Symbol sym_attrs_1;
static Symbol sym_prod_3;
static Symbol sym_list_1;
static Symbol sym_appl_2;
static Symbol sym_lit_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
ATprotectSymbol(sym_cf_1);
sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
ATprotectSymbol(sym_lex_1);
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
sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
ATprotectSymbol(sym_layout_0);
sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
ATprotectSymbol(sym_char_class_1);
sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
ATprotectSymbol(sym_range_2);
sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
ATprotectSymbol(sym_left_0);
sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
ATprotectSymbol(sym_assoc_1);
sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
ATprotectSymbol(sym_no_attrs_0);
sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
ATprotectSymbol(sym_attrs_1);
sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
ATprotectSymbol(sym_prod_3);
sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
ATprotectSymbol(sym_list_1);
sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
ATprotectSymbol(sym_appl_2);
sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
ATprotectSymbol(sym_lit_1);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: explode-asfix2me [options]", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involves\n", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(sym_no_attrs_0);
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(sym_layout_0);
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(sym_opt_1, term15);
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(sym_cf_1, term17);
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(sym_left_0);
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(sym_assoc_1, term21);
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(sym_cf_1, term15);
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(sym_lex_1, term15);
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeInt(0);
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeInt(255);
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(sym_range_2, term29, term31);
ATprotect(&(term33));
term33 = term32;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm list_some_1_0 (StrSL sl, StrCL o_52, ATerm t);
ATerm map_1_0 (StrSL sl, StrCL k_52, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL t_33, ATerm t);
ATerm bottomup_1_0 (StrSL sl, StrCL c_27, ATerm t);
ATerm is_int_0_0 (StrSL sl, ATerm t);
ATerm explode_string_0_0 (StrSL sl, ATerm t);
ATerm io_wrap_4_0 (StrSL sl, StrCL y_18, StrCL z_18, StrCL a_19, StrCL b_19, ATerm t);
ATerm default_system_usage_2_0 (StrSL sl, StrCL r_16, StrCL s_16, ATerm t);
ATerm system_about_0_0 (StrSL sl, ATerm t);
static ATerm lifted12 (StrSL sl, ATerm t);
static ATerm lifted11 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm unflatten_lexical_0_0 (StrSL sl, ATerm t);
ATerm MkLayoutCharacter_0_0 (StrSL sl, ATerm t);
static ATerm o_7 (StrSL sl, ATerm t);
ATerm MkLayoutConsList_0_0 (StrSL sl, ATerm t);
ATerm unflatten_layout_0_0 (StrSL sl, ATerm t);
static ATerm o_6 (StrSL sl, ATerm t);
ATerm MkLexConsList_1_0 (StrSL sl, StrCL n_6, ATerm t);
static ATerm i_5 (StrSL sl, ATerm t);
ATerm MkCfConsList_2_0 (StrSL sl, StrCL g_5, StrCL h_5, ATerm t);
static ATerm e_4 (StrSL sl, ATerm t);
ATerm MkCfConsList_1_0 (StrSL sl, StrCL d_4, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted4 (StrSL sl, ATerm t);
ATerm unflatten_list_0_0 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
ATerm unflatten_literal_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm explode_asfix2me_usage_0_0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure g_83 = { &(_Fail) , sl };
StrCL lifted8_cl = &(g_83);
struct str_closure h_83 = { &(explode_asfix2me_usage_0_0) , sl };
StrCL lifted9_cl = &(h_83);
struct str_closure j_83 = { &(system_about_0_0) , sl };
StrCL lifted10_cl = &(j_83);
struct str_closure l_83 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(l_83);
t = io_wrap_4_0(sl, lifted8_cl, lifted9_cl, lifted10_cl, lifted11_cl, t);
if((t == NULL))
goto fail22 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure e_83 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(e_83);
t = bottomup_1_0(sl_up(sl), lifted12_cl, t);
if((t == NULL))
goto fail23 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure y_82 = { &(unflatten_lexical_0_0) , sl_up(sl_up(sl)) };
StrCL lifted16_cl = &(y_82);
struct str_closure a_83 = { &(unflatten_literal_0_0) , sl_up(sl_up(sl)) };
StrCL lifted13_cl = &(a_83);
t = try_1_0(sl_up(sl_up(sl)), lifted13_cl, t);
if((t == NULL))
goto fail24 ;
{
struct str_closure b_83 = { &(unflatten_list_0_0) , sl_up(sl_up(sl)) };
StrCL lifted14_cl = &(b_83);
t = try_1_0(sl_up(sl_up(sl)), lifted14_cl, t);
if((t == NULL))
goto fail24 ;
{
struct str_closure d_83 = { &(unflatten_layout_0_0) , sl_up(sl_up(sl)) };
StrCL lifted15_cl = &(d_83);
t = try_1_0(sl_up(sl_up(sl)), lifted15_cl, t);
if((t == NULL))
goto fail24 ;
t = try_1_0(sl_up(sl_up(sl)), lifted16_cl, t);
if((t == NULL))
goto fail24 ;
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
ATerm unflatten_lexical_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unflatten_lexical_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm83 = ATgetArgument(t, 0);
if(match_cons(trm83, sym_prod_3))
{
ATerm trm84 = ATgetArgument(trm83, 0);
if(((ATgetType(trm84) == AT_LIST) && !(ATisEmpty(trm84))))
{
ATerm trm85 = ATgetFirst((ATermList) trm84);
if(match_cons(trm85, sym_lex_1))
{
x_7 = ATgetArgument(trm85, 0);
}
else
goto fail21 ;
{
ATerm trm86 = (ATerm) ATgetNext((ATermList) trm84);
if(!(((ATgetType(trm86) == AT_LIST) && ATisEmpty(trm86))))
goto fail21 ;
}
}
else
goto fail21 ;
{
ATerm trm87 = ATgetArgument(trm83, 1);
if(match_cons(trm87, sym_cf_1))
{
if(!((x_7 == ATgetArgument(trm87, 0))))
goto fail21 ;
}
else
goto fail21 ;
}
{
ATerm trm88 = ATgetArgument(trm83, 2);
if(!(match_cons(trm88, sym_no_attrs_0)))
goto fail21 ;
}
}
else
goto fail21 ;
{
ATerm trm89 = ATgetArgument(t, 1);
if(((ATgetType(trm89) == AT_LIST) && !(ATisEmpty(trm89))))
{
ATerm trm90 = ATgetFirst((ATermList) trm89);
if(match_cons(trm90, sym_appl_2))
{
ATerm trm91 = ATgetArgument(trm90, 0);
if(match_cons(trm91, sym_prod_3))
{
y_7 = ATgetArgument(trm91, 0);
{
ATerm trm92 = ATgetArgument(trm91, 1);
if(match_cons(trm92, sym_iter_star_1))
{
ATerm trm93 = ATgetArgument(trm92, 0);
if(match_cons(trm93, sym_char_class_1))
{
ATerm trm94 = ATgetArgument(trm93, 0);
if(((ATgetType(trm94) == AT_LIST) && !(ATisEmpty(trm94))))
{
ATerm trm95 = ATgetFirst((ATermList) trm94);
if(match_cons(trm95, sym_range_2))
{
ATerm trm96 = ATgetArgument(trm95, 0);
if(!(((ATgetType(trm96) == AT_INT) && (ATgetInt((ATermInt) trm96) == 0))))
goto fail21 ;
{
ATerm trm97 = ATgetArgument(trm95, 1);
if(!(((ATgetType(trm97) == AT_INT) && (ATgetInt((ATermInt) trm97) == 255))))
goto fail21 ;
}
}
else
goto fail21 ;
{
ATerm trm98 = (ATerm) ATgetNext((ATermList) trm94);
if(!(((ATgetType(trm98) == AT_LIST) && ATisEmpty(trm98))))
goto fail21 ;
}
}
else
goto fail21 ;
}
else
goto fail21 ;
}
else
goto fail21 ;
}
{
ATerm trm99 = ATgetArgument(trm91, 2);
if(!(match_cons(trm99, sym_no_attrs_0)))
goto fail21 ;
}
}
else
goto fail21 ;
z_7 = ATgetArgument(trm90, 1);
}
else
goto fail21 ;
{
ATerm trm100 = (ATerm) ATgetNext((ATermList) trm89);
if(!(((ATgetType(trm100) == AT_LIST) && ATisEmpty(trm100))))
goto fail21 ;
}
}
else
goto fail21 ;
}
}
else
goto fail21 ;
b_8 = t;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term33))))), (ATerm)ATmakeAppl(sym_lex_1, x_7), term11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, y_7, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term33)))), term11), z_7)));
a_8 = t;
t = b_8;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, x_7)), (ATerm)ATmakeAppl(sym_cf_1, x_7), term11), a_8);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
ATerm MkLayoutCharacter_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MkLayoutCharacter_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
w_7 = t;
{
ATerm trm74 = t;
t = is_int_0_0(sl, t);
if((t == NULL))
goto label18 ;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term27), term25, term11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term33))), term27, term11), (ATerm) ATinsert(ATempty, w_7))));
goto label17 ;
label18 :
t = trm74;
{
ATerm trm75 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm76 = ATgetArgument(t, 0);
if(match_cons(trm76, sym_prod_3))
{
t_7 = ATgetArgument(trm76, 0);
{
ATerm trm77 = ATgetArgument(trm76, 1);
if(match_cons(trm77, sym_lex_1))
{
v_7 = ATgetArgument(trm77, 0);
}
else
goto label19 ;
}
u_7 = ATgetArgument(trm76, 2);
}
else
goto label19 ;
{
ATerm trm78 = ATgetArgument(t, 1);
}
}
else
goto label19 ;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term27), term25, term11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, v_7)), term27, term11), (ATerm) ATinsert(ATempty, w_7))));
goto label17 ;
label19 :
t = trm75;
{
ATerm trm79 = t;
if(match_cons(t, sym_appl_2))
{
ATerm trm80 = ATgetArgument(t, 0);
if(match_cons(trm80, sym_prod_3))
{
t_7 = ATgetArgument(trm80, 0);
{
ATerm trm81 = ATgetArgument(trm80, 1);
if(match_cons(trm81, sym_lit_1))
{
v_7 = ATgetArgument(trm81, 0);
}
else
goto label20 ;
}
u_7 = ATgetArgument(trm80, 2);
}
else
goto label20 ;
{
ATerm trm82 = ATgetArgument(t, 1);
}
}
else
goto label20 ;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term27), term25, term11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, v_7)), term27, term11), (ATerm) ATinsert(ATempty, w_7))));
goto label17 ;
label20 :
t = trm79;
goto label17 ;
}
}
label17 :
;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
ATerm MkLayoutConsList_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MkLayoutConsList_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = o_7(&(frame), t);
if((t == NULL))
goto fail18 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm o_7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "o_7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
ATerm trm70 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
m_7 = ATgetFirst((ATermList) t);
{
ATerm trm71 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm71) == AT_LIST) && ATisEmpty(trm71))))
goto label16 ;
}
}
else
goto label16 ;
t = m_7;
t = MkLayoutCharacter_0_0(sl_up(sl), t);
if((t == NULL))
goto label16 ;
goto label15 ;
label16 :
t = trm70;
{
ATerm p_7 = NULL,r_7 = NULL,q_7 = NULL,s_7 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
k_7 = ATgetFirst((ATermList) t);
{
ATerm trm72 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm72) == AT_LIST) && !(ATisEmpty(trm72))))
{
l_7 = ATgetFirst((ATermList) trm72);
n_7 = (ATerm) ATgetNext((ATermList) trm72);
}
else
goto fail19 ;
}
}
else
goto fail19 ;
r_7 = t;
t = k_7;
t = MkLayoutCharacter_0_0(sl_up(sl), t);
if((t == NULL))
goto fail19 ;
p_7 = t;
t = r_7;
s_7 = t;
t = l_7;
t = MkLayoutCharacter_0_0(sl_up(sl), t);
if((t == NULL))
goto fail19 ;
q_7 = t;
t = s_7;
{
ATerm trm73;
trm73 = CheckATermList(n_7);
if((trm73 == NULL))
goto fail19 ;
t = (ATerm) ATinsert((ATermList)trm73, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term25), term25), term25, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term23))), (ATerm) ATinsert(ATinsert(ATempty, q_7), p_7)));
t = o_7(sl, t);
if((t == NULL))
goto fail19 ;
else
goto label15 ;
}
}
label15 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
ATerm unflatten_layout_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unflatten_layout_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm61 = ATgetArgument(t, 0);
if(match_cons(trm61, sym_prod_3))
{
ATerm trm62 = ATgetArgument(trm61, 0);
if(((ATgetType(trm62) == AT_LIST) && !(ATisEmpty(trm62))))
{
ATerm trm63 = ATgetFirst((ATermList) trm62);
if(match_cons(trm63, sym_cf_1))
{
ATerm trm64 = ATgetArgument(trm63, 0);
if(!(match_cons(trm64, sym_layout_0)))
goto fail17 ;
}
else
goto fail17 ;
{
ATerm trm65 = (ATerm) ATgetNext((ATermList) trm62);
if(!(((ATgetType(trm65) == AT_LIST) && ATisEmpty(trm65))))
goto fail17 ;
}
}
else
goto fail17 ;
{
ATerm trm66 = ATgetArgument(trm61, 1);
if(match_cons(trm66, sym_cf_1))
{
ATerm trm67 = ATgetArgument(trm66, 0);
if(match_cons(trm67, sym_opt_1))
{
ATerm trm68 = ATgetArgument(trm67, 0);
if(!(match_cons(trm68, sym_layout_0)))
goto fail17 ;
}
else
goto fail17 ;
}
else
goto fail17 ;
}
{
ATerm trm69 = ATgetArgument(trm61, 2);
if(!(match_cons(trm69, sym_no_attrs_0)))
goto fail17 ;
}
}
else
goto fail17 ;
h_7 = ATgetArgument(t, 1);
}
else
goto fail17 ;
j_7 = t;
t = h_7;
t = MkLayoutConsList_0_0(sl, t);
if((t == NULL))
goto fail17 ;
i_7 = t;
t = j_7;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term25), term19, term11), (ATerm) ATinsert(ATempty, i_7));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
ATerm MkLexConsList_1_0 (StrSL sl, StrCL n_6, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MkLexConsList_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, n_6);
t = o_6(&(frame), t);
if((t == NULL))
goto fail15 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm o_6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "o_6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
ATerm trm57 = t;
ATerm p_6 = NULL,r_6 = NULL,q_6 = NULL,s_6 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
l_6 = ATgetFirst((ATermList) t);
{
ATerm trm58 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm58) == AT_LIST) && ATisEmpty(trm58))))
goto label14 ;
}
}
else
goto label14 ;
r_6 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label14 ;
p_6 = t;
t = r_6;
s_6 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto label14 ;
q_6 = t;
t = s_6;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, p_6)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, q_6)), term11), (ATerm) ATinsert(ATempty, l_6));
goto label13 ;
label14 :
t = trm57;
{
ATerm t_6 = NULL,a_7 = NULL,u_6 = NULL,b_7 = NULL,v_6 = NULL,c_7 = NULL,w_6 = NULL,d_7 = NULL,x_6 = NULL,e_7 = NULL,y_6 = NULL,f_7 = NULL,z_6 = NULL,g_7 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
j_6 = ATgetFirst((ATermList) t);
{
ATerm trm59 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm59) == AT_LIST) && !(ATisEmpty(trm59))))
{
k_6 = ATgetFirst((ATermList) trm59);
m_6 = (ATerm) ATgetNext((ATermList) trm59);
}
else
goto fail16 ;
}
}
else
goto fail16 ;
a_7 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail16 ;
t_6 = t;
t = a_7;
b_7 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail16 ;
u_6 = t;
t = b_7;
c_7 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail16 ;
v_6 = t;
t = c_7;
d_7 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail16 ;
w_6 = t;
t = d_7;
e_7 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail16 ;
x_6 = t;
t = e_7;
f_7 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail16 ;
y_6 = t;
t = f_7;
g_7 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail16 ;
z_6 = t;
t = g_7;
{
ATerm trm60;
trm60 = CheckATermList(m_6);
if((trm60 == NULL))
goto fail16 ;
t = (ATerm) ATinsert((ATermList)trm60, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, u_6))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, t_6))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, v_6)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term23))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, y_6)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, z_6)), term11), (ATerm) ATinsert(ATempty, k_6))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, w_6)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, x_6)), term11), (ATerm) ATinsert(ATempty, j_6)))));
t = o_6(sl, t);
if((t == NULL))
goto fail16 ;
else
goto label13 ;
}
}
label13 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
ATerm MkCfConsList_2_0 (StrSL sl, StrCL g_5, StrCL h_5, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MkCfConsList_2_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(2);
sl_init_fun(0, g_5);
sl_init_fun(1, h_5);
{
ATerm t_4 = NULL;
ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,j_5 = NULL,m_5 = NULL,k_5 = NULL,n_5 = NULL,l_5 = NULL,o_5 = NULL;
ATerm trm55;
trm55 = (ATerm) ATgetAnnotations(t);
if((trm55 == NULL))
trm55 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
u_4 = ATgetFirst((ATermList) t);
v_4 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail13 ;
y_4 = trm55;
t = u_4;
t_4 = t;
m_5 = t;
t = term13;
t = cl_fun(g_5)(cl_sl(g_5), t);
if((t == NULL))
goto fail13 ;
j_5 = t;
t = m_5;
n_5 = t;
t = term13;
t = cl_fun(g_5)(cl_sl(g_5), t);
if((t == NULL))
goto fail13 ;
k_5 = t;
t = n_5;
o_5 = t;
t = term13;
t = cl_fun(h_5)(cl_sl(h_5), t);
if((t == NULL))
goto fail13 ;
l_5 = t;
t = o_5;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, j_5)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, k_5, l_5)), term11), (ATerm) ATinsert(ATempty, t_4));
w_4 = t;
t = v_4;
x_4 = t;
{
ATerm trm56;
trm56 = CheckATermList(x_4);
if((trm56 == NULL))
goto fail13 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm56, w_4), y_4);
t = i_5(&(frame), t);
if((t == NULL))
goto fail13 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm i_5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "i_5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
ATerm trm48 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
e_5 = ATgetFirst((ATermList) t);
{
ATerm trm49 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm49) == AT_LIST) && ATisEmpty(trm49))))
goto label12 ;
}
}
else
goto label12 ;
t = e_5;
goto label11 ;
label12 :
t = trm48;
{
ATerm p_5 = NULL,z_5 = NULL,q_5 = NULL,a_6 = NULL,r_5 = NULL,b_6 = NULL,s_5 = NULL,c_6 = NULL,t_5 = NULL,d_6 = NULL,u_5 = NULL,e_6 = NULL,v_5 = NULL,f_6 = NULL,w_5 = NULL,g_6 = NULL,x_5 = NULL,h_6 = NULL,y_5 = NULL,i_6 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
z_4 = ATgetFirst((ATermList) t);
{
ATerm trm50 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm50) == AT_LIST) && !(ATisEmpty(trm50))))
{
a_5 = ATgetFirst((ATermList) trm50);
{
ATerm trm51 = (ATerm) ATgetNext((ATermList) trm50);
if(((ATgetType(trm51) == AT_LIST) && !(ATisEmpty(trm51))))
{
b_5 = ATgetFirst((ATermList) trm51);
{
ATerm trm52 = (ATerm) ATgetNext((ATermList) trm51);
if(((ATgetType(trm52) == AT_LIST) && !(ATisEmpty(trm52))))
{
c_5 = ATgetFirst((ATermList) trm52);
{
ATerm trm53 = (ATerm) ATgetNext((ATermList) trm52);
if(((ATgetType(trm53) == AT_LIST) && !(ATisEmpty(trm53))))
{
d_5 = ATgetFirst((ATermList) trm53);
f_5 = (ATerm) ATgetNext((ATermList) trm53);
}
else
goto fail14 ;
}
}
else
goto fail14 ;
}
}
else
goto fail14 ;
}
}
else
goto fail14 ;
}
}
else
goto fail14 ;
z_5 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail14 ;
p_5 = t;
t = z_5;
a_6 = t;
t = term13;
t = sl_fun(1, sl)(sl_fun_sl(1, sl), t);
if((t == NULL))
goto fail14 ;
q_5 = t;
t = a_6;
b_6 = t;
t = term13;
t = sl_fun(1, sl)(sl_fun_sl(1, sl), t);
if((t == NULL))
goto fail14 ;
r_5 = t;
t = b_6;
c_6 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail14 ;
s_5 = t;
t = c_6;
d_6 = t;
t = term13;
t = sl_fun(1, sl)(sl_fun_sl(1, sl), t);
if((t == NULL))
goto fail14 ;
t_5 = t;
t = d_6;
e_6 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail14 ;
u_5 = t;
t = e_6;
f_6 = t;
t = term13;
t = sl_fun(1, sl)(sl_fun_sl(1, sl), t);
if((t == NULL))
goto fail14 ;
v_5 = t;
t = f_6;
g_6 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail14 ;
w_5 = t;
t = g_6;
h_6 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail14 ;
x_5 = t;
t = h_6;
i_6 = t;
t = term13;
t = sl_fun(1, sl)(sl_fun_sl(1, sl), t);
if((t == NULL))
goto fail14 ;
y_5 = t;
t = i_6;
{
ATerm trm54;
trm54 = CheckATermList(f_5);
if((trm54 == NULL))
goto fail14 ;
t = (ATerm) ATinsert((ATermList)trm54, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, s_5, t_5))), term19), r_5), term19), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, p_5, q_5))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, u_5, v_5)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term23))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, w_5)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, x_5, y_5)), term11), (ATerm) ATinsert(ATempty, d_5))), c_5), b_5), a_5), z_4)));
t = i_5(sl, t);
if((t == NULL))
goto fail14 ;
else
goto label11 ;
}
}
label11 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
ATerm MkCfConsList_1_0 (StrSL sl, StrCL d_4, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "MkCfConsList_1_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_funs(1);
sl_init_fun(0, d_4);
{
ATerm r_3 = NULL;
ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,f_4 = NULL,h_4 = NULL,g_4 = NULL,i_4 = NULL;
ATerm trm46;
trm46 = (ATerm) ATgetAnnotations(t);
if((trm46 == NULL))
trm46 = (ATerm) ATempty;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
s_3 = ATgetFirst((ATermList) t);
t_3 = (ATerm) ATgetNext((ATermList) t);
}
else
goto fail11 ;
w_3 = trm46;
t = s_3;
r_3 = t;
h_4 = t;
t = term13;
t = cl_fun(d_4)(cl_sl(d_4), t);
if((t == NULL))
goto fail11 ;
f_4 = t;
t = h_4;
i_4 = t;
t = term13;
t = cl_fun(d_4)(cl_sl(d_4), t);
if((t == NULL))
goto fail11 ;
g_4 = t;
t = i_4;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, f_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, g_4)), term11), (ATerm) ATinsert(ATempty, r_3));
u_3 = t;
t = t_3;
v_3 = t;
{
ATerm trm47;
trm47 = CheckATermList(v_3);
if((trm47 == NULL))
goto fail11 ;
t = (ATerm) SRTS_setAnnotations((ATerm)ATinsert((ATermList)trm47, u_3), w_3);
t = e_4(&(frame), t);
if((t == NULL))
goto fail11 ;
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
--__tracing_table_counter;
return(NULL);
}
static ATerm e_4 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "e_4";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
ATerm trm41 = t;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
z_3 = ATgetFirst((ATermList) t);
{
ATerm trm42 = (ATerm) ATgetNext((ATermList) t);
if(!(((ATgetType(trm42) == AT_LIST) && ATisEmpty(trm42))))
goto label10 ;
}
}
else
goto label10 ;
t = z_3;
goto label9 ;
label10 :
t = trm41;
{
ATerm j_4 = NULL,o_4 = NULL,k_4 = NULL,p_4 = NULL,l_4 = NULL,q_4 = NULL,m_4 = NULL,r_4 = NULL,n_4 = NULL,s_4 = NULL;
if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
{
x_3 = ATgetFirst((ATermList) t);
{
ATerm trm43 = (ATerm) ATgetNext((ATermList) t);
if(((ATgetType(trm43) == AT_LIST) && !(ATisEmpty(trm43))))
{
a_4 = ATgetFirst((ATermList) trm43);
{
ATerm trm44 = (ATerm) ATgetNext((ATermList) trm43);
if(((ATgetType(trm44) == AT_LIST) && !(ATisEmpty(trm44))))
{
y_3 = ATgetFirst((ATermList) trm44);
c_4 = (ATerm) ATgetNext((ATermList) trm44);
}
else
goto fail12 ;
}
}
else
goto fail12 ;
}
}
else
goto fail12 ;
o_4 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail12 ;
j_4 = t;
t = o_4;
p_4 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail12 ;
k_4 = t;
t = p_4;
q_4 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail12 ;
l_4 = t;
t = q_4;
r_4 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail12 ;
m_4 = t;
t = r_4;
s_4 = t;
t = term13;
t = sl_fun(0, sl)(sl_fun_sl(0, sl), t);
if((t == NULL))
goto fail12 ;
n_4 = t;
t = s_4;
{
ATerm trm45;
trm45 = CheckATermList(c_4);
if((trm45 == NULL))
goto fail12 ;
t = (ATerm) ATinsert((ATermList)trm45, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, k_4))), term19), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, j_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term23))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, m_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, n_4)), term11), (ATerm) ATinsert(ATempty, y_3))), a_4), x_3)));
t = e_4(sl, t);
if((t == NULL))
goto fail12 ;
else
goto label9 ;
}
}
label9 :
;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail12 :
--__tracing_table_counter;
return(NULL);
}
ATerm unflatten_list_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unflatten_list_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(4);
{
ATerm trm0 = t;
ATerm q_3 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm1 = ATgetArgument(t, 0);
if(match_cons(trm1, sym_list_1))
{
ATerm trm2 = ATgetArgument(trm1, 0);
if(match_cons(trm2, sym_cf_1))
{
ATerm trm3 = ATgetArgument(trm2, 0);
if(match_cons(trm3, sym_iter_star_1))
{
q_3 = ATgetArgument(trm3, 0);
}
else
goto label1 ;
}
else
goto label1 ;
}
else
goto label1 ;
{
ATerm trm4 = ATgetArgument(t, 1);
if(!(((ATgetType(trm4) == AT_LIST) && ATisEmpty(trm4))))
goto label1 ;
}
}
else
goto label1 ;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, q_3)), term11), (ATerm) ATempty);
goto label0 ;
label1 :
t = trm0;
{
ATerm trm5 = t;
ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm6 = ATgetArgument(t, 0);
if(match_cons(trm6, sym_list_1))
{
ATerm trm7 = ATgetArgument(trm6, 0);
if(match_cons(trm7, sym_cf_1))
{
ATerm trm8 = ATgetArgument(trm7, 0);
if(match_cons(trm8, sym_iter_star_1))
{
l_3 = ATgetArgument(trm8, 0);
}
else
goto label2 ;
}
else
goto label2 ;
}
else
goto label2 ;
{
ATerm trm9 = ATgetArgument(t, 1);
if(((ATgetType(trm9) == AT_LIST) && !(ATisEmpty(trm9))))
{
m_3 = ATgetFirst((ATermList) trm9);
n_3 = (ATerm) ATgetNext((ATermList) trm9);
}
else
goto label2 ;
}
}
else
goto label2 ;
p_3 = t;
{
ATerm trm10;
trm10 = CheckATermList(n_3);
if((trm10 == NULL))
goto label2 ;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_3))), (ATerm) ATinsert((ATermList)trm10, m_3));
t = unflatten_list_0_0(sl, t);
if((t == NULL))
goto label2 ;
o_3 = t;
t = p_3;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, l_3))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, l_3)), term11), (ATerm) ATinsert(ATempty, o_3));
}
goto label0 ;
label2 :
t = trm5;
{
ATerm trm11 = t;
ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
sl_init_var(0, i_3);
if(match_cons(t, sym_appl_2))
{
ATerm trm12 = ATgetArgument(t, 0);
if(match_cons(trm12, sym_list_1))
{
ATerm trm13 = ATgetArgument(trm12, 0);
if(match_cons(trm13, sym_cf_1))
{
ATerm trm14 = ATgetArgument(trm13, 0);
if(match_cons(trm14, sym_iter_1))
{
if((i_3 == NULL))
{
i_3 = ATgetArgument(trm14, 0);
}
else
if((i_3 != ATgetArgument(trm14, 0)))
goto label3 ;
}
else
goto label3 ;
}
else
goto label3 ;
}
else
goto label3 ;
h_3 = ATgetArgument(t, 1);
}
else
goto label3 ;
k_3 = t;
t = h_3;
{
struct str_closure s_82 = { &(lifted4) , &(frame) };
StrCL lifted4_cl = &(s_82);
t = MkCfConsList_1_0(sl, lifted4_cl, t);
if((t == NULL))
goto label3 ;
j_3 = t;
t = k_3;
t = j_3;
}
goto label0 ;
label3 :
t = trm11;
{
ATerm trm15 = t;
ATerm f_3 = NULL,g_3 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm16 = ATgetArgument(t, 0);
if(match_cons(trm16, sym_list_1))
{
ATerm trm17 = ATgetArgument(trm16, 0);
if(match_cons(trm17, sym_cf_1))
{
ATerm trm18 = ATgetArgument(trm17, 0);
if(match_cons(trm18, sym_iter_star_sep_2))
{
f_3 = ATgetArgument(trm18, 0);
g_3 = ATgetArgument(trm18, 1);
}
else
goto label4 ;
}
else
goto label4 ;
}
else
goto label4 ;
{
ATerm trm19 = ATgetArgument(t, 1);
if(!(((ATgetType(trm19) == AT_LIST) && ATisEmpty(trm19))))
goto label4 ;
}
}
else
goto label4 ;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, f_3, g_3)), term11), (ATerm) ATempty);
goto label0 ;
label4 :
t = trm15;
{
ATerm trm20 = t;
ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm21 = ATgetArgument(t, 0);
if(match_cons(trm21, sym_list_1))
{
ATerm trm22 = ATgetArgument(trm21, 0);
if(match_cons(trm22, sym_cf_1))
{
ATerm trm23 = ATgetArgument(trm22, 0);
if(match_cons(trm23, sym_iter_star_sep_2))
{
z_2 = ATgetArgument(trm23, 0);
a_3 = ATgetArgument(trm23, 1);
}
else
goto label5 ;
}
else
goto label5 ;
}
else
goto label5 ;
{
ATerm trm24 = ATgetArgument(t, 1);
if(((ATgetType(trm24) == AT_LIST) && !(ATisEmpty(trm24))))
{
b_3 = ATgetFirst((ATermList) trm24);
c_3 = (ATerm) ATgetNext((ATermList) trm24);
}
else
goto label5 ;
}
}
else
goto label5 ;
e_3 = t;
{
ATerm trm25;
trm25 = CheckATermList(c_3);
if((trm25 == NULL))
goto label5 ;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, z_2, a_3))), (ATerm) ATinsert((ATermList)trm25, b_3));
t = unflatten_list_0_0(sl, t);
if((t == NULL))
goto label5 ;
d_3 = t;
t = e_3;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, z_2, a_3))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, z_2, a_3)), term11), (ATerm) ATinsert(ATempty, d_3));
}
goto label0 ;
label5 :
t = trm20;
{
ATerm trm26 = t;
ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
sl_init_var(1, v_2);
sl_init_var(2, w_2);
if(match_cons(t, sym_appl_2))
{
ATerm trm27 = ATgetArgument(t, 0);
if(match_cons(trm27, sym_list_1))
{
ATerm trm28 = ATgetArgument(trm27, 0);
if(match_cons(trm28, sym_cf_1))
{
ATerm trm29 = ATgetArgument(trm28, 0);
if(match_cons(trm29, sym_iter_sep_2))
{
if((v_2 == NULL))
{
v_2 = ATgetArgument(trm29, 0);
}
else
if((v_2 != ATgetArgument(trm29, 0)))
goto label6 ;
if((w_2 == NULL))
{
w_2 = ATgetArgument(trm29, 1);
}
else
if((w_2 != ATgetArgument(trm29, 1)))
goto label6 ;
}
else
goto label6 ;
}
else
goto label6 ;
}
else
goto label6 ;
u_2 = ATgetArgument(t, 1);
}
else
goto label6 ;
y_2 = t;
t = u_2;
{
struct str_closure u_82 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(u_82);
struct str_closure v_82 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(v_82);
t = MkCfConsList_2_0(sl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto label6 ;
x_2 = t;
t = y_2;
t = x_2;
}
goto label0 ;
label6 :
t = trm26;
{
ATerm trm30 = t;
ATerm t_2 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm31 = ATgetArgument(t, 0);
if(match_cons(trm31, sym_list_1))
{
ATerm trm32 = ATgetArgument(trm31, 0);
if(match_cons(trm32, sym_iter_star_1))
{
t_2 = ATgetArgument(trm32, 0);
}
else
goto label7 ;
}
else
goto label7 ;
{
ATerm trm33 = ATgetArgument(t, 1);
if(!(((ATgetType(trm33) == AT_LIST) && ATisEmpty(trm33))))
goto label7 ;
}
}
else
goto label7 ;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, t_2)), term11), (ATerm) ATempty);
goto label0 ;
label7 :
t = trm30;
{
ATerm trm34 = t;
ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
if(match_cons(t, sym_appl_2))
{
ATerm trm35 = ATgetArgument(t, 0);
if(match_cons(trm35, sym_list_1))
{
ATerm trm36 = ATgetArgument(trm35, 0);
if(match_cons(trm36, sym_iter_star_1))
{
o_2 = ATgetArgument(trm36, 0);
}
else
goto label8 ;
}
else
goto label8 ;
{
ATerm trm37 = ATgetArgument(t, 1);
if(((ATgetType(trm37) == AT_LIST) && !(ATisEmpty(trm37))))
{
p_2 = ATgetFirst((ATermList) trm37);
q_2 = (ATerm) ATgetNext((ATermList) trm37);
}
else
goto label8 ;
}
}
else
goto label8 ;
s_2 = t;
{
ATerm trm38;
trm38 = CheckATermList(q_2);
if((trm38 == NULL))
goto label8 ;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, o_2)), (ATerm) ATinsert((ATermList)trm38, p_2));
t = unflatten_list_0_0(sl, t);
if((t == NULL))
goto label8 ;
r_2 = t;
t = s_2;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, o_2))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, o_2)), term11), (ATerm) ATinsert(ATempty, r_2));
}
goto label0 ;
label8 :
t = trm34;
{
ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
sl_init_var(3, l_2);
if(match_cons(t, sym_appl_2))
{
ATerm trm39 = ATgetArgument(t, 0);
if(match_cons(trm39, sym_list_1))
{
ATerm trm40 = ATgetArgument(trm39, 0);
if(match_cons(trm40, sym_iter_1))
{
if((l_2 == NULL))
{
l_2 = ATgetArgument(trm40, 0);
}
else
if((l_2 != ATgetArgument(trm40, 0)))
goto fail6 ;
}
else
goto fail6 ;
}
else
goto fail6 ;
k_2 = ATgetArgument(t, 1);
}
else
goto fail6 ;
n_2 = t;
t = k_2;
{
struct str_closure x_82 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(x_82);
t = MkLexConsList_1_0(sl, lifted7_cl, t);
if((t == NULL))
goto fail6 ;
m_2 = t;
t = n_2;
t = m_2;
goto label0 ;
}
}
}
}
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
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(3, sl) == NULL))
goto fail10 ;
else
{
t = sl_readvar(3, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted6 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted6";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
goto fail9 ;
else
{
t = sl_readvar(2, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted5 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted5";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail8 ;
else
{
t = sl_readvar(1, sl);
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
if((sl_readvar(0, sl) == NULL))
goto fail7 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
ATerm unflatten_literal_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "unflatten_literal_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL,i_2 = NULL;
if(match_cons(t, sym_appl_2))
{
a_2 = ATgetArgument(t, 0);
b_2 = ATgetArgument(t, 1);
}
else
goto fail3 ;
i_2 = t;
t = b_2;
{
struct str_closure r_82 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(r_82);
t = list_some_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail3 ;
c_2 = t;
t = i_2;
t = (ATerm) ATmakeAppl(sym_appl_2, a_2, c_2);
}
}
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
{
ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,j_2 = NULL;
if(match_cons(t, sym_lit_1))
{
g_2 = ATgetArgument(t, 0);
}
else
goto fail4 ;
j_2 = t;
t = g_2;
t = explode_string_0_0(sl_up(sl), t);
if((t == NULL))
goto fail4 ;
f_2 = t;
{
struct str_closure p_82 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(p_82);
t = map_1_0(sl_up(sl), lifted3_cl, t);
if((t == NULL))
goto fail4 ;
e_2 = t;
t = j_2;
t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, e_2, (ATerm)ATmakeAppl(sym_lit_1, g_2), term11), f_2);
}
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
ATerm h_2 = NULL;
h_2 = t;
t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, h_2));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
ATerm explode_asfix2me_usage_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "explode_asfix2me_usage_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure m_82 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(m_82);
struct str_closure o_82 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(o_82);
t = default_system_usage_2_0(sl, lifted0_cl, lifted1_cl, t);
if((t == NULL))
goto fail0 ;
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
t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term3), term5), term7), term9);
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
t = (ATerm) ATinsert(ATempty, term1);
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 34));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(list_some_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("list_some_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(map_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("map_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(bottomup_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("bottomup_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(is_int_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("is_int_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_string_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_string_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(io_wrap_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("io_wrap_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(default_system_usage_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("default_system_usage_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(system_about_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("system_about_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted12);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted12", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted11);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted11", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unflatten_lexical_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unflatten_lexical_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MkLayoutCharacter_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MkLayoutCharacter_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(o_7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("o_7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MkLayoutConsList_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MkLayoutConsList_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unflatten_layout_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unflatten_layout_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(o_6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("o_6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MkLexConsList_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MkLexConsList_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(i_5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("i_5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MkCfConsList_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MkCfConsList_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(e_4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("e_4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(MkCfConsList_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("MkCfConsList_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted7);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted7", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted5);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted5", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted4);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted4", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unflatten_list_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unflatten_list_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(unflatten_literal_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("unflatten_literal_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(explode_asfix2me_usage_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("explode_asfix2me_usage_0_0", 0, ATtrue)), &(closures[closures_index]));
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
