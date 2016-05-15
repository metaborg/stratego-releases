module unification-test
imports sunit unification
strategies

  main =
    test-suite(!"unification-test",
	test0;
	test1
    )

signature
  constructors
    Typed  : Exp * Type -> Exp
    Var    : String -> Exp
    Forall : String * Type -> Type
    TVar   : String -> Type

strategies

  test0 = 
    apply-test(!"test0"
	,equal
	,![(Typed(Var("a"),Forall("b",TVar("b")))
           ,Typed(Var("a"),Forall("b",TVar("b"))))]
	,![]
	)

  test1 = 
    apply-test(!"test1"
	,equal( \ Typed(x,y) -> x \ )
	,![(Typed(Var("a"),Forall("b",TVar("b")))
	   ,Typed(Var("a"),Forall("c",TVar("c"))))]
	,![]
	)