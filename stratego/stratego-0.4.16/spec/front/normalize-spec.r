\literate[{\tt NORMALIZE-SPEC}]
	
% $Id: normalize-spec.r,v 1.7 2000/06/19 21:00:22 visser Exp $

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
module normalize-spec
imports stratego lib
\end{code}

	The first phase of the front-end is the normalization of
	specifications. A specification consists of a list of basic
	specifications (signatures, overlays, rules and strategy
	definitions) in any order. Normalization collects the basic
	specifications of each kind and creates a specification of the
	form
\begin{verbatim}
  Specification([Signature(id),
                 Overlays(id),
                 Rules(id),
                 Strategies(id)])
\end{verbatim}

\begin{code}
rules

  BSpecs : Specification(bspecs) -> bspecs

  NormBSIG : Operations(ods) -> ods
  NormBSIG : Sorts(ss) -> []

  NormBSP : Signature(bsigs)  -> (<normalize-sigs> bsigs, [], [], [])
  NormBSP : Strategies(sdefs) -> ([], [], [], sdefs)
  NormBSP : Rules(rdefs)      -> ([], [], rdefs, [])
  NormBSP : Overlays(ols)     -> ([], ols, [], [])

  Combine : ((ods1, ols1, rdefs1, sdefs1), (ods2, ols2, rdefs2, sdefs2)) ->
	    (<conc> (ods1, ods2), 
             <conc> (ols1, ols2), 
             <conc> (rdefs1, rdefs2), 
             <conc> (sdefs1, sdefs2))

  MkSpec : (ods, ols, rdefs, sdefs) -> 
           Specification([Signature([Operations(ods)]),
			  Overlays(ols),
                          Rules(rdefs),
                          Strategies(sdefs)])

strategies

  normalize-sigs = 
        map(NormBSIG);
        concat 

  normalize-specIO = iowrap(normalize-spec)

  normalize-spec =
        BSpecs; 
        map(NormBSP); 
        foldr(!([], [], [], []), Combine);
        MkSpec;
        Specification(vars-to-consts);
        define-lrules
\end{code}

	Furthermore, the grammar cannot distighuish term variables
	from unary constructors. This distinction can only be made
	based on the signature. Variables are renamed to operator
	applications by duplicating the specification and mapping one
	specification to a substitution.

\begin{code}
rules

  Names   : Signature(bsigs) -> <filter(OpNames); concat> bsigs
  OpNames : Operations(ods)  -> <filter(OpName)> ods
  OpName  : OpDecl(f, ConstType(_)) -> f

  Names   : Overlays(ols) -> <filter(OLName)> ols
  OLName  : Overlay(x, [], t) -> x

  Triple : ((x, y), z) -> (x, y, z)

strategies

  vars-to-consts = split(filter(Names); concat; 
                         split(id, map({x: ?x; !Op(x,[])}))
                        ,id);
		   Triple;
                   tsubs
\end{code}

\begin{code}
rules

  UnaryConstructorName : OpDecl(f, ConstType(_)) -> f
  UnaryConstructorName : Overlay(x, [], t) -> x

strategies

  vars-to-consts' = 
	split(collect(UnaryConstructorName);
              split(id, map({x: ?x; !Op(x,[])}))
             ,id);
	Triple;
        tsubs
\end{code}

\begin{code}
rules

  DefLRule : LRule(Rule(t1, t2, s)) -> 
	     Scope(<tvars> t1, SRule(Rule(t1, t2, s)))

strategies

  define-lrules = topdown(try(DefLRule))

\end{code}
