#!/bin/sh stratego

stratego script
:load "lib.sim"

rules

  S0 : Add(e, Int("0")) -> e
  S1 : Mul(e, Int("0")) -> Int("0")
  S2 : Mul(e, Int("1")) -> e

  Comm1 : Mul(e1, e2) -> Mul(e2, e1)
  Comm2 : Add(e1, e2) -> Add(e2, e1)

> !Add(Var("x"),Int("0"))
> S0

> !Mul(Var("x"),Int("0"))
> S0 + S1

> !Mul(Int("0"),Var("x"))
> (S0 + S1) <+ id

strategies

  try(s) = s <+ id

> Comm1
> (S0 + S1)

strategies

  simplify = (S0 + S1 + S2) <+ (Comm1 + Comm2); (S0 + S1 + S2)

> !Mul(Int("0"),Var("x"))
> simplify

> !Mul(Int("1"),Add(Var("x"),Int("0")))
> simplify

> fail <+ id

strategies

  repeat(s) = rec x(s; x <+ id)

> !Mul(Int("1"),Add(Var("x"),Int("0")))
> repeat(simplify)

> open(!"../xmpl/test0.trm")

strategies

  topdown(s) = rec x(debug(!"topdown:  "); s; all(x))

> topdown(repeat(debug(!"simplify: "); 
          simplify))

> open(!"../xmpl/test0.trm")
> oncetd(simplify)

> open(!"../xmpl/test0.trm")
> oncebu(simplify)

strategies

  S0 = {e: ?Add(e, Int("0")); !e}

  S0 = ?Add(e, Int("0")); !e
