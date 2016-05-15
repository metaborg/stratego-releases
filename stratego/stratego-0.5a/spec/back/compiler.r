\literate[Compiler]

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
imports instructions strategy list automaton stratlib
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

  C : Instr(Id, env, rcs) -> 
      Block([])

  C : Instr(Fail, env, rcs) -> 
      Goto("fail")
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
      Instr(Choice(s1, s2), env, rcs)

  C : Instr(Choice(s1, s2), env, rcs) -> 
      Block([Cpush(fc),
	     Instr(s1, env, rcs), 
             Goto(sc),
	     Label(fc), 
             Choices(s2, sc, env, rcs)])
      where new => sc ; new => fc

  C : Choices(Choice(s1, s2), sc, env, rcs) ->
      Block([Ccontinue(fc),
	     Instr(s1, env, rcs), 
             Goto(sc),
	     Label(fc), 
             Choices(s2, sc, env, rcs)])
      where new => fc

  C : Choices(LChoice(s1, s2), sc, env, rcs) ->
      Choices(Choice(s1, s2), sc, env, rcs)

  C : Choices(s, sc, env, rcs) ->
      Block([Instr(s, env, rcs),
             Goto(done),
             Label(sc),
             Cpop,
             Label(done)])
      where not(<Choice(id,id) + LChoice(id,id)> s);
            new => done
\end{code}

	Matching automaton

\begin{code}

  C : Instr(Assign(Var(x)), env, rcs) ->
      MoveTop(j, o)
      where <io-index> (x, env) => (j, o)

  C : Instr(Assign(Var(x), Var(y)), env, rcs) ->
      Move(j1, o1, j2, o2)
      where <io-index> (x, env) => (j1, o1);
	    <io-index> (y, env) => (j2, o2)

  C : Instr(Assign(Var(x), t), env, rcs) ->
      Instr(Where(Seq(Build(t), Assign(Var(x)))), env, rcs)
      where !t; (?Op(_,_) + ?Int(_) + ?Str(_) + ?Real(_))

// Case expressions

rules

  C : Instr(Case(lab, x, alts, def), env, rcs) -> 
      Block([Branch(Case(lab, x, alts, def), sc, env, rcs),
             Label(sc)])
      where new => sc

strategies

  C = Cbranch <+ CbranchOther

rules

  Cbranch : 
    Branch(Case(lab, Var(x), alts, def), sc, env, rcs) ->
    Block([Goto(lab),
           Label(lab),
           Alts(alts, (j, o), fc, sc, env, rcs),
           ins])
    where <io-index> (x, env) => (j, o);
	  <DefaultLabel> (def, sc, env, rcs) => (fc, ins)

  Cbranch :
    Branch(Continue(lab), sc, env, rcs) -> Goto(lab)

  Cbranch : 
    Branch(Call(SVar(f),[]), sc, env, rcs) ->
     Block([Rpush(sc),
            Goto(f)])
    where <not(is-toplevel-proc)> f => lab

  Cbranch : 
    Branch(Call(SVar(f),[]), sc, env, rcs) ->
    Ccall(f,[])
    where <is-toplevel-proc> f => lab

  CbranchOther : 
    Branch(s, sc, env, rcs) ->
    Block([Instr(s, env, rcs),
           Goto(sc)])

  DefaultLabel : 
     (Fail, sc, env, rcs) -> ("fail", Block([]))

  DefaultLabel :
     (s, sc, env, rcs) -> 
     (lab, Block([Label(lab), Branch(s, sc, env, rcs)]))
     where <not(eq)> (s, Fail); new => lab

  C : Alts([], x, fc, sc, env, rcs) ->
      Block([])

  C : Alts([Alt(c, args, s)], x, fc, sc, env, rcs) ->
      Block([
        <TestConstructor> (x, c, fc),
        Block(get-args),
	Branch(s, sc, env, rcs)
      ])
      where <nzip0(CArg(!env,!x))> args => get-args  

  C : Alts([Alt(c, args, s) | alts], x, fc, sc, env, rcs) ->
      Block([
        <TestConstructor> (x, c, match-fail),
        Block(get-args),
	Branch(s, sc, env, rcs),
        Label(match-fail),
	Alts(alts, x, fc, sc, env, rcs)
      ])
      where !alts => [_|_];
            new => match-fail;
	    <nzip0(CArg(!env,!x))> args => get-args  

  TestConstructor : 
    ((j, o), Fun(f, n), fc) -> 
    TestFunFC(VAR(lab), fc, Egetd(j, o))
    where <get-afun> AFun(f, n) => lab

  TestConstructor : ((j, o), Int(n), fc)  -> TestInt(j, o, n, fc)
  TestConstructor : ((j, o), Real(n), fc) -> TestReal(j, o, n, fc)
  TestConstructor : ((j, o), Str(x), fc)  -> TestStr(j, o, <escape> x, fc)

  CArg(env,src) : 
    (n, Var(x)) -> MoveArg(i1, o1, i2, o2, n)
    where <io-index> (x, <env>()) => (i1, o1); src => (i2,o2)
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
  C : Instr(Call(SVar(x), []), env, rcs) ->
      Ccall(lab, [])
      where <is-toplevel-proc> x => lab

  C : Instr(Call(SVar(x), []), env, rcs) ->
      Block([Rpush(ret), Goto(x), Label(ret)])
      where <not(is-toplevel-proc)> x; new => ret
