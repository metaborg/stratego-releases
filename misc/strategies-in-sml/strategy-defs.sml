(* Strategy definitions provide an abstraction mechanism for defining
complex strategies. A strategy definition associates a name with a
list of formal parameters (variables) and a strategy
(body). Application of such a name to a list of actual parameters
results in the instantiation of the body. Strategy definitions can not
be recursive. To achieve recursive strategies, the built-in recursion
operator should be used. *)

structure StrategyDefs = struct

local 
  open Strategies
  open Rules
  open Table
  open Term
  open MyList
  open Contexts
  open Fun
in

datatype stratDecl = SDef of (string list * strategy);

type strategies = (string * stratDecl) list;

datatype decl
  = Rules of strategy trs
  | Strategies of strategies

(* Sort the rewrite rules and strategy definitions in a list of
declarations into a list of rules and a list of definitions. *)

fun sort_decls ds
  = let fun sort rs ss [] = (rs, ss)
          | sort rs ss (Rules(rs') :: ds)
	       = sort (conc rs' rs) ss ds
          | sort rs ss (Strategies(ss') :: ds)
	       = sort rs (conc ss' ss) ds
    in 
	sort [] [] ds
    end;

(* Replace defined strategies in s by their definition in defs.
Assumption: no recursive definitions in defs. The variable bound is a
list of bound variables. *)

fun expand_strat bound defs (SIn(s))
  = let fun phi s = SIn(Strategy(expand_strat bound defs)
			        (expand_strat bound defs)(s))
     in case s
	of Var(y)      
	  => if member y bound then SIn(s)
	     else (case table_lookup defs y of
		     NONE => SIn(s)
                   | SOME(SDef([], body)) 
		          => expand_strat bound defs body
	           | SOME(SDef(xs, body)) => SIn(s))
	| Label(y, ss)
	  => (case table_lookup defs y of
	        NONE => phi(s)
              | SOME(SDef(xs, body))
	        => let val sbs = zip xs (map(expand_strat bound defs) ss)
	            in expand_strat bound defs (subst_strat sbs [] body)
	           end)
	 | Rec(y, s)
	   => Rec'(y, expand_strat (y :: bound) defs s)
	 | _  => phi(s)
     end


(* Merge strategy definitions for the same label such that the body of
the resulting definition is a choice between the bodies of the old
definitions.  First transform a list of strategy definitions into a
list of buckets and sort this list. *)

fun mkBucket (f : string, SDef(xs, s)) = (f, [(xs, s)])

fun sortBuckets bs : (string * (string list * strategy) list) list
  = case bs
      of [] => []
       | [x] => [x]
       | (f, l1) :: (g, l2) :: xs
	 => if f = g 
	    then sortBuckets((f, (conc l1 l2)) :: xs)
	    else if f > g 
	    then sortBuckets((g, l2) :: sortBuckets((f, l1) :: xs))
	    else let val bs' = sortBuckets((g, l2) :: xs)
		  in if first(hd(bs')) = g then (f, l1) :: bs'
		     else sortBuckets((f, l1) :: bs')
		 end

(* After all definitions for the same label are in the same bucket
they can be joined. *)

fun JoinDefs (f, []) = (f, SDef([], Id'))
  | JoinDefs (f, [(xs, s)]) = (f, SDef(xs, s))
  | JoinDefs (f : string, l as ((xs, s) :: l'))
  = let val ys  = map(Gensym.genSym) xs
	val ys' = map(Var') ys
	val ss  = map(fn (zs, s) => subst_strat (zip zs ys') [] s) l 
     in (f, SDef(ys, Choices(ss)))
    end

(* Collecting the definitions now consists of making buckets from
definitions, sorting them and finally joining the buckets. *)    

fun collectSdefs ds = map(JoinDefs)(sortBuckets(map(mkBucket) ds))


(* Translate a list of labeled rewrite rules to a list of strategy
definitions. The label is used as the name of the strategy. A rule
Rule(l, t1, t2) is translated to a defition l = SRule(t1, t2). *)

fun rule_to_strat (l, xs, r)
  = let val s = def_contexts (SRule'(r))
     in (l, SDef(xs, Scope'(term_vars_strat(s), s)))
    end;

fun trs_to_strats decls
  = let fun phi (Rules(rs)) = map rule_to_strat rs
	  | phi (Strategies(ss)) = ss
    in collectSdefs(concat(map phi decls)) end;

end (* local *)
end (* StrategyDefs *)