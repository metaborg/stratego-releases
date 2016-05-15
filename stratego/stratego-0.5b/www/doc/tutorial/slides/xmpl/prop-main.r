module prop-main
imports prop-simplify simple-traversal lib
strategies

 main = stdio(desugar; disj-nf)

 simplify = stdio(eval; desugar)