\literate[Simplification]

% $Id: simplification.r,v 1.5 2000/06/12 14:03:19 visser Exp $

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


	This module specifies basic simplification rules for strategies.

\begin{code}
module simplification
imports strategy
\end{code}

 	\subsubsection{Identity}

\begin{code}
rules
  I1 : Test(Id)         -> Id
  I2 : Not(Id)          -> Fail
  I3 : Seq(Id, s)       -> s
  I4 : Seq(s, Id)       -> s   
  I5 : Choice(s, Id)    -> s  
  I6 : Choice(Id, s)    -> s  
  I7 : LChoice(Id, s)   -> Id
  I8 : Scope(xs, Id)    -> Id
  I9 : Rec(x,Id)        -> Id
  I10 : All(Id)         -> Id
  I11 : Path(i,Id)      -> Id 
  I12 : Where(Id)       -> Id
  I14 : CongWld(ss)     -> Id where <map(?Id)> ss
  I15 : App(Id, t)      -> t
  I16 : Match(Wld)      -> Id

  I13 : Cong(f, ss)     -> MatchFunA(Fun(f, <length> ss), [], [], Id)
        where <map(?Id)> ss
strategies

  ElimId = I1 + I2 + I3 + I4 + I5 + I6 + I7 + I8 + I9 + I10 + 
           I11 + I12 + I13 + I14 + I15 + I16   
\end{code}

	Note that the following rules are not sound
\begin{verbatim}
rules
  NotValid : One(Id)          -> Id
  NotValid : Some(Id)         -> Id
\end{verbatim}

	\subsubsection{Failure}

\begin{code}
rules
  F1  : Test(Fail)       -> Fail
  F2  : Not(Fail)        -> Id
  F3  : Seq(Fail, s)     -> Fail
  F4  : Seq(s, Fail)     -> Fail
  F5  : Scope(xs, Fail)  -> Fail
  F6  : Rec(x,Fail)      -> Fail
  F7  : Some(Fail)       -> Fail
  F8  : One(Fail)        -> Fail
  F9  : Path(i,Fail)     -> Fail 
  F10 : Cong(f, ls)      -> Fail where <fetch(?Fail)> ls 
  F11 : Choice(Fail, s)  -> s
  F12 : Choice(s, Fail)  -> s
  F13 : LChoice(Fail, s) -> s
  F14 : LChoice(s, Fail) -> s
  F15 : Where(Fail)      -> Fail
  (* F : Case([])         -> Fail *)
strategies

  F = F1 + F2 + F3 + F4 + F5 + F6 + F7 + F8 + F9 + F10 + 
      F11 + F12 + F13 + F14 + F15
\end{code}

	Note that the following rule is not sound
\begin{verbatim}
rules

  NotValid : All(Fail) -> Fail
\end{verbatim}

	\paragraph{Commutativity and Associativity}

\begin{code}
rules

  Comm : Choice(x, y) -> Choice(y, x)

  Ass : Choice(Choice(x, y), z)   -> Choice(x, Choice(y, z))
  Ass : Seq(Seq(x, y), z)         -> Seq(x, Seq(y, z))
  Ass : LChoice(LChoice(x, y), z) -> LChoice(x, LChoice(y, z))
 
  LAss: Seq(s1, Seq(s2, s3)) -> Seq(Seq(s1, s2), s3)
\end{code}

	\paragraph{Idempotence}

\begin{code}
  P : Choice(x, x)  -> x
  P : LChoice(x, x) -> x

  P' : Choice(s, s'[s]) -> s'[s](conChoice)
  P' : LChoice(s, s'[s]) -> LChoice(s, s'[Id](conLChoice))

  P : Where(Where(s))  -> Where(s)
  P : Not(Not(s)) -> Test(s)
  P : Test(Test(s)) -> Test(s)

  P : Where(Seq(Where(s1), Seq(Build(t), s2))) ->
      Where(Seq(s1, Seq(Build(t), s2)))
\end{code}
