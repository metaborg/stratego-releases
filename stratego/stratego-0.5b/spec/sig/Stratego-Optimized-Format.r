\literate[{\btt Stratego-Optimized-Format}]

\begin{code}
module Stratego-Optimized-Format
imports stratego automaton lib
strategies

  main = iowrap(stratego-specification)

  stratego-specification =
    list(strategy-definition)
    <+ debug(!"Not a strategy-specification: ")

  strategy-definition =
    SDef(is-string, [], strategy-expression)
    + SDef(list(DontInline), is-string, [], strategy-expression)
    <+ debug(!"Not a strategy-definition: ")

  strategy-expression =
  rec exp(
	Id
	+ Fail
	+ Not(exp)
	+ Test(exp)
	+ Seq(exp, exp)
	+ Choice(exp, exp)
	+ LChoice(exp, exp)
	+ Call(SVar(is-string),[])
	+ Rec(is-string, exp)
	+ Path(is-int, exp)
	+ Cong(is-string, list(exp))
	+ One(exp)
	+ Some(exp)
	+ All(exp)
	+ Thread(exp)
	// + Match(term-expression)
	+ Build(term-expression)
	+ Scope(list(is-string + list(is-int)), exp)
	+ Where(exp)
	+ Prim(is-string)

	+ Let(list(SDef(is-string,[],exp)
                   + SDef(list(id), is-string,[],exp))
             , exp)

	+ Case(is-string, Var(id), list(Alt(id,id,exp)), exp)
	+ Continue(is-string)

	+ Assign(Var(id),term-expression)
	+ Assign(Var(id))

	<+ debug(!"Not a strategy-expression: ")
	)

  term-expression =
  rec trm(
	Wld 
	+ Var(is-string)
	+ Int(is-int)
	+ Real(is-real)
	+ Str(is-string)
	+ Op(is-string, list(trm))
	+ BuildDefault(trm)
	<+ debug(!"Not a term-expression: ")
	)
\end{code}
