\literate[Distribution]

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
module distribution
imports strategy
imports stratlib
\end{code}

	\paragraph{Choice and Sequential Compostion}

	The following rules are the usual formulations for distributivity.

\begin{code}
rules

  D : Seq(x, Choice(y, z))  -> Choice(Seq(x, y), Seq(x, z))
  D : Seq(x, LChoice(y, z)) -> LChoice(Seq(x, y), Seq(x, z))
  
  D : LChoice(Choice(x, y), z) -> Choice(LChoice(x, LChoice(y, z)), 
				         LChoice(y, LChoice(x, z))) 

  D : LChoice(x, Choice(y, z)) -> Choice(LChoice(x, y), LChoice(x, z))
\end{code}

	The corresponding right-distributivity laws are not sound with respect
   	to the semantics.
\begin{verbatim}
  Dn : Seq(Choice(x, y), z)      -> Choice(Seq(x, z), Seq(y, z)) 
  Dn : Seq(LChoice(x, y), z)     -> LChoice(Seq(x, z), Seq(y, z))
\end{verbatim}

	For optimization we want to apply these rules in the reverse direction,
	i.e., factor out common prefixes of two alternatives. 

\begin{code}
  D' : LChoice(Seq(s, s1), Seq(s, s2)) -> Seq(s, LChoice(s1, s2))

  D' : LChoice(Seq(s, s1), LChoice(Seq(s, s2), s3)) ->
       LChoice(Seq(s, LChoice(s1, s2)), s3)

  D' : Seq(LChoice(s1, s2), CountRule(x)) -> 
       LChoice(Seq(s1, CountRule(x)), Seq(s2, CountRule(x)))
\end{code}


\begin{code}
  ChoiceMergeXXX : 
	Choice(Seq(s, s1), Seq(s, s2)) -> Seq(s, Choice(s1, s2))

  ChoiceMergeXXX : 
	Choice(Seq(s, s1), Choice(Seq(s, s2), s3)) ->
        Choice(Seq(s, Choice(s1, s2)), s3)

  ChoiceMerge : 
        Choice(Seq(s, s1), cs[Seq(s, s2)]) ->
        Choice(Seq(s, Choice(s1, s2)), cs[Fail](conCM))

strategies

  conCM(s) = rec x(s <+ {x: (Choice(s, ?x) + Choice(?x, s)); !x} <+
		   (Choice(x, id) + Choice(id, x)))
\end{code}

	\paragraph{Term Traversal}

	All and Some

\begin{code}
rules

  T : Seq(All(x), All(y))      -> All(Seq(x,y))
  T : Choice(One(x), One(y))   -> One(Choice(x, y))
\end{code}

	Path

\begin{code}
  D' : Seq(Path(i, x), Path(i, y)) -> Path(i, Seq(x, y))

  C : Seq(Path(i, x), Path(j, y)) -> Seq(Path(j, y), Path(i, x))
      where not(<eq> (i, j))
\end{code}

	\subsubsection{Scope}

	Scope lifting
  
  	note: scopes cannot be lifted out of recs

\begin{code}
  FuseScope': 
	Scope(Nil, s) -> s
  FuseScope : 
	Scope(xs, Scope(ys, s)) -> Scope(<conc> (xs, ys), s)
  FuseScope : 
	Seq(Scope(xs, s1), Scope(ys, s2)) -> 
	Scope(<conc> (xs, ys), Seq(s1, s2))

  FuseScope' : 
	Scope(xs, Seq(MatchFun(f), s2)) -> Seq(MatchFun(f), Scope(xs, s2))

  FuseScope' : 
	Scope(xs, s) -> Scope(ys, s)
      	where <intersect> (xs, <tvars> s) => ys

  FuseScope' : 
	Scope(xs, Seq(Build(Var(x)), s)) ->
      	Seq(Build(Var(x)), Scope(xs, s))
      	where <not(in)> (x, xs)

  FuseScope' : Scope(xs, Seq(Match(Var(x)), s)) ->
      	Seq(Match(Var(x)), Scope(xs, s))
      	where <not(in)> (x, xs)

  FuseScope : 
	Seq(Scope(xs, s), CountRule(n)) -> Scope(xs, Seq(s, CountRule(n)))
\end{code}

