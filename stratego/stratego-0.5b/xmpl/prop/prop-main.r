module prop-main
imports prop-simplify lib
strategies

  main     = stdio(desugar; disj-nf)

  simplify = stdio(eval; desugar)
