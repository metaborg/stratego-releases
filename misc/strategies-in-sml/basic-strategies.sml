structure Strategies = struct 

local 
  open Term
  open Rules
  open MyList
  open Fun
  open Str
  open Reduct
  open Table
in

(* Strategy Data Type *)

datatype ('a, 'c) Strategy = 

  (* Primitives for term domain *)

    Prim    of string
  | Match   of 'c term
  | Build   of 'c term
  | SRule   of 'c rule

  (* Computational constructs *)

  | Id
  | Fails
  | Where   of 'a
  | Test    of 'a
  | Neg     of 'a
  | Seq     of 'a * 'a
  | Choice  of 'a * 'a
  | LChoice of 'a * 'a
  | Var     of string
  | Rec     of string * 'a
  | All     of 'a
  | Some    of 'a
  | One     of 'a
  | Path    of int * 'a
  | Scope   of string list * 'a
  | Label   of string * 'a list
  ;

datatype strategy = SIn of (strategy, strategy) Strategy;

(* Basic Functions

Basic functionality for manipulating strategies. The following
functions abbreviate the construction of strategies in the recursive
datatype by putting the Fix constructors. *)

fun Prim'(x) 		= SIn(Prim(x));
fun Match'(t)		= SIn(Match(t));
fun Build'(t)		= SIn(Build(t));
fun SRule'(r)		= SIn(SRule(r));

val Id' 		= SIn(Id);
val Fails' 		= SIn(Fails);
fun Where'(s)		= SIn(Where(s));
fun Test'(s)		= SIn(Test(s));
fun Neg'(s)		= SIn(Neg(s));
fun Seq'(s1, s2) 	= SIn(Seq(s1, s2));
fun Choice'(s1, s2) 	= SIn(Choice(s1, s2));
fun LChoice'(s1, s2) 	= SIn(LChoice(s1, s2));
fun Var'(x)     	= SIn(Var(x));
fun Rec'(x, s)   	= SIn(Rec(x, s));
fun All'(s)  		= SIn(All(s));
fun Some'(s) 		= SIn(Some(s));
fun One'(s) 		= SIn(One(s));
fun Path'(i, s)		= SIn(Path(i, s));
fun Scope'(xs, s)	= SIn(Scope(xs, s));
fun Label'(x, ss)	= SIn(Label(x, ss));

fun sout(SIn(s)) 	= s;

(* Abbreviations *)

fun Choices ss = foldr1(curry Choice')(id)(Fails')(ss);
fun Seqs ss    = foldr1(curry Seq')(id)(Id')(ss);

fun ApplyMatch(s, t1, t2) = Seqs([Build'(t1), s, Match'(t2)])

