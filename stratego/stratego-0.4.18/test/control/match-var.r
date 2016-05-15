module match-var
strategies

  main = f; g

  f = ?x; !(x,x)

  g = \ y -> x where <f> y => x \