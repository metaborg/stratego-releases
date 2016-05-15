\literate[{\btt UNIFICATION}]

	\begin{abstract}

	Syntactic unification, no variable bindings are taken into
	account.

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
module unification
imports list term substitution
\end{code}

	\verb|<unify(isvar)> [(t1,t2),(t3,t4),...] => [(x1,p1),(x2,p2),...]| 

	The strategy \verb|unify| unifies a list of pairs of terms and
	creates the
	most general unifier for them. The strategy is parameterized
	by a strategy \verb|isvar| that determines the shape of variables.
	The result is a list of pairs \verb|(x1,p1)|, where \verb|x1| is
	a term for which \verb|isvar| succeeds and \verb|p1| is the term
	it should be substituted with to unify the terms.

\begin{code}
strategies
  
  equal = 
    for(id ,[], UfIdem <+ UfDecompose)

rules 

  UfIdem : 
    [(x,x) | ps] -> ps

  UfDecompose : 
    [(f#(xs), f#(ys)) | ps] -> <conc>(<zip(id)>(xs, ys), ps)

strategies

  diff =  
    for(\ ps -> ([],ps) \ , (id,[]), (id, UfIdem <+ UfDecompose) <+ UfShift)

rules

  UfShift :
    (ps1, [p | ps2]) -> ([p | ps1], ps2)
    
strategies

  unify(isvar) = 
    for(\ pairs -> (pairs, []) \
       ,\ ([], sbs) -> sbs \
       ,(UfIdem, id) <+ UfVar(isvar) + UfSwap(isvar) <+ (UfDecompose, id))

rules

  UfVar(isvar) : 
	([(x,y) | ps], sbs) -> (ps', [(x, y) | sbs''])
	where <isvar> x; <not(in)>(x,y); 
              ?(sbs'', ps') <= <substitute(isvar)> ([(x,y)], (sbs, ps))

  UfSwap(isvar) : 
	([(x,y) | ps], sbs) -> ([(y,x) | ps], sbs)
	where <not(isvar)> x; <isvar> y

rules

  // Test occurrence of a in b 

  in : (a, t) -> <oncetd(?a)> t

strategies

  equal(fltr) =
    for(id ,[], UfIdem <+ try([(fltr,fltr)|id]); UfDecompose)
\end{code}
