module stratlib-test
imports stratlib sunit

strategies

  main = 
  test-suite(!"stratlib-test",
	tvars-test1;
	tvars-test2;
	tsubstitute-test1;
	srename-test1
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

  srename-test1 =
  apply-test(!"srename-test1"
        , strename
	, !SDef("downup",["s1","s2"],Rec("x",Seq(Call(SVar("s1"),[]),Seq(All(Call(SVar("x"),[])),Call(SVar("s2"),[])))))
	, !SDef("downup",["a_0","b_0"],Rec("c_0",Seq(Call(SVar("a_0"),[]),Seq(All(Call(SVar("c_0"),[])),Call(SVar("b_0"),[])))))
	)