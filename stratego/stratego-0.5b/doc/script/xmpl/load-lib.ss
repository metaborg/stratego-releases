#!/bin/sh stratego
stratego script
:load "lib.sim"
imports script6
> open(!"abc.trm")
> B
> echo(!"after first reduction: ")
> A <+ echo(!"A does not apply here: ")
> Succ(A)
> echo
> save(!"def.trm")