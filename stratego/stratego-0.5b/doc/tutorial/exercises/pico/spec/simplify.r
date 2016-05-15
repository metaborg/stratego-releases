module simplify
imports pico lib
rules

  S0 : Add(e, Int("0")) -> e
  S1 : Mul(e, Int("0")) -> Int("0")
  S2 : Mul(e, Int("1")) -> e

  Comm1 : Mul(e1, e2) -> Mul(e2, e1)
  Comm2 : Add(e1, e2) -> Add(e2, e1)

strategies

  simplify = (S0 + S1 + S2) <+ (Comm1 + Comm2); (S0 + S1 + S2)

  main = iowrap(topdown(repeat(simplify)))