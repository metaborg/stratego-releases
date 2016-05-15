module congruence-thread
imports sunit
signature
  constructors
    If   : Exp * Exp * Exp -> Exp
    Id   : Exp
    Cons : a * List(a) -> List(a)
    Nil  : List(a)
    Pair : a * b -> Pair(a,b)
    Zero : Nat
    Succ : Nat -> Nat

rules

  add-one : Pair(Id,x) -> Pair(Id,Succ(x))

strategies

  congruence-dist-test = 
    apply-test(!"congruence-dist-test"
	      ,If^D(id,id,id)
	      ,!Pair(If(Id,Id,Id),[]) 
	      ,!If(Pair(Id,[]),Pair(Id,[]),Pair(Id,[]))
	      )

  congruence-thread-test = 
    apply-test(!"congruence-thread-test"
	      ,If^T(add-one,add-one,add-one)
	      ,!Pair(If(Id,Id,Id),Zero)
	      ,!Pair(If(Id,Id,Id),Succ(Succ(Succ(Zero))))
	      )

  main = 
    test-suite(!"congruence-env-test",
	congruence-dist-test;
	congruence-thread-test
    )