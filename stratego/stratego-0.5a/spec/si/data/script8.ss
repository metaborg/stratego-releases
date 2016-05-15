#!/bin/sh stratego

stratego script
:load "lib.sim"
:load "basic-module.sim"
imports my-module

> <my-strat> term1 => term1'

> echo
> parse-options(io-options)
> echo
> open(!"abc.trm")
> B
> echo(!"after first reduction: ")
> A <+ echo(!"A does not apply here: ")
> Succ(A)
> echo
> save(!"def.trm")