(* Constructing terms for the signature of natural numbers:

  zero  : nat
  one   : nat
  plus  : nat * nat -> nat
  times : nat * nat -> nat
  
*)

val zero_  = top("0", []);
val one_   = top("1", []);

fun plus_(x, y)  = top("+", [x, y]);
fun times_(x, y) = top("*", [x, y]);

val two_   = plus_(one_, one_);
val three_ = plus_(two_, one_);
val four_  = plus_(three_, one_);

(* constructing variables *)

fun var_(x) = tvar(x);

(* The rewrite rules *)

val N0 
  = Rule("N0", plus_(var_("x"), plus_(var_("y"), var_("z"))), 
	       plus_(plus_(var_("x"), var_("y")), var_("z")))

val N1 = Rule("N1", plus_(var_("x"), zero_), var_("x"));
val N2 = Rule("N2", plus_(zero_, var_("x")), var_("x"));

val N3 = Rule("N3", times_(var_("x"), zero_), zero_);
val N4 = Rule("N4", times_(zero_, var_("x")), zero_);

val N5 = Rule("N5", times_(var_("x"), one_), var_("x"));
val N6 = Rule("N6", times_(one_, var_("x")), var_("x"));

val N7 
  = Rule("N7", times_(var_("x"), plus_(var_("y"), one_)), 
	       plus_(times_(var_("x"), var_("y")), var_("x")));

val nat_trs = [N0,N1,N2,N3,N4,N5,N6,N7];

val nat_rules
  = choices([label("N0"), 
	     label("N1"), 
	     label("N2"), 
	     label("N3"), 
	     label("N4"), 
	     label("N5"), 
	     label("N6"), 
	     label("N7")]);

val nat_strat1
  = innermost_eff(nat_rules);

val nat_strat2
  = once(nat_rules);

val term_1 = plus_(one_, zero_);
val term_2 = times_(one_, zero_);
val term_3 = times_(two_, zero_);
val term_4 = plus_(times_(four_, zero_), one_);
val term_5 = plus_(times_(four_, two_), two_);

fun nat_reduce sop t 
  = pp_term_red(eval_strat nat_trs 
    (
	sop(nat_rules)
    )
    t);

