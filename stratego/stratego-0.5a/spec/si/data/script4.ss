#!/bin/sh stratego

stratego script

:load "lib.sim"

imports ins-selection

:source "other-script.ss"

> <selection> MOVE(REG("b"), ....) => OPER(....)

> !F(F(A()))

strategies
  A = {x: ?F(x); !x}

> A 

:dump "bla.sim" 

rules
  A : F(x) -> x

> A

:load "bla.sim"