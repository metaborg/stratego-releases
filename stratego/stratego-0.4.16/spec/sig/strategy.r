\literate[Strategies]
	
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


	In this module we define the operators of the core strategy
	language that will be used to express all programs in the
	high-level language.

\begin{code}
module strategy
imports terms
imports list-cons
\end{code} 

	\paragraph{Sequential Non-deterministic Programs}
	
	The following operators provide a language for sequential
	non-deterministic programming.

\begin{code}
signature
  sorts SVar Strat SDef
  constructors
    Id      :                                  Strat    (* id *)
    Fail    :                                  Strat    (* fail *)

    Test    : Strat                         -> Strat    (* test s *)
    Not     : Strat                         -> Strat    (* not s *)

    Seq     : Strat * Strat                 -> Strat    (* s1 .  s2 *)
    Choice  : Strat * Strat                 -> Strat    (* s1 +  s2 *)
    LChoice : Strat * Strat                 -> Strat    (* s1 <+ s2 *)
    
    SVar    : String                        -> SVar
    Rec     : String * Strat                -> Strat    (* rec x . s *)
    Let     : SDef * Strat                  -> Strat    (* let sdef in s2 *)
    SDef    : String * List(String) * Strat -> SDef     (* f(xs) = s *)
    Call    : SVar * List(Strat)            -> Strat    (* f(ss) *)
\end{code}

	\paragraph{Traversal Operators}

\begin{code}
    Path    : Int * Strat                   -> Strat    (* i(s) *)
    Cong    : String * List(Strat)          -> Strat    (* f(s1,...,sn) *)
    One     : Strat                         -> Strat    (* one(s) *)
    Some    : Strat                         -> Strat    (* some(s) *)
    All     : Strat                         -> Strat    (* all(s) *)
    Kids    :                                  Strat    (* kids *)
    Thread  : Strat                         -> Strat    (* thread(s) *)
\end{code}

	\paragraph{Matching and Building}

\begin{code}
signature
  constructors
    Match    : Term                          -> Strat    (* match(s) *)
    Build    : Term                          -> Strat    (* build(s) *)
    MatchVar : String                        -> Strat    (* matchv(x) *)
    MatchFun : String                        -> Strat    (* matcho(f) *)

    Scope   : List(String) * Strat          -> Strat    (* {xs: s} *)
    Where   : Strat                         -> Strat    (* where s *)
\end{code}

	\paragraph{Annotation}

\begin{code}
    Mark    : Term                          -> Strat    (* ! t *)
    IsMark  : Term                          -> Strat    (* ? t *)

    AnnBuild  : Term * Term                 -> Strat
    AnnMatch  : Term * Term                 -> Strat
    AnnRemove : Term                        -> Strat

\end{code} 

	\paragraph{Primitives}

	Example primitives for Integers are: Plus, Minus, Geq,
    	NewInt (generate new integer), etc. *)

	Strings New, StrConc 

\begin{code}
signature
  constructors
    Prim    : String -> Strat

    CountRule : String -> Strat
\end{code} 
