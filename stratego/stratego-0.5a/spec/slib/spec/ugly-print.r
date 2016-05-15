\literate[{\btt UGLY-PRINT}]

\begin{code}
module ugly-print
imports abox-ext
strategies

  ugly-print = 
  rec x(try(
	UP-Int 
	<+ UP-Str
	<+ UP-Cnst	
	<+ UP-Lst(x) 
	<+ UP-App(x)
  ))

rules

  UP-Cnst : 
    f#([]) -> S(f)

  UP-App(s) : 
    f#(xs) -> H0([S(f), Parens(V0(<map(s); post-commas> xs))])

  UP-Str :
    x -> <Quote> S(x) where <is-string> x

  UP-Int :
    x -> S(<int-to-string> x) where <is-int> x

  UP-Lst(s) :
    [] -> S("[]")

  UP-Lst(s) :
    l @ [x | xs] -> H0([S("["), V0(<map(s); post-commas> l), S("]")])
\end{code}