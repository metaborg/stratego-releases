module test3
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

  R1 : F(x, G(A,y)) -> H(y, x)

  R2 : F(B, G(x,A)) -> F(x)

  R3 : F(x, G(x,A)) -> G(F(x),A)

  R4 : G(1, "a") -> H(2, "b")

strategies

  main = 
    <Main> F(B, G(A,C));
    <Main> F(B, G(C,A));
    <Main> F(D, G(D,A));
    <Main> G(1, "a")

  Main = debug; (R1 + R2 + R3 + R4); debug