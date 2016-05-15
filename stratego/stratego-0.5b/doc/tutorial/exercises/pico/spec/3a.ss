#!/bin/sh stratego

stratego script
:load "lib.sim"

rules

// X only apply when argument is non-simple
// X fresh variable name
// X generic: apply to all operators
// X apply to all subterms and recursively
// X compose assignments, declare new variable

rules

  A : Exp(Assign(Var(x), Add(e1, e2))) -> 
      Block([VarDecl(a)], 
            [Exp(Assign(Var(a), e2))
            ,Exp(Assign(Var(x), Add(e1, Var(a))))])
      where <complex> e2;  new => a

  B : Exp(Assign(Var(x), Add(e1, e2))) -> 
      Block([VarDecl(a)], 
            [Exp(Assign(Var(a), e1))
            ,Exp(Assign(Var(x), Add(Var(a), e2)))])
      where <complex> e1;  new => a

strategies

  complex = not(simple)
            
  simple = ?Var(_) + ?Int(_)

  operator = "Add" + "Mul" + "Sub"

//> open(!"../xmpl/3a.s.trm")
//> try(oncetd(A))

//> open(!"../xmpl/3a.s.trm")
//> try(oncetd(B + A))
//> save(!"../xmpl/3a.s.3.trm")

rules

  C : Exp(Assign(Var(x), c#([e1, e2]))) -> 
      Block([VarDecl(a)], 
            [Exp(Assign(Var(a), e1))
            ,Exp(Assign(Var(x), c#([Var(a), e2])))])
      where <complex> e1;  <operator> c; new => a

  D : Exp(Assign(Var(x), c#([e1, e2]))) -> 
      Block([VarDecl(a)], 
            [Exp(Assign(Var(a), e2))
            ,Exp(Assign(Var(x), c#([e1, Var(a)])))])
      where <complex> e2; <operator> c; new => a

//> open(!"../xmpl/3a.s.trm")
//> oncetd(C + D)
//> save(!"../xmpl/3a.s.3.trm")

//> open(!"../xmpl/3a.s.trm")
//> repeat(oncebu(C + D))
//> save(!"../xmpl/3a.s.3.trm")

//> open(!"../xmpl/3a.s.trm")
//> topdown(repeat(C + D))
//> save(!"../xmpl/3a.s.3.1.trm")

//> open(!"../xmpl/3a.s.trm")
//> bottomup(repeat(C + D))
//> save(!"../xmpl/3a.s.3.2.trm")

rules

  LiftFromOperator : 
    Exp(Assign(Var(x), op#(es))) ->
    Block(vdecs, <conc>(ss, [Exp(Assign(Var(x), op#(es')))]))
    where <operator> op;
          <lift-arguments> es => (vdecs, ss, es'); 
          not(([],id,id))

  LiftArgFromCall : 
    Exp(Assign(Var(x), Call(f, es))) ->
    Block(vdecs, <conc>(ss, [Exp(Assign(Var(x), Call(f,es')))]))
    where <lift-arguments> es => (vdecs, ss, es'); 
          not(([],id,id))

  LiftComplex :
    e -> ([VarDecl(a)], [Exp(Assign(Var(a), e))], Var(a))
    where <complex> e; new => a

  LiftSimple :
    e -> ([], [], e)
    where <simple> e

  LiftBlock :
    Block(decs1, ss1) -> Block(<conc>(decs1, decs2), ss4)
    where <at-suffix(?[Block(decs2, ss2) | ss3]; 
                     <conc>(ss2, ss3))> ss1 => ss4

strategies

  lift-arguments =
    map(LiftComplex + LiftSimple); 
    tuple-unzip(id); 
    (concat, concat, id)

  argument-simplification =
    alltd(
      simplify-assignment
    )

  simplify-assignment =
  { exp :
      ?Exp(Assign(Var(_),_)); ?exp;
      topdown(repeat(LiftFromOperator + LiftArgFromCall));
      topdown(repeat(LiftBlock));
      \ s -> Comment("original expression: ", exp, s) \
  }

//> <tuple-unzip(id)> [("a", "b", "c"), ("d", "e", "f")]

//> <map(LiftComplex + LiftSimple)> 
//	[Var("x"), Int("1"), Add(Var("x"), Int("1"))]

//> tuple-unzip(id)
//> (concat, concat, id)

//> save(!../xmpl/"3a.s.3.trm")


> open(!"../xmpl/3a.s.trm")
> argument-simplification
> save(!"../xmpl/3a.s.3.e.trm")
