\literate[{\btt Stratego-Normal-Format}]

\begin{code}
module Stratego-Normal-Format
imports stratego lib
strategies

  main = iowrap(stratego-specification)

  stratego-specification =
    list(strategy-definition)

  strategy-definition =
    SDef(is-string, [], strategy-expression)

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
	+ Match(term-expression)
	+ Build(term-expression)
	+ Scope(list(is-string), exp)
	+ Where(exp)
	+ Prim(is-string)
	<+ debug(!"not a strategy-expression: ")
	)

  term-expression =
  rec trm(
	Wld 
	+ Var(is-string)
	+ Int(is-int)
	+ Real(is-real)
	+ Str(is-string)
	+ BuildDefault(trm)
	+ As(Var(is-string), trm)
	+ Op(is-string, list(trm))
	<+ debug(!"not a term-expression: ")
	)
\end{code}