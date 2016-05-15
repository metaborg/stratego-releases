module test4
imports exec io
signature
  sorts A
  constructors
    A : A
    B : A
    C : A
    D : A

    F : A -> A

    G : A * A -> A
    F : A * A -> A
    H : A * A -> A

rules

  R1 : F(x, G(A,y)) -> H(a, z) where !A => a; !G(x,y) => z

  R2 : F(B, G(x,A)) -> F(x)

  R3 : F(x, G(x,A)) -> G(F(x),A)

  R4 : G(1, "a") -> H(2, "b")

strategies

  main = R1