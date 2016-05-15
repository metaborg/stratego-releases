\literate[Desugaring]

% $Id: desugar.r,v 1.8 2001/03/15 11:12:10 visser Exp $

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



	Desugaring : translating high-level constructs to low-level
	ones

\begin{code}
module desugar
imports stratego stratlib list-sort use-def lib
\end{code} 

	\paragraph{Varyadic operators}

\begin{code}
rules

  HL : Seqs([])           -> Id
  HL : Seqs([s | ss])     -> Seq(s, Seqs(ss))
  HL : Choices([])        -> Fail
  HL : Choices([s | ss])  -> Choice(s, Choices(ss))
  HL : LChoices([])       -> Fail
  HL : LChoices([s | ss]) -> LChoice(s, LChoices(ss))

  HL : Lets(sdefs,s) -> Let(sdefs,s)

  //HL : Lets([], s) -> s
  //HL : Lets([sdef | sdefs], s) -> Let(sdef, Lets(sdefs, s))

  MkSeq : (s1, s2) -> Seq(s1, s2)

strategies

  seqs = foldr(!Id, MkSeq)
\end{code}

	\paragraph{Match, Build, Apply combinations}

\begin{code}
rules

  HL : BA(s, t)       -> Seq(Build(t), s)
  HL : MA(t, s)       -> Seq(Match(t), s)
  HL : AM(s, t)       -> Seq(s, Match(t))
  HL : BAM(s, t1, t2) -> Seqs([Build(t1), s, Match(t2)])
\end{code} 

\paragraph{Strategy Applications}

	Factoring out strategy applications; The right-hand side of a
	rule can contain applications of a strategy to a term; This is
	factored out by translating it to a condition that applies the
	strategy and matches the result against a new variable, which
	is then used in the rhs;  In fact this can be generalized to
	applications in arbitrary builds;

\begin{code}
rules

  Bapp0 : Build(t[App(Build(t'), t'')]) -> Build(t[t'])

  Bapp1 : Build(App(s, t')) -> Seq(Build(t'), s)

  Bapp2 : Build(t[App(s, t')]) -> 
          Scope([x], Seq(BAM(s, t', Var(x)), Build(t[Var(x)])))
          where new => x
\end{code} 

\paragraph{Term Explosion an Construction}

\begin{code}
rules

  Expl  : Match(t[Explode(t1, t2)]) -> 
          Scope([x], 
                Seq(Match(t[Var(x)]),
                    Where(BAM(Prim("_ST_explode_term"), 
                          Var(x), 
			  Op("TCons", [t1, Op("TCons", [t2, Op("TNil",[])])])
                          ))))
          where new => x

  Expl  : Build(t[Explode(t1, t2)]) -> 
          Scope([x], 
                Seq(BAM(Prim("_ST_mkterm"), 
			Op("TCons", [t1, Op("TCons", [t2, Op("TNil",[])])]),
                        Var(x)),
                    Build(t[Var(x)])))
          where new => x

  Expl : ExplodeCong(s1, s2) ->
	 Seq(Prim("_ST_explode_term"),
	 Seq(Cong("TCons", [s1, Cong("TCons", [s2, Cong("TNil",[])])]),
	     Prim("_ST_mkterm")))
\end{code} 


\paragraph{Rules to Strategies}

	A rule corresponds to a strategy that first matches the
	left-hand side, then checks the conditions and finally builds
	the right-hand side; The left-hand side and right-hand side
	should be in basic term format, as defined by the predicate
	|bterm|;

\begin{code}
strategies

  pureterm = not(topdown(Con(id, id, id) + App(id, id)))

  buildterm = not(topdown(Con(id, id, id) + Wld))

rules

  RtoS : SRule(Rule(l, r, s)) -> Seqs([Match(l), s, Build(r)])
         where <pureterm> l ; <buildterm> r

  RtoS : SRule(StratRule(l, r, s)) -> Seqs([l, s, r])
\end{code} 

\paragraph{Contexts}

	Factoring out contexts; Contexts used in a rule are translated
	to a local traversal that replaces the pattern occuring in the
	context in the lhs by the pattern occurring in the context in
	the rhs;

\begin{code}
rules

  Rcon : SRule(Rule(l[Con(Var(c), l', f)], r[Con(Var(c), r', Call(f', []))], s)) ->
         Scope([c'],SRule(
	   Rule(l[Var(c)], r[Var(c')], 
	        Seq(s, BAM(Call(f', [SRule(Rule(l', r', Id))]), 
                           Var(c), Var(c'))))))
         where new => c'

  Rcon' : SRule(Rule(l[Con(Var(c), l', f)], r[Con(Var(c), r', Call(f', []))], s)) ->
         SRule(Rule(l[Var(c)], 
                    r[App(Call(f', [SRule(Rule(l', r', Id))]), Var(c))],
		    s))

  Rcon'' : SRule(Rule(l[Con(Var(c), l', Call(f, []))], r, s)) ->
         SRule(Rule(l[Var(c)], r, 
	       Seq(s, BA(Call(f, [Match(l')]), Var(c)))))
	(* Con(Var(c), _, _) should not occur in r *)
\end{code}

	Note: The local traversal should be closed for variables not
	occuring in the outer pattern; But this is more relevant for
	multi-contexts which are not supported yet;

	Other problems:

	- local variables for inner rule; the inner SRule should be
	enclosed in a \verb|Scope(xs, _)| where 
\begin{verbatim}
   <diff> (<tvars> (l', r'), <tvars> (l[Var(c)], r[Var(c')])) => xs
\end{verbatim}
	
	- placement of derived strategy in where clause; option first
	do a matching traversal at start of where, and at end of where
	do a replacing traversal.

	- multiple uses of context in rhs

\paragraph{Desugaring single rules}

\begin{code}
strategies

  desugarRule = rec x(try(Rcon; x + Scope(id, x) + RtoS))
\end{code} 

\paragraph{Desugaring Strategies}

\begin{code}
strategies

  desugar = 
    topdown(try(desugarRule); 
            repeat(HL + (Bapp0 <+ Bapp1 <+ Bapp2) + Expl))

  desugar' = topdown(try(desugarRule); repeat(HL))

  desugar-spec = map(SDef(id, id, desugar))
\end{code}
 