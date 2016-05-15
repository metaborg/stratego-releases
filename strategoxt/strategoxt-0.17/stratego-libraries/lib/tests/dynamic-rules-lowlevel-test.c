#include <srts/stratego.h>
#include <stratego-lib/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym__2;
static Symbol sym__0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static void init_module_constructors (void)
{
sym__2 = ATmakeSymbol("", 2, ATfalse);
ATprotectSymbol(sym__2);
sym__0 = ATmakeSymbol("", 0, ATfalse);
ATprotectSymbol(sym__0);
sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
ATprotectSymbol(sym_Cons_2);
sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
ATprotectSymbol(sym_Nil_0);
}
static ATerm term115;
static ATerm term114;
static ATerm term113;
static ATerm term112;
static ATerm term111;
static ATerm term110;
static ATerm term109;
static ATerm term108;
static ATerm term107;
static ATerm term106;
static ATerm term105;
static ATerm term104;
static ATerm term103;
static ATerm term102;
static ATerm term101;
static ATerm term100;
static ATerm term99;
static ATerm term98;
static ATerm term97;
static ATerm term96;
static ATerm term95;
static ATerm term94;
static ATerm term93;
static ATerm term92;
static ATerm term91;
static ATerm term90;
static ATerm term89;
static ATerm term88;
static ATerm term87;
static ATerm term86;
static ATerm term85;
static ATerm term84;
static ATerm term83;
static ATerm term82;
static ATerm term81;
static ATerm term80;
static ATerm term79;
static ATerm term78;
static ATerm term77;
static ATerm term76;
static ATerm term75;
static ATerm term74;
static ATerm term73;
static ATerm term72;
static ATerm term71;
static ATerm term70;
static ATerm term69;
static ATerm term68;
static ATerm term67;
static ATerm term66;
static ATerm term65;
static ATerm term64;
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
term0 = (ATerm) ATmakeAppl(ATmakeSymbol("dynamic-rules-tested (low-level)", 0, ATtrue));
ATprotect(&(term1));
term1 = term0;
ATprotect(&(term2));
term2 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set lookup in returned scope", 0, ATtrue));
ATprotect(&(term3));
term3 = term2;
ATprotect(&(term4));
term4 = (ATerm) ATmakeAppl(ATmakeSymbol("KeyA", 0, ATtrue));
ATprotect(&(term5));
term5 = term4;
ATprotect(&(term6));
term6 = (ATerm) ATmakeAppl(ATmakeSymbol("value5", 0, ATtrue));
ATprotect(&(term7));
term7 = term6;
ATprotect(&(term8));
term8 = (ATerm) ATmakeAppl(ATmakeSymbol("testing low-level dr-set-in-rule-set", 0, ATtrue));
ATprotect(&(term9));
term9 = term8;
ATprotect(&(term10));
term10 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set creation", 0, ATtrue));
ATprotect(&(term11));
term11 = term10;
ATprotect(&(term12));
term12 = (ATerm) ATmakeAppl(sym__0);
ATprotect(&(term13));
term13 = term12;
ATprotect(&(term14));
term14 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set lookup non-existing", 0, ATtrue));
ATprotect(&(term15));
term15 = term14;
ATprotect(&(term16));
term16 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set add rule", 0, ATtrue));
ATprotect(&(term17));
term17 = term16;
ATprotect(&(term18));
term18 = (ATerm) ATmakeAppl(ATmakeSymbol("value1", 0, ATtrue));
ATprotect(&(term19));
term19 = term18;
ATprotect(&(term20));
term20 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set lookup", 0, ATtrue));
ATprotect(&(term21));
term21 = term20;
ATprotect(&(term22));
term22 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set label/add scope", 0, ATtrue));
ATprotect(&(term23));
term23 = term22;
ATprotect(&(term24));
term24 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
ATprotect(&(term25));
term25 = term24;
ATprotect(&(term26));
term26 = (ATerm) ATmakeAppl(ATmakeSymbol("B", 0, ATtrue));
ATprotect(&(term27));
term27 = term26;
ATprotect(&(term28));
term28 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set lookup in higher scope", 0, ATtrue));
ATprotect(&(term29));
term29 = term28;
ATprotect(&(term30));
term30 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set add (labeled) rules", 0, ATtrue));
ATprotect(&(term31));
term31 = term30;
ATprotect(&(term32));
term32 = (ATerm) ATmakeAppl(ATmakeSymbol("value4", 0, ATtrue));
ATprotect(&(term33));
term33 = term32;
ATprotect(&(term34));
term34 = (ATerm) ATmakeAppl(ATmakeSymbol("value6", 0, ATtrue));
ATprotect(&(term35));
term35 = term34;
ATprotect(&(term36));
term36 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set undefine labeled rule", 0, ATtrue));
ATprotect(&(term37));
term37 = term36;
ATprotect(&(term38));
term38 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set lookup higher is empty", 0, ATtrue));
ATprotect(&(term39));
term39 = term38;
ATprotect(&(term40));
term40 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set undefine rule", 0, ATtrue));
ATprotect(&(term41));
term41 = term40;
ATprotect(&(term42));
term42 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set lookup empty", 0, ATtrue));
ATprotect(&(term43));
term43 = term42;
ATprotect(&(term44));
term44 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-set-in-rule-set leave scope", 0, ATtrue));
ATprotect(&(term45));
term45 = term44;
ATprotect(&(term46));
term46 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set lookup in returned scope", 0, ATtrue));
ATprotect(&(term47));
term47 = term46;
ATprotect(&(term48));
term48 = (ATerm) ATmakeAppl(ATmakeSymbol("testing low-level dr-add-to-rule-set", 0, ATtrue));
ATprotect(&(term49));
term49 = term48;
ATprotect(&(term50));
term50 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set creation", 0, ATtrue));
ATprotect(&(term51));
term51 = term50;
ATprotect(&(term52));
term52 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set lookup non-existing", 0, ATtrue));
ATprotect(&(term53));
term53 = term52;
ATprotect(&(term54));
term54 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set extend rule", 0, ATtrue));
ATprotect(&(term55));
term55 = term54;
ATprotect(&(term56));
term56 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set lookup singleton", 0, ATtrue));
ATprotect(&(term57));
term57 = term56;
ATprotect(&(term58));
term58 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set label/add scope", 0, ATtrue));
ATprotect(&(term59));
term59 = term58;
ATprotect(&(term60));
term60 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set lookup in higher scope", 0, ATtrue));
ATprotect(&(term61));
term61 = term60;
ATprotect(&(term62));
term62 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set extend (labeled) rules", 0, ATtrue));
ATprotect(&(term63));
term63 = term62;
ATprotect(&(term64));
term64 = (ATerm) ATmakeAppl(ATmakeSymbol("value7", 0, ATtrue));
ATprotect(&(term65));
term65 = term64;
ATprotect(&(term66));
term66 = (ATerm) ATmakeAppl(ATmakeSymbol("KeyB", 0, ATtrue));
ATprotect(&(term67));
term67 = term66;
ATprotect(&(term68));
term68 = (ATerm) ATmakeAppl(ATmakeSymbol("value8", 0, ATtrue));
ATprotect(&(term69));
term69 = term68;
ATprotect(&(term70));
term70 = (ATerm) ATmakeAppl(ATmakeSymbol("value9", 0, ATtrue));
ATprotect(&(term71));
term71 = term70;
ATprotect(&(term72));
term72 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set lookup current scope", 0, ATtrue));
ATprotect(&(term73));
term73 = term72;
ATprotect(&(term74));
term74 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set lookup higher scope", 0, ATtrue));
ATprotect(&(term75));
term75 = term74;
ATprotect(&(term76));
term76 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set undefine in higher scope", 0, ATtrue));
ATprotect(&(term77));
term77 = term76;
ATprotect(&(term78));
term78 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set lookup higher is empty", 0, ATtrue));
ATprotect(&(term79));
term79 = term78;
ATprotect(&(term80));
term80 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set undefine in current scope", 0, ATtrue));
ATprotect(&(term81));
term81 = term80;
ATprotect(&(term82));
term82 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set lookup empty", 0, ATtrue));
ATprotect(&(term83));
term83 = term82;
ATprotect(&(term84));
term84 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-add-to-rule-set leave scope", 0, ATtrue));
ATprotect(&(term85));
term85 = term84;
ATprotect(&(term86));
term86 = (ATerm) ATmakeAppl(ATmakeSymbol("test-change-set lookup", 0, ATtrue));
ATprotect(&(term87));
term87 = term86;
ATprotect(&(term88));
term88 = (ATerm) ATmakeAppl(ATmakeSymbol("testing change-set", 0, ATtrue));
ATprotect(&(term89));
term89 = term88;
ATprotect(&(term90));
term90 = (ATerm) ATmakeAppl(ATmakeSymbol("test-change-set add rule", 0, ATtrue));
ATprotect(&(term91));
term91 = term90;
ATprotect(&(term92));
term92 = (ATerm) ATmakeAppl(ATmakeSymbol("test-change-set add rules", 0, ATtrue));
ATprotect(&(term93));
term93 = term92;
ATprotect(&(term94));
term94 = (ATerm) ATmakeAppl(ATmakeSymbol("test-change-set label/add scope, start change set", 0, ATtrue));
ATprotect(&(term95));
term95 = term94;
ATprotect(&(term96));
term96 = (ATerm) ATmakeAppl(ATmakeSymbol("test-change-set commit change set", 0, ATtrue));
ATprotect(&(term97));
term97 = term96;
ATprotect(&(term98));
term98 = (ATerm) ATmakeAppl(ATmakeSymbol("test-change-set leave scope", 0, ATtrue));
ATprotect(&(term99));
term99 = term98;
ATprotect(&(term100));
term100 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-intersect-rule-sets equal singleton sets", 0, ATtrue));
ATprotect(&(term101));
term101 = term100;
ATprotect(&(term102));
term102 = (ATerm) ATmakeAppl(ATmakeSymbol("testing dr-intersect-rule-sets", 0, ATtrue));
ATprotect(&(term103));
term103 = term102;
ATprotect(&(term104));
term104 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-intersect-rule-sets empty sets", 0, ATtrue));
ATprotect(&(term105));
term105 = term104;
ATprotect(&(term106));
term106 = (ATerm) ATmakeAppl(ATmakeSymbol("value2", 0, ATtrue));
ATprotect(&(term107));
term107 = term106;
ATprotect(&(term108));
term108 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-intersect-rule-sets 1st empty set", 0, ATtrue));
ATprotect(&(term109));
term109 = term108;
ATprotect(&(term110));
term110 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-intersect-rule-sets 2nd empty set", 0, ATtrue));
ATprotect(&(term111));
term111 = term110;
ATprotect(&(term112));
term112 = (ATerm) ATmakeAppl(ATmakeSymbol("value3", 0, ATtrue));
ATprotect(&(term113));
term113 = term112;
ATprotect(&(term114));
term114 = (ATerm) ATmakeAppl(ATmakeSymbol("test-dr-intersect-rule-sets inequal singleton sets", 0, ATtrue));
ATprotect(&(term115));
term115 = term114;
}
#include <srts/init-stratego-application.h>
extern const char * __tracing_table [];
extern unsigned short __tracing_table_counter;
ATerm dr_eq_rule_sets_0_0 (StrSL sl, ATerm t);
ATerm dr_intersect_rule_sets_0_0 (StrSL sl, ATerm t);
ATerm dr_add_to_rule_set_0_3 (StrSL sl, ATerm o_38, ATerm p_38, ATerm q_38, ATerm t);
ATerm dr_add_to_rule_set_0_2 (StrSL sl, ATerm m_38, ATerm n_38, ATerm t);
ATerm dr_set_in_rule_set_0_3 (StrSL sl, ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
ATerm dr_set_in_rule_set_0_2 (StrSL sl, ATerm m_37, ATerm n_37, ATerm t);
ATerm dr_lookup_rule_0_1 (StrSL sl, ATerm s_36, ATerm t);
ATerm dr_commit_change_set_0_0 (StrSL sl, ATerm t);
ATerm dr_start_change_set_0_0 (StrSL sl, ATerm t);
ATerm dr_label_scope_0_1 (StrSL sl, ATerm y_35, ATerm t);
ATerm dr_leave_scope_0_0 (StrSL sl, ATerm t);
ATerm dr_add_scope_0_0 (StrSL sl, ATerm t);
ATerm dr_new_rule_set_0_0 (StrSL sl, ATerm t);
ATerm try_1_0 (StrSL sl, StrCL y_30, ATerm t);
ATerm say_1_0 (StrSL sl, StrCL u_21, ATerm t);
ATerm apply_and_fail_3_0 (StrSL sl, StrCL l_10, StrCL m_10, StrCL n_10, ATerm t);
ATerm apply_and_check_4_0 (StrSL sl, StrCL h_10, StrCL i_10, StrCL j_10, StrCL k_10, ATerm t);
ATerm apply_test_4_0 (StrSL sl, StrCL a_10, StrCL b_10, StrCL c_10, StrCL d_10, ATerm t);
ATerm test_suite_2_0 (StrSL sl, StrCL y_9, StrCL z_9, ATerm t);
static ATerm lifted186 (StrSL sl, ATerm t);
static ATerm lifted185 (StrSL sl, ATerm t);
static ATerm lifted183 (StrSL sl, ATerm t);
static ATerm lifted182 (StrSL sl, ATerm t);
static ATerm lifted181 (StrSL sl, ATerm t);
static ATerm lifted180 (StrSL sl, ATerm t);
static ATerm lifted178 (StrSL sl, ATerm t);
static ATerm lifted177 (StrSL sl, ATerm t);
static ATerm lifted176 (StrSL sl, ATerm t);
static ATerm lifted175 (StrSL sl, ATerm t);
static ATerm lifted173 (StrSL sl, ATerm t);
static ATerm lifted172 (StrSL sl, ATerm t);
static ATerm lifted171 (StrSL sl, ATerm t);
static ATerm lifted170 (StrSL sl, ATerm t);
static ATerm lifted168 (StrSL sl, ATerm t);
static ATerm lifted167 (StrSL sl, ATerm t);
static ATerm lifted166 (StrSL sl, ATerm t);
static ATerm lifted191 (StrSL sl, ATerm t);
static ATerm lifted190 (StrSL sl, ATerm t);
static ATerm lifted188 (StrSL sl, ATerm t);
static ATerm lifted187 (StrSL sl, ATerm t);
ATerm test_dr_intersect_rule_sets_0_0 (StrSL sl, ATerm t);
static ATerm lifted161 (StrSL sl, ATerm t);
static ATerm lifted160 (StrSL sl, ATerm t);
static ATerm lifted158 (StrSL sl, ATerm t);
static ATerm lifted157 (StrSL sl, ATerm t);
static ATerm lifted156 (StrSL sl, ATerm t);
static ATerm lifted155 (StrSL sl, ATerm t);
static ATerm lifted154 (StrSL sl, ATerm t);
static ATerm lifted153 (StrSL sl, ATerm t);
static ATerm lifted152 (StrSL sl, ATerm t);
static ATerm lifted150 (StrSL sl, ATerm t);
static ATerm lifted149 (StrSL sl, ATerm t);
static ATerm lifted148 (StrSL sl, ATerm t);
static ATerm lifted147 (StrSL sl, ATerm t);
static ATerm lifted146 (StrSL sl, ATerm t);
static ATerm lifted145 (StrSL sl, ATerm t);
static ATerm lifted144 (StrSL sl, ATerm t);
static ATerm lifted143 (StrSL sl, ATerm t);
static ATerm lifted142 (StrSL sl, ATerm t);
static ATerm lifted141 (StrSL sl, ATerm t);
static ATerm lifted140 (StrSL sl, ATerm t);
static ATerm lifted139 (StrSL sl, ATerm t);
static ATerm lifted138 (StrSL sl, ATerm t);
static ATerm lifted137 (StrSL sl, ATerm t);
static ATerm lifted136 (StrSL sl, ATerm t);
static ATerm lifted135 (StrSL sl, ATerm t);
static ATerm lifted134 (StrSL sl, ATerm t);
static ATerm lifted133 (StrSL sl, ATerm t);
static ATerm lifted132 (StrSL sl, ATerm t);
static ATerm lifted131 (StrSL sl, ATerm t);
static ATerm lifted130 (StrSL sl, ATerm t);
static ATerm lifted129 (StrSL sl, ATerm t);
static ATerm lifted128 (StrSL sl, ATerm t);
static ATerm lifted127 (StrSL sl, ATerm t);
static ATerm lifted126 (StrSL sl, ATerm t);
static ATerm lifted125 (StrSL sl, ATerm t);
static ATerm lifted124 (StrSL sl, ATerm t);
static ATerm lifted123 (StrSL sl, ATerm t);
static ATerm lifted122 (StrSL sl, ATerm t);
static ATerm lifted121 (StrSL sl, ATerm t);
static ATerm lifted119 (StrSL sl, ATerm t);
static ATerm lifted118 (StrSL sl, ATerm t);
static ATerm lifted165 (StrSL sl, ATerm t);
static ATerm lifted164 (StrSL sl, ATerm t);
static ATerm lifted163 (StrSL sl, ATerm t);
static ATerm lifted162 (StrSL sl, ATerm t);
ATerm test_change_set_0_0 (StrSL sl, ATerm t);
static ATerm lifted113 (StrSL sl, ATerm t);
static ATerm lifted112 (StrSL sl, ATerm t);
static ATerm lifted111 (StrSL sl, ATerm t);
static ATerm lifted110 (StrSL sl, ATerm t);
static ATerm lifted109 (StrSL sl, ATerm t);
static ATerm lifted108 (StrSL sl, ATerm t);
static ATerm lifted107 (StrSL sl, ATerm t);
static ATerm lifted106 (StrSL sl, ATerm t);
static ATerm lifted105 (StrSL sl, ATerm t);
static ATerm lifted104 (StrSL sl, ATerm t);
static ATerm lifted103 (StrSL sl, ATerm t);
static ATerm lifted102 (StrSL sl, ATerm t);
static ATerm lifted101 (StrSL sl, ATerm t);
static ATerm lifted100 (StrSL sl, ATerm t);
static ATerm lifted99 (StrSL sl, ATerm t);
static ATerm lifted98 (StrSL sl, ATerm t);
static ATerm lifted97 (StrSL sl, ATerm t);
static ATerm lifted96 (StrSL sl, ATerm t);
static ATerm lifted95 (StrSL sl, ATerm t);
static ATerm lifted94 (StrSL sl, ATerm t);
static ATerm lifted93 (StrSL sl, ATerm t);
static ATerm lifted92 (StrSL sl, ATerm t);
static ATerm lifted91 (StrSL sl, ATerm t);
static ATerm lifted90 (StrSL sl, ATerm t);
static ATerm lifted89 (StrSL sl, ATerm t);
static ATerm lifted88 (StrSL sl, ATerm t);
static ATerm lifted87 (StrSL sl, ATerm t);
static ATerm lifted86 (StrSL sl, ATerm t);
static ATerm lifted85 (StrSL sl, ATerm t);
static ATerm lifted84 (StrSL sl, ATerm t);
static ATerm lifted83 (StrSL sl, ATerm t);
static ATerm lifted82 (StrSL sl, ATerm t);
static ATerm lifted81 (StrSL sl, ATerm t);
static ATerm lifted80 (StrSL sl, ATerm t);
static ATerm lifted79 (StrSL sl, ATerm t);
static ATerm lifted78 (StrSL sl, ATerm t);
static ATerm lifted77 (StrSL sl, ATerm t);
static ATerm lifted76 (StrSL sl, ATerm t);
static ATerm lifted75 (StrSL sl, ATerm t);
static ATerm lifted74 (StrSL sl, ATerm t);
static ATerm lifted73 (StrSL sl, ATerm t);
static ATerm lifted72 (StrSL sl, ATerm t);
static ATerm lifted71 (StrSL sl, ATerm t);
static ATerm lifted70 (StrSL sl, ATerm t);
static ATerm lifted69 (StrSL sl, ATerm t);
static ATerm lifted68 (StrSL sl, ATerm t);
static ATerm lifted67 (StrSL sl, ATerm t);
static ATerm lifted66 (StrSL sl, ATerm t);
static ATerm lifted65 (StrSL sl, ATerm t);
static ATerm lifted64 (StrSL sl, ATerm t);
static ATerm lifted63 (StrSL sl, ATerm t);
static ATerm lifted62 (StrSL sl, ATerm t);
static ATerm lifted61 (StrSL sl, ATerm t);
static ATerm lifted59 (StrSL sl, ATerm t);
static ATerm lifted58 (StrSL sl, ATerm t);
static ATerm lifted117 (StrSL sl, ATerm t);
static ATerm lifted116 (StrSL sl, ATerm t);
static ATerm lifted115 (StrSL sl, ATerm t);
static ATerm lifted114 (StrSL sl, ATerm t);
ATerm test_dr_add_to_rule_set_0_0 (StrSL sl, ATerm t);
static ATerm lifted53 (StrSL sl, ATerm t);
static ATerm lifted52 (StrSL sl, ATerm t);
static ATerm lifted51 (StrSL sl, ATerm t);
static ATerm lifted50 (StrSL sl, ATerm t);
static ATerm lifted49 (StrSL sl, ATerm t);
static ATerm lifted48 (StrSL sl, ATerm t);
static ATerm lifted47 (StrSL sl, ATerm t);
static ATerm lifted46 (StrSL sl, ATerm t);
static ATerm lifted45 (StrSL sl, ATerm t);
static ATerm lifted44 (StrSL sl, ATerm t);
static ATerm lifted43 (StrSL sl, ATerm t);
static ATerm lifted42 (StrSL sl, ATerm t);
static ATerm lifted41 (StrSL sl, ATerm t);
static ATerm lifted40 (StrSL sl, ATerm t);
static ATerm lifted39 (StrSL sl, ATerm t);
static ATerm lifted38 (StrSL sl, ATerm t);
static ATerm lifted37 (StrSL sl, ATerm t);
static ATerm lifted36 (StrSL sl, ATerm t);
static ATerm lifted35 (StrSL sl, ATerm t);
static ATerm lifted34 (StrSL sl, ATerm t);
static ATerm lifted33 (StrSL sl, ATerm t);
static ATerm lifted32 (StrSL sl, ATerm t);
static ATerm lifted31 (StrSL sl, ATerm t);
static ATerm lifted30 (StrSL sl, ATerm t);
static ATerm lifted29 (StrSL sl, ATerm t);
static ATerm lifted28 (StrSL sl, ATerm t);
static ATerm lifted27 (StrSL sl, ATerm t);
static ATerm lifted26 (StrSL sl, ATerm t);
static ATerm lifted25 (StrSL sl, ATerm t);
static ATerm lifted24 (StrSL sl, ATerm t);
static ATerm lifted23 (StrSL sl, ATerm t);
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
static ATerm lifted10 (StrSL sl, ATerm t);
static ATerm lifted9 (StrSL sl, ATerm t);
static ATerm lifted8 (StrSL sl, ATerm t);
static ATerm lifted7 (StrSL sl, ATerm t);
static ATerm lifted6 (StrSL sl, ATerm t);
static ATerm lifted5 (StrSL sl, ATerm t);
static ATerm lifted3 (StrSL sl, ATerm t);
static ATerm lifted2 (StrSL sl, ATerm t);
static ATerm lifted57 (StrSL sl, ATerm t);
static ATerm lifted56 (StrSL sl, ATerm t);
static ATerm lifted55 (StrSL sl, ATerm t);
static ATerm lifted54 (StrSL sl, ATerm t);
ATerm test_dr_set_in_rule_set_0_0 (StrSL sl, ATerm t);
static ATerm lifted1 (StrSL sl, ATerm t);
static ATerm lifted0 (StrSL sl, ATerm t);
ATerm main_0_0 (StrSL sl, ATerm t);
ATerm test_dr_intersect_rule_sets_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_dr_intersect_rule_sets_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,q_6 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,r_6 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,s_6 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,t_6 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,u_6 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,v_6 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,w_6 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,x_6 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
sl_init_var(0, j_6);
sl_init_var(1, k_6);
sl_init_var(2, l_6);
{
struct str_closure n_81 = { &(lifted187) , &(frame) };
StrCL lifted187_cl = &(n_81);
struct str_closure o_81 = { &(lifted188) , &(frame) };
StrCL lifted188_cl = &(o_81);
struct str_closure p_81 = { &(lifted190) , &(frame) };
StrCL lifted190_cl = &(p_81);
struct str_closure q_81 = { &(lifted191) , &(frame) };
StrCL lifted191_cl = &(q_81);
struct str_closure t_81 = { &(lifted166) , &(frame) };
StrCL lifted166_cl = &(t_81);
t = say_1_0(sl, lifted166_cl, t);
if((t == NULL))
goto fail165 ;
m_6 = t;
t = dr_new_rule_set_0_0(sl, t);
if((t == NULL))
goto fail165 ;
if((k_6 == NULL))
{
k_6 = t;
}
else
if((k_6 != t))
goto fail165 ;
t = m_6;
n_6 = t;
t = dr_new_rule_set_0_0(sl, t);
if((t == NULL))
goto fail165 ;
if((j_6 == NULL))
{
j_6 = t;
}
else
if((j_6 != t))
goto fail165 ;
t = n_6;
o_6 = t;
t = dr_new_rule_set_0_0(sl, t);
if((t == NULL))
goto fail165 ;
if((l_6 == NULL))
{
l_6 = t;
}
else
if((l_6 != t))
goto fail165 ;
t = o_6;
{
struct str_closure w_81 = { &(lifted167) , &(frame) };
StrCL lifted167_cl = &(w_81);
struct str_closure x_81 = { &(lifted168) , &(frame) };
StrCL lifted168_cl = &(x_81);
struct str_closure z_81 = { &(lifted170) , &(frame) };
StrCL lifted170_cl = &(z_81);
struct str_closure a_82 = { &(lifted171) , &(frame) };
StrCL lifted171_cl = &(a_82);
t = apply_and_check_4_0(sl, lifted167_cl, lifted168_cl, lifted170_cl, lifted171_cl, t);
if((t == NULL))
goto fail165 ;
p_6 = t;
if((j_6 == NULL))
goto fail165 ;
else
{
t = j_6;
}
a_7 = t;
t = term5;
y_6 = t;
t = a_7;
b_7 = t;
t = (ATerm) ATinsert(ATempty, term107);
z_6 = t;
t = b_7;
t = dr_set_in_rule_set_0_2(sl, y_6, z_6, t);
if((t == NULL))
goto fail165 ;
t = p_6;
q_6 = t;
if((l_6 == NULL))
goto fail165 ;
else
{
t = l_6;
}
e_7 = t;
t = term5;
c_7 = t;
t = e_7;
f_7 = t;
t = (ATerm) ATempty;
d_7 = t;
t = f_7;
t = dr_set_in_rule_set_0_2(sl, c_7, d_7, t);
if((t == NULL))
goto fail165 ;
t = q_6;
{
struct str_closure d_82 = { &(lifted172) , &(frame) };
StrCL lifted172_cl = &(d_82);
struct str_closure e_82 = { &(lifted173) , &(frame) };
StrCL lifted173_cl = &(e_82);
struct str_closure f_82 = { &(lifted175) , &(frame) };
StrCL lifted175_cl = &(f_82);
struct str_closure g_82 = { &(lifted176) , &(frame) };
StrCL lifted176_cl = &(g_82);
t = apply_and_check_4_0(sl, lifted172_cl, lifted173_cl, lifted175_cl, lifted176_cl, t);
if((t == NULL))
goto fail165 ;
r_6 = t;
if((k_6 == NULL))
goto fail165 ;
else
{
t = k_6;
}
i_7 = t;
t = term5;
g_7 = t;
t = i_7;
j_7 = t;
t = (ATerm) ATinsert(ATempty, term19);
h_7 = t;
t = j_7;
t = dr_set_in_rule_set_0_2(sl, g_7, h_7, t);
if((t == NULL))
goto fail165 ;
t = r_6;
s_6 = t;
if((j_6 == NULL))
goto fail165 ;
else
{
t = j_6;
}
m_7 = t;
t = term5;
k_7 = t;
t = m_7;
n_7 = t;
t = (ATerm) ATempty;
l_7 = t;
t = n_7;
t = dr_set_in_rule_set_0_2(sl, k_7, l_7, t);
if((t == NULL))
goto fail165 ;
t = s_6;
{
struct str_closure j_82 = { &(lifted177) , &(frame) };
StrCL lifted177_cl = &(j_82);
struct str_closure l_82 = { &(lifted178) , &(frame) };
StrCL lifted178_cl = &(l_82);
struct str_closure m_82 = { &(lifted180) , &(frame) };
StrCL lifted180_cl = &(m_82);
struct str_closure o_82 = { &(lifted181) , &(frame) };
StrCL lifted181_cl = &(o_82);
t = apply_and_check_4_0(sl, lifted177_cl, lifted178_cl, lifted180_cl, lifted181_cl, t);
if((t == NULL))
goto fail165 ;
t_6 = t;
if((k_6 == NULL))
goto fail165 ;
else
{
t = k_6;
}
q_7 = t;
t = term5;
o_7 = t;
t = q_7;
r_7 = t;
t = (ATerm) ATinsert(ATempty, term19);
p_7 = t;
t = r_7;
t = dr_set_in_rule_set_0_2(sl, o_7, p_7, t);
if((t == NULL))
goto fail165 ;
t = t_6;
u_6 = t;
if((j_6 == NULL))
goto fail165 ;
else
{
t = j_6;
}
u_7 = t;
t = term5;
s_7 = t;
t = u_7;
v_7 = t;
t = (ATerm) ATinsert(ATempty, term113);
t_7 = t;
t = v_7;
t = dr_set_in_rule_set_0_2(sl, s_7, t_7, t);
if((t == NULL))
goto fail165 ;
t = u_6;
{
struct str_closure r_82 = { &(lifted182) , &(frame) };
StrCL lifted182_cl = &(r_82);
struct str_closure s_82 = { &(lifted183) , &(frame) };
StrCL lifted183_cl = &(s_82);
struct str_closure u_82 = { &(lifted185) , &(frame) };
StrCL lifted185_cl = &(u_82);
struct str_closure v_82 = { &(lifted186) , &(frame) };
StrCL lifted186_cl = &(v_82);
t = apply_and_check_4_0(sl, lifted182_cl, lifted183_cl, lifted185_cl, lifted186_cl, t);
if((t == NULL))
goto fail165 ;
v_6 = t;
if((k_6 == NULL))
goto fail165 ;
else
{
t = k_6;
}
y_7 = t;
t = term5;
w_7 = t;
t = y_7;
z_7 = t;
t = (ATerm) ATinsert(ATempty, term33);
x_7 = t;
t = z_7;
t = dr_set_in_rule_set_0_2(sl, w_7, x_7, t);
if((t == NULL))
goto fail165 ;
t = v_6;
w_6 = t;
if((j_6 == NULL))
goto fail165 ;
else
{
t = j_6;
}
c_8 = t;
t = term5;
a_8 = t;
t = c_8;
d_8 = t;
t = (ATerm) ATinsert(ATempty, term33);
b_8 = t;
t = d_8;
t = dr_set_in_rule_set_0_2(sl, a_8, b_8, t);
if((t == NULL))
goto fail165 ;
t = w_6;
x_6 = t;
if((l_6 == NULL))
goto fail165 ;
else
{
t = l_6;
}
g_8 = t;
t = term5;
e_8 = t;
t = g_8;
h_8 = t;
t = (ATerm) ATinsert(ATempty, term33);
f_8 = t;
t = h_8;
t = dr_set_in_rule_set_0_2(sl, e_8, f_8, t);
if((t == NULL))
goto fail165 ;
t = x_6;
t = apply_and_check_4_0(sl, lifted187_cl, lifted188_cl, lifted190_cl, lifted191_cl, t);
if((t == NULL))
goto fail165 ;
}
}
}
}
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail165 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted186 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted186";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(2, sl) == NULL)))
goto fail186 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), sl_readvar(2, sl));
}
t = dr_eq_rule_sets_0_0(sl_up(sl), t);
if((t == NULL))
goto fail186 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail186 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted185 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted185";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail185 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), sl_readvar(0, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail185 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted183 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted183";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_82 = { &(dr_intersect_rule_sets_0_0) , sl_up(sl) };
StrCL lifted184_cl = &(p_82);
t = try_1_0(sl_up(sl), lifted184_cl, t);
if((t == NULL))
goto fail184 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail184 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted182 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted182";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term115;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail183 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted181 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted181";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(2, sl) == NULL)))
goto fail182 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), sl_readvar(2, sl));
}
t = dr_eq_rule_sets_0_0(sl_up(sl), t);
if((t == NULL))
goto fail182 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail182 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted180 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted180";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail181 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), sl_readvar(0, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail181 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted178 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted178";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure h_82 = { &(dr_intersect_rule_sets_0_0) , sl_up(sl) };
StrCL lifted179_cl = &(h_82);
t = try_1_0(sl_up(sl), lifted179_cl, t);
if((t == NULL))
goto fail180 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail180 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted177 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted177";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term111;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail179 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted176 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted176";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(2, sl) == NULL)))
goto fail178 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), sl_readvar(2, sl));
}
t = dr_eq_rule_sets_0_0(sl_up(sl), t);
if((t == NULL))
goto fail178 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail178 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted175 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted175";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail177 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), sl_readvar(0, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail177 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted173 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted173";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure c_82 = { &(dr_intersect_rule_sets_0_0) , sl_up(sl) };
StrCL lifted174_cl = &(c_82);
t = try_1_0(sl_up(sl), lifted174_cl, t);
if((t == NULL))
goto fail176 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail176 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted172 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted172";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term109;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail175 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted171 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted171";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(2, sl) == NULL)))
goto fail174 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), sl_readvar(2, sl));
}
t = dr_eq_rule_sets_0_0(sl_up(sl), t);
if((t == NULL))
goto fail174 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail174 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted170 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted170";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail173 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), sl_readvar(0, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail173 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted168 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted168";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure u_81 = { &(dr_intersect_rule_sets_0_0) , sl_up(sl) };
StrCL lifted169_cl = &(u_81);
t = try_1_0(sl_up(sl), lifted169_cl, t);
if((t == NULL))
goto fail172 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail172 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted167 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted167";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term105;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail171 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted166 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted166";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term103;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail170 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted191 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted191";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(2, sl) == NULL)))
goto fail169 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), sl_readvar(2, sl));
}
t = dr_eq_rule_sets_0_0(sl_up(sl), t);
if((t == NULL))
goto fail169 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail169 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted190 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted190";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if(((sl_readvar(1, sl) == NULL) || (sl_readvar(0, sl) == NULL)))
goto fail168 ;
else
{
t = (ATerm) ATmakeAppl(sym__2, sl_readvar(1, sl), sl_readvar(0, sl));
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail168 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted188 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted188";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure j_81 = { &(dr_intersect_rule_sets_0_0) , sl_up(sl) };
StrCL lifted189_cl = &(j_81);
t = try_1_0(sl_up(sl), lifted189_cl, t);
if((t == NULL))
goto fail167 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail167 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted187 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted187";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term101;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail166 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_change_set_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_change_set_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(4);
{
ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
sl_init_var(0, d_5);
sl_init_var(1, e_5);
sl_init_var(2, f_5);
sl_init_var(3, g_5);
{
struct str_closure l_79 = { &(lifted162) , &(frame) };
StrCL lifted162_cl = &(l_79);
struct str_closure m_79 = { &(lifted163) , &(frame) };
StrCL lifted163_cl = &(m_79);
struct str_closure n_79 = { &(lifted164) , &(frame) };
StrCL lifted164_cl = &(n_79);
struct str_closure o_79 = { &(lifted165) , &(frame) };
StrCL lifted165_cl = &(o_79);
struct str_closure p_79 = { &(lifted118) , &(frame) };
StrCL lifted118_cl = &(p_79);
t = say_1_0(sl, lifted118_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure q_79 = { &(lifted119) , &(frame) };
StrCL lifted119_cl = &(q_79);
struct str_closure s_79 = { &(dr_new_rule_set_0_0) , sl };
StrCL lifted120_cl = &(s_79);
struct str_closure t_79 = { &(lifted121) , &(frame) };
StrCL lifted121_cl = &(t_79);
struct str_closure u_79 = { &(lifted122) , &(frame) };
StrCL lifted122_cl = &(u_79);
t = apply_and_check_4_0(sl, lifted119_cl, lifted120_cl, lifted121_cl, lifted122_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure v_79 = { &(lifted123) , &(frame) };
StrCL lifted123_cl = &(v_79);
struct str_closure w_79 = { &(lifted124) , &(frame) };
StrCL lifted124_cl = &(w_79);
struct str_closure x_79 = { &(lifted125) , &(frame) };
StrCL lifted125_cl = &(x_79);
t = apply_and_fail_3_0(sl, lifted123_cl, lifted124_cl, lifted125_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure y_79 = { &(lifted126) , &(frame) };
StrCL lifted126_cl = &(y_79);
struct str_closure z_79 = { &(lifted127) , &(frame) };
StrCL lifted127_cl = &(z_79);
struct str_closure a_80 = { &(lifted128) , &(frame) };
StrCL lifted128_cl = &(a_80);
struct str_closure b_80 = { &(lifted129) , &(frame) };
StrCL lifted129_cl = &(b_80);
t = apply_test_4_0(sl, lifted126_cl, lifted127_cl, lifted128_cl, lifted129_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure c_80 = { &(lifted130) , &(frame) };
StrCL lifted130_cl = &(c_80);
struct str_closure d_80 = { &(lifted131) , &(frame) };
StrCL lifted131_cl = &(d_80);
struct str_closure e_80 = { &(lifted132) , &(frame) };
StrCL lifted132_cl = &(e_80);
struct str_closure f_80 = { &(lifted133) , &(frame) };
StrCL lifted133_cl = &(f_80);
t = apply_test_4_0(sl, lifted130_cl, lifted131_cl, lifted132_cl, lifted133_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure g_80 = { &(lifted134) , &(frame) };
StrCL lifted134_cl = &(g_80);
struct str_closure h_80 = { &(lifted135) , &(frame) };
StrCL lifted135_cl = &(h_80);
struct str_closure i_80 = { &(lifted136) , &(frame) };
StrCL lifted136_cl = &(i_80);
struct str_closure j_80 = { &(lifted137) , &(frame) };
StrCL lifted137_cl = &(j_80);
t = apply_and_check_4_0(sl, lifted134_cl, lifted135_cl, lifted136_cl, lifted137_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure k_80 = { &(lifted138) , &(frame) };
StrCL lifted138_cl = &(k_80);
struct str_closure l_80 = { &(lifted139) , &(frame) };
StrCL lifted139_cl = &(l_80);
struct str_closure m_80 = { &(lifted140) , &(frame) };
StrCL lifted140_cl = &(m_80);
struct str_closure n_80 = { &(lifted141) , &(frame) };
StrCL lifted141_cl = &(n_80);
t = apply_test_4_0(sl, lifted138_cl, lifted139_cl, lifted140_cl, lifted141_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure o_80 = { &(lifted142) , &(frame) };
StrCL lifted142_cl = &(o_80);
struct str_closure p_80 = { &(lifted143) , &(frame) };
StrCL lifted143_cl = &(p_80);
struct str_closure q_80 = { &(lifted144) , &(frame) };
StrCL lifted144_cl = &(q_80);
struct str_closure r_80 = { &(lifted145) , &(frame) };
StrCL lifted145_cl = &(r_80);
t = apply_test_4_0(sl, lifted142_cl, lifted143_cl, lifted144_cl, lifted145_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure s_80 = { &(lifted146) , &(frame) };
StrCL lifted146_cl = &(s_80);
struct str_closure t_80 = { &(lifted147) , &(frame) };
StrCL lifted147_cl = &(t_80);
struct str_closure u_80 = { &(lifted148) , &(frame) };
StrCL lifted148_cl = &(u_80);
struct str_closure v_80 = { &(lifted149) , &(frame) };
StrCL lifted149_cl = &(v_80);
t = apply_test_4_0(sl, lifted146_cl, lifted147_cl, lifted148_cl, lifted149_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure w_80 = { &(lifted150) , &(frame) };
StrCL lifted150_cl = &(w_80);
struct str_closure y_80 = { &(dr_commit_change_set_0_0) , sl };
StrCL lifted151_cl = &(y_80);
struct str_closure z_80 = { &(lifted152) , &(frame) };
StrCL lifted152_cl = &(z_80);
struct str_closure a_81 = { &(lifted153) , &(frame) };
StrCL lifted153_cl = &(a_81);
t = apply_and_check_4_0(sl, lifted150_cl, lifted151_cl, lifted152_cl, lifted153_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure b_81 = { &(lifted154) , &(frame) };
StrCL lifted154_cl = &(b_81);
struct str_closure c_81 = { &(lifted155) , &(frame) };
StrCL lifted155_cl = &(c_81);
struct str_closure d_81 = { &(lifted156) , &(frame) };
StrCL lifted156_cl = &(d_81);
struct str_closure e_81 = { &(lifted157) , &(frame) };
StrCL lifted157_cl = &(e_81);
t = apply_test_4_0(sl, lifted154_cl, lifted155_cl, lifted156_cl, lifted157_cl, t);
if((t == NULL))
goto fail119 ;
{
struct str_closure f_81 = { &(lifted158) , &(frame) };
StrCL lifted158_cl = &(f_81);
struct str_closure g_81 = { &(dr_leave_scope_0_0) , sl };
StrCL lifted159_cl = &(g_81);
struct str_closure h_81 = { &(lifted160) , &(frame) };
StrCL lifted160_cl = &(h_81);
struct str_closure i_81 = { &(lifted161) , &(frame) };
StrCL lifted161_cl = &(i_81);
t = apply_and_check_4_0(sl, lifted158_cl, lifted159_cl, lifted160_cl, lifted161_cl, t);
if((t == NULL))
goto fail119 ;
t = apply_test_4_0(sl, lifted162_cl, lifted163_cl, lifted164_cl, lifted165_cl, t);
if((t == NULL))
goto fail119 ;
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
fail119 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted161 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted161";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(3, sl) == NULL))
{
sl_readvar(3, sl) = t;
}
else
if((sl_readvar(3, sl) != t))
goto fail164 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail164 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted160 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted160";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
goto fail163 ;
else
{
t = sl_readvar(2, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail163 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted158 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted158";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term99;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail162 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted157 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted157";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term33);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail161 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted156 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted156";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
goto fail160 ;
else
{
t = sl_readvar(2, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail160 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted155 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted155";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm f_6 = NULL,g_6 = NULL;
g_6 = t;
t = term5;
f_6 = t;
t = g_6;
t = dr_lookup_rule_0_1(sl_up(sl), f_6, t);
if((t == NULL))
goto fail159 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail159 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted154 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted154";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail158 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted153 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted153";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = t;
}
else
if((sl_readvar(2, sl) != t))
goto fail157 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail157 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted152 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted152";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail156 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail156 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted150 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted150";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term97;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail155 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted149 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted149";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term33);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail154 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted148 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted148";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail153 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail153 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted147 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted147";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_6 = NULL,e_6 = NULL;
e_6 = t;
t = term5;
d_6 = t;
t = e_6;
t = dr_lookup_rule_0_1(sl_up(sl), d_6, t);
if((t == NULL))
goto fail152 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail152 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted146 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted146";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail151 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted145 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted145";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail150 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail150 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted144 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted144";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail149 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail149 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted143 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted143";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
v_5 = t;
t = term5;
t_5 = t;
t = v_5;
w_5 = t;
t = (ATerm) ATinsert(ATempty, term33);
u_5 = t;
t = w_5;
t = dr_set_in_rule_set_0_2(sl_up(sl), t_5, u_5, t);
if((t == NULL))
goto fail148 ;
a_6 = t;
t = term25;
x_5 = t;
t = a_6;
b_6 = t;
t = term5;
y_5 = t;
t = b_6;
c_6 = t;
t = (ATerm) ATinsert(ATempty, term7);
z_5 = t;
t = c_6;
t = dr_set_in_rule_set_0_3(sl_up(sl), x_5, y_5, z_5, t);
if((t == NULL))
goto fail148 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail148 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted142 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted142";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term93;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail147 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted141 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted141";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail146 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted140 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted140";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail145 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail145 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted139 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted139";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_5 = NULL,s_5 = NULL;
s_5 = t;
t = term5;
r_5 = t;
t = s_5;
t = dr_lookup_rule_0_1(sl_up(sl), r_5, t);
if((t == NULL))
goto fail144 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail144 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted138 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted138";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail143 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted137 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted137";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail142 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail142 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted136 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted136";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail141 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail141 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted135 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted135";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_5 = NULL,q_5 = NULL;
q_5 = t;
t = term25;
p_5 = t;
t = q_5;
t = dr_label_scope_0_1(sl_up(sl), p_5, t);
if((t == NULL))
goto fail140 ;
t = dr_add_scope_0_0(sl_up(sl), t);
if((t == NULL))
goto fail140 ;
t = dr_start_change_set_0_0(sl_up(sl), t);
if((t == NULL))
goto fail140 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail140 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted134 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted134";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term95;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail139 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted133 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted133";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail138 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted132 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted132";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail137 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail137 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted131 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted131";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_5 = NULL,o_5 = NULL;
o_5 = t;
t = term5;
n_5 = t;
t = o_5;
t = dr_lookup_rule_0_1(sl_up(sl), n_5, t);
if((t == NULL))
goto fail136 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail136 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted130 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted130";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail135 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted129 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted129";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail134 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail134 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted128 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted128";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail133 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail133 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted127 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted127";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
l_5 = t;
t = term5;
j_5 = t;
t = l_5;
m_5 = t;
t = (ATerm) ATinsert(ATempty, term19);
k_5 = t;
t = m_5;
t = dr_set_in_rule_set_0_2(sl_up(sl), j_5, k_5, t);
if((t == NULL))
goto fail132 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail132 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted126 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted126";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term93;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail131 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted125 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted125";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail130 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail130 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted124 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted124";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_5 = NULL,i_5 = NULL;
i_5 = t;
t = term5;
h_5 = t;
t = i_5;
t = dr_lookup_rule_0_1(sl_up(sl), h_5, t);
if((t == NULL))
goto fail129 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail129 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted123 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted123";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail128 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted122 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted122";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail127 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail127 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted121 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted121";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail126 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted119 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted119";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term91;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail125 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted118 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted118";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term89;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail124 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted165 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted165";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail123 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted164 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted164";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(3, sl) == NULL))
goto fail122 ;
else
{
t = sl_readvar(3, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail122 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted163 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted163";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm h_6 = NULL,i_6 = NULL;
i_6 = t;
t = term5;
h_6 = t;
t = i_6;
t = dr_lookup_rule_0_1(sl_up(sl), h_6, t);
if((t == NULL))
goto fail121 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail121 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted162 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted162";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term87;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail120 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_dr_add_to_rule_set_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_dr_add_to_rule_set_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
sl_init_var(0, m_2);
sl_init_var(1, n_2);
sl_init_var(2, o_2);
{
struct str_closure r_76 = { &(lifted114) , &(frame) };
StrCL lifted114_cl = &(r_76);
struct str_closure s_76 = { &(lifted115) , &(frame) };
StrCL lifted115_cl = &(s_76);
struct str_closure t_76 = { &(lifted116) , &(frame) };
StrCL lifted116_cl = &(t_76);
struct str_closure u_76 = { &(lifted117) , &(frame) };
StrCL lifted117_cl = &(u_76);
struct str_closure v_76 = { &(lifted58) , &(frame) };
StrCL lifted58_cl = &(v_76);
t = say_1_0(sl, lifted58_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure w_76 = { &(lifted59) , &(frame) };
StrCL lifted59_cl = &(w_76);
struct str_closure x_76 = { &(dr_new_rule_set_0_0) , sl };
StrCL lifted60_cl = &(x_76);
struct str_closure y_76 = { &(lifted61) , &(frame) };
StrCL lifted61_cl = &(y_76);
struct str_closure z_76 = { &(lifted62) , &(frame) };
StrCL lifted62_cl = &(z_76);
t = apply_and_check_4_0(sl, lifted59_cl, lifted60_cl, lifted61_cl, lifted62_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure a_77 = { &(lifted63) , &(frame) };
StrCL lifted63_cl = &(a_77);
struct str_closure b_77 = { &(lifted64) , &(frame) };
StrCL lifted64_cl = &(b_77);
struct str_closure c_77 = { &(lifted65) , &(frame) };
StrCL lifted65_cl = &(c_77);
t = apply_and_fail_3_0(sl, lifted63_cl, lifted64_cl, lifted65_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure d_77 = { &(lifted66) , &(frame) };
StrCL lifted66_cl = &(d_77);
struct str_closure e_77 = { &(lifted67) , &(frame) };
StrCL lifted67_cl = &(e_77);
struct str_closure f_77 = { &(lifted68) , &(frame) };
StrCL lifted68_cl = &(f_77);
struct str_closure h_77 = { &(lifted69) , &(frame) };
StrCL lifted69_cl = &(h_77);
t = apply_test_4_0(sl, lifted66_cl, lifted67_cl, lifted68_cl, lifted69_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure i_77 = { &(lifted70) , &(frame) };
StrCL lifted70_cl = &(i_77);
struct str_closure j_77 = { &(lifted71) , &(frame) };
StrCL lifted71_cl = &(j_77);
struct str_closure l_77 = { &(lifted72) , &(frame) };
StrCL lifted72_cl = &(l_77);
struct str_closure m_77 = { &(lifted73) , &(frame) };
StrCL lifted73_cl = &(m_77);
t = apply_test_4_0(sl, lifted70_cl, lifted71_cl, lifted72_cl, lifted73_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure p_77 = { &(lifted74) , &(frame) };
StrCL lifted74_cl = &(p_77);
struct str_closure q_77 = { &(lifted75) , &(frame) };
StrCL lifted75_cl = &(q_77);
struct str_closure r_77 = { &(lifted76) , &(frame) };
StrCL lifted76_cl = &(r_77);
struct str_closure s_77 = { &(lifted77) , &(frame) };
StrCL lifted77_cl = &(s_77);
t = apply_and_check_4_0(sl, lifted74_cl, lifted75_cl, lifted76_cl, lifted77_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure v_77 = { &(lifted78) , &(frame) };
StrCL lifted78_cl = &(v_77);
struct str_closure w_77 = { &(lifted79) , &(frame) };
StrCL lifted79_cl = &(w_77);
struct str_closure x_77 = { &(lifted80) , &(frame) };
StrCL lifted80_cl = &(x_77);
struct str_closure y_77 = { &(lifted81) , &(frame) };
StrCL lifted81_cl = &(y_77);
t = apply_test_4_0(sl, lifted78_cl, lifted79_cl, lifted80_cl, lifted81_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure z_77 = { &(lifted82) , &(frame) };
StrCL lifted82_cl = &(z_77);
struct str_closure a_78 = { &(lifted83) , &(frame) };
StrCL lifted83_cl = &(a_78);
struct str_closure b_78 = { &(lifted84) , &(frame) };
StrCL lifted84_cl = &(b_78);
struct str_closure c_78 = { &(lifted85) , &(frame) };
StrCL lifted85_cl = &(c_78);
t = apply_test_4_0(sl, lifted82_cl, lifted83_cl, lifted84_cl, lifted85_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure d_78 = { &(lifted86) , &(frame) };
StrCL lifted86_cl = &(d_78);
struct str_closure e_78 = { &(lifted87) , &(frame) };
StrCL lifted87_cl = &(e_78);
struct str_closure f_78 = { &(lifted88) , &(frame) };
StrCL lifted88_cl = &(f_78);
struct str_closure g_78 = { &(lifted89) , &(frame) };
StrCL lifted89_cl = &(g_78);
t = apply_test_4_0(sl, lifted86_cl, lifted87_cl, lifted88_cl, lifted89_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure h_78 = { &(lifted90) , &(frame) };
StrCL lifted90_cl = &(h_78);
struct str_closure i_78 = { &(lifted91) , &(frame) };
StrCL lifted91_cl = &(i_78);
struct str_closure j_78 = { &(lifted92) , &(frame) };
StrCL lifted92_cl = &(j_78);
struct str_closure m_78 = { &(lifted93) , &(frame) };
StrCL lifted93_cl = &(m_78);
t = apply_test_4_0(sl, lifted90_cl, lifted91_cl, lifted92_cl, lifted93_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure n_78 = { &(lifted94) , &(frame) };
StrCL lifted94_cl = &(n_78);
struct str_closure o_78 = { &(lifted95) , &(frame) };
StrCL lifted95_cl = &(o_78);
struct str_closure p_78 = { &(lifted96) , &(frame) };
StrCL lifted96_cl = &(p_78);
struct str_closure q_78 = { &(lifted97) , &(frame) };
StrCL lifted97_cl = &(q_78);
t = apply_test_4_0(sl, lifted94_cl, lifted95_cl, lifted96_cl, lifted97_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure r_78 = { &(lifted98) , &(frame) };
StrCL lifted98_cl = &(r_78);
struct str_closure s_78 = { &(lifted99) , &(frame) };
StrCL lifted99_cl = &(s_78);
struct str_closure t_78 = { &(lifted100) , &(frame) };
StrCL lifted100_cl = &(t_78);
struct str_closure u_78 = { &(lifted101) , &(frame) };
StrCL lifted101_cl = &(u_78);
t = apply_test_4_0(sl, lifted98_cl, lifted99_cl, lifted100_cl, lifted101_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure v_78 = { &(lifted102) , &(frame) };
StrCL lifted102_cl = &(v_78);
struct str_closure w_78 = { &(lifted103) , &(frame) };
StrCL lifted103_cl = &(w_78);
struct str_closure x_78 = { &(lifted104) , &(frame) };
StrCL lifted104_cl = &(x_78);
struct str_closure c_79 = { &(lifted105) , &(frame) };
StrCL lifted105_cl = &(c_79);
t = apply_test_4_0(sl, lifted102_cl, lifted103_cl, lifted104_cl, lifted105_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure d_79 = { &(lifted106) , &(frame) };
StrCL lifted106_cl = &(d_79);
struct str_closure e_79 = { &(lifted107) , &(frame) };
StrCL lifted107_cl = &(e_79);
struct str_closure f_79 = { &(lifted108) , &(frame) };
StrCL lifted108_cl = &(f_79);
struct str_closure g_79 = { &(lifted109) , &(frame) };
StrCL lifted109_cl = &(g_79);
t = apply_test_4_0(sl, lifted106_cl, lifted107_cl, lifted108_cl, lifted109_cl, t);
if((t == NULL))
goto fail59 ;
{
struct str_closure h_79 = { &(lifted110) , &(frame) };
StrCL lifted110_cl = &(h_79);
struct str_closure i_79 = { &(lifted111) , &(frame) };
StrCL lifted111_cl = &(i_79);
struct str_closure j_79 = { &(lifted112) , &(frame) };
StrCL lifted112_cl = &(j_79);
struct str_closure k_79 = { &(lifted113) , &(frame) };
StrCL lifted113_cl = &(k_79);
t = apply_and_check_4_0(sl, lifted110_cl, lifted111_cl, lifted112_cl, lifted113_cl, t);
if((t == NULL))
goto fail59 ;
t = apply_test_4_0(sl, lifted114_cl, lifted115_cl, lifted116_cl, lifted117_cl, t);
if((t == NULL))
goto fail59 ;
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
}
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail59 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted113 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted113";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = t;
}
else
if((sl_readvar(2, sl) != t))
goto fail118 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail118 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted112 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted112";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail117 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail117 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted111 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted111";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = dr_leave_scope_0_0(sl_up(sl), t);
if((t == NULL))
goto fail116 ;
t = dr_leave_scope_0_0(sl_up(sl), t);
if((t == NULL))
goto fail116 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail116 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted110 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted110";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term85;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail115 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted109 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted109";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail114 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted108 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted108";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail113 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail113 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted107 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted107";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm z_4 = NULL,a_5 = NULL;
a_5 = t;
t = term5;
z_4 = t;
t = a_5;
t = dr_lookup_rule_0_1(sl_up(sl), z_4, t);
if((t == NULL))
goto fail112 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail112 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted106 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted106";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term83;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail111 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted105 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted105";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail110 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail110 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted104 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted104";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail109 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail109 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted103 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted103";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
x_4 = t;
t = term5;
v_4 = t;
t = x_4;
y_4 = t;
t = (ATerm) ATempty;
w_4 = t;
t = y_4;
t = dr_set_in_rule_set_0_2(sl_up(sl), v_4, w_4, t);
if((t == NULL))
goto fail108 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail108 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted102 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted102";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term81;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail107 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted101 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted101";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term33), term35);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail106 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted100 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted100";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail105 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail105 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted99 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted99";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm t_4 = NULL,u_4 = NULL;
u_4 = t;
t = term5;
t_4 = t;
t = u_4;
t = dr_lookup_rule_0_1(sl_up(sl), t_4, t);
if((t == NULL))
goto fail104 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail104 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted98 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted98";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term79;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail103 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted97 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted97";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail102 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail102 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted96 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted96";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail101 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail101 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted95 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted95";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
q_4 = t;
t = term25;
n_4 = t;
t = q_4;
r_4 = t;
t = term67;
o_4 = t;
t = r_4;
s_4 = t;
t = (ATerm) ATempty;
p_4 = t;
t = s_4;
t = dr_set_in_rule_set_0_3(sl_up(sl), n_4, o_4, p_4, t);
if((t == NULL))
goto fail100 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail100 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted94 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted94";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term77;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail99 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted93 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted93";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term69), term71);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail98 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted92 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted92";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail97 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail97 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted91 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted91";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm l_4 = NULL,m_4 = NULL;
m_4 = t;
t = term67;
l_4 = t;
t = m_4;
t = dr_lookup_rule_0_1(sl_up(sl), l_4, t);
if((t == NULL))
goto fail96 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail96 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted90 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted90";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term75;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail95 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted89 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted89";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term33), term35);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail94 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted88 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted88";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail93 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail93 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted87 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted87";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm j_4 = NULL,k_4 = NULL;
k_4 = t;
t = term5;
j_4 = t;
t = k_4;
t = dr_lookup_rule_0_1(sl_up(sl), j_4, t);
if((t == NULL))
goto fail92 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail92 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted86 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted86";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term73;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail91 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted85 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted85";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail90 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail90 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted84 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted84";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail89 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail89 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted83 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted83";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
f_3 = t;
t = term5;
d_3 = t;
t = f_3;
g_3 = t;
t = term33;
e_3 = t;
t = g_3;
t = dr_add_to_rule_set_0_2(sl_up(sl), d_3, e_3, t);
if((t == NULL))
goto fail88 ;
k_3 = t;
t = term25;
h_3 = t;
t = k_3;
l_3 = t;
t = term5;
i_3 = t;
t = l_3;
m_3 = t;
t = term7;
j_3 = t;
t = m_3;
t = dr_add_to_rule_set_0_3(sl_up(sl), h_3, i_3, j_3, t);
if((t == NULL))
goto fail88 ;
q_3 = t;
t = term27;
n_3 = t;
t = q_3;
r_3 = t;
t = term5;
o_3 = t;
t = r_3;
s_3 = t;
t = term65;
p_3 = t;
t = s_3;
t = dr_add_to_rule_set_0_3(sl_up(sl), n_3, o_3, p_3, t);
if((t == NULL))
goto fail88 ;
w_3 = t;
t = term27;
t_3 = t;
t = w_3;
x_3 = t;
t = term67;
u_3 = t;
t = x_3;
y_3 = t;
t = term69;
v_3 = t;
t = y_3;
t = dr_add_to_rule_set_0_3(sl_up(sl), t_3, u_3, v_3, t);
if((t == NULL))
goto fail88 ;
c_4 = t;
t = term27;
z_3 = t;
t = c_4;
d_4 = t;
t = term67;
a_4 = t;
t = d_4;
e_4 = t;
t = term71;
b_4 = t;
t = e_4;
t = dr_add_to_rule_set_0_3(sl_up(sl), z_3, a_4, b_4, t);
if((t == NULL))
goto fail88 ;
h_4 = t;
t = term5;
f_4 = t;
t = h_4;
i_4 = t;
t = term35;
g_4 = t;
t = i_4;
t = dr_add_to_rule_set_0_2(sl_up(sl), f_4, g_4, t);
if((t == NULL))
goto fail88 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail88 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted82 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted82";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term63;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail87 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted81 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted81";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail86 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted80 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted80";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail85 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail85 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted79 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted79";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_3 = NULL,c_3 = NULL;
c_3 = t;
t = term5;
b_3 = t;
t = c_3;
t = dr_lookup_rule_0_1(sl_up(sl), b_3, t);
if((t == NULL))
goto fail84 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail84 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted78 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted78";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term61;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail83 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted77 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted77";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail82 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail82 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted76 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted76";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail81 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail81 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted75 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted75";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
y_2 = t;
t = term25;
x_2 = t;
t = y_2;
t = dr_label_scope_0_1(sl_up(sl), x_2, t);
if((t == NULL))
goto fail80 ;
t = dr_add_scope_0_0(sl_up(sl), t);
if((t == NULL))
goto fail80 ;
a_3 = t;
t = term27;
z_2 = t;
t = a_3;
t = dr_label_scope_0_1(sl_up(sl), z_2, t);
if((t == NULL))
goto fail80 ;
t = dr_add_scope_0_0(sl_up(sl), t);
if((t == NULL))
goto fail80 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail80 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted74 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted74";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term59;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail79 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted73 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted73";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail78 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted72 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted72";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail77 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail77 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted71 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted71";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm v_2 = NULL,w_2 = NULL;
w_2 = t;
t = term5;
v_2 = t;
t = w_2;
t = dr_lookup_rule_0_1(sl_up(sl), v_2, t);
if((t == NULL))
goto fail76 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail76 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted70 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted70";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term57;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail75 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted69 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted69";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail74 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail74 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted68 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted68";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail73 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail73 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted67 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted67";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
t_2 = t;
t = term5;
r_2 = t;
t = t_2;
u_2 = t;
t = term19;
s_2 = t;
t = u_2;
t = dr_add_to_rule_set_0_2(sl_up(sl), r_2, s_2, t);
if((t == NULL))
goto fail72 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail72 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted66 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted66";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term55;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail71 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted65 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted65";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail70 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail70 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted64 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted64";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm p_2 = NULL,q_2 = NULL;
q_2 = t;
t = term5;
p_2 = t;
t = q_2;
t = dr_lookup_rule_0_1(sl_up(sl), p_2, t);
if((t == NULL))
goto fail69 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail69 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted63 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted63";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term53;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail68 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted62 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted62";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail67 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail67 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted61 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted61";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term13;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail66 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted59 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted59";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term51;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail65 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted58 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted58";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term49;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail64 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted117 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted117";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATinsert(ATempty, term19), term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail63 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted116 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted116";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
goto fail62 ;
else
{
t = sl_readvar(2, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail62 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted115 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted115";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm b_5 = NULL,c_5 = NULL;
c_5 = t;
t = term5;
b_5 = t;
t = c_5;
t = dr_lookup_rule_0_1(sl_up(sl), b_5, t);
if((t == NULL))
goto fail61 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail61 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted114 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted114";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term47;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail60 :
--__tracing_table_counter;
return(NULL);
}
ATerm test_dr_set_in_rule_set_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "test_dr_set_in_rule_set_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
sl_vars(3);
{
ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL;
sl_init_var(0, n_0);
sl_init_var(1, o_0);
sl_init_var(2, p_0);
{
struct str_closure r_73 = { &(lifted54) , &(frame) };
StrCL lifted54_cl = &(r_73);
struct str_closure s_73 = { &(lifted55) , &(frame) };
StrCL lifted55_cl = &(s_73);
struct str_closure t_73 = { &(lifted56) , &(frame) };
StrCL lifted56_cl = &(t_73);
struct str_closure u_73 = { &(lifted57) , &(frame) };
StrCL lifted57_cl = &(u_73);
struct str_closure v_73 = { &(lifted2) , &(frame) };
StrCL lifted2_cl = &(v_73);
t = say_1_0(sl, lifted2_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure w_73 = { &(lifted3) , &(frame) };
StrCL lifted3_cl = &(w_73);
struct str_closure x_73 = { &(dr_new_rule_set_0_0) , sl };
StrCL lifted4_cl = &(x_73);
struct str_closure y_73 = { &(lifted5) , &(frame) };
StrCL lifted5_cl = &(y_73);
struct str_closure z_73 = { &(lifted6) , &(frame) };
StrCL lifted6_cl = &(z_73);
t = apply_and_check_4_0(sl, lifted3_cl, lifted4_cl, lifted5_cl, lifted6_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure a_74 = { &(lifted7) , &(frame) };
StrCL lifted7_cl = &(a_74);
struct str_closure b_74 = { &(lifted8) , &(frame) };
StrCL lifted8_cl = &(b_74);
struct str_closure c_74 = { &(lifted9) , &(frame) };
StrCL lifted9_cl = &(c_74);
t = apply_and_fail_3_0(sl, lifted7_cl, lifted8_cl, lifted9_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure d_74 = { &(lifted10) , &(frame) };
StrCL lifted10_cl = &(d_74);
struct str_closure e_74 = { &(lifted11) , &(frame) };
StrCL lifted11_cl = &(e_74);
struct str_closure f_74 = { &(lifted12) , &(frame) };
StrCL lifted12_cl = &(f_74);
struct str_closure g_74 = { &(lifted13) , &(frame) };
StrCL lifted13_cl = &(g_74);
t = apply_test_4_0(sl, lifted10_cl, lifted11_cl, lifted12_cl, lifted13_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure i_74 = { &(lifted14) , &(frame) };
StrCL lifted14_cl = &(i_74);
struct str_closure k_74 = { &(lifted15) , &(frame) };
StrCL lifted15_cl = &(k_74);
struct str_closure l_74 = { &(lifted16) , &(frame) };
StrCL lifted16_cl = &(l_74);
struct str_closure n_74 = { &(lifted17) , &(frame) };
StrCL lifted17_cl = &(n_74);
t = apply_test_4_0(sl, lifted14_cl, lifted15_cl, lifted16_cl, lifted17_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure o_74 = { &(lifted18) , &(frame) };
StrCL lifted18_cl = &(o_74);
struct str_closure q_74 = { &(lifted19) , &(frame) };
StrCL lifted19_cl = &(q_74);
struct str_closure r_74 = { &(lifted20) , &(frame) };
StrCL lifted20_cl = &(r_74);
struct str_closure t_74 = { &(lifted21) , &(frame) };
StrCL lifted21_cl = &(t_74);
t = apply_and_check_4_0(sl, lifted18_cl, lifted19_cl, lifted20_cl, lifted21_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure u_74 = { &(lifted22) , &(frame) };
StrCL lifted22_cl = &(u_74);
struct str_closure w_74 = { &(lifted23) , &(frame) };
StrCL lifted23_cl = &(w_74);
struct str_closure x_74 = { &(lifted24) , &(frame) };
StrCL lifted24_cl = &(x_74);
struct str_closure z_74 = { &(lifted25) , &(frame) };
StrCL lifted25_cl = &(z_74);
t = apply_test_4_0(sl, lifted22_cl, lifted23_cl, lifted24_cl, lifted25_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure a_75 = { &(lifted26) , &(frame) };
StrCL lifted26_cl = &(a_75);
struct str_closure c_75 = { &(lifted27) , &(frame) };
StrCL lifted27_cl = &(c_75);
struct str_closure d_75 = { &(lifted28) , &(frame) };
StrCL lifted28_cl = &(d_75);
struct str_closure f_75 = { &(lifted29) , &(frame) };
StrCL lifted29_cl = &(f_75);
t = apply_test_4_0(sl, lifted26_cl, lifted27_cl, lifted28_cl, lifted29_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure g_75 = { &(lifted30) , &(frame) };
StrCL lifted30_cl = &(g_75);
struct str_closure i_75 = { &(lifted31) , &(frame) };
StrCL lifted31_cl = &(i_75);
struct str_closure k_75 = { &(lifted32) , &(frame) };
StrCL lifted32_cl = &(k_75);
struct str_closure l_75 = { &(lifted33) , &(frame) };
StrCL lifted33_cl = &(l_75);
t = apply_test_4_0(sl, lifted30_cl, lifted31_cl, lifted32_cl, lifted33_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure n_75 = { &(lifted34) , &(frame) };
StrCL lifted34_cl = &(n_75);
struct str_closure o_75 = { &(lifted35) , &(frame) };
StrCL lifted35_cl = &(o_75);
struct str_closure q_75 = { &(lifted36) , &(frame) };
StrCL lifted36_cl = &(q_75);
struct str_closure r_75 = { &(lifted37) , &(frame) };
StrCL lifted37_cl = &(r_75);
t = apply_test_4_0(sl, lifted34_cl, lifted35_cl, lifted36_cl, lifted37_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure t_75 = { &(lifted38) , &(frame) };
StrCL lifted38_cl = &(t_75);
struct str_closure u_75 = { &(lifted39) , &(frame) };
StrCL lifted39_cl = &(u_75);
struct str_closure w_75 = { &(lifted40) , &(frame) };
StrCL lifted40_cl = &(w_75);
struct str_closure x_75 = { &(lifted41) , &(frame) };
StrCL lifted41_cl = &(x_75);
t = apply_test_4_0(sl, lifted38_cl, lifted39_cl, lifted40_cl, lifted41_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure z_75 = { &(lifted42) , &(frame) };
StrCL lifted42_cl = &(z_75);
struct str_closure a_76 = { &(lifted43) , &(frame) };
StrCL lifted43_cl = &(a_76);
struct str_closure c_76 = { &(lifted44) , &(frame) };
StrCL lifted44_cl = &(c_76);
struct str_closure d_76 = { &(lifted45) , &(frame) };
StrCL lifted45_cl = &(d_76);
t = apply_test_4_0(sl, lifted42_cl, lifted43_cl, lifted44_cl, lifted45_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure f_76 = { &(lifted46) , &(frame) };
StrCL lifted46_cl = &(f_76);
struct str_closure g_76 = { &(lifted47) , &(frame) };
StrCL lifted47_cl = &(g_76);
struct str_closure h_76 = { &(lifted48) , &(frame) };
StrCL lifted48_cl = &(h_76);
struct str_closure j_76 = { &(lifted49) , &(frame) };
StrCL lifted49_cl = &(j_76);
t = apply_test_4_0(sl, lifted46_cl, lifted47_cl, lifted48_cl, lifted49_cl, t);
if((t == NULL))
goto fail3 ;
{
struct str_closure k_76 = { &(lifted50) , &(frame) };
StrCL lifted50_cl = &(k_76);
struct str_closure l_76 = { &(lifted51) , &(frame) };
StrCL lifted51_cl = &(l_76);
struct str_closure m_76 = { &(lifted52) , &(frame) };
StrCL lifted52_cl = &(m_76);
struct str_closure n_76 = { &(lifted53) , &(frame) };
StrCL lifted53_cl = &(n_76);
t = apply_and_check_4_0(sl, lifted50_cl, lifted51_cl, lifted52_cl, lifted53_cl, t);
if((t == NULL))
goto fail3 ;
t = apply_test_4_0(sl, lifted54_cl, lifted55_cl, lifted56_cl, lifted57_cl, t);
if((t == NULL))
goto fail3 ;
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
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail3 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted53 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted53";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
{
sl_readvar(2, sl) = t;
}
else
if((sl_readvar(2, sl) != t))
goto fail58 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail58 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted52 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted52";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail57 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail57 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted51 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted51";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = dr_leave_scope_0_0(sl_up(sl), t);
if((t == NULL))
goto fail56 ;
t = dr_leave_scope_0_0(sl_up(sl), t);
if((t == NULL))
goto fail56 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail56 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted50 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted50";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term45;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail55 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted49 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted49";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATempty;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail54 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted48 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted48";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail53 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail53 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted47 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted47";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm i_2 = NULL,j_2 = NULL;
j_2 = t;
t = term5;
i_2 = t;
t = j_2;
t = dr_lookup_rule_0_1(sl_up(sl), i_2, t);
if((t == NULL))
goto fail52 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail52 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted46 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted46";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term43;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail51 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted45 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted45";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail50 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail50 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted44 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted44";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail49 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail49 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted43 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted43";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
g_2 = t;
t = term5;
e_2 = t;
t = g_2;
h_2 = t;
t = (ATerm) ATempty;
f_2 = t;
t = h_2;
t = dr_set_in_rule_set_0_2(sl_up(sl), e_2, f_2, t);
if((t == NULL))
goto fail48 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail48 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted42 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted42";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term41;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail47 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted41 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted41";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term33);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail46 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted40 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted40";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail45 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail45 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted39 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted39";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_2 = NULL,d_2 = NULL;
d_2 = t;
t = term5;
c_2 = t;
t = d_2;
t = dr_lookup_rule_0_1(sl_up(sl), c_2, t);
if((t == NULL))
goto fail44 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail44 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted38 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted38";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term39;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail43 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted37 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted37";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail42 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail42 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted36 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted36";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail41 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail41 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted35 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted35";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
z_1 = t;
t = term27;
w_1 = t;
t = z_1;
a_2 = t;
t = term5;
x_1 = t;
t = a_2;
b_2 = t;
t = (ATerm) ATempty;
y_1 = t;
t = b_2;
t = dr_set_in_rule_set_0_3(sl_up(sl), w_1, x_1, y_1, t);
if((t == NULL))
goto fail40 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail40 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted34 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted34";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term37;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail39 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted33 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted33";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term33);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail38 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted32 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted32";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail37 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail37 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted31 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted31";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm u_1 = NULL,v_1 = NULL;
v_1 = t;
t = term5;
u_1 = t;
t = v_1;
t = dr_lookup_rule_0_1(sl_up(sl), u_1, t);
if((t == NULL))
goto fail36 ;
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
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail35 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted29 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted29";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail34 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail34 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted28 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted28";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail33 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail33 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted27 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted27";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
g_1 = t;
t = term5;
e_1 = t;
t = g_1;
h_1 = t;
t = (ATerm) ATinsert(ATempty, term33);
f_1 = t;
t = h_1;
t = dr_set_in_rule_set_0_2(sl_up(sl), e_1, f_1, t);
if((t == NULL))
goto fail32 ;
l_1 = t;
t = term25;
i_1 = t;
t = l_1;
m_1 = t;
t = term5;
j_1 = t;
t = m_1;
n_1 = t;
t = (ATerm) ATinsert(ATempty, term7);
k_1 = t;
t = n_1;
t = dr_set_in_rule_set_0_3(sl_up(sl), i_1, j_1, k_1, t);
if((t == NULL))
goto fail32 ;
r_1 = t;
t = term27;
o_1 = t;
t = r_1;
s_1 = t;
t = term5;
p_1 = t;
t = s_1;
t_1 = t;
t = (ATerm) ATinsert(ATempty, term35);
q_1 = t;
t = t_1;
t = dr_set_in_rule_set_0_3(sl_up(sl), o_1, p_1, q_1, t);
if((t == NULL))
goto fail32 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail32 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted26 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted26";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term31;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail31 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted25 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted25";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail30 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted24 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted24";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
goto fail29 ;
else
{
t = sl_readvar(1, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail29 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted23 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted23";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm c_1 = NULL,d_1 = NULL;
d_1 = t;
t = term5;
c_1 = t;
t = d_1;
t = dr_lookup_rule_0_1(sl_up(sl), c_1, t);
if((t == NULL))
goto fail28 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail28 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted22 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted22";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term29;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail27 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted21 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted21";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(1, sl) == NULL))
{
sl_readvar(1, sl) = t;
}
else
if((sl_readvar(1, sl) != t))
goto fail26 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail26 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted20 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted20";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail25 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail25 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted19 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted19";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
z_0 = t;
t = term25;
y_0 = t;
t = z_0;
t = dr_label_scope_0_1(sl_up(sl), y_0, t);
if((t == NULL))
goto fail24 ;
t = dr_add_scope_0_0(sl_up(sl), t);
if((t == NULL))
goto fail24 ;
b_1 = t;
t = term27;
a_1 = t;
t = b_1;
t = dr_label_scope_0_1(sl_up(sl), a_1, t);
if((t == NULL))
goto fail24 ;
t = dr_add_scope_0_0(sl_up(sl), t);
if((t == NULL))
goto fail24 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail24 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted18 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted18";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term23;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail23 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted17 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted17";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term19);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail22 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted16 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted16";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail21 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail21 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted15 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted15";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm w_0 = NULL,x_0 = NULL;
x_0 = t;
t = term5;
w_0 = t;
t = x_0;
t = dr_lookup_rule_0_1(sl_up(sl), w_0, t);
if((t == NULL))
goto fail20 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail20 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted14 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted14";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term21;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail19 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted13 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted13";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail18 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail18 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted12 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted12";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail17 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail17 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted11 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted11";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
u_0 = t;
t = term5;
s_0 = t;
t = u_0;
v_0 = t;
t = (ATerm) ATinsert(ATempty, term19);
t_0 = t;
t = v_0;
t = dr_set_in_rule_set_0_2(sl_up(sl), s_0, t_0, t);
if((t == NULL))
goto fail16 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail16 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted10 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted10";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term17;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail15 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted9 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted9";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(0, sl) == NULL))
goto fail14 ;
else
{
t = sl_readvar(0, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail14 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted8 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted8";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm q_0 = NULL,r_0 = NULL;
r_0 = t;
t = term5;
q_0 = t;
t = r_0;
t = dr_lookup_rule_0_1(sl_up(sl), q_0, t);
if((t == NULL))
goto fail13 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail13 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted7 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted7";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term15;
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
if((sl_readvar(0, sl) == NULL))
{
sl_readvar(0, sl) = t;
}
else
if((sl_readvar(0, sl) != t))
goto fail11 ;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail11 :
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
fail10 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted3 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted3";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term11;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail9 :
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
fail8 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted57 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted57";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = (ATerm) ATinsert(ATempty, term7);
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail7 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted56 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted56";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
if((sl_readvar(2, sl) == NULL))
goto fail6 ;
else
{
t = sl_readvar(2, sl);
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail6 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted55 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted55";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
ATerm k_2 = NULL,l_2 = NULL;
l_2 = t;
t = term5;
k_2 = t;
t = l_2;
t = dr_lookup_rule_0_1(sl_up(sl), k_2, t);
if((t == NULL))
goto fail5 ;
}
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail5 :
--__tracing_table_counter;
return(NULL);
}
static ATerm lifted54 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "lifted54";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
t = term3;
__tracing_table[--__tracing_table_counter] = NULL;
return(t);
fail4 :
--__tracing_table_counter;
return(NULL);
}
ATerm main_0_0 (StrSL sl, ATerm t)
{
__tracing_table[__tracing_table_counter++] = "main_0_0";
__tracing_table[__tracing_table_counter] = NULL;
sl_decl(sl);
{
struct str_closure p_73 = { &(lifted0) , &(frame) };
StrCL lifted0_cl = &(p_73);
struct str_closure q_73 = { &(lifted1) , &(frame) };
StrCL lifted1_cl = &(q_73);
t = test_suite_2_0(sl, lifted0_cl, lifted1_cl, t);
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
t = test_dr_set_in_rule_set_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_dr_add_to_rule_set_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_change_set_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
t = test_dr_intersect_rule_sets_0_0(sl_up(sl), t);
if((t == NULL))
goto fail2 ;
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
t = term1;
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
closures = (struct str_closure*) malloc((sizeof(struct str_closure) * 206));
if((closures == NULL))
{
perror("malloc error for registration of dynamic strategies");
exit(1);
}
closures[closures_index].fun = &(dr_eq_rule_sets_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_eq_rule_sets_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_intersect_rule_sets_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_intersect_rule_sets_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_add_to_rule_set_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_add_to_rule_set_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_add_to_rule_set_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_add_to_rule_set_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_in_rule_set_0_3);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_in_rule_set_0_3", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_set_in_rule_set_0_2);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_set_in_rule_set_0_2", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_lookup_rule_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_lookup_rule_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_commit_change_set_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_commit_change_set_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_start_change_set_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_start_change_set_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_label_scope_0_1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_label_scope_0_1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_leave_scope_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_leave_scope_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_add_scope_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_add_scope_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(dr_new_rule_set_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("dr_new_rule_set_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(try_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("try_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(say_1_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("say_1_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_and_fail_3_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_and_fail_3_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_and_check_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_and_check_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(apply_test_4_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("apply_test_4_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_suite_2_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_suite_2_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted186);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted186", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted185);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted185", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted183);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted183", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted182);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted182", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted181);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted181", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted180);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted180", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted178);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted178", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted177);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted177", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted176);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted176", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted175);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted175", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted173);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted173", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted172);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted172", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted171);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted171", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted170);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted170", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted168);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted168", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted167);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted167", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted166);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted166", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted191);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted191", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted190);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted190", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted188);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted188", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted187);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted187", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_dr_intersect_rule_sets_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_dr_intersect_rule_sets_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted161);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted161", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted160);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted160", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted158);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted158", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted157);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted157", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted156);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted156", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted155);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted155", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted154);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted154", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted153);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted153", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted152);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted152", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted150);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted150", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted149);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted149", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted148);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted148", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted147);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted147", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted146);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted146", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted145);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted145", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted144);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted144", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted143);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted143", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted142);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted142", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted141);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted141", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted140);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted140", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted139);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted139", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted138);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted138", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted137);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted137", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted136);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted136", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted135);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted135", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted134);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted134", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted133);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted133", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted132);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted132", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted131);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted131", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted130);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted130", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted129);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted129", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted128);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted128", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted127);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted127", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted126);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted126", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted125);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted125", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted124);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted124", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted123);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted123", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted122);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted122", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted121);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted121", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted119);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted119", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted118);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted118", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted165);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted165", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted164);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted164", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted163);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted163", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted162);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted162", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_change_set_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_change_set_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted113);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted113", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted112);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted112", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted111);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted111", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted110);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted110", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted109);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted109", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted108);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted108", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted107);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted107", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted106);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted106", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted105);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted105", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted104);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted104", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted103);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted103", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted102);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted102", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted101);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted101", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted100);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted100", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted99);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted99", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted98);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted98", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted97);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted97", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted96);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted96", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted95);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted95", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted94);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted94", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted93);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted93", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted92);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted92", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted91);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted91", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted90);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted90", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted89);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted89", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted88);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted88", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted87);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted87", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted86);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted86", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted85);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted85", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted84);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted84", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted83);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted83", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted82);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted82", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted81);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted81", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted80);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted80", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted79);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted79", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted78);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted78", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted77);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted77", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted76);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted76", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted75);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted75", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted74);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted74", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted73);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted73", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted72);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted72", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted71);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted71", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted70);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted70", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted69);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted69", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted68);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted68", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted67);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted67", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted66);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted66", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted65);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted65", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted64);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted64", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted63);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted63", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted62);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted62", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted61);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted61", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted59);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted59", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted58);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted58", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted117);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted117", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted116);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted116", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted115);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted115", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted114);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted114", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_dr_add_to_rule_set_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_dr_add_to_rule_set_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted53);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted53", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted52);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted52", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted51);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted51", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted50);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted50", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted49);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted49", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted48);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted48", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted47);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted47", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted46);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted46", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted42);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted42", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted41);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted41", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted40);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted40", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted30);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted30", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted29);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted29", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted28);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted28", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted6);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted6", 0, ATtrue)), &(closures[closures_index]));
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
closures[closures_index].fun = &(lifted57);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted57", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted56);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted56", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted55);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted55", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted54);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted54", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(test_dr_set_in_rule_set_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("test_dr_set_in_rule_set_0_0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted1);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted1", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(lifted0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("lifted0", 0, ATtrue)), &(closures[closures_index]));
closures_index++;
closures[closures_index].fun = &(main_0_0);
closures[closures_index].sl = NULL;
SRTS_register_function((ATerm)ATmakeAppl0(ATmakeSymbol("main_0_0", 0, ATtrue)), &(closures[closures_index]));
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
