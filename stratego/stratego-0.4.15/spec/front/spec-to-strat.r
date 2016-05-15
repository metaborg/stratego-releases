\literate[Specification to List of Definitions]

% $Id: spec-to-strat.r,v 1.3 2000/01/20 17:53:36 visser Exp $

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


	Translation of a specification consisting of a signature,
	rules and strategy definitions to a list of strategy
	definitions.

\begin{code}
module spec-to-sdefs
imports strategy
imports sugar
imports stratlib
imports list-sort
\end{code}

\paragraph{Congruences}

	Congruences are recognized by the parser as strategy
	calls; The following strategy generates strategy definitions
	from the signature; For instance, the operator declaration
\begin{verbatim}
     OpDecl("F", FunType([_, _], _))
\end{verbatim}
	is translated to the strategy definition
\begin{verbatim}
     SDef("F", ["x1", "x2"], Cong("F", [SVar("x1"), SVar("x2")]))
\end{verbatim}

\begin{code}
rules
  
  MkCongDef : OpDecl(f, ConstType(t)) -> SDef(f, [], Cong(f, []))

  MkCongDef : OpDecl(f, FunType(ts, t)) -> SDef(f, xs, Cong(f, <map(MkCall)> xs))
	      where <map(new)> ts => xs

  MkCongDefs : Sorts(sds)      -> []
  MkCongDefs : Operations(ods) -> <map(MkCongDef)> ods

strategies

  congdefs = map(MkCongDefs) ; concat
\end{code}

\paragraph{Rule Definitions to Strategy Definitions}

	A rule definition defines an implicitly scoped strategy
	definition;

\begin{code}
rules

  RDtoSD : RDef(f, xs, r) -> SDef(f, xs, Scope(<tvars> r, SRule(r)))
\end{code} 

\paragraph{Primitives}

\begin{code}
  AddPrimitives : sdefs -> Cons(l, sdefs)
  where 
  build([
    SDef("minus", [], Prim("minus")),
    SDef("plus",  [], Prim("plus")),

    SDef("add",   [], Prim("add")),
    SDef("subt",  [], Prim("subt")),
    SDef("mul",   [], Prim("mul")),
    SDef("div",   [], Prim("div")),

    SDef("geq",   [], Prim("geq")),
    SDef("leq",   [], Prim("leq")),
    SDef("gt",    [], Prim("gt")),
    SDef("lt",    [], Prim("lt"))
  ])
  => l

\end{code}

\paragraph{Specification to Definition List}

	Desugaring a specification consist of deriving the list of
	joined strategy definitions from its rule definitions and
	strategy definitions; The signature components are ignored;

\begin{code}
rules

  Sp0 : Specification(bspecs) -> bspecs
  Sp1 : Signature(bsigs)      -> <congdefs> bsigs
  Sp2 : Strategies(sdefs)     -> sdefs
  Sp3 : Rules(rdefs)          -> <map(RDtoSD)> rdefs

strategies

  spec-to-sdefs = Sp0;
		  map(Sp1 + Sp2 + Sp3);
		  AddPrimitives; 
        	  concat;
		  map(strename)
\end{code}
