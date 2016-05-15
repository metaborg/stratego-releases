module innermost
signature
  sorts Nat
  constructors
    Zero : Nat
    Succ : Nat -> Nat
    Plus : Nat * Nat -> Nat
rules

  A : Plus(Zero, x) -> x

  B : Plus(Succ(x), y) -> Succ(Plus(x, y))

strategies

  bottomup(s) =
    rec x(all(x); s)

  innermost(s) = 
    bottomup(red(s))

  innermost-with-assertion(s) = 
    bottomup(red(test(all(nf(s))); s))

  red(s) = 
    rec x(s; bottomup(x) <+ id)

  nf(s) = 
    bottomup(not(s))

strategies

  main = innermost(A + B)