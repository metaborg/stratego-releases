module disjnf
imports lib prop-simplify
strategies

  main = stdio(eval; desugar; disj-nf)
