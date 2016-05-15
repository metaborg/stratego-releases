\literate[{\btt ENV-TRAVERSAL}]

% Copyright (C) 2000 Eelco Visser <visser@acm.org>
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
module env-traversal
rules

  dist(s) : (t, env) -> <all(\x -> <s>(x,env)\)> t

  d(s) : Pair(t, env) -> <s> t

  t(s) : Pair(t, env) -> Pair(<s>t, env)

  coll(s) : f#(xs) -> (f#(ys), zs)
	    where <unzip(s)> xs => (ys, zs)

strategies

  env-alltd(s) = rec x(s <+ dist(x))

  env-topdown(s, skip) = rec x(s; (skip(x) <+ dist(x)))

  env-bottomup(s) = rec x(split(dist(x), Snd); s)
\end{code}
