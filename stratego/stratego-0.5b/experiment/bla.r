module bla

strategies

  map(s) = rec x(Nil + Cons(s, x))

  try(s) = s <+ id

  choice(s1, s2) = s1 <+ s2

rules

  A : F(x) -> x
  B : G(x) -> x

strategies

  main = map(try(A)); map(choice(A, B))

  main = let f = try(A) 
             g = choice(A, B)
          in
             map(f); map(g)