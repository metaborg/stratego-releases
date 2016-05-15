module test
imports stratlib lib normalize-spec

strategies

  main = iowrap(vars-to-consts)
