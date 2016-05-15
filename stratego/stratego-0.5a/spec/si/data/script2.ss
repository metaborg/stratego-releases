#!/bin/sh stratego

stratego script

:load "lib.sim"

> !F(F(A())); echo

strategies
  A = {x: ?F(x); !G(x)} 

> A; echo
> ?t; echo
> !Pair(t, "a", 1, 1.2); echo
> ?Pair(_, a, 1, _); echo


