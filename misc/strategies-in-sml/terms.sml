structure Term = struct 

local
  open Str
  open Fun
  open Reduct
  open Table
  open MyList
in

datatype ('a, 's) Term
	= TVar of string
   	| TWld 		 	(* wildcard *)
        | TInt of int
        | TStr of string
	| TOp  of string * 'a list
	| TCon of string * 'a * 's * string
        | TApp of 's * 'a
 	| TLst of 'a list;

datatype 'c term = TIn of ('c term, 'c) Term;

(* Basic Operations *)

val TWld'	   = TIn(TWld);
fun TVar'(x)       = TIn(TVar(x));
fun TInt'(x)	   = TIn(TInt(x));
fun TOp'(x, ts)    = TIn(TOp(x, ts));
fun TLst'(ts)      = TIn(TLst(ts));
fun TCon'(x, t, c, s) = TIn(TCon(x, t, c, s));
fun TApp'(s, t)    = TIn(TApp(s, t));
fun TStr'(x)	   = TIn(TStr(x));

(* obsolete
fun tvar(x)      = TIn(TVar(x));
fun tint(x)	 = TIn(TInt(x));
fun top(x, ts)   = TIn(TOp(x, ts));
fun tlst(ts)     = TIn(TLst(ts));
fun tcon(x, t, c, s)= TIn(TCon(x, t, c, s));
fun tstr(x)	 = TIn(TStr(x));
*)

fun tin(t)       = TIn(t);
fun tout(TIn(t)) = t;

fun term_args (TVar(x))       = []
  | term_args (TWld)          = []
  | term_args (TInt(x))       = []
  | term_args (TStr(x))       = []
  | term_args (TOp(x, ts))    = ts
  | term_args (TLst(ts))      = ts
  | term_args (TCon(x, t, c, s)) = [t]
  | term_args (TApp(s, t))    = [t];

exception Put_term_args_error;

fun put_term_args (TVar(x))    ts' = TVar(x)
  | put_term_args (TWld)       ts' = TWld
  | put_term_args (TInt(x))    ts' = TInt(x)
  | put_term_args (TStr(x))    ts' = TStr(x)
  | put_term_args (TOp(x, ts)) ts' = TOp(x, ts')
  | put_term_args (TLst(ts))   ts' = TLst(ts')
  | put_term_args (TCon(x, t, c, s)) []  = TVar(x)
  | put_term_args (TCon(x, t, c, s)) (t' :: ts) = TCon(x, t', c, s)
  | put_term_args (TApp(s, t)) ([t']) = TApp(s, t')
  | put_term_args _ _ = raise Put_term_args_error;

fun Term f g (TVar(x))       = TVar(x)
  | Term f g (TWld)          = TWld
  | Term f g (TInt(x))       = TInt(x)
  | Term f g (TStr(x))       = TStr(x)
  | Term f g (TOp(x, ts))    = TOp(x, map f ts)
  | Term f g (TLst(ts))      = TLst(map f ts)
  | Term f g (TCon(x, t, c, s)) = TCon(x, f(t), g(c), s)
  | Term f g (TApp(s, t))    = TApp(g(s), f(t));

fun term_fold f u t = foldr f u (term_args t);

fun term_kids f t = put_term_args(t)(f(term_args(t)));

(* Catamorphism for terms *)

fun term_cata phi1 phi2 t 
  = phi1(Term(term_cata phi1 phi2)(phi2)(tout(t)));

fun term_c_map phi t
  = term_cata TIn phi t;

fun td_term_cata test phi1 phi2 t
  = let val t = tout(t) 
    in if test(t) then phi1(t) 
       else phi2(Term(td_term_cata test phi1 phi2)(id)(t)) end;

(* The variables of a term *)

fun term_vars t
  = let fun phi (TVar(x))         = [x]
          | phi (TCon(x, xs, ys, s)) = (x :: xs)
          | phi t                 = term_fold(union)([])(t)
    in term_cata phi id t end

(* Substitution *)

type 'c tsubst = (string * 'c term) list;

