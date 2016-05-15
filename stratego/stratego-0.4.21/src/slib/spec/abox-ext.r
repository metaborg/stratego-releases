\literate[{\btt ABOX-EXT}: Extension to ABox Interface]

	\begin{abstract}

	This module provides abstractions on top of the ABox interface
	defined in module \verb|abox|.

	\end{abstract}

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
module abox-ext
imports abox
\end{code}

	\paragraph{Overlays}

	The following overlays define abbreviations of frequently used
	constructs.

\begin{code}
overlays

  EmptyBox = H([],[])

  H0(xs)  = H([SOpt(HS(),0)],xs)
  H1(xs)  = H([],xs)
  H2(xs)  = H([SOpt(HS(),2)],xs)

  V0(xs)  = V([SOpt(VS(),0)],xs)
  V1(xs)  = V([SOpt(VS(),1)],xs)

  HV1(xs) = HV([],xs)

  Keyword(x) = FBOX(KW(), x)
  Parens(x)  = H0([S("("), x, S(")")])
  Indent(x)  = H0([S("  "), x])
\end{code}

	\paragraph{Constructor Strategies}

\begin{code}
rules

  MkS : x -> S(x)
  MkParens : x -> Parens(x)
\end{code}

	\paragraph{Separator Lists}
	
	The following strategies define various ways to format
	lists with separators.

	(*** These need to be cleaned up ***)

\begin{code}
strategies

  sep-list(s1, s2) = map(s1); separate-by(!S(<s2>()))

  hpref-sep-list(s1, s2, s3) = 
        map(s1); 
        ([] + [ \ x -> H1([<s2>(), x]) \ | hpref(s3)])

  hpref(s) = map(\ x -> H1([<s>(), x]) \)

  hpost-sep-list(s1, s2) = 
    rec y([] + [s1] <+ [\ x -> H0([<s1> x, <s2>()]) \ | y])

  semicolons = hpost-sep-list(id,!S(";"))

  presemicolons(s) = hpref-sep-list(id, s, !S(";"))
  prebars(s)       = hpref-sep-list(id, s, !S("|"))

  commas = sep-list(id,!",")
  post-commas = hpost-sep-list(id,!S(","))

rules

  HPost(s) : [x | xs] -> [H0([x, <s>()]) | xs]

  Quote : x -> H0([S(quote), x, S(quote)])
          where <implode-string> [34] => quote

  Quote' : x -> H0([S(quote), x, S(quote)])
          where <implode-string> [92, 34] => quote

  CommaList(s) : x -> H0(<sep-list(s,!", ")> x)

  MkParens : x -> Parens(x)
\end{code}