\begin{code}
  CaseMerge : Choice(Seq(MatchFun(f), s1), Seq(MatchFun(g), s2)) ->
	      Case([(f, s1), (g, s2)])
	      where <not(eq)> (f, g)

  CaseMerge : Choice(Seq(MatchFun(f), s1), Case(cases[(f, s2)])) ->
	      Case(cases[(f, Choice(s1, s2))](fetch))

  CaseMerge : Choice(Case(cases[(f, s1)]), Seq(MatchFun(f), s2)) ->
	      Case(cases[(f, Choice(s1, s2))](fetch))

  CaseMerge'' : Choice(Case(cs1[(f, s1)]), 
                       Case(cs2[Cons((f, s2), cs3)]))
              ->
	      Choice(Case(cs1[(f, Choice(s1, s2))](fetch)), 
                     Case(cs2[cs3](at_suffix)))

  CaseMerge : Choice(Case(cs1), Case(cs2)) -> Choice(Case(cs1'), Case(cs2'))
	      where 
              <fetch({f, s1: 
                      <<(f, s1) -> (f, Choice(s1, s2))
		        where <at_suffix({cs3: <<Cons((f, s2), cs3) -> cs3>>})> cs2 => cs2'
                      >>})
              > cs1 => cs1'
\end{code}

	When there is no overlap between the guards of the two case
	expressions the cases can be merged.

\begin{code}
  CaseMerge' : Choice(Seq(MatchFun(f), s), Case(cases)) ->
	       Case(Cons((f, s), cases))

  CaseMerge' : Choice(Case(cases), Seq(MatchFun(f), s)) ->
	       Case(Cons((f, s), cases))

  CaseMerge' : Choice(Case(cases1), Case(cases2)) -> 
               Case(<conc> (cases1, cases2)) 
\end{code}

	Left choice of cases

\begin{code}
  CaseMerge : LChoice(Seq(MatchFun(f), s1), Case(cases[(f, s2)])) ->
	      Case(cases[(f, LChoice(s1, s2))](fetch))

  CaseMerge : LChoice(Case(cases[(f, s1)]), Seq(MatchFun(f), s2)) ->
	      Case(cases[(f, LChoice(s1, s2))](fetch))

  CaseMerge'' : LChoice(Case(cs1[(f, s1)]), 
                      Case(cs2[Cons((f, s2), cs3)]))
              ->
	      LChoice(Case(cs1[(f, LChoice(s1, s2))](fetch)), 
                      Case(cs2[cs3](at_suffix)))

  CaseMerge : LChoice(Case(cs1), Case(cs2)) -> LChoice(Case(cs1'), Case(cs2'))
	      where 
              <fetch({f, s1: 
                      <<(f, s1) -> (f, LChoice(s1, s2))
		        where <at_suffix({cs3: <<Cons((f, s2), cs3) -> cs3>>})> cs2 => cs2'
                      >>})
              > cs1 => cs1'
\end{code}

\begin{code}
  CaseMerge' : LChoice(Seq(MatchFun(f), s), Case(cases)) ->
	       Case(Cons((f, s), cases))

  CaseMerge' : LChoice(Case(cases), Seq(MatchFun(f), s)) ->
	       Case(Cons((f, s), cases))

  CaseMerge' : LChoice(Case(cases1), Case(cases2)) -> 
               Case(<conc> (cases1, cases2))
\end{code}

	\subsubsection{Recursion}

	UnFolding
  
\begin{code}
  U : Rec(x,s) -> <subs> (x, Rec(x,s), s)
\end{code}
	
	Folding (This does probably not work)

\begin{code}
  Fold : s[Rec(x, s')] -> Rec(x, s[Call(x,[])])
\end{code}

	Distribution and recursion
\begin{code}
	
	(* Change x, SVar(x) to Label(SVar(x), [])) *)

  D'' : Seq(Rec(x, LChoice(Seq(s1, SVar(x)), s2)), s3) -> 
       Rec(x, LChoice(Seq(s1, SVar(x)), Seq(s2, s3)))
          where <not(in)> (SVar(x), s2)

  D'' : Seq(Rec(x, LChoice(s1, Seq(s2, SVar(x)))), s3) -> 
       Rec(x, LChoice(Seq(s1, s3), Seq(s2, SVar(x))))
       where <not(in)> (SVar(x), s2)

  D'' : Seq(Rec(x, Choice(Seq(s1, Label(SVar(x), [])), s2)), s3) -> 
       Rec(x, LChoice(Seq(s1, x), Seq(s2, s3)))
       where <not(in)> (x, s2)

  D'' : Seq(Rec(x, Choice(s1, Seq(s2, x))), s3) -> 
       Rec(x, Choice(Seq(s1, s3), Seq(s2, x)))
       where <not(in)> (x, s2)
\end{code}
