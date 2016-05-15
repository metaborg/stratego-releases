\literate[Optimization]

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
module optimization
imports strategy list simplification distribution stratlib
\end{code}

	match and build

\begin{code}
rules

  M : Cong(f, ss) -> Match(Op(f, ts))
      where <map({t:<<Match(t) -> t>>} + <<Id -> Match(Wld)>>)> ss => ts

  M : Seq(Build(t), Seq(Prim("new"), s)) -> Seq(Prim("new"), s)

  M : Seq(Match(t), s[Build(t)]) -> Seq(Match(t), s[Id](firstInSeq))
  M : Seq(Build(t), s[Match(t)]) -> Seq(Build(t), s[Id](firstInSeq))

  M : Seq(Build(t), s[Build(t')]) -> s[Build(t')](firstInSeq)

(*
  M : Seq(Build(Op(f, ts)), s[MatchFun(f)]) -> 
      Seq(Build(Op(f, ts)), s[Id](firstInSeq))

  M' : App(s[MatchFun(f)], Op(f, ts)) ->
      App(s[Id](firstInSeq), Op(f, ts))

*)

  M : Seq(Match(Var(x)), s[Build(Var(x))]) -> 
      Seq(Match(Var(x)), s[Id](firstInSeq))

(*
  M' : Seq(Build(t1), Match(t2)) -> Fail
       where <not(match(t1))> t2
*)

  M' : 
    Scope(xs, Seq(Build(Var(y)), Seq(Match(Var(x)), s))) ->
    Scope(<diff> (xs, [x]), 
          Seq(Build(Var(y)), <tsubs> ([x], [Var(y)], s)))
    where <in> (x, xs)

  CommonSubterm : 
    Seq(Match(t1[Op(f, ts)]), s[Build(t2[Op(f, ts)])]) ->
    Scope([x], 
      Seq(Match(t1[Var(x)]), 
      Seq(Seq(Build(Var(x)), Seq(Match(Op(f, ts)), 
          s[Build(t2[Var(x)])])))))
    where new => x

(* As(x, t) : match(t) and bind to x *)

  CommonSubterm : 
    Seq(Match(t1[Op(f, ts)]), s[Build(t2[Op(f, ts)])]) ->
    Scope([x], 
      Seq(Match(t1[As(Var(x), Op(f, ts))]),
          s[Build(t2[Var(x)])]))
    where new => x

\end{code}

	\paragraph{Match-Build Fusion}

	(This did not quite work as portrayed here.  The problem is
	that the congruence may have a side-effect that influences the
	code in the build. The MkApp rule creates an application only
	if all variables are defined in the branch.)

\begin{code}

  MkApp : (s, t) -> Seq(s, Build(t))
	  where <diff> (<tvars> t, <tvars> s) => []

  CongBuild : 
	Seq(Cong(f, ss), s[Build(Op(f, ts))]) ->
	Seq(Cong(f, <zip(MkApp)> (ss, ts)), s[Id](firstInSeq))
(*
  CongBuild : 
	Seq(MatchFun(f), Seq(CongWld(ss), s[Build(Op(f, ts))])) ->
	Seq(MatchFun(f), Seq(CongWld(<zip(MkApp)> (ss, ts)), s[Id](firstInSeq)))
*)
\end{code}

	\paragraph{Build-Congruence fusion}

\begin{code}
  BuildCong : 
	Seq(Build(Op(f, ts)), s[Cong(f, ss)]) ->
	Seq(Build(Op(f, <zip(\ (s, t) -> App(s, t) \ )> (ss, ts))),
	    s[Id](firstInSeq))

  BuildCong : 
	Seq(Build(Op(f, ts)), s[CongWld(ss)]) ->
	Seq(Build(Op(f, <zip(\ (s, t) -> App(s, t) \ )> (ss, ts))),
	    s[Id](firstInSeq))

  BuildCong : 
	Seq(Build(Op(f, ts)), Seq(MatchFun(f, n), s[CongWld(ss)])) ->
	Seq(Build(Op(f, <zip(\ (s, t) -> App(s, t) \ )> (ss, ts))),
	    s[Id](firstInSeq))
        where <length> ts => n
\end{code}

\begin{code}
  AppCong : 
	App(s[Cong(f, ss)], Op(f, ts)) ->
	App(s[Id](firstInSeq), 
            Op(f, <zip(\ (s, t) -> App(s, t) \ )> (ss, ts)))

  AppCong : 
	App(s[CongWld(ss)], Op(f, ts)) ->
	App(s[Id](firstInSeq), 
            Op(f, <zip(\ (s, t) -> App(s, t) \ )> (ss, ts)))

  AppCong : 
	App(Seq(MatchFun(f), s[CongWld(ss)]), Op(f, ts)) ->
	App(s[Id](firstInSeq), 
            Op(f, <zip(\ (s, t) -> App(s, t) \ )> (ss, ts)))
\end{code}

	Strategies for application of simplification rules.

\begin{code}
strategies 

  simplify = ElimId + F + Ass (* + P + FuseScope + D' + ChoiceMerge + M *)

  fuse = ElimId + Ass + CongBuild + BuildCong + AppCong

  optimize' = downup(repeat(fuse));
              downup(repeat(simplify + (CaseMerge <+ CaseMerge')))

  optimize' = downup(repeat(fuse))

  optimize' = downup(repeat(simplify + (CaseMerge <+ CaseMerge')))

  optimize = downup(repeat(simplify))

  optimize' = downup(repeat(I + F (* + Ass + P + S + D' + ChoiceMerge *))) 

  optimize' = downup(repeat(I12 + I13 + F15))
\end{code}