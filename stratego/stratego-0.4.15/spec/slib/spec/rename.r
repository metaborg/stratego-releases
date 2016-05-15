\literate[{\btt RENAME}: Renaming Bound Variables]

	\begin{abstract}

	Renaming of bound variables is determined by the shape of
	variables and binding constructs.

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

\begin{boxedfigure}{}{Generic renaming of bound variables}
\begin{code}
module rename
imports simple-traversal tuple list env-traversal
strategies

  rename(isvar, bndvars, boundin, paste) = 
    \ t -> (t, []) \ ;
    rec x(env-alltd(RnVar(isvar)
                    <+ RnBinding(bndvars, paste);
                       DistBinding(boundin, x)))

rules

  RnVar(isvar) :
    (t, env) -> <isvar(split(id, !env); lookup)> t

  RnBinding(bndvrs, paste) :
    (t, env1) -> (<paste(!ys)> t, env1, env2)
    where <bndvrs> t => xs; map(new) => ys; 
          <conc>(<zip(id)>(xs,ys), env1) => env2

  DistBinding(boundin, s) :
    (t, env1, env2) -> <boundin(\x -> <s>(x, env2)\
                               ,\x -> <s>(x, env1)\
                               ,id)> t
\end{code}
\end{boxedfigure}

	Variable binding constructs declare local variables.

	Variables inside a binding can be renamed without affecting
	the meaning of the program.

	Renaming depends on the shape of variable bindings and
	variable occurences. Other language constructs are irrelevant.

	Assumptions about binding constructs

	- there is a subtree that covers the scope in which the
	variables are bound

	- variables are atomic, i.e., do not contain subterms that are
	variables or binding constructs

	Approach: indicate shape of variable occurences and variable
	binders

	The strategy \verb|rename(isvar, mkvar, bnd)| renames all
	bound variables in a term to fresh variables;

	Parameters:

  	isvar: Succeeds if applied to a variable

  	newvar: Takes a string and builds a variable

  	bnd: Maps a binding construct to the list of bound variables

  	apply(a, b, c): reconstruct the binding construct with fresh
  	variables;

	- a should be applied to the subterm containing the
	variable(s)

	- b should be applied to the subterms in which the variables
	are bound

	- c should be applied to the subterms in which the variables
	are not bound;

\begin{boxedfigure}{}{Example: Untyped lambda calculus}
\begin{verbatim}
signature
  sorts Exp
  constructors
    Abs : String * Exp -> Exp
    Var : String -> Exp
rules

  Bnd : Abs(x, e) -> [x]

strategies

  ern_apply(nwvars, bndvars, ubndvars) =
	Abs(nwvars; Hd, bndvars)

  erename = rename''(Var, Bnd, ern_apply)
\end{verbatim}
\end{boxedfigure}

\begin{boxedfigure}{}{Example: Typed lambda calculus}
\begin{verbatim}
signature
  sorts Exp
  constructors
    Abs    : String * Type * Exp -> Exp
    Var    : String * Type -> Exp
    Letrec : List(Fdec) * Exp -> Exp
    Fdec   : String * Type * Exp -> Fdec
rules

  Bnd : Abs(x, t, e) -> [x]
  Bnd : Letrec(fdecs, e) -> <map(Name)> fdecs

  Name : Fdec(f, t, e) -> f

strategies

  is-var(s) = Var(s, id)

  ern_apply(nwvars, bndvars, ubndvars) =
	Abs(nwvars; Hd, bndvars) +
	Letrec(split(id,nwvars); zip(f(bndvars)), bndvars)

  f(bndvars) : (Fdec(f, t, e), g) -> Fdec(g, t, <bndvars> e)

  erename = rename''(is-var, Bnd, ern_apply)
\end{verbatim}
\end{boxedfigure}

