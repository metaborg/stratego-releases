\literate[Terms]
	
% $Id: terms.r,v 1.4 2000/03/18 17:21:35 visser Exp $

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

	Terms are either variables, integers, strings or applications of a
	function symbol to a list of terms. A wildcard corresponds to
	an anonymous variable. In comments after the declarations of the
	operators an example of the notation used in concrete syntax.
  
\begin{code}


module terms
imports list-cons
signature
  sorts Term 
  constructors
    Wld  :                        Term   (* _ *)
    Var  : String              -> Term   (* x *)
    Int  : Int                 -> Term   (* 0, 1, 2 ... *)
    Real : Real                -> Term   (* 0.0, 0.1, 2.3 ... *)
    Str  : String	       -> Term   (* "", "a', ... *)
    Op   : String * List(Term) -> Term   (* f(t1,...,tn) *)
\end{code} 

Remarks:

List notation [t1,...,tn] translates to Cons(t1, ..., Cons(tn, Nil))

Tuple notation (t1,...,tn) translates to TCons(t1, ..., TCons(tn, TNil))

\endliterate