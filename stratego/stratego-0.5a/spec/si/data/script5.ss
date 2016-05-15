#!/bin/sh stratego

stratego script

imports io

> !F(F(A()))
> echo

strategies
  A = {x: ?F(x); !x}

> A 
> echo

:dump "bla.sim"

rules
  A : F(x) -> x

> A
> echo
