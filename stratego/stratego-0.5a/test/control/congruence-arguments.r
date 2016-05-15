module congruence-arguments
imports lib
signature
  constructors
    If : a * b -> b

strategies

  main = stdio(If(id, id))

