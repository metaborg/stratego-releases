#!/bin/sh stratego

stratego script
:load "sunit.sim"
:load "lift-expr.sim"

strategies

  test1 = 
    apply-test(!"test1"
	, LiftBlock
	, !Block([VarDecl("x")], 
		 [Exp(Assign(Var("x"),Int("0"))),
                  Block([VarDecl("y")],
                        [Exp(Assign(Var("y"), Add(Var("x"), Int("3"))))])])
        , !Block([VarDecl("x"),VarDecl("y")],
                 [Exp(Assign(Var("x"),Int("0"))),
                  Exp(Assign(Var("y"),Add(Var("x"),Int("3"))))])
	)

  test2 = 
    apply-and-check(!"test2"
	, simplify-assignment'
	, !Exp(Assign(Var("x"),Add(Add(Var("x"), Int("10")), Int("0"))))
        , ?Block([VarDecl(i_38)],
                 [Exp(Assign(Var(i_38),Add(Var("x"),Int("10")))),
                  Exp(Assign(Var("x"),Add(Var(i_38),Int("0"))))])
	)

> test-suite(!"lift-expr-test",
	test1;
	test2
  )

