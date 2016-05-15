module StratLibTest
imports stratlib lib

strategies

  main = stdio([test1, test2, test3, test4])

  test1 = svars-arity

  test2 = svars

  test3 = srename

  test4 = tvars