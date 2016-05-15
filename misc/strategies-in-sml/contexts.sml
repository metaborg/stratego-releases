(* This file defines functions for translating a rewrite rule with
contexts into a multiple rewrite rules and a strategy combining
them. The idea is that a context corresponds to a local
transformation, rewriting the pattern in the context on the left to
the pattern in the context on the right of the rule. For example,
the following rule defines constant propagation:

  [Prop] Let(Vdec(t, v, Simple(s)), e[Var(t, v)]) -> 
         Let(Vdec(t, v, Simple(s)), e[s])

The expression e[_] is a context variable. This rule can be applied
to a term that matches the pattern

	Let(Vdec(t, v, Simple(s)), e)

and that has an occurence of Var(t, v) in e. Its right-hand side
defines the replacement of these occurences by the expression s.
This explanation suggest the following translation of this rule:

rules

  [Prop1] Let(Vdec(t, v, Simple(s)), e) -> 
          Let(Vdec(t, v, Simple(s)), e)

  [Prop2] Var(t, v) -> s

strategies

  Prop = ~(Prop1 . 2(oncebu(Prop2)))

The first rule matches the pattern and the second tries to rewrite the
context pattern. The rule Prop is replaced by the strategy Prop, which
first applies Prop1 to match the pattern and then applies a strategy
to the e argument to rewrite the defined variable to the expression s.
Note that this second rule uses the bindings for the variables from
the first rule, since they live in the same scope.

*)

structure Contexts = struct

local 
  open Strategies
  open Rules
  open DefinedStrategies
  open MyList
  open Term
  open Fun
  open Table
in


(* term_repl_con 
 : 'a Term.term 
    -> 'a Term.term * (string * ('a Term.term * 'a * int list)) list

Maps a term to a term in which all context variables are replaced by
normal variables and an environment mapping those normal variables to
the pattern occurring in the context.

*)

fun term_repl_con is_rhs t
  = let fun loop x = Term(term_repl_con is_rhs)(id)(x)
        fun add n (ts, es) (t, env) 
	  = (conc ts [t], 
	    conc (map (fn (x, (x', t', c, trav, ns)) 
		       => (x, (x', t', c, trav, n :: ns))) env) es)
	fun add' x = foldl_ind add ([], []) 1 x
    in case tout(t) of
         TCon(x, t, c, trav) => if is_rhs 
			  then let val x' = Gensym.genSym(x)
		                in (TVar'(x'), [(x, (x', t, c, trav, []))]) end
			  else (TVar'(x), [(x, (x, t, c, trav, []))])
       | t' => let val (ts, env) = add' (term_args (loop t'))
	       in (TIn(put_term_args(t')(ts)), env) end
    end;

fun mk_path [] s       = s
  | mk_path (n :: p) s = Path'(n, mk_path(p)(s));

(* TODO: make scope local for variables in context if they do no occur
in outside the scope. *)

fun rule_repl_con t1 t2 c
  = let val (t1', env1) = term_repl_con false t1
	val (t2', env2) = term_repl_con true  t2
        val cnd = if c = [] then [] else [Where'(Seqs(c))]
        fun phi (x, (x', t, c, trav, p))
	  = case table_lookup env2 x of
	      NONE => ([BA(Label'(trav, [Seq'(Match'(t), Where'(c))]), 
			   TVar'(x))], [])
	    | SOME(x', t', c', trav', p')
		=> ([], [BAM(Label'(trav, [rule_repl_con t t' [c, c']]), 
			     TVar'(x), TVar'(x'))])
	val (ms, rs) = foldr (curry (binpair((op ++), (op ++)))) ([], [])
		         (map phi env1)
	val bld = if t1' = t2' then [] else [Build'(t2')]
    in Seqs(Match'(t1') :: concat [ms, cnd, rs, bld, [Prim'("count_rule")]]) end;

(* The following function applies rule_repl_con to each occurence of
SRule in a strategy expression. *)

fun def_contexts s
  = let fun phi (SRule(Rule(t1, t2, c))) = rule_repl_con t1 t2 [c]
          | phi s = SIn(s)
    in strategy_cata(phi)(s) end

fun expand_builds (SIn(s))
  = let fun phi t =
          case tout(t)
 	    of TApp(s, t) 
	       => let val x = Gensym.genSym("app_")
		   in ([(x, Where'(BAM(s, t, TVar'(x))))], TVar'(x)) end
	     | t' => 
		let val ts = map phi (term_args t')
		 in (concat (map first ts),
		     TIn(put_term_args t' (map second ts)))
		end
	fun phi2([], t) = Build'(t)
	  | phi2((x, s) :: xs, t)
		= Scope'([x], Seq'(expand_builds s, phi2(xs, t)))
     in case s
          of Build(t) 
             => (case phi(t)
		   of ([], t') => Build'(t')
		    | (xs, t') => phi2(xs, t'))
           | s' => SIn(Strategy(expand_builds)(expand_builds) s')
     end

fun normalize s = expand_builds(def_contexts s)

end (* local *)
end (* Contexts *)