\end{code}

\begin{code}
  C : Instr(Let(sdef, s), env, rcs) ->
      Block([Instr(s, env, rcs),
             Goto(y),
	     Instr(sdef, env, rcs),
	     Label(y)])
      where new => y

	// This is not optimal! Causes a chain of jumps to the end of the
	// code

  Ctop : 
    Instr(SDef(x, [], s), env, rcs) ->
    Block([PROC(x),
	   Instr(s, env, rcs),
	   ENDPROC()])

  Ctop : 
    Instr(SDef(pragmas, x, [], s), env, rcs) ->
    Instr(SDef(x, [], s), env, rcs)


  C : Instr(SDef(x, [], s), env, rcs) ->
      Block([Label(x),
	     Instr(s, env, rcs),
	     Return])

  C : Instr(SDef(pragmas, x, [], s), env, rcs) ->
      Instr(SDef(x, [], s), env, rcs)
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
      Block([TestFunTop(VAR(lab)),
	     TravInit,
	     Instr(CongKids(ss), env, rcs),
	     AllBuild])
    where <get-afun> AFun(f, <length> ss) => lab

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
	     Instr(s, [(i, xs) | env], <add> (i, 1)),
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

Building Terms 

\begin{code}

  // what happens with NULL variables?

  C : Instr(Build(t), env, rcs) ->
      Block([Block(xs),
             Tset(BuildTerm(t, env, rcs))])
      where <tvars; map(TestVar(!env, !rcs))> t => xs
  
  TestVar(env, rcs) : 
    x -> ins
    where <io-index> (x, <env>()) => (i,o);
          ((<eq> (i, <rcs>()); !NotNULL(o)) <+ !NotNULLd(i, o) => ins)

  C : BuildTerm(Str(x), env, rcs) -> 
      ATmakeString(<escape> x)

  C : BuildTerm(Int(x), env, rcs) -> 
      MakeInt(x)

  C : BuildTerm(Real(x), env, rcs) -> 
      ATmakeReal(x)

  C : BuildTerm(Var(x), env, rcs) -> 
      ins
      where <io-index> (x, env) => (i, o);
            ((<eq> (i, rcs); !Eget(o)) <+ !Egetd(i, o) => ins)

  C : BuildTerm(BuildDefault(t), env, rcs) -> 
      BuildTerm(t, env, rcs)

  C : BuildTerm(Op(f, ts), env, rcs) -> 
      app # ( [f | <map(\ t -> BuildTerm(t, env, rcs) \ )> ts] )
      where <length> ts => len; <leq> (len, 6);
             <conc-strings> ("App", <int-to-string> len) => app
       	
  C : BuildTerm(Op(f, ts), env, rcs) -> 
      AppN(f, "ATmakeList" # ([len | args]))
      where <length>  ts => len; <gt> (len, 6);
             <map(\ t -> BuildTerm(t, env, rcs) \ )> ts => args

  C : BuildTerm(App(s, t), env, rcs) -> 
      AppEncountered(App(s, t))
      //Block([BuildTerm(t, env, rcs),
      //       Instr(s, env, rcs)])
      where debug(!"compiler.r: App encountered: ")
\end{code} 


