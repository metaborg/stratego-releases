\literate[{\btt INTEGERS}]

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
module integers
strategies

  is-int = prim("_ST_is_int")

  minus = prim("_ST_minus")
  plus 	= prim("_ST_plus")

  add	= prim("_ST_add")
  subt 	= prim("_ST_subt")
  mul 	= prim("_ST_mul")
  div 	= prim("_ST_div")
  mod 	= prim("_ST_mod")
  
  geq 	= prim("_ST_geq")
  gt 	= prim("_ST_gt")
  lt    = not(geq)
  leq   = not(gt)

  max 	= prim("_ST_max")
  min 	= prim("_ST_min")

  int   = prim("_ST_int")

  int-to-string = prim("_ST_int_to_string")
  string-to-int = prim("_ST_string_to_int")
\end{code}
