\literate[{\tt AUTOMATON}]

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

	Matching automaton instructions.

\begin{code}
module automaton 
imports terms lib automaton-sig
\end{code}

	Generation of a matching automaton from a term.

\begin{code}
rules

  Aut1 : MatchTerm(p, Wld, c)    -> MatchVars([], p, c)

  Aut4 : MatchTerm(p, Var(x), c) -> MatchVars([x], p, c)

  Aut4a : MatchTerm(p, As(Var(x), t), c) -> 
          MatchVars([x], p, MatchTerm(p, t, c))

  Aut2 : MatchTerm(p, Str(x), c) -> MatchFunA(Str(x), [], p, c)

  Aut3 : MatchTerm(p, Int(x), c) -> MatchFunA(Int(x), [], p, c)

  Aut3 : MatchTerm(p, Real(x), c) -> MatchFunA(Real(x), [], p, c)

  Aut5 : MatchTerm(p, Op(f, ts), c) -> 
         MatchFunA(Fun(f, <length> ts), [], p, MatchKids(0, p, ts, c))

  Aut6 : MatchKids(n, p, Nil, c) -> c

  Aut7 : MatchKids(n, p, Cons(t, ts), c) -> 
         Down(n, MatchTerm(Cons(n, p), t, 
                 Up(MatchKids(<plus> (n, 1), p, ts, c))))

  Aut8 : MatchTerm(p, BuildDefault(t), c) ->
         MatchVars([], p, c)

  AutInit : Pat(t, s) -> MatchTerm([], t, Accept(s))

strategies

  pat-to-aut = AutInit; 
               topdown(repeat(Aut1 + Aut2 + Aut3 + Aut4a +
                              Aut4 + Aut5 + Aut6 + Aut7 + Aut8))

  mk-automata = map(pat-to-aut)
\end{code}
	
	Optimization of automata

\begin{code}
rules

  O : Down(n, Up(c)) -> c
  O : MatchVars([], p, c) -> c

strategies

  opt-automaton = downup(repeat(O))

\end{code}

	Merging of automata for multiple patterns

	\paragraph{Merging Traversal Operations}

\begin{code}
rules

  Mrg : Merge(Down(n, c1), Down(n, c2)) -> Down(n, Merge(c1, c2))

  Mrg : Merge(Up(c1), Up(c2)) -> Up(Merge(c1, c2))

  Mrg : Merge(Accept(s1), Accept(s2)) -> Accept(Choice(s1, s2))
\end{code}

	\paragraph{Skipping Up}

	When a pattern does not check some subtree this will be indicated
	by an \verb|Up| where other pattersn that do inspect the subtree
	have some other operation. The \verb|Up| is pushed inside until
	it meets its matching \verb|Up| in the other pattern.

