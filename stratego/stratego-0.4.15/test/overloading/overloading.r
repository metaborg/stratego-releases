module overloading
imports lib
signature
  constructors
    A   : a
    B   : a
    C   : a
    D   : a
    F   : a -> a
    G   : a * a -> a

strategies

  main = stdio([f(RA); RD, f(RA, RB); RC])

  f(s) = F(s)

  f(s1, s2) = G(s1, s2)

rules

  RA   : A -> B

  RB   : B -> C

  RC   : G(x[B], y) -> G(x[D], y)

  RD   : F(x[B]) -> F(x[D](oncebu))