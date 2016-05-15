\literate[Compiler]

% $Id: compiler.r,v 1.6 2000/06/12 14:02:32 visser Exp $

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
module compiler
imports instructions strategy list substitution automaton
\end{code}

	semi-instructions: strategies embedded into instructions 

\begin{code}
signature
  constructors
    Instr : Strategy * Env * REnv -> Instr
\end{code} 

	Looking up variables in the environment

\begin{code}
rules

  io-index : (x, env) -> (i, o)
     where <fetch({i, xs: ?(i, xs); !(i, <get-index> (x, xs))}; ?(i, o))> env
\end{code}

	Semi-instructions can be refined to instructions by means of
	the following rules.

	\paragraph{Sequential Programming}

	Identity and failure

\begin{code}
rules

  C : Instr(Id, env, rcs) -> Block([])

  C : Instr(Fail, env, rcs) -> Goto("fail")
\end{code}

	Test and negation

	Note: this is really a where implementation the environment is not
	restored.

\begin{code}
  C : Instr(Test(s), env, rcs) -> 
      Block([Tdupl,
	     Instr(s, env, rcs),
	     Tpop])

  C : Instr(Not(s), env, rcs) ->
      Block([Cpush(fc),
	     Tdupl,
	     Instr(s, env, rcs),
	     Cpop, Crestore, Cjump,
	     Label(fc)])
      where new => fc
\end{code} 

	Sequential composition

\begin{code}
  C : Instr(Seq(s1, s2), env, rcs) -> 
      Block([Instr(s1, env, rcs),
	     Instr(s2, env, rcs)])
\end{code}

	Choice

\begin{code}
  C : Instr(LChoice(s1, s2), env, rcs) -> 
      Block([Cpush(fc),
	     Instr(s1, env, rcs), Cpop, Goto(sc),
	     Label(fc), Instr(s2, env, rcs),
	     Label(sc)])
      where (new => sc) ; (new => fc)

  C : Instr(Choice(s1, s2), env, rcs) -> 
      Block([Cpush(fc),
	     Instr(s1, env, rcs), Cpop, Goto(sc),
	     Label(fc), Instr(s2, env, rcs),
	     Label(sc)])
      where (new => sc) ; (new => fc)
\end{code}

	Matching automaton