fun BAM(s, t1, t2) = Seqs([Build'(t1), s, Match'(t2)])
fun BA(s, t)       = Seqs([Build'(t), s])

(* A map function for strategies *)

fun Strategy f g (Prim(x)) 	   = Prim(x)
  | Strategy f g (Match(x)) 	   = Match(term_c_map g(x))
  | Strategy f g (Build(x)) 	   = Build(term_c_map g(x))
  | Strategy f g (SRule(r)) 	   = SRule(mapRule(g)(r))

  | Strategy f g (Id)     	   = Id
  | Strategy f g (Fails)     	   = Fails
  | Strategy f g (Where(s)) 	   = Where(f(s))
  | Strategy f g (Test(s)) 	   = Test(f(s))
  | Strategy f g (Neg(s))          = Neg(f(s))
  | Strategy f g (Seq(s1, s2))     = Seq(f(s1), f(s2))
  | Strategy f g (Choice(s1, s2))  = Choice(f(s1), f(s2))
  | Strategy f g (LChoice(s1, s2)) = LChoice(f(s1), f(s2))
  | Strategy f g (Var(x)) 	   = Var(x)
  | Strategy f g (Rec(x, s)) 	   = Rec(x, f(s))
  | Strategy f g (All(s)) 	   = All(f(s))
  | Strategy f g (Some(s)) 	   = Some(f(s))
  | Strategy f g (One(s)) 	   = One(f(s))
  | Strategy f g (Path(i, s))      = Path(i, f(s))
  | Strategy f g (Scope(xs, s))    = Scope(xs, f(s))
  | Strategy f g (Label(x, ss))	   = Label(x, map f ss)
  ;

fun strat_fold f u (Prim(x))         = u
  | strat_fold f u (Match(x))        = u
  | strat_fold f u (Build(x))        = u
  | strat_fold f u (SRule(Rule(t1, t2, c))) = foldr f u [c]
  | strat_fold f u (Var(x))          = u
  | strat_fold f u (Id)              = u
  | strat_fold f u (Fails)           = u
  | strat_fold f u (Neg(s))          = foldr f u [s]
  | strat_fold f u (Where(s))        = foldr f u [s]
  | strat_fold f u (Test(s))         = foldr f u [s]
  | strat_fold f u (Seq(s1, s2))     = foldr f u [s1, s2]
  | strat_fold f u (Choice(s1, s2))  = foldr f u [s1, s2]
  | strat_fold f u (LChoice(s1, s2)) = foldr f u [s1, s2]
  | strat_fold f u (Rec(x, s))       = foldr f u [s]
  | strat_fold f u (All(s)) 	     = foldr f u [s]
  | strat_fold f u (Some(s)) 	     = foldr f u [s]
  | strat_fold f u (One(s)) 	     = foldr f u [s]
  | strat_fold f u (Path(i, s))      = foldr f u [s]
  | strat_fold f u (Scope(xs, s))    = foldr f u [s]
  | strat_fold f u (Label(x, ss))    = foldr f u ss
  ;

(* Catamorphisms

Based on these basic functions we can define several 
generic traversal functions for mapping functions to 
a strategy or for folding a strategy into some value. *)

fun strategy_cata phi s
  = phi(Strategy(strategy_cata phi)(strategy_cata phi)(sout(s)));

fun td_strat_cata test phi1 phi2 s
  = let val s = sout(s) 
	val f = (td_strat_cata test phi1 phi2)
    in if test(s) then phi1(s) 
       else phi2(Strategy(f)(f)(s)) end;

(* Pretty printing *)

fun pp_strat0 ppt s0 = 
case s0 of
    Prim(x)          	=> x
  | Match term	       	=> "match(" ^ (ppt term) ^ ")"
  | Build term	       	=> "build(" ^ (ppt term) ^ ")"
  | SRule(Rule(term1, term2, "id")) 
		  	=> "<" ^(ppt term1) ^ " -> " ^ (ppt term2)^ ">"
  | SRule(Rule(term1, term2, s))
		  	=> "<" ^ (ppt term1) ^ " -> " ^ (ppt term2) ^ 
			  " where " ^ s ^ ">"
  | Id		       	=> "id"
  | Fails	       	=> "fail"
  | Where(s)	       	=> "where(" ^ s ^ ")"
  | Test(s)	       	=> "test(" ^ s ^ ")"
  | Neg(s)	       	=> "not(" ^ s ^ ")"
  | Seq(s1, s2)   	=> "(" ^ s1 ^ " . " ^ s2 ^ ")"
  | Choice(s1, s2)   	=> "(" ^ s1 ^ " + " ^ s2 ^ ")"
  | LChoice(s1, s2)  	=> "(" ^ s1 ^ " <+ " ^ s2 ^ ")"
  | Var(string)     	=> string
  | Rec(string, s) 	=> "(" ^ "rec " ^ string ^ " . " ^ s ^ ")"
  | All(s)        	=> "all" ^ "(" ^ s ^ ")"
  | Some(s)        	=> "some" ^ "(" ^ s ^ ")"
  | One(s)        	=> "one" ^ "(" ^ s ^ ")"
  | Path(i, s)     	=> (Int.toString(i)) ^ "(" ^ s ^ ")"
  | Scope(xs, s)     	=> "{" ^ pp_comma_sep "" "" xs ^ ":" ^ s ^ "}"
  | Label(string, ss) 	=> if ss = [] then string
			   else string ^ (pp_comma_sep "(" ")" ss)

fun pp_strat strat = strategy_cata (pp_strat0 (pp_term id)) strat 

(* Ugly printing *)

fun up_strat0 up_term s0 = 
case s0 of
    Prim(x)          	=> x
  | Match term	       	=> "match(" ^ (up_term term) ^ ")"
  | Build term	       	=> "build(" ^ (up_term term) ^ ")"
  | SRule(Rule(term1, term2, "id")) 
		  	=> "<" ^(up_term term1) ^ " -> " ^ (up_term term2)^ ">"
  | SRule(Rule(term1, term2, s))
		  	=> "<" ^ (up_term term1) ^ " -> " ^ (up_term term2) ^ 
			  " where " ^ s ^ ">"
  | Id		       	=> "id"
  | Fails	       	=> "fail"
  | Where(s)	       	=> "Where(" ^ s ^ ")"
  | Test(s)	       	=> "Test(" ^ s ^ ")"
  | Neg(s)	       	=> "not(" ^ s ^ ")"
  | Seq(s1, s2)   	=> "(" ^ s1 ^ " . " ^ s2 ^ ")"
  | Choice(s1, s2)   	=> "(" ^ s1 ^ " + " ^ s2 ^ ")"
  | LChoice(s1, s2)  	=> "(" ^ s1 ^ " <+ " ^ s2 ^ ")"
  | Var(string)     	=> string
  | Rec(string, s) 	=> "(" ^ "rec " ^ string ^ " . " ^ s ^ ")"
  | All(s)        	=> "all" ^ "(" ^ s ^ ")"
  | Some(s)        	=> "some" ^ "(" ^ s ^ ")"
  | One(s)        	=> "one" ^ "(" ^ s ^ ")"
  | Path(i, s)     	=> (Int.toString(i)) ^ "(" ^ s ^ ")"
  | Scope(xs, s)     	=> "{" ^ pp_comma_sep "" "" xs ^ ":" ^ s ^ "}"
  | Label(string, ss) 	=> "Label(" ^ string ^ (pp_comma_sep "(" ")" ss) ^ ")"

fun up_strat strat = strategy_cata (up_strat0 (up_term id)) strat 

(* Free variables.  Test if a variable is bound by a recursive
binding. *)

fun free_in x (SIn(s))
  = case s of
       Var(y)   => x = y
    |  Rec(y, s) => if x = y then false
		            else free_in(x)(s)
    |  s => strat_fold OR false (Strategy(free_in x)(free_in x)(s))

(* exercise: all free variables in s *)

(* The function |get_fresh| computes a fresh variable given a
strategy, i.e., it computes a variable that is not free in the
strategy. *)

fun get_fresh(x, s) 
  = if free_in x s then get_fresh(x ^ "0", s) else x;

fun get_fresh2(x, []) = x
  | get_fresh2(x, s :: ss) = get_fresh2(get_fresh(x, s), ss);

(* Substitution of strategies for strategy variables. *)

fun subst_strat [] [] s = s
  | subst_strat sbs1 sbs2 (SIn(s))
    = let fun phi s 
	    = SIn(Strategy(subst_strat sbs1 sbs2)(subst_strat sbs1 sbs2) s)
       in case s of
            Var(y)   
	     => (case table_lookup sbs1 y of
		   NONE     => SIn(s)
                 | SOME(s') => s')
          | Rec(y, s') 
	    => if exists (fn(x, s) => free_in y s) sbs1 then 
	       let val new_y = get_fresh2(y, s' :: map (fn(x, y) => y) sbs1)
	        in Rec'(new_y, subst_strat ((y, Var'(new_y)) :: sbs1) sbs2 s')
	       end
               else let val sbs1' = filter (fn (x, s) => not(x = y)) sbs1
	             in Rec'(y, subst_strat sbs1' sbs2 s') end
          | Match(t)
		=> Match'(term_subst(subst_strat sbs1 sbs2) sbs2 t)
          | Build(t)
		=> Build'(term_subst(subst_strat sbs1 sbs2) sbs2 t)
          | _ => phi(s)
      end

(* The term variables in a strategy *)

fun term_vars_strat s
  = case sout(s)
      of Match(t) => term_vars(t)
       | Build(t) => term_vars(t)
       | Scope(xs, s) => diff (term_vars_strat s) xs
       | s' => strat_fold union [] (Strategy(term_vars_strat)(term_vars_strat) s')

(* Problem: Term variables can become bound because of scope. This
means that strategy substitution should handle this correctly,
i.e. not substitute for term variables that are bound in a scope. *)

(* Unfolding a recursive strategy once *)

fun unfold (s as SIn(Rec(x, s'))) = subst_strat [(x, s)] [] s'
  | unfold s                = s

end (* local *)
end (* struct Strategies *)