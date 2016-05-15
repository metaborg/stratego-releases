module iowrap-test
imports lib

strategies

  main = iowrap(RA)

rules

  RA   : A() -> B()
