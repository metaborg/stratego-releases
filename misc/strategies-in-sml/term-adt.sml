structure 

datatype 'a Term
	= TVar of string
	| TOp of string * 'a list
	;

datatype term = TIn of term Term;

(* Basic Operations *)

fun tvar(x)      = TIn(TVar(x));
fun top(x, ts)   = TIn(TOp(x, ts));
fun tin(t)       = TIn(t);
fun tout(TIn(t)) = t;

(* A labeled rewrite rule consists of a string label and
two terms. *)

datatype rule = Rule of string * term * term;

type trs = rule list;

datatype term_or_trs = Term of term | TRS of trs;
