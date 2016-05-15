module bla
imports lib

rules

  Bla : S(s) -> s
  Bla : R(r) -> r

strategies

  main = stdio(Main)

  Main = debug; Bla; debug