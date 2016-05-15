(* Defined Strategies

Given the functionality above we can define functions that build
complex strategies given some strategy. The following functions
generate common strategies. For instance, |star(s)| iterates |s| zero
or more times, but as long as possible. *)

structure DefinedStrategies = struct

open Strategies 

fun star(s) 
  = let val v = get_fresh("x", s) in 
	Rec'(v, LChoice'(Seq'(s, Var'(v)), Id'))
    end;

fun plus(s) = Seq'(s, star(s));

(* The conjunctive and disjunctive instantiations of push-down. *)

fun bu(s) 
  = let val v = get_fresh("x", s) in
	Rec'(v, Seq'(All'(Var'(v)), s))
    end;

fun td(s) 
  = let val v = get_fresh("x", s) in
	Rec'(v, Seq'(s, All'(Var'(v))))
    end;

fun once(s) 
  = bu(LChoice'(s, Id'));

fun oncetd(s) 
  = let val v = get_fresh("x", s) in
	Rec'(v, (LChoice'(s, One'(Var'(v)))))
    end;

fun oncebu(s) 
  = let val v = get_fresh("x", s) in
	Rec'(v, (LChoice'(Seq'(Some'(Var'(v)), LChoice'(s, Id')), s)))
    end;

fun reduce(s) 
  = let val v = get_fresh("x", s) in
	star(Rec'(v, Choice'(Some'(Var'(v)), s)))
    end;

fun innermost(s) 
  = let val v = get_fresh("x", s) in
	star(Rec'(v, LChoice'(Some'(Var'(v)), s)))
    end;

fun outermost(s) 
  = let val v = get_fresh("x", s) in
	star(Rec'(v, LChoice'(s, Some'(Var'(v)))))
    end;

fun innermost_eff(s) 
  = let val v = get_fresh("x", s) in
	Rec'(v, Seq'(All'(Var'(v)), LChoice'(Seq'(s, Var'(v)),Id')))
    end;

end