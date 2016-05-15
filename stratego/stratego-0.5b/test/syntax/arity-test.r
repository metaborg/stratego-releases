module arity-test.r
imports lib
signature
  sorts Term
  constructors

    Zero: Term    
    Six: Term * Term * Term * Term * Term * Term  -> Term
    Seven: Term * Term * Term * Term * Term * Term * Term -> Term
    Eight: Term * Term * Term * Term * Term * Term * Term * Term -> Term

rules

  r6: [6] -> Six(Zero, Zero, Zero, Zero, Zero, Zero)

  r7: [7] -> Seven(Zero, Zero, Zero, Zero, Zero, Zero, Zero)

  r8: [8] -> Eight(Zero, Zero, Zero, Zero, Zero, Zero, Zero, Zero) 

strategies

  main = iowrap(r6 + r7 + r8)
