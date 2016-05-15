\literate[optimization3]

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
module optimization3
imports strategy

rules

(* Decomposing Match *)

  MkVar : x -> Var(x)

  M : Match(Op(f, ts)) -> Seq(Match(Op(f, xs)), ms)
      where <map(new ; MkVar)> ts => xs ;
            <zip(M')> (xs, ts) => ms

  M' : (x, t) -> Seq(Build(x), Match(t))

(* Merging Matches *)

  M : Choice(Seq(Match(Op(f, xs)), s1),
	     Seq(Match(Op(f, xs)), s2)) ->
      Seq(Match(Op(f, xs)), Choice(s1, s2))
\end{code}
