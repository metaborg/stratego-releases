\literate[Special Patterns]

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



	This module defines exceptions to the normal compiler rules by
	recognizing patterns that can be implemented in a more
	efficient way.

\begin{code}
module specialized
imports compiler stratego-laws
\end{code}

	\paragraph{Repeat}

	A repetition of a strategy \verb|s1| for 0 or more times,
	terminated with an application of a strategy \verb|s2| can be
	translated into a loop structure. Only one \verb|Cpush| is
	performed to deal with failure of the loop body. This has the
	effect that two copies of the subject term are on the stack.
	The loop body works on the top-most. If the body succeeds,
	this term can be committed and `saved' by copying it over the
	term under the top of the stack.

	The pattern \verb|Repeat(s1, s2)| is an overlay that is
	defined below.

\begin{code}
rules

 Cspecial :: Instr(Repeat(?s1, ?s2), ?env, ?rcs) -->
       ! Block([Cpush(end_loop),
	       Label(loop),
	       Instr(s1, env, rcs),
	       Tduplinv,
	       Goto(loop),
	       Label(end_loop),
	       Instr(s2, env, rcs)])
       where new => loop; new => end_loop
\end{code}

	This is an instance of tail recursion that can be further
	generalized to arbitrary many loop bodies. In that
	generalization we might consider the following rule which is
	not applicable in general because of backtracking:
\begin{verbatim}
        Choice(Seq(s1, Call(SVar(x), [])), Seq(s2, Call(SVar(x), []))) ->
        Seq(Choice(s1, s2), Call(SVar(x), []))
\end{verbatim}
	It is applicable when the strategies \verb|s1| and \verb|s2|
	are mutually exclusive, i.e., if \verb|s1| succeeds, \verb|s2|
	cannot possibly succeed.

	The \verb|Repeat(s1, s2)| overlay. The overlay recognizes the pattern
	of the \verb|repeat| strategy operator from the library:
\begin{verbatim}
        repeat(s) = rec x((s; x) <+ id)
\end{verbatim}
	but generalized to arbitrary terminators (other than
	\verb|id|). The overlay transforms the first argument of the
	\verb|LChoice| to a left-associative pattern. The result
	should be a sequential composition with the recursion variable
	as second argument and a strategy as first argument, where the
	recursion variable does not appear in the strategy. The second
	definition takes care of the presence of \verb|CountRule|
	strategies, which are added by the frontend for profiling.

\begin{code}
strategies

  Repeat(s1, s2) = 
	{x: Rec(?x, LChoice(repeat(LAss); 
                            Seq(not(oncetd(SVar(?x))); s1, 
                                Call(SVar(?x), [])) 
			   ,not(oncetd(SVar(?x))); s2))}

  Repeat(s1, s2) =
	{x, s1', str: 
         Rec(?x, LChoice(repeat(LAss); 
                         ?Seq(s1', Seq(Call(SVar(x), []), Countrule(str))); 
                         !Seq(Seq(s1', CountRule(str)), Call(SVar(x), [])); 
			 Seq(not(oncetd(SVar(?x))); s1, id)
			,not(oncetd(SVar(?x))); s2))}
\end{code}

  	\paragraph{Matching Only Traversals}

	If a traversal is matching only it does not need to rebuild
	the subject term after inspection; the original subject term
	is not transformed. This should be done for all traversals in
	general, but we try it out first for the oncetd traversal from
	the library.

\begin{code}
strategies

  IsMatch = not(oncetd(Build(id)))

  Oncetd(s) = {x: Rec(?x, LChoice(s, One(Call(SVar(?x), []))))}

  Cspecial = CsOncetd
\end{code}

\begin{code}
rules

  CsOncetd :: 
    Instr(Oncetd(?s; IsMatch), ?env, ?rcs) -->
    ! Block([
	Rpush(endloop),
	Label(startloop),
	Cpush(else),
	Instr(s, env, rcs),
	Cpop,
	Goto(repeat),
	Label(else),
	IsAppl,
	MatchTravInit,
	Label(nextson),
	OneMatchNextSon,
	Cpush(nextson),
	Rpush(doneit),
	Goto(startloop),
	Label(doneit),
	Cpop,
	MatchTravEnd,
	Label(repeat),
	Return,
	Label(endloop)
     ])
     where new => startloop; 
           new => else; 
           new => nextson; 
           new => doneit; 
           new => repeat; 
           new => endloop
\end{code}

	\paragraph{Fetch}

\begin{code}
strategies

  Fetch(s) = {x:
    Rec(?x, LChoice(Cong("Cons", [s, Id]),
                    Cong("Cons", [Id, Call(SVar(?x),[])])))}

  Fetch(s) = {x:
    Rec(?x, LChoice(Seq(Cong("Cons",[s,Id]), CountRule("Cons")),
                    Seq(Cong("Cons",[Id,Call(SVar(?x),[])]), CountRule("Cons"))))}

  Cspecial = CsFetch

rules

  CsFetch ::
    Instr(Fetch(?s; IsMatch), ?env, ?rcs) -->
    ! Block([
	Tdupl,
	Label(a),
	TestFunTop(VAR(lab)),
        Cpush(b),
	Arg(0),
	Instr(s, env, rcs),
	Tpop,
	Cpop,
	Goto(end),
	Label(b),
	Arg(1),
	Tdrop,
	Goto(a),
	Label(end),
	Tpop,
      ])
   where new => a; new => b; new => end;
	 <get-afun> AFun("Cons", 2) => lab

\end{code}

	This can be generalized to other traversals that have
	congruences with recursive calls, if the recursive call is
	only to one of the children and the others are identities.