\begin{code}
rules

  Mrg : Merge(Down(n, c1), Up(c2)) -> 
       Down(n, Merge(c1, Up(Up(c2))))

  Mrg : Merge(Up(c1), Down(n, c2)) -> 
       Down(n, Merge(Up(Up(c1)), c2))

  Mrg : Merge(MatchFunA(f, xs, p, c1), Up(c2)) -> 
       MatchFunA(f, xs, p, Merge(c1, Up(c2)))

  Mrg : Merge(Up(c1), MatchFunA(f, xs, p, c2)) -> 
       MatchFunA(f, xs, p, Merge(Up(c1), c2))

  Mrg : Merge(MatchVars(xs, p, c1), Up(c2)) -> 
        MatchVars(xs, p, Merge(c1, Up(c2)))

  Mrg : Merge(Up(c1), MatchVars(xs, p, c2)) -> 
        MatchVars(xs, p, Merge(Up(c1), c2))

  Mrg : Merge(Up(c), Case(cs)) -> 
        Case(<map({c': ?c'; !Merge(Up(c), c')})> cs)

  Mrg : Merge(Case(cs), Up(c)) -> 
        Case(<map({c': ?c'; !Merge(Up(c), c')})> cs)
\end{code}

	Merging with Accept

\begin{code}
rules

  Mrg : Merge(Up(c1), Accept(c2)) -> 
       Up(Merge(c1, Accept(c2)))

  Mrg : Merge(Accept(c1), Up(c2)) -> 
       Up(Merge(Accept(c1), c2))

  Mrg : Merge(Down(n, c1), Accept(c2)) -> 
       Down(n, Merge(c1, Up(Accept(c2))))

  Mrg : Merge(Accept(c1), Down(n, c2)) -> 
       Down(n, Merge(Up(Accept(c1)), c2))

  Mrg : Merge(MatchFunA(f, xs, p, c1), Accept(c2)) -> 
       MatchFunA(f, xs, p, Merge(c1, Accept(c2)))

  Mrg : Merge(Accept(c1), MatchFunA(f, xs, p, c2)) -> 
       MatchFunA(f, xs, p, Merge(Accept(c1), c2))

  Mrg : Merge(MatchVars(xs, p, c1), Accept(c2)) -> 
        MatchVars(xs, p, Merge(c1, Accept(c2)))

  Mrg : Merge(Accept(c1), MatchVars(xs, p, c2)) -> 
        MatchVars(xs, p, Merge(Accept(c1), c2))

  Mrg : Merge(Accept(c), Case(cs)) -> 
        Case(<map({c': ?c'; !Merge(Accept(c), c')})> cs)

  Mrg : Merge(Case(cs), Accept(c)) -> 
        Case(<map({c': ?c'; !Merge(Accept(c), c')})> cs)
\end{code}

	\paragraph{Merging Matching Operations}

\begin{code}
rules

  Mrg : Merge(MatchVars(xs, p, c1), MatchVars(ys, p, c2)) ->
       MatchVars(<conc> (xs, ys), p, Merge(c1, c2))

  Mrg : Merge(MatchFunA(f, xs, p, c1), MatchFunA(f, ys, p, c2)) ->
       MatchFunA(f, <union> (xs, ys), p, Merge(c1, c2))

  Mrg : Merge(MatchFunA(f, xs, p, c1), MatchFunA(g, ys, p, c2)) ->
       Case([MatchFunA(f, xs, p, c1), MatchFunA(g, ys, p, c2)])
       where <not(eq)> (f, g)

  Mrg : Merge(MatchFunA(f, ys, p, c1), MatchVars(xs, p, c2)) ->
       Case([MatchFunA(f, <union> (xs, ys), p, Merge(c1, c2)),
             MatchVars(xs, p, c2)])

  Mrg : Merge(MatchVars(xs, p, c1), MatchFunA(f, ys, p, c2)) ->
       Case([MatchFunA(f, <union> (xs, ys), p, Merge(c1, c2)),
             MatchVars(xs, p, c1)])

  Mrg : Merge2(MatchVars(xs, p, c1), MatchFunA(f, ys, p, c2)) ->
        MatchFunA(f, <union> (xs, ys), p, Merge(c1, c2))

  Mrg : Merge2(MatchVars(xs, p, c1), MatchVars(ys, p, c2)) ->
        MatchVars(<conc> (xs, ys), p, Merge(c1, c2))
\end{code}

	\paragraph{Merging with Case}

\begin{code}
rules

  MrgInsert1 : 
	Merge(MatchFunA(f, xs, p, c1), Case(cs)) -> Case(cs')
        where <fetch({ys, c2: ?MatchFunA(f, ys, p, c2); 
                      !MatchFunA(f, <union> (xs, ys), p, Merge(c1, c2))})> 
              cs => cs'

  MrgInsert2 : 
	Merge(MatchFunA(f, xs, p, c1), Case(cs)) -> 
        Case([MatchFunA(f, <union> (xs, ys), p, Merge(c1, c2)) | cs])
        where <fetch(?MatchVars(ys, p, c2))> cs

  MrgInsert3 : 
	Merge(MatchFunA(f, xs, p, c1), Case(cs)) -> 
        Case([MatchFunA(f, xs, p, c1) | cs])

  Mrg : 
        Merge(MatchVars(xs, p, c1), Case(cs)) -> Case(cs')
        where 
         <map(\ c2 -> Merge2(MatchVars(xs, p, c1), c2)\ )> cs => cs'';
         ((<fetch(MatchVars(id,id,id))> cs; !cs'')
           <+ ![MatchVars(xs, p, c1) | cs'']) => cs'
\end{code}


\begin{code}
rules

  mk-merge : (a, b) -> Merge(a, b)

  C2L : Choice(s1, s2) -> <conc> (s1, s2)
strategies

  merge = mk-merge;
          topdown(repeat(Mrg <+ (MrgInsert1 <+ MrgInsert2 <+ MrgInsert3)))

  merge-automata =
	 foldr(!Accept(Fail), merge)

  choices-to-list = choicemap({x: ?x; ![x]});
                    choicebu(C2L)

  mk-automaton = 
	choices-to-list; 
	mk-automata; 
	merge-automata
\end{code}
