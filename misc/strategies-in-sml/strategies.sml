(* Lists *)

infix ++;
fun [] ++ ys = ys
  | (x :: xs) ++ ys = x :: (xs ++ ys);

fun map f []       = []
  | map f (x :: l) = (f x) :: (map f l);

(* Association lists *)

fun lookup default [] x = default x
  | lookup default ((x, t) :: xts) y 
	= if x = y then t
	  else lookup default xts y;

(* Terms *)

datatype term 
	= Var of string
	| Apply of string * term list;

fun mk_var x = Var x;
fun mk_apply f ts = Apply(f, ts);

fun cata_term var apply (Var x) = var x
  | cata_term var apply (Apply(f,ts)) 
	= apply f (map (cata_term var apply) ts);

(* Substitution *)

datatype subst 
	= Subst of (string * term) list
	| Fail;

fun lookup_string s x = lookup Var s x;

fun subst (Subst s) = cata_term (lookup_string s) mk_apply
  | subst Fail      = fn x => x;

infix elemof;
fun x elemof [] = false
  | x elemof ((y, t) :: s) = if x = y then true else x elemof s;

(* Matching terms *)

(* match_term : term -> term -> subst *)

fun match_term (Subst s) (Var x) t 
	= if x elemof s then Fail
	 	        else Subst ((x, t) :: s)
  | match_term s (Apply(f, ts1)) (Apply(g, ts2)) 
	= if f = g then match_terms s ts1 ts2 
		   else Fail
  | match_term _ _ _ = Fail
and match_terms s [] [] = s
  | match_terms s (t1 :: ts1) (t2 :: ts2) 
	= match_terms (match_term s t1 t2) ts1 ts2
  | match_terms _ _ _ = Fail;

(* Rewrite Rules *)

datatype rule = Rule of string * (term * term);

datatype trs = Rules of rule list;

fun find_rule l (Rules []) = None
  | find_rule l1 (Rules (Rule(l1, lhs, rhs)) :: rs)
	= if l1 = l2 then (lhs, rhs)
	  else find_rule l1 (Rules rs);

(* Strategies *)

infix $+;
infix <+;
infix .;

datatype strategy
        = Label   of string
	| (op .)  of strategy * strategy
	| (op $+) of strategy * strategy
	| (op <+) of strategy * strategy
        | Rec     of svar * strategy
        | Pd      of (bool List -> bool) * strategy
        ;
        
fun box s = PD 

fun innermost s = Rec("x", ...)


fun eval rules -> strategy -> term -> term

