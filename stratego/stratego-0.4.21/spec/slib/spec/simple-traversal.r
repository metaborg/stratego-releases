\literate[{\btt SIMPLE-TRAVERSAL}: One Pass Traversal]

	\begin{abstract}
	
	The primitive term traversal operators of Stratego (all, some, one)
	can be combined with the other control operators in a wide
	variety of ways to define full term traversals.
	This module defines 
	a collection of the most common generic one-pass traversals
	over terms.

	\end{abstract}

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
module simple-traversal
imports conditional
strategies
\end{code} 

	Term traversals can be categorized into classes according to
	how much of the term they traverse and to which parts
	of the term they modify.

	\paragraph{Everywhere}

	The most general class of traversals visits every node
	of a term and applies a transformation to it. The following
	operators define traversals that apply a strategy \verb|s|
	to all nodes of a term.

\begin{code}
  topdown(s)       = rec x(s; all(x))
  bottomup(s)      = rec x(all(x); s)
  downup(s)        = rec x(s; all(x); s)
  downup(s1, s2)   = rec x(s1; all(x); s2)

  downup2(s1, s2)  = rec x(s1; all(x); s2)
\end{code} 
	
	The traversals above go through all constructors. If it
	is not necessary to traverse the entire tree, the following
	versions of the traversals can be used. They are parameterized
	with a strategy operator \verb|stop| that 

\begin{code}
  topdown(s, stop)      = rec x(s; (stop(x) <+ all(x)))
  bottomup(s, stop)     = rec x((stop(x) <+ all(x)); s)
  downup(s, stop)       = rec x(s; (stop(x) <+ all(x)); s)
  downup2(s1, s2, stop) = rec x(s1; (stop(x) <+ all(x)); s2)
\end{code} 

	The strategy \verb|don't-stop| is a unit for these traversals,
	i.e., \verb|topdown(s)| is equivalent
	to \verb|topdown(s,don't-stop)|.

\begin{code}
  don't-stop(s) = fail
\end{code} 

	\paragraph{Along a Spine}

	A spine of a term is a chain of nodes from the root to some
	subterm.
	\verb|spinetd| goes down one spine and applies \verb|s| along
	the way to each node on the spine. The traversal stops when
	\verb|s| fails for all children of a node.

\begin{code}
  spinetd(s) = rec x(s; try(one(x)))
  spinebu(s) = rec x(try(one(x)); s)

  spinetd'(s) = rec x(s; (one(x) + all(fail)))
  spinebu'(s) = rec x((one(x) + all(fail)); s)
\end{code}

	\paragraph{Along all Spines}

	Apply \verb|s| everywhere along al spines where \verb|s| applies.


\begin{code}
  somespinetd(s) = rec x(s; try(some(x)))
  somespinebu(s) = rec x(try(some(x)); s)

  spinetd'(s) = rec x(s; (one(x) + all(fail)))
  spinebu'(s) = rec x((one(x) + all(fail)); s)
\end{code}

	\paragraph{Once}

	Apply s at one position. One s application has to succeed.

\begin{code}
  oncetd(s) = rec x(s <+ one(x))
  oncebu(s) = rec x(one(x) <+ s)

  oncetd-stop(s, stop) = rec x(s <+ not(stop); one(x))
\end{code} 

	\paragraph{At Least Once}

	Apply s at some positions, but at least one. As soon as one is
	found, searching is stopped, i.e., in the top-down case
	searching in subtrees is stopped, in bottom-up case, searching
	in upper spine is stopped.
	
\begin{code}
  sometd(s) = rec x(s <+ some(x))
  somebu(s) = rec x(some(x) <+ s)
\end{code}

	\paragraph{Frontier}

	Find all topmost applications of \verb|s|;

\begin{code}
  alltd(s)           = rec x(s <+ all(x))
  alldownup2(s1, s2) = rec x((s1 <+ all(x)); s2)

  downup2'-obsolete(s1, s2) = rec x((s1 <+ all(x)); s2)
\end{code}
	
	\paragraph{Leaves}


\begin{code}
  leaves(s, is-leaf, skip) = 
    rec x((is-leaf; s) <+ skip(x) <+ all(x))

  leaves(s, is-leaf) =
    rec x((is-leaf; s) <+ all(x))

  is-leaf = not(one(id))
\end{code}

	\paragraph{Many}

	Find as many applications as possible, but at least one.

\begin{code}
  manybu(s) = rec x(some(x); try(s) <+ s)
  manytd(s) = rec x(s; all(try(x)) <+ some(x))
\end{code}

\begin{code}
  somedownup(s) = rec x(s ; all(x) ; try(s) <+ some(x) ; try(s))
\end{code} 

\begin{code}
  breadthfirst(s) = rec x(all(s); all(x))
\end{code} 
