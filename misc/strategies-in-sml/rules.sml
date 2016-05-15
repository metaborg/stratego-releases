structure Rules = struct
local
  open Fun
  open Term
  open Reduct
  open Table
in

(* A labeled rewrite rule consists of a string label and two terms. *)

datatype 'c rule = Rule of 'c term * 'c term * 'c;

fun mapRule f (Rule(t1, t2, s)) 
  = (Rule(term_c_map f t1, term_c_map f t2, f(s)))

type 'c rule_def = (string * string list * 'c rule);

type 'c trs = ('c rule_def) list;

fun find_rule rs l = table_lookup rs l;

(* One step rewriting. The function |apply_rule| takes a lft and rgt
term, a substitution sbs and a term t. It tries to match t with
lft. If that succeeds the instantiation of rgt together with the new
substitution is returned. Otherwise an indication of failure is
returned. *)

fun apply_rule eval_cond (Rule(lft, rgt, cond))  sbs t 
  = case match_term sbs lft t of
      NONE       => Fail(t, sbs)
    | SOME(sbs') => 
	(case eval_cond cond sbs' t of
	   Fail(t, sbs) => Fail(t, sbs)
	 | Success(t', sbs'')
		=> Success(term_subst(id)(sbs'')(rgt), sbs'))

(* The function |apply_label| applies the rewrite rule with name |l|
defined in the list of rules |rs|. *)

fun apply_label eval_cond rs l sbs t 
  = case find_rule rs l of
      NONE    => Fail(t, sbs)
    | SOME(r) => apply_rule eval_cond r sbs t;

end (* local *)
end (* Rules *)