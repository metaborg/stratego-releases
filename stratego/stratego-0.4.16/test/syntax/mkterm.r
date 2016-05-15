module mkterm
imports lib

rules

  A : f#( xs ) -> f#(xs)

  B : f#(xs) -> "b"#(xs)

  C : "b"#(xs) -> "c"#(xs)

  D : f#(xs) -> [f | xs]

strategies

  main = stdio(debug; A; debug; B; debug; C; debug; id#([id|id]); debug; D)
