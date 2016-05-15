module fib
imports lib

signature
  constructors
    Fib  : Int -> Int
    Plus : Int * Int -> Int

strategies

  main = iowrap(fib)

  fib = innermost(Fib1 + Fib2 + Fib3 + Fib4)

rules

  Fib1 : Fib(0) -> 1

  Fib2 : Fib(1) -> 1

  Fib3 : Fib(n) -> Plus(Fib(<subt>(n,1)), Fib(<subt>(n,2)))
	where <gt> (n, 1)

  Fib4 : Plus(i, j) -> <add>(i,j)
