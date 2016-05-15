\literate[Instruction Simplification]

% $Id: ins-simplification.r,v 1.4 2000/06/12 14:02:32 visser Exp $

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
module ins-simplification
imports instructions list
\end{code}
	
	\paragraph{Block Flattening}

	The following rules specify the flattening of nested blocks
	into a single block with a list of instructions. This
	transformation enables peephole optimization, which optimizes
	adjacent instructions. 

	The strategy \verb|flatten-blocks| is designed to minimize
	stack-depth.

\begin{code}
rules

  BlkFlat' : Block(is) -> Block(is') 
            where <rec x(Nil + Cons(id, x) ; try(BlkFlatAux))> is => is'

  BlkFlatAux : Cons(Block(is1), is2) -> <conc> (is1, is2)

  BlkFlat1 : Cons(Block([]), is) -> is
  BlkFlat2 : Cons(Block(Cons(i, is)), is') -> 
             Cons(i, Cons(Block(is), is'))

strategies
  
  flatten-blocks = 
	rec x(try(Nil + Block(x) + 
		  Cons(id, x); 
		  rec y(try(BlkFlat1 + BlkFlat2; Cons(id, y); y))))
\end{code}

	\paragraph{Peephole Optimization}

	Some sequences of adjacent instructions can be reduced to an
	equivalent, but shorter (code size reduction) or more
	efficient sequence of instructions.

\begin{code}
rules
  PH : Cons(MatchVar(n), Cons(BuildVar(n), is)) ->
       Cons(MatchVar(n), is)

  PH : Cons(MatchFun(f, n), Cons(TravInit, Cons(AllBuild, is))) ->
       Cons(MatchFun(f, n), is)
\end{code}

 	Environment stack operations

\begin{code}
  PH : Cons(Epush(0), is) -> is

  PH : Cons(Epop(0), is) -> is

  PH : Cons(Epush(n), Cons(Epush(m), is)) ->
       Cons(Epush(<plus> (n, m)), is)

  PH : Cons(Epop(n), Cons(Epop(m), is)) ->
       Cons(Epop(<plus> (n, m)), is)
\end{code}

	Term stack operations

\begin{code}
  PH : Cons(Arg(n), Cons(Tpop, is)) -> is
\end{code}

	Redundant jumps

\begin{code}

  PH : Cons(Goto(l), Cons(Label(l), is)) ->
       Cons(Label(l), is)

  PH' : Cons(Goto(l), is[Cons(Label(l), Cons(Goto(l'), is'))]) ->
        Cons(Goto(l'), is)
\end{code}

	\paragraph{Merging Labels} 

	Two adjacent label definitions can be merged into a single
	label definitions.  This requires substituting the label that
	is left for the label that is removed in all jumps to that
	label.

\begin{code}
rules

  DblLbls : Cons(Label(l1), Cons(Label(l2), is)) ->
            Cons(LabelSubsU(l2, l1), 
            Cons(Label(l1), 
            Cons(LabelSubsD(l2, l1), is)))
\end{code}

	Applying upward substitutions

\begin{code}
  SbsU :   Cons(LabelSubsU(l2, l1), Cons(Label(l2), is)) ->
           Cons(LabelSubsU(l2, l1), Cons(Label(l1), is))

  SbsU :   Cons(LabelSubsU(l2, l1), Cons(Goto(l2), is)) ->
           Cons(LabelSubsU(l2, l1), Cons(Goto(l1), is))

  SbsU :   Cons(LabelSubsU(l2, l1), Cons(Cpush(l2), is)) ->
           Cons(LabelSubsU(l2, l1), Cons(Cpush(l1), is))

  SbsU :   Cons(LabelSubsU(l2, l1), Cons(Rpush(l2), is)) ->
           Cons(LabelSubsU(l2, l1), Cons(Rpush(l1), is))
\end{code}

	Applying downward substitutions

\begin{code}
  SbsD :   Cons(LabelSubsD(l2, l1), Cons(Label(l2), is)) ->
           Cons(Label(l1), Cons(LabelSubsD(l2, l1), is))

  SbsD :   Cons(LabelSubsD(l2, l1), Cons(Goto(l2), is)) ->
           Cons(Goto(l1), Cons(LabelSubsD(l2, l1), is))

  SbsD :   Cons(LabelSubsD(l2, l1), Cons(Cpush(l2), is)) ->
           Cons(Cpush(l1), Cons(LabelSubsD(l2, l1), is))

  SbsD :   Cons(LabelSubsD(l2, l1), Cons(Rpush(l2), is)) ->
           Cons(Rpush(l1), Cons(LabelSubsD(l2, l1), is))
\end{code}
	
	Propagating substitutions up and down the list.

\begin{code}
  Up :     Cons(i, Cons(LabelSubsU(l1, l2), is)) ->
           Cons(LabelSubsU(l1, l2), Cons(i, is))
           where not (<id> i => LabelSubsU(_,_))

  Down :   Cons(LabelSubsD(l2, l1), Cons(i, is)) ->
           Cons(i, Cons(LabelSubsD(l1, l2), is))
           where not (<id> i => LabelSubsD(_,_))
\end{code}

	Removing substitutions at top and bottom of the list.

\begin{code}
  UnSbsU : Cons(LabelSubsU(l2, l1), is) -> is

  UnSbsD : Cons(LabelSubsD(l2, l1), Nil) -> Nil
\end{code}

	\paragraph{The Strategy}

	The peephole optimization strategy.

\begin{code}
strategies

  ph = rec y(try(PH; y + SbsU + (Up; (SbsU <+ Cons(id, y)))))

  phdown = repeat(PH + DblLbls + (SbsD <+ (UnSbsD + Down)))
  phup   = repeat(PH + (SbsU <+ rec x(Up; Cons(id, try(x)))))

  peephole' = Block(listbu(ph); 
                   repeat(UnSbsU); 
		   listtd(try(SbsD <+ (UnSbsD <+ Down))))

  peephole' = Block(listdu2(phdown, phup); 
                   repeat(UnSbsU))

  peephole = try(Block(listdu(repeat(PH))))
\end{code}

\endinput

Binding of argument to variable can be done more directly

  MatchFun("Sorts");
  TravInit;
  OneNextSon;
  MatchVar(1);
  AllBuild;

Replacing an application by one of its arguments

  MatchFun("Cons");
  TravInit;
  OneNextSon;
  MatchVar(2);
  OneNextSon;
  MatchVar(1);
  AllBuild;
  BuildVar(2);

  MatchFun("Specification");
  TravInit;
  OneNextSon;
  MatchVar(1);
  AllBuild;
  BuildVar(1);

