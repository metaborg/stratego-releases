\literate[{\btt ins-simplification}]

% $Id: ins_simplification.r,v 1.3 2000/01/20 17:53:33 visser Exp $

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


\subsection{Instruction Simplification}

	The following rules specify the flattening of nested blocks into
   	a single block. 

\begin{code}
module ins-simplification
imports instructions
imports list
rules

  BlkFlat : Block(is) -> Block(is') 
            where <rec x(Nil + Cons(id, x) ; try(BlkFlatAux))> is => is'

  BlkFlatAux :  Cons(Block(is1), is2) -> <conc> (is1, is2)
\end{code}
