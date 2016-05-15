module test2
imports io

signature
  constructors
    A : S
    B : S
    C : S
    D : S
    F : S * S -> S
    G : S * S -> S

strategies

  main = 
    <g> F(A,B);
    <g> F(A,C);
    <g> F(B,C)

  g = debug; f; debug

  f = {x: ?F(A,x); !A} + {y: ?F(y,B); !B}