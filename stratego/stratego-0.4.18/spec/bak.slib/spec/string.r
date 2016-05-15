\literate[{\btt STRING}]

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

	This module defines some operations on strings, including
	conversions to and from numbers.

\begin{code}
module string
imports list conditional iteration

rules

  sect(op, arg) : x -> <op> (x, <arg>())

strategies
  
  new = prim("_ST_new")

  is-string = prim("_ST_is_string")

  implode-string = prim("_ST_implode_string")
  explode-string = prim("_ST_explode_string")

  conc-strings = (explode-string, explode-string); conc; implode-string

  concat-strings = map(explode-string); concat; implode-string

  int-to-string = 
    rec x(split(sect(mod, !10); sect(add, !48), sect(div, !10); int);
          (id, ?0; ![] <+ x); MkCons );
    reverse;
    implode-string

  string-to-int =
    explode-string;
    split(!0, id);
    repeat(S2I2); 
    S2I1

  escape = 
    explode-string;
    rec x(Escape; [id, id | x] <+ [id | x] <+ []);
    implode-string

rules

  Escape : [34 | cs] -> [92, 34 | cs]
  Escape : [92 | cs] -> [92, 92 | cs]

  S2I1 : (n, [])         -> n

  S2I2 : (n, [m|ms]) -> (<add>(<mul>(10, n), <subt>(m, 48)), ms)
         where <geq>(m, 48); <leq>(m, 57)

  S2D0 : (n, [46|ys])  -> (n, 10, ys)

  S2D1 : (n, f, []) -> n

  S2D2 : (n, f, [m|ms]) -> 
	 (<add>(n, <div>(<subt>(m, 48), f)), <mul>(f, 10), ms)
         where <geq>(m, 48); <leq>(m, 57)

strategies

  string-to-num =
    explode-string;
    split(!0, id);
    repeat(S2I2);
    ( S2I1
    + S2D0;
      repeat(S2D2);
      S2D1
    )

strategies

  lower-case = 
    explode-string;
    map(lc);
    implode-string

   lc = try(where(sect(geq, !65)); where(sect(leq, !90)); sect(add, !32))

rules

  SplitInit : x -> ([], [], x)

  SplitExit : 
	(xs, cs, []) -> 
	<reverse> [<reverse; implode-string> cs|xs]

  SplitNext : 
	(xs, cs, [32|ys]) -> 
	(Cons(<reverse; implode-string> cs, xs), [], ys)

  SplitNext : 
	(xs, cs, [y|ys]) -> (xs, [y|cs], ys)
	where <not(eq)> (y, 32)

strategies

  split-at-space =
    explode-string;
    SplitInit;
    rec x(SplitExit <+ SplitNext; x)  

  basename =
    explode-string;
    try(rec x([id|x] <+ ?[46 | _]; ![]));
    implode-string

  basename(ext) =
    explode-string;
    try(rec x([id|x] <+ [46 | ext]; ![]));
    implode-string

  guarantee-extension(ext) =
	basename;
	split(id, <ext>());
	add-extension

rules

  add-extension : (name, ext) -> <concat-strings> [name, ".", ext]
\end{code}
