\literate[matching-tree]

% Copyright (C) 1998, 1999, 2000 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.



\begin{code}
module matching-tree
imports strategy stratlib optimization instructions fixpoint-traversal
        automaton lib
signature
  constructors
    Case : List(Strat) * Strat -> Strat
    PreCase : Strat * Strat -> Strat
    Double : a * a -> a
\end{code}

	Join branches of a choice that start with a variable match.
	Make the single joined branch starting with a variable match
	the first branch in the choice.

\begin{code}
strategies

  MatchVarPrefix'(s) =
 	rec x(Seq(Match(Var(id)), x) <+ (Ass + I); x <+
              {s': ?s'; !Choice(s', <s>())})

  MatchVarPrefix(s) =
 	rec x(Seq(Match(Var(id)), x) <+ (Ass + I); x <+
              {s': ?s'; s; MatchVarPrefix'(!s')})

  ChoiceMerge' = ChoiceMerge1 + ChoiceMerge2 + ChoiceMerge3

 (* Note: better if this can be + *)

rules

  ChoiceMerge1 : 
        Choice(Seq(Match(Var(x)), s1), cs) ->
        Choice(Seq(Match(Var(x)), Seq(Match(Var(y)), s1')), cs')
        where <conChoice(?Seq(Match(Var(y)), s2); !Fail)> cs => cs';
	      <MatchVarPrefix(!s2)> s1 => s1'

  ChoiceMerge2 : 
        Choice(Seq(Match(Var(x)), s1), cs) ->
        Choice(Seq(Match(Var(x)), s1'), cs')
        where <conChoice(?Seq(Match(Wld), s2); !Fail)> cs => cs';
	      <MatchVarPrefix(!s2)> s1 => s1'

  ChoiceMerge3 : 
        Choice(Seq(Match(t), s2), cs) ->
        Choice(Seq(Match(Var(x)), s1), cs')
        where not(!t => Var(_));
	      <conChoice(?Seq(Match(Var(x)), s1); !Seq(Match(t), s2))> cs => cs'
\end{code}

	\paragraph{PreCase Introduction}

	Assuming that the branches of the choice have been merged as
	described above, the choice is turned into a precase. The
	first branch of the precase deals with the cases where the
	first match is to a non-variable term. If the outermost
	function symbol of the subject term matches any of the
	outermost function symbols of the branches, one of these
	branches will be taken. The second branch of the precase deals
	with those subject terms that have an outermost function
	symbol that matches non of the patterns.

\begin{code}
rules

  AddVarPart(bld_s) :
	Seq(Match(t), s) -> Seq(Match(t), Choice(s, <bld_s> ()))

  AddVarPart'(bld_s) :
	x -> (x, <bld_s> ())

  SepVars :
	Choice(Seq(Match(Var(x)), s), cs) ->
        Seq(Match(Var(x)), Seq(s1, PreCase(cs', s2)))
        where <rec x(Seq(Match(Var(id)), x) <+ (Ass + I); x 
		     <+ <<s2 -> Id>>)> s => s1;
              <rec x(AddVarPart(!s2) <+ 
                     Choice(x, x) <+ 
                     AddVarPart'(!s2))> cs => cs'

  SepVars : 
	Seq(Match(Var(x)), s) -> Seq(Match(Var(x)), s)

  SepVars' : cs -> PreCase(cs, Fail)

  PreCaseSimp : PreCase(PreCase(cs, s), s') -> PreCase(cs, LChoice(s, s'))

  PreCaseSimp : PreCase(Seq(s1, s2), Fail) -> Seq(s1, s2)

  (* PreCaseSimp : PreCase(Id, s) -> Fail *)

  Duplicate(s) : x -> Double(x, <s> x)

\end{code}

	\paragraph{Definining Operator Matching}

	Breaking up a match of an application into a match of the
	function symbol and the argument terms. Stack operations are
	used to traverse the subject term.

\begin{code}
rules

  MatchOp : 
	Match(Op(f, ts)) -> 
        Seq(MatchFun(f, <length> ts), <rec x(MatchOpAux(x))> (ts, 0))

  MatchOp : 
	AnnMatch(t1, t2) ->
	Seq(Tpush, Seq(Build(t1), Seq(GetAnn, Seq(Match(t2), Tpop))))

  MatchOpAux(x) : 
	(Nil, n) -> Id
  MatchOpAux(x) : 
	(Cons(t, ts), n) -> 
        Seq(Arg(n), Seq(Match(t), Seq(Tpop, <x> (ts, <plus> (n, 1)))))
\end{code}

	\paragraph{PreCase to Case}

	A precase has a choice as first branch. This is converted to a
	list of branches in a Case. A Case strategy chooses one of the
	branches in the first argument based on the first action in
	those branches. This first choice is binding, i.e., after a
	branch is chosen, no backtracking to other branches is done.

\begin{code}
rules
  
  MkCaseA : x -> [x]
	    (* where !x; Seq(MatchFun(id) + Match(Int(id) + Str(id)), id) *)

  MkCaseB(x) : Choice(s1, s2) -> <conc> (<x> s1, <x> s2)

  MkCase : PreCase(s1, s2) -> Case(cases, s2)
 	   where <rec x(MkCaseB(x) <+ MkCaseA)> s1 => cases
\end{code}

	\paragraph{One Level}

\begin{code}
strategies
 
  is-case = Choice(rec x(Seq(Match(id), id) + Choice(x, x)),
	           rec x(Seq(Match(id), id) + Choice(x, x)))

  match-tree1 =
	is-case;
	repeat(ChoiceMerge');
	(* topdown(repeat(ChoiceMerge' + F)); *)
	(* downup(repeat(ChoiceMerge' + F + Ass + I)); *)
	(* try choicetd or other choice specific traversal *)
	(* choicebu-l(repeat(ChoiceMerge' + F)); *)
	(* downup(repeat(ChoiceMerge'; pseudo-innermost3(simplify))); *)
	pseudo-innermost3(simplify);
	(SepVars <+ Choice(id, id); SepVars');
	rec z(try(Seq(id, z) <+ PreCase(z, id) <+ Id <+ Fail <+
              choicemap(Seq(MatchOp + 
                            Match(Wld + Var(id) + Int(id) + 
				  Real(id) + Str(id)), id))))

  match-tree' = 
	repeat(oncetd(match-tree1);
               innermost(simplify + PreCaseSimp));
	topdown(try(MkCase))

  match-tree' = 
        topdown(try(match-tree1;
                    innermost(simplify + PreCaseSimp)));
	topdown(try(MkCase))

  match-tree' = 
        topdown(try(match-tree1;
                    pseudo-innermost3(simplify + PreCaseSimp)));
	topdown(try(MkCase))

  match-tree' = 
	alltd(match-tree1)

  match-tree = mk-automaton
\end{code}

	\paragraph{All Levels}

\begin{code}
rules

  LiftScope : Choice(Scope(xs, s1), Scope(ys, s2)) ->
	      Scope(<conc> (xs, ys), Choice(s1, s2))

  IntroContinuation :
	Seq(Match(t), s) -> 
        Let(SDef(x, [], s), Pat(t, Call(SVar(x), [])))
        where new => x

  LiftLet : Choice(Let(sdef, s), s') -> Let(sdef, Choice(s, s'))
  LiftLet : Choice(s', Let(sdef, s)) -> Let(sdef, Choice(s', s))

	(* assuming sdef does not affect s' *)

  JoinVars :
        Scope(xs, s[Seq(Match(Var(x)), Seq(Match(Var(y)), s'))]) ->
 	Scope(<diff> (xs, [y]), 
              <tsubs> ([y], [Var(x)], s[Seq(Match(Var(x)), s')]))

rules

  MakeLinear' : 
	Scope(xs, Seq(Match(t[Cons(t'[Var(x)],ts'[Var(x)])], s))) -> 
	Scope(Cons(y, xs), 
              Seq(Match(t[Cons(t',ts'[Var(y)])]), 
              Seq(Build(Var(y)), Seq(Match(Var(x)), s))))
        where new => y

  MakeLinear : 
    Scope(xs, Seq(Match(t), s)) -> 
    Scope(<conc> (xs, ys), Seq(Match(t'), Seq(ts, s)))
    where <rec x((V1 + V2) <+ thread(x))> Pair(t, ([], [], Id)) 
                                       => Pair(t', (xs, ys, ts))

  V1 : Pair(Var(x), (xs, ys, ts)) -> 
       Pair(Var(x), (Cons(x, xs), ys, ts))
       where <not(in)> (x, xs)

  V2 : Pair(Var(x), (xs, ys, ts)) -> 
       Pair(Var(x), (xs, Cons(y, ys), 
                     Seq(Build(Var(x)), Seq(Match(Var(y)), ts))))
       where <in> (x, xs); new => y

  mk-aut : Match(t) -> <pat-to-aut> Pat(t, Id)
\end{code}

\begin{code}
strategies

  is-scoped-case =
	Choice(rec x(Scope(id, Seq(Match(id), id)) + Choice(x, x)),
	       rec x(Scope(id, Seq(Match(id), id)) + Choice(x, x)))

  lift-scopes =
	choicebu(LiftScope)

  lift-continuations = 
	choicemap(IntroContinuation);
        rec x(bottomup(try(LiftLet; all(x))))

  make-linear =
	choicemap(MakeLinear)

  mk-match-tree' = 
	is-scoped-case;
	make-linear;
	lift-scopes;
	Scope(id, lift-continuations;
		  rec x(Let(id, x) <+ match-tree));
	repeat(JoinVars);
	id

  mk-match-tree = 
	is-scoped-case;
	make-linear;
	lift-scopes;
	Scope(id, lift-continuations;
		  rec x(Let(id, x) <+ match-tree))

  main' = topdown(try(mk-match-tree <+ MatchOp))

  main = iowrap(topdown(try(mk-match-tree <+ mk-aut)))

  main' = 
	is-case;
	repeat(ChoiceMerge')
\end{code}