fun term_subst(cbs)(sbs : 'c tsubst)(s)
  = let fun phi(sbs)(t)
          = case t of 
              TVar(x) => lookup sbs x (tin(t))
            | _       => tin(t)
    in term_cata(phi(sbs))(cbs)(s) end

(* Matching terms *)

fun match_term sbs t1 t2 
  = case tout(t1) of
      TWld => SOME(sbs)
    | TVar(x)
      => (case table_lookup(sbs)(x) 
	  of NONE     => (TextIO.print("Warning: undeclared variable \"" ^
			  x ^ "\"\n"); SOME((x, t2) :: sbs))
           | SOME(t3) => if t3 = t2 then SOME(sbs) else
			 if t3 = t1 then SOME(table_add sbs x t2)
		         else NONE)
    | TInt(x)
      => (case tout(t2) of
	    TInt(y) => if x = y
		       then SOME(sbs)
		       else NONE
	  | TOp("S", [t2']) => if x > 0 
			       then match_term sbs (TInt'(x-1)) t2'
			       else NONE
	  | _ => NONE)
    | TStr(x)
      => (case tout(t2) of
	    TStr(y) => if x = y
		       then SOME(sbs)
		       else NONE
	  | _ => NONE)
    | TOp(f, ts1)
      => let fun phi() = 
                 (case tout(t2) 
	          of TOp(g, ts2) 
	       	     => if f = g 
		        then match_terms sbs ts1 ts2 
		        else NONE
	          | _  => NONE)
          in if (f = "S") andalso (length ts1 = 1)
             then (case tout(t2)
	           of TInt(x)
	       	     => if x > 0
		        then match_term sbs (hd(ts1)) (TInt'(x-1))
		        else NONE
	           | _  => phi())
             else phi()
	  end
    | TLst(ts1)
      => (case tout(t2) 
	  of TLst(ts2) 
	       	=> match_terms sbs ts1 ts2
	   | _  => NONE)
    | _ => NONE
and match_terms sbs [] [] = SOME(sbs)
  | match_terms sbs (t1 :: ts1) (t2 :: ts2)
	= (case match_term sbs t1 t2 
	   of NONE      => NONE
            | SOME(sbs) => match_terms sbs ts1 ts2)
  | match_terms sbs _ _ = NONE;

(* Pretty-printing terms *)

fun consnil_to_lst t
  = let fun phi t 
	  = case t of 
	      TOp("Nil", []) => TLst'([])
	    | TOp("Cons", [x, TIn(TLst(xs))])
		=> TLst'(x :: xs)
	    | _ => TIn(t)
    in term_cata phi id t end

fun tconstnil_to_lst t
  = let fun phi t 
	  = case t of 
	      TOp("TNil", []) => TLst'([])
	    | TOp("TCons", [x, TIn(TLst(xs))])
		=> TLst'(x :: xs)
	    | _ => TIn(t)
    in term_cata phi id t end

fun pp_term pps (t) (*: ('a -> string) -> 'a term -> string *)
  = let fun phi t 
          = case t of
            TVar(x)      => x
          | TWld         => "_"
          | TOp(f, [])   => f 
          | TOp(f, args) => f ^ pp_comma_sep "(" ")" args
          | TLst(args)   => pp_comma_sep "["  "]" args
          | TInt(x)      => Int.toString x
          | TStr(x)      => "\"" ^ x ^ "\""
          | TCon(x, t, c, s) => x ^ "[" ^ t ^ "](" ^ s ^ ")"
          | TApp(s, t)   => "<" ^ s ^ "> " ^ t; 
    in term_cata phi pps (consnil_to_lst t) end;

fun up_term pps t
  = let fun phi t 
          = case t of
            TVar(x)       => "TVar(" ^ x ^ ")"
          | TWld   	  => "TWld"
          | TOp(f, args) => "TOp(" ^ f ^ ", " ^ pp_comma_sep "[" "]" args ^ ")"
          | TLst(args)    => "TLst(" ^ pp_comma_sep "["  "]" args ^ ")"
          | TInt(x)       => "TInt(" ^ Int.toString x ^ ")"
          | TStr(x)       => "TStr(\"" ^ x ^ "\")"
          | TCon(x, t, c, s) => "TCon(" ^ x ^ "," ^ t ^ "," ^ s ^ ")"
	  | TApp(s, t)    => "TApp(" ^ s ^ "," ^ t ^ ")"
    in term_cata phi pps (consnil_to_lst t) end;

(* obsolete
fun pp_term_red (Success(t)) = "success " ^ pp_term(t)
  | pp_term_red (Fail(t))    = "fail " ^ pp_term(t); 
*)

end (* local *) 
end (* Term *)