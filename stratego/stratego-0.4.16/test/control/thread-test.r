module thread-test
imports lib

signature
  constructors
    a    : Bla
    s    : Bla -> Bla
    Pair : a * b -> Pair(a, b)
    Ann  : Int * a -> a

strategies

  main = stdio(test1)

  test1 = split(simple-test, split(preorder-number, postorder-number))

  simple-test = 
    \ t -> Pair(t, 0) \; 
    thread(\ Pair(x,y) -> Pair(x, <add>(y,1)) \ )

  preorder-number = 
    \ t -> Pair(t, 0) \ ; 
    rec x(\ Pair(t, n) -> Ann(n, <thread(x)> Pair(t, <add>(n,1))) \;
	  SwapAnn)

  postorder-number = 
    \ t -> Pair(t, 0) \ ; 
    rec x(thread(x); Annotate)

rules

  SwapAnn : Ann(n, Pair(t, n')) -> Pair(Ann(n, t), n')

  Annotate : Pair(t, n) -> Pair(Ann(n, t), <add>(n,1))