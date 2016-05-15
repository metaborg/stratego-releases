\literate[{\btt SUBSTITUTION}]

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
module subs
imports simple-traversal tuple list rename
\end{code}

	Substitution with simultaneous renaming of bound variables. 
	The strategy \verb|<substitute(...)> ([(x1,t1),...,(xn,tn)], t)| replaces
	the \verb|xi| by the corresponding \verb|ti|.
	See module \verb|rename| for an explanation of the parameters of the
	strategy.

\begin{code}
strategies

  substitute(isvar, bndvars, boundin, paste) = 
    ?(xs, ys, t);
    !(<zip(id)> (xs, ys), t);
    substitute-aux(isvar, bndvars, boundin, paste)

  substitute(isvar, bndvars, boundin, paste) = 
    substitute-aux(isvar, bndvars, boundin, paste)

  substitute-aux(isvar, bndvars, boundin, paste) =
    ?(sbs, t); !(t, []);
    rec x(env-alltd(RnVar(isvar)
                    <+ SubsVar(isvar, !sbs)
                    <+ RnBinding(bndvars, paste);
                       DistBinding(x,boundin)))

rules

  SubsVar(isvar, mksbs) : 
    (t, env) -> <lookup> (t, sbs)
    where <isvar(id)> t; mksbs => sbs

\end{code}

	Test occurrence of a in b 

\begin{code}
rules

  in : (a, t) -> <oncetd(?a)> t
\end{code} 

	\paragraph{Substitution}

	Given a triple (xs, ts, t) of a list of strings, a list of
	terms ts and a term t, replace each occurence in t of a
	variable x from xs by its corresponding occurence in ts; The
	parameter strategy isvar should be a rule (or choice of rules)
	of the form Var(x) -> x that recognizes the variable
	constructor and strips it away;

\begin{code}
rules

  subs(isvar) :
    (xs, ts, t) -> <subs(isvar, <zip(id)> (xs, ts))> t

strategies

  subs'(isvar, mklst) = 
	obsolete("subs'/2");
        subs(isvar, mklst)

  subs(isvar, mklst) = 
    where(mklst => lst);
    alltd(isvar; {z: \ x -> z where <fetch(?(x, z))> lst\ })

  subs_proper(isvar, ren) = 
    ?(xs, ts, t) ; 
	<zip(id)> (xs, ts) => lst ; 
	<alltd(isvar; {x, z:<<x -> <ren> z where <fetch(?(x, z))> lst >>})> t

  subs_proper'(isvar, ren, mklst) = 
    where(mklst => lst);
    alltd(isvar ; {x, z:<<x -> <ren> z where <fetch(?(x, z))> lst >>})

\end{code}