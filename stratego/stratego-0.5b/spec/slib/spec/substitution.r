\literate[{\btt SUBSTITUTION}]

	\begin{abstract}

	Substituting terms for variables depends mainly on
	the shape of variables.
	This module implements several generic strategies for different
	styles of parallel substitution, including ones that rename
	bound variables to prevent name capture.

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

	A substitution is a mapping from variables to terms. Given a
	substitution the strategy \verb|substitute(...)| traverses
	a term and replaces variables in the domain of the mapping by
	their associated term.
	The strategy can be applied in two ways; (1) to a pair of a
	substitution and a term
\verb|<substitute(...)> (sbs, t)|
	and (2) to a triple of a list of variables, a list of (equal
	length) of terms and a term
\verb|<substitute(...)> (xs, ts, t)|. This entails that the type of
	\verb|substitute(...)| is either 
\verb|Prod([List(Prod([a,b])),b]) -> b|
	or
\verb|Prod([List(a),List(b),b]) -> b|, with \verb|a| the type of variables
	and \verb|b| the type of terms.

	There are four versions of the substitution strategy that
	depend on two factors; (1) renaming of bound variables in
	terms substituted for variables (2) renaming of bound
	variables in the context of substituted variables.

	All versions are parameterized with a strategy \verb|isvar|
	recognizing variables and mapping them to a substitution key,
	which can be the entire variable structure or just its
	name. That is, \verb|isvar| should have type \verb|b -> a|.

	The substitution strategy can be parameterized with a variable
	renaming strategy \verb|ren| (of type \verb|b -> b|) that will
	be applied to each term after it is substituted for a
	variable. This
	can be used to ensure that all bound variables are unique throughout
	an abstract syntax tree and thus prevent free variable
	capture.

	A better way to ensure that free variables are not captured
	when substituting under bindings requires renaming the bound variables
	in the context of the variables that are substituted for. This
	is achieved by combining the generic bound variable renaming techniques
	from module \verb|rename| with replacing a variable by a term.
	For this purpose there are two variants of the
	substitution strategy that are parameterized with strategies indicating
	shape of variables, the bound variables, the arguments
	that they are binding in and a replacement strategy.
	See module \verb|rename| for an explanation of these parameters.

\begin{code}
module substitution
imports simple-traversal tuple list rename

strategies

  // substitutions accept two types of input 
  // 1) a pair of a substitution (is list of pairs) and a term
  // 2) a triple of a list of variables, a list of terms that should
  //    replace them, and a term

  subs-args = 
    ?(sbs, t) <+ \ (xs, ys, t) -> (<zip(id)> (xs, ys), t) \

rules

  // replacing a variable with its value in the substitution

  SubsVar(isvar, mksbs) :
    t -> <lookup> (x, sbs)
    where <isvar> t => x; mksbs => sbs

strategies  

  // substitute variables, no regard for variable bindings, and
  // rename bound variables in substituted terms

  substitute(isvar, ren) =
    subs-args => (sbs,t); !t;
    alltd(SubsVar(isvar, !sbs); ren)

  // substitute variables, no regard for variable bindings

  substitute(isvar) =
    substitute(isvar, id)

  // substitute all variables, rename bound variables on the way down,
  // and rename the bound variables in the terms that are substituted
  // for variables using the renaming strategy ren

  substitute(isvar, varshape, bndvars, boundin, paste, ren) =
    subs-args => (sbs,t); !(t, []);
    rec x(env-alltd(RnVar(varshape)
                    <+ Fst; SubsVar(isvar, !sbs); ren
                    <+ RnBinding(bndvars, paste);
                       DistBinding(x,boundin)))

  // substitute variables and rename bound variables encountered
  // on the way to prevent variable capture, don't rename
  // substituted terms

  substitute(isvar, varshape, bndvars, boundin, paste) =
    substitute(isvar, varshape, bndvars, boundin, paste, id)
\end{code}
