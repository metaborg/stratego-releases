\literate[Inlining]

% $Id: inlining.r,v 1.8 2000/08/16 22:29:26 visser Exp $

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


In this module we define inlining of let defined strategy definitions;

\begin{code}
module inlining
imports strategy stratlib lib
\end{code}

\begin{code}
rules

  Inl1 : Let(SDef(f, [], s1), s2[Call(SVar(f), [])]) ->
	 Let(SDef(f, [], s1), s2[<strename> s1])

  Inl2 : Let(SDef(f, [x| xs], s1), s2[Call(SVar(f), ss)]) ->
	 Let(SDef(f, [x| xs], s1), 
	     s2[<ssubs ; strename> ([x| xs], ss, s1)])

  Inl3 : Let(SDef(f, Cons(x, xs), s1), s2[Call(SVar(f), ss)]) ->
	 Let(SDef(f, Cons(x, xs), s1), 
	     s2[<zip(MkSdef) ; 
		 foldr(!s1, MkSDef ; Inl1) ; 
		 strename> (Cons(x, xs), ss)])

  MkSDef : (x, s) -> SDef(x, [], s)

  Dead : Let(SDef(f, xs, s1), s2) -> s2
	 where <not(in)> (SVar(f), s2)
\end{code}

\begin{code}
strategies

  inline2  = bottomup(repeat((repeat1(Inl1 <+ Inl2) ; try(Dead)) <+ Dead))

  inline2 = bottomup(repeat(repeat1(Inl1 + Inl2)))
\end{code}

Expand the strategy \cd{main} with respect to the desugared specification;

(*** Is this strategy correct?? ***)

\begin{code}
rules

  InitExpand' : env -> (Call(SVar("main"), []), env)

  InitExpand : env -> (env1, env2)
               where <repeat(SplitDefs <+ SplitDefs')> (env, [], [])
                     => ([], env1, env2)

  SplitDefs : (Cons(sdef, sdefs), env1, env2) ->
              (sdefs, env1, Cons(sdef, env2))
	      where <doInline> sdef

  SplitDefs' : (Cons(sdef, sdefs), env1, env2) ->
               (sdefs, Cons(sdef, env1), env2)

  ExpandCall :		
	(Call(SVar(f), ss), env) -> (<strename> s, <ExtendEnv> (xs, ss, env))
	where <length> ss => n; 
	      <fetch(SDef(?f, where(length => n); ?xs , ?s))> env

  ExpandCall :
	(Call(SVar(f), ss), env) -> (Call(SVar(g), ss), env)
	where <fetch(?SDef(f, [], Call(SVar(g), [])))> env

  TryCall : (Call(SVar(f), ss), env) -> (Tried(Call(SVar(f), ss)), env)

  Dist(s) : (e, env) -> (<all(\x -> (x, env)\; s; Fst)> e, env)

  ExtendEnv : (xs, ss, env) -> <conc> (<zip(MkSDef)> (xs, ss), env)
\end{code}

	Heuristics for inlining; inline all operators with arguments.
	Also nullary operators that represent rules (do a match as
	first action).

	Todo: Also inline sums of rules if they occur inside a sum
\begin{code}
strategies

  doInline = SDef(id, Cons(id, id), id) +
             SDef(not("main"), [], Scope(id, Seq(Match(id), id))) +
             SDef(not("main"), [], Seq(Scope(id, Seq(Match(id), id)), id))

  expandStrat = rec eval(Dist(eval); try(repeat1(ExpandCall); eval))

  expandStrat' = (rec eval(Dist(eval) ; ((repeat1(ExpandCall) ; eval)
					 <+ TryCall <+ id))) ; Fst

  inline = InitExpand; expandStrat; Fst; rename_sdefs

  inlineIO = iowrap(inline)

rules

  rename_sdefs : 
    sdefs -> sdefs'
    where <filter(NewName)> sdefs => tbl;
          <map((id, MkCall))> tbl => sbs;
          <map(RenameSDef(!tbl, !sbs))> sdefs => sdefs'

  NewName : SDef(x, _, _) -> (x, <new>())
 	    where not(!x => "main")

  RenameSDef(mktbl, mksbs) : 
    SDef(x, xs, s) -> 
    SDef(y, xs, <ssubs> (<mksbs>(), s))
    where (mktbl; fetch(?(x, y))) <+ (!x => y)
\end{code} 