\begin{code}

  C : Instr(Down(n, s), env, rcs) ->
      Block([Arg(n),
             Instr(s, env, rcs)])

  C : Instr(Up(s), env, rcs) ->
      Block([Tpop,
             Instr(s, env, rcs)])

  C : Instr(Accept(s), env, rcs) ->
      Instr(s, env, rcs)

  C : Instr(MatchVars([], p, s), env, rcs) ->
      Instr(s, env, rcs)

  C : Instr(MatchVars(Cons(x, xs), p, s), env, rcs) ->
      Block([ins,
             Instr(MatchVars(xs, p, s), env, rcs)])
      where <io-index> (x, env) => (i, o);
            ((<eq> (i, rcs); !MatchVar(o)) <+ !MatchVard(i, o) => ins)

  C : Instr(MatchFunA(Fun(f,n), xs, p, s), env, rcs) ->
      Block([MatchFun(f,n),
             Instr(MatchVars(xs, p, s), env, rcs)])

  C : Instr(MatchFunA(Str(x), xs, p, s), env, rcs) ->
      Block([MatchString(x),
             Instr(MatchVars(xs, p, s), env, rcs)])

  C : Instr(MatchFunA(Int(x), xs, p, s), env, rcs) ->
      Block([MatchInt(x),
             Instr(MatchVars(xs, p, s), env, rcs)])

  C : Instr(MatchFunA(Real(x), xs, p, s), env, rcs) ->
      Block([MatchReal(x),
             Instr(MatchVars(xs, p, s), env, rcs)])

  C : Instr(Case(cs), env, rcs) ->
      Block([Instr(Cases(cs', sc), env, rcs),
	     Instr(s, env, rcs),
	     Label(sc)])
      where new => sc;
            (<at_suffix({cs: Cons(MatchVars(id,id,id);?s, ?cs); !cs})> cs 
            <+ (!Fail => s; !cs)) => cs'

  C : Instr(Cases([], sc), env, rcs) ->
      Block([])

  C : Instr(Cases(Cons(MatchFunA(f, xs, p, s), cases), sc), env, rcs) ->
      Block([<CasePrefix> (f, fc),
	     Instr(MatchVars(xs, p, s), env, rcs),
	     Goto(sc),
	     Label(fc),
	     Instr(Cases(cases, sc), env, rcs)])
      where new => fc

  CasePrefix : (Fun(f, n), fc) -> MatchFunFC(f, n, fc)
  CasePrefix : (Int(n), fc)  -> MatchIntFC(n, fc)
  CasePrefix : (Real(n), fc) -> MatchRealFC(n, fc)
  CasePrefix : (Str(x), fc)  -> MatchStringFC(x, fc)
\end{code}

	Cases (Old New Style)

\begin{code}
  C' : Instr(Case(cases, s), env, rcs) ->
      Block([Instr(Cases(cases, sc), env, rcs),
	     Instr(s, env, rcs),
	     Label(sc)])
      where new => sc

  C' : Instr(Cases([], sc), env, rcs) ->
      Block([])

  C' : Instr(Cases(Cons(Seq(s1, s2), cases), sc), env, rcs) ->
      Block([<CasePrefix> (s1, fc),
	     Instr(s2, env, rcs),
	     Goto(sc),
	     Label(fc),
	     Instr(Cases(cases, sc), env, rcs)])
      where new => fc

  CasePrefix' : (MatchFun(f),   fc)  -> MatchFunFC(f, fc)
  CasePrefix' : (Match(Int(n)), fc)  -> MatchIntFC(n, fc)
  CasePrefix' : (Match(Real(n)), fc) -> MatchRealFC(n, fc)
  CasePrefix' : (Match(Str(x)), fc)  -> MatchStringFC(x, fc)
\end{code}

	Cases (Old Old Style)

\begin{code}
  C'' : Instr(Case(cases), env, rcs) ->
      Instr(Cases(cases, sc), env, rcs)
      where new => sc

  C'' : Instr(Cases([], sc), env, rcs) ->
      Label(sc)

  C'' : Instr(Cases([(f, s)], sc), env, rcs) ->
      Block([MatchFun(f),
	     Instr(s, env, rcs),
	     Label(sc)])

  C'' : Instr(Cases(Cons((f, s), cases), sc), env, rcs) ->
      Block([MatchFunFC(f, fc),
	     Instr(s, env, rcs),
	     Goto(sc),
	     Label(fc),
	     Instr(Cases(cases, sc), env, rcs)])
      where new => fc
\end{code}

	\paragraph{Jumping}

\begin{code}
  C : Instr(Rec(x, s), env, rcs) -> 
      Block([Rpush(sc),
	     Label(x),
             Instr(s, env, rcs),
	     Return,
	     Label(sc)])
      where new => sc
\end{code}

\begin{code}
(*
  C : Instr(Call(SVar(x), []), env, rcs) ->
      Block([Rpush(ret), Goto(entry), Label(ret)])
      where <lookup> (x, rcs) => entry; new => ret
*)
  C : Instr(Call(SVar(x), []), env, rcs) ->
      Block([Rpush(ret), Goto(x), Label(ret)])
      where new => ret
\end{code}

\begin{code}
  C : Instr(Let(sdef, s), env, rcs) ->
      Block([Instr(s, env, rcs),
             Goto(y),
	     Instr(sdef, env, rcs),
	     Label(y)])
      where new => y
\end{code}

	This is not optimal! Causes a chain of jumps to the end of the
	code

\begin{code}
  C : Instr(SDef(x, [], s), env, rcs) ->
      Block([Label(x),
	     Instr(s, env, rcs),
             Return])
\end{code} 

	Path

\begin{code}
  C : Instr(Path(i, s), env, rcs) ->
      Block([TpushIthSon(i),
	     Instr(s, env, rcs),
	     TputIthSon(i)])
\end{code}

	Congruence

\begin{code}
  C : Instr(Cong(f, ss), env, rcs) ->
      Block([MatchFun(f, <length> ss),
	     TravInit,
	     Instr(CongKids(ss), env, rcs),
	     AllBuild])

  C : Instr(CongWld(ss), env, rcs) ->
      Block([TravInit,
	     Instr(CongKids(ss), env, rcs),
	     AllBuild])

  C : Instr(CongKids(Nil), env, rcs) ->
      Block([])

  C : Instr(CongKids(Cons(s, ss)), env, rcs) ->
      Block([OneNextSon,
	     Instr(s, env, rcs),
	     Instr(CongKids(ss), env, rcs)])
\end{code}

	Generic traversal operators; All

\begin{code}
  C : Instr(All(s), env, rcs) -> 
      Block([AllInit,
	     Label(c1), 
	     AllNextSon(c2), 	 (* Succeed if there are no more children *)
	     Instr(s, env, rcs), 
	     Goto(c1),           (* process next child *)
	     Label(c2),
	     AllBuild])
      where new => c1 ; new => c2
\end{code}

	One

\begin{code}
  C : Instr(One(s), env, rcs) -> 
      Block([IsAppl,
	     OneInit,
	     Label(c1), 
	     OneNextSon, 	(* Fail if there are no more children *)
	     Cpush(c1),
	     Instr(s, env, rcs),
	     Cpop, 
	     OneBuild])
      where new => c1 ; new => c2
\end{code}

	Some

\begin{code}
  C : Instr(Some(s), env, rcs) -> 
      Block([IsAppl,
	     SomeInit,
	     Label(c1), 
	     SomeNextSon(c2), (* jump to c2 if all children have been handled
				 and CounterOk *)
	     Cpush(c1),
	     Instr(s, env, rcs),
	     Cpop,
	     CounterOK, (* record success of at least one child *)
	     Goto(c1),
	     Label(c2),
	     SomeBuild])
      where new => c1 ; new => c2
\end{code} 

	Thread

\begin{code}
  C : Instr(Thread(s), env, rcs) -> 
      Block([ThreadInit(),
	     Label(c1), 
	     ThreadNextSon(c2),
	     Instr(s, env, rcs),
             ThreadSetEnv(),
	     Goto(c1),           
	     Label(c2),
	     ThreadBuild()])
      where new => c1 ; new => c2
\end{code}

	Scope 

\begin{code}
  C : Instr(Scope(xs, s), env, i) -> 
      Block([Epushd(i, o),
	     Instr(s, Cons((i, xs), env), <add> (i, 1)),
	     Epopd(i, o)])
      where <length> xs => o
\end{code}

	Where

\begin{code}
  C : Instr(Where(s), env, rcs) -> 
      Block([Tdupl,
	     Instr(s, env, rcs),
	     Tpop])
\end{code}

	Primitives

\begin{code}
  C : Instr(Prim(x), env, rcs) -> 
      Iprim(x)

  C : Instr(Prim2(x, y), env, rcs) -> 
      Iprim2(x, y)

  C : Instr(CountRule(x), env, rcs) -> 
      ICountRule(x)
\end{code} 

	Matching terms 

\begin{code}
  C' : Instr(Match(Var(x)), env, rcs) -> ins      
      where <io-index> (x, env) => (i, o);
            ((<eq> (i, rcs); !MatchVar(o)) <+ !MatchVard(i, o) => ins)

  C' : Instr(MatchFun(f), env, rcs) ->
      MatchFun(f)

  C' : Instr(Match(Str(x)), env, rcs) ->
      MatchString(x)

  C' : Instr(Match(Int(n)), env, rcs) ->
      MatchInt(n)

  C' : Instr(Match(Real(n)), env, rcs) ->
      MatchReal(n)
\end{code} 

Building Terms 

\begin{code}
  C : Instr(Build(Str(x)), env, rcs) -> 
      BuildStr(x)

  C : Instr(Build(Int(x)), env, rcs) -> 
      BuildInt(x)

  C : Instr(Build(Real(x)), env, rcs) -> 
      BuildReal(x)

  C : Instr(Build(Var(x)), env, rcs) -> ins
      where <io-index> (x, env) => (i, o);
            ((<eq> (i, rcs); !BuildVar(o)) <+ !BuildVard(i, o) => ins)

  C : Instr(Build(BuildDefault(t)), env, rcs) -> 
      Instr(Build(t), env, rcs)

  C : Instr(Build(Op(f, ts)), env, rcs) -> 
      Block([BuildKids(ts, env, rcs), 
             BuildFun(f, <length> ts)])

  C : BuildKids(Nil, env, rcs) -> Block([])
 
  C : BuildKids(Cons(t, ts), env, rcs) ->
      Block([Instr(Build(t), env, rcs), Tpush, 
	     BuildKids(ts, env, rcs)])
      	
  C : Instr(Build(App(s, t)), env, rcs) -> 
      Block([Instr(Build(t), env, rcs),
	     Instr(s, env, rcs)])
\end{code} 

Term stack instructions

\begin{code}
  C' : Instr(Tpop,   env, rcs) -> Tpop
  C' : Instr(Tpush,  env, rcs) -> Tpush
  C' : Instr(Arg(n), env, rcs) -> Arg(n)
\end{code}

Annotations

\begin{code}
  C : Instr(GetAnn, env, rcs) -> GetAnn

  C : Instr(AnnBuild(t1, t2), env, rcs) ->
      Block([Tpush,
	     Instr(Build(t1), env, rcs),
	     Tpush,
	     Instr(Build(t2), env, rcs),
	     SetAnn])

  C : Instr(AnnRemove(t), env, rcs) ->
      Block([Tpush,
	     Instr(Build(t), env, rcs),
	     RemoveAnn])
\end{code}
