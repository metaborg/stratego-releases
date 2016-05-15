(* Applying strategies *)

structure StrategyEval = struct

local 
  open Fun
  open Strategies
  open Rules
  open Copy
  open Reduct
  open Term
  open MyList
  open Table
in

fun binIntOp f t env
  = case t 
      of TIn(TOp("TCons", [TIn(TInt(k)), 
	 TIn(TOp("TCons", [TIn(TInt(l)), TIn(TNil)]))]))
	 => Success(TInt'(f(k, l)), env)
       | _ => Fail(t, env)

fun tcons t t' = TOp'("TCons", [t, t']);

fun get_kids t env
  = case tout(t)
      of TOp(f, ts) => Success(foldr tcons (TOp'("TNil", [])) ts, env)
       | _ => Fail(t, env)

fun primitive x t env
  = case x 
      of "new"  => Success(TStr'(newName("x")), env)
       | "min"  => binIntOp (op -) t env
       | "plus" => binIntOp (op +) t env
       | "kids" => get_kids t env
       | "count_rule" => Success(t, env)
       | _ => (TextIO.print("Unknown primitive :\n" ^ x ^ "\n"); 
	    Fail(t, env))
       ;

fun choose(r as Success(t, env), f, _) = r
  | choose(_, f, t)                    = f(t);

fun push_down f bop env t
  = let fun add (x, y) (xs, ys, z) = (x :: xs, y :: ys, z)

        fun lift (Fail(x, y))    = (false, x, y)
          | lift (Success(x, y)) = (true,  x, y)

        fun apply_list f env [] = ([], [], env)
          | apply_list f env (x :: xs)
             = let val (b, r, env') = lift(f env x)
                in add (b, r) (apply_list f env' xs)
		end

        val (bs, ts, env') = apply_list f env (term_args (tout(t)))
    in 
        if bop(bs) then 
	  Success(tin(put_term_args(tout(t))(ts)), env')
        else 
	  Fail(t, env)
    end;

fun push_down_at i f env t
  = case tout(t) of 
      TOp(x, ts)
        => (case get_index i ts of
              NONE => Fail(t, env)
            | SOME(t')
              => (case f env t' of 
		    Fail(t'', env') => Fail(t, env)
		  | Success(t'', env'')
		    => Success(TOp'(x, put_index i t'' ts), env'')))
    | _ => Fail(t, env)
;

fun congruence eval x ss env t
  = let fun phi d y ts [] [] env' = Success(TOp'(y, reverse ts), env')
          | phi d y ts [] (t' :: ts') env = d
          | phi d y ts (s :: ss) [] env   = d
          | phi d y ts (s :: ss) (t :: ts') env
	      = case eval s env t of
 		  Fail(_, _) => d
                | Success(t', env') => phi d y (t' :: ts) ss ts' env'
    in case tout(t) of 
	  TOp(y, ts) => if not(x = y) then Fail(t, env) 
		        else phi (Fail(t, env)) y [] ss ts env
        | _ => Fail(t, env)
    end

(* Push and pop *)

fun push [] env = env
  | push (x :: xs) env = (x, Term.TVar'(x)) :: push xs env;

fun pop [] ys               = ys
  | pop (x :: xs) (y :: ys) = pop xs ys
  | pop xs []		    = (TextIO.print("Warning: stack underflow " ^ 
				 pp_comma_sep "[" "]" xs ^ "\n");
			      []);

(* Strategy evaluation *)

fun eval_strat cp s env t
  = case sout(s) of 
      SRule(r)
	=> apply_rule (eval_strat cp) r env t
    | Match(t')
	=> (case match_term env t' t of
	     NONE       => Fail(t, env)
	   | SOME(env') => Success(t, env'))
    | Build(t') 
	=> Success(term_subst(id)(env)(t'), env)
    | Var "copy"
	=> Success(cp t, env)
    | Var(x)
	=> congruence (eval_strat cp) x [] env t
    | Prim(x)
	=> primitive x t env
    | Label(x, ss)
	=> congruence (eval_strat cp) x ss env t

    | Id
	=> Success(t, env)
    | Fails 
	=> Fail(t, env)
    | Where(s')
	=> (case eval_strat cp s' env t of
	      Fail(t', env')    => Fail(t, env)
	    | Success(t', env') => Success(t, env'))
    | Test(s')
	=> (case eval_strat cp s' env t of
	      Fail(t', env')    => Fail(t, env)
	    | Success(t', env') => Success(t, env))
    | Neg(s')
	=> (case eval_strat cp s' env t of
	      Success(t', env') => Fail(t', env')
	    | Fail(t', env') => Success(t', env'))
    | Seq(s1, s2)    
	=> (case eval_strat cp s1 env t of
	      Fail(t', env') => Fail(t', env')
	    | Success(t', env') 
		=> (case eval_strat cp s2 env' t' of
		      Fail(t'', env'') => Fail(t, env)
		    | Success(t'', env'') => Success(t'', env'')))
    | Choice(s1, s2) 
	=> choose(eval_strat cp s1 env t, eval_strat cp s2 env, t)
    | LChoice(s1, s2) 
	=> choose(eval_strat cp s1 env t, eval_strat cp s2 env, t)
    | Rec(x, s')
	=> eval_strat cp (unfold s) env t
    | All(s)
	=> push_down (eval_strat cp s) band env t
    | Some(s)
	=> push_down (eval_strat cp s) bor env t
    | Path(i, s)
        => push_down_at i (eval_strat cp s) env t
    | Scope(xs, s)
        => (case eval_strat cp s (push xs env) t of
	      Success(t', env') => Success(t', pop xs env')
	    | Fail(t', env')    => Fail(t, env))
 
    | s
	=> (TextIO.print("Strategy not supported:\n" ^ 
			 pp_strat(SIn(s)) ^ "\n"); 
	    Fail(t, env))

;

end (* local *)
end (* StrategyEval *)