module test7
imports lib

signature
  constructors
    A : S
    B : S
    C : S
    F : S * S -> S
    H : S * S * S -> S
    G : S * S -> S

rules

  R1 : F(x, y @ G(A, z)) -> H(x, y, z)
 
  R2 : F(x, G(y, B)) -> H(x, y, B)

strategies

  main = 
    a; debug; transform; debug; b; eq; debug
   
  transform = R1 + R2

  a = !F(B,G(C,B))
           
  b = split(id, !H(B, C, B))