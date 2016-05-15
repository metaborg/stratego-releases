
(* Rewrite: given a list of declarations, a strategy expression and
a term, apply the strategy to the term. *)

structure Rewrite = struct

local
  open Term
  open Strategies
  open StrategyEval
  open StrategyDefs
  open Contexts
in

datatype term_or_trs 
  = TERM of strategy * strategy term 
  | TRS of decl list;
(*
fun rewrite decls s trm
  = let val defs = trs_to_strats decls
	val s'   = def_contexts (expand_strat [] defs s)
    in eval_strat s' [] trm end;
*)
end (* local *)
end (* Rewrite *)