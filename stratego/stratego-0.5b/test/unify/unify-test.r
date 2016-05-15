module unify-test
imports lib

signature
  constructors
    Var : String -> Exp

strategies

  main = stdio(unify(Var(id)))
