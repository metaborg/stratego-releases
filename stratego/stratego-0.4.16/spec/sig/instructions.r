\literate[Instructions]

% $Id: instructions.r,v 1.5 2000/06/12 14:07:53 visser Exp $

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
module instructions
imports list-cons
signature
  sorts Instr
  constructors
    Label  		: String -> Instr
    Goto   		: String -> Instr
    Block  		: List(Instr) -> Instr

    Iprim  		: String -> Instr
    Iprim2  		: String * String -> Instr
    ICountRule		: String -> Instr
\end{code} 

	Term stack 

\begin{code}
    Tpush	 	: Instr
    Tpop  		: Instr
    Tdupl 		: Instr (* duplicate top of T stack *)
    Tduplinv 		: Instr (* duplicate top of T stack *)
    Tdrop		: Instr

    TpushIthSon 	: Int -> Instr
    TputIthSon 		: Int -> Instr
    IsAppl		: Instr

    MatchVar 		: Int -> Instr
    MatchVard 		: Int * Int -> Instr
    MatchFun 		: String * Int -> Instr
    MatchFunFC 		: String * Int * String -> Instr
    BuildVar 		: Int -> Instr
    BuildVard 		: Int * Int -> Instr
    BuildFun 		: String * Int -> Instr

    GetAnn		: Instr
    SetAnn		: Instr
    RemoveAnn		: Instr
\end{code} 

	Choice stack 

\begin{code}
    Cpush 		: String -> Instr
    Cpop  		: Instr	
    Crestore 		: Instr
    Cjump		: Instr
\end{code} 

	Return stack 

\begin{code}
    Rpush 		: String -> Instr
    Return 		: Instr
\end{code} 

	Environment stack 

\begin{code}
    Epush 		: Int -> Instr
    Epop  		: Int -> Instr
\end{code} 

	Counters 

\begin{code}
    NewCounter 		: Instr
    CloseCounter	: Instr
    CounterOK		: Instr
\end{code} 

	Traversal 

\begin{code}
    AllInit		: Instr
    AllNextSon		: String -> Instr
    AllBuild		: Instr

    OneInit		: Instr
    OneNextSon		: Instr
    OneBuild		: Instr
 
    SomeInit		: Instr
    SomeNextSon		: String -> Instr
    SomeBuild		: Instr

    TravInit		: Instr
    MatchTravInit	: Instr
    MatchTravEnd	: Instr
    OneMatchNextSon	: Instr
\end{code} 

	Maybe needed in future ? 

\begin{code}
    ProcCall 	: String * List(Int) -> Instr
    DBlock 	: List(RegDecl) * List(Instr) -> Instr
\end{code}
