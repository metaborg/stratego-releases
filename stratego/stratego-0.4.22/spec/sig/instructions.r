\literate[Instructions]

% $Id: instructions.r,v 1.9 2000/10/30 00:22:18 visser Exp $

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
  sorts Program
  constructors
    Program : Preamble * Instr -> Program

  constructors
    PROCDECL		: String -> Instr
    PROC		: String -> Instr
    ENDPROC		: Instr
    Ccall		: String * List(Null) -> Instr

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
    NotNULLd : Int * Int -> Instr
    Ccontinue : String -> Instr

    ATmakeString : String -> TermExp
    MakeInt : Int -> TermExp

    App0 : String -> TermExp
    App1 : String * TermExp -> TermExp
    App2 : String * TermExp * TermExp -> TermExp
    App3 : String * TermExp * TermExp * TermExp -> TermExp
    App4 : String * TermExp * TermExp * TermExp * TermExp -> TermExp
    App5 : String * TermExp * TermExp * TermExp * TermExp * TermExp -> TermExp
    App6 : String * TermExp * TermExp * TermExp * TermExp * TermExp * TermExp -> TermExp

    AppN : String * TermExp -> TermExp

    Egetd : Int * Int -> TermExp
 
    Tset		: TermExp -> Instr

    Tpush	 	: Instr
    Tpop  		: Instr
    Tdupl 		: Instr (* duplicate top of T stack *)
    Tduplinv 		: Instr (* duplicate top of T stack *)
    Tdrop		: Instr

    TpushIthSon 	: Int -> Instr
    TputIthSon 		: Int -> Instr
    IsAppl		: Instr

    MatchVar 		: Int -> Instr
    MatchInt 		: Int -> Instr
    MatchString 	: String -> Instr
    MatchVard 		: Int * Int -> Instr
    MatchFun 		: String * Int -> Instr
    MatchFunFC 		: String * Int * String -> Instr

    BuildVar 		: Int -> Instr
    BuildInt 		: Int -> Instr
    BuildVard 		: Int * Int -> Instr
    BuildFun 		: String * Int -> Instr
    BuildStr 		: String -> Instr

    GetAnn		: Instr
    SetAnn		: Instr
    RemoveAnn		: Instr

    Arg : Int -> Instr
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
    Epushd 		: Int * Int -> Instr
    Epop  		: Int -> Instr
    Epopd  		: Int * Int -> Instr
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

\begin{code}

	Move	: Int * Int * Int * Int	-> Instr
	MoveTop	: Int * Int	-> Instr
	MoveArg	: Int * Int * Int * Int * Int	-> Instr
	TestFun	: Int * Int * String * Int * String	-> Instr
	TestStr	: Int * Int * String * String	-> Instr
	TestInt	: Int * Int * Int * String	-> Instr
	TestReal: Int * Int * Real * String	-> Instr

\end{code}
