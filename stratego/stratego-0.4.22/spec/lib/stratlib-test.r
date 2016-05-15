module stratlib-test
imports stratlib sunit

strategies

  main = 
  test-suite(!"stratlib-test",
	tvars-test1;
	tvars-test2;
	tsubstitute-test1
  )

  tvars-test1 =
	apply-test(!"tvars-test1", tvars, !Int(1), ![])

  tvars-test2 =
	apply-test(!"tvars-test2", tvars, !Real(1.1), ![])

  tsubstitute-test1 =
	apply-test(!"tsubstitute-test1"
                  ,tsubstitute
                  ,!([("x",Var("a")),("y",Op("Add",[Var("y"),Var("z")]))],
                     Op("BinExp",[Var("x"),Str("*"),Var("y")]))
                  ,! Op("BinExp",[Var("a"),Str("*"),Op("Add",[Var("y"),Var("z")])])
                  )