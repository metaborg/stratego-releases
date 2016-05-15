\literate[{\btt TERM}]

% Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>
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

	Some primitives for the manipulation of terms.

	\verb|<mkterm> (f, [t1,...,tn])| builds the constructor application
	\verb|f(t1,...,tn)|

	\verb|<explode-term> f(t1,...,tn)| is the inverse of \verb|mkterm|
	and produces \verb|(f, [t1,...,tn])|

	Note: the primitive strategies \verb|mkterm| and \verb|explode-term|
	have been turned into language constructs. The pattern
	\verb|f#(xs)| denotes
	the decomposition of a term into its function symbol \verb|f| and
	its \emph{list} of arguments \verb|xs|. This pattern can be
	used in matching \verb|?f#(xs)| and building \verb|!f#(xs)|
	terms (so also in left- and right-hand sides of rules) and also
	as a congruence \verb|s1#(s2)|.

	\verb|<address-lt> (t1, t2)| compares the address of two terms
	and succeeds if the address of the first is smaller than the
	address of the second. This predicate induces a total ordering
	on terms and can be used to sort terms. Note that this
	relation is valid in one session (but what happens after
	rehashing), but not necessarily between two sessions.

	\verb|<address> t| replaces \verb|t| with its address (an integer).
	This can be used to obtain a unique symbolic reference to a term.

\begin{code}
module term
strategies

  mkterm       = prim("_ST_mkterm")
  explode-term = prim("_ST_explode_term")
  address-lt   = prim("_ST_address_lt")
  address      = prim("_ST_address")
\end{code}
