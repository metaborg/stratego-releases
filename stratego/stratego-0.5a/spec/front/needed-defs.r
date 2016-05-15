\literate[Needed Definitions]

% $Id: needed-defs.r,v 1.9 2001/01/31 15:47:44 visser Exp $

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

	\begin{abstract}

	Extract those definitions that are needed for the main strategy and
	join the bodies of operators with multiple definitions.

	\end{abstract}

\begin{code}
module needed-defs
imports strategy sugar stratlib list-set list-misc lib pack-graph
\end{code}

	\paragraph{Joining Definitions}

\begin{code}
strategies

  joindefs = JoinDefs1 <+ JoinDefs2

rules

  JoinDefs1 : 
    [sdef] -> sdef

  JoinDefs2 : 
    defs @ [SDef(f, xs, s) | _] -> SDef(f, ys, <choices> ss)
    where <map(new)> xs => ys;
	  <map(MkCall)> ys => ys'; 
	  <map({zs, s: ?SDef(f, zs, s); !<ssubs> (zs, ys', s)})> defs => ss
\end{code}

	\paragraph{Obtaining Needed Definitions}

\begin{code}
strategies

  choices = foldr(!Fail, \ (s1,s2) -> Choice(s1,s2) \ )

  definition-names =
    foldr(![], union, \ SDef(f,xs,_) -> [(f, <length>xs)]\ )

  all-defs = 
    \ defs -> (<definition-names> defs, defs, []) \;
    graph-nodes-undef-roots(get-definition
                           ,svars-arity
                           ,\ (_,x,d) -> [x|d] \ );
    (NoMissingDefs <+ MissingDefs; <exit> 1)

  needed-defs = 
    \ defs -> (("main", 0), defs, []) \;
    graph-nodes-undef(get-definition
                     ,svars-arity
                     ,\ (_,x,d) -> [x|d] \ );
    (NoMissingDefs <+ MissingDefs; <exit> 1)

  get-definition = 
       CongruenceDef//; debug
    <+ OverloadedDef; joindefs 
    <+ NonOverloadedDef; joindefs
\end{code}

	A strategy operator f with arity n is needed. All definitions for
	the operator are fetched and joined. Note that this entails
	that (1) operators can be overloaded and (2) there can be more
	than one definition of an operator.

\begin{code}
rules

  OverloadedDef :
    ((f, n), defs) -> fdefs
    where <filter(SDef(?f,where(length => n),id))> defs => fdefs

  NonOverloadedDef :
    ((f, 0), defs) -> fdefs
    where <filter(SDef(?f,id,id))> defs => fdefs

  CongruenceDef :
    ((Mod(c, mod), n), defs) -> fdef
    where <DefineCongruence> (c, mod, n) => fdef

  NoMissingDefs : 
    (defs, []) -> defs

  MissingDefs : 
    (defs, [f|fs]) -> defs
    where <map(MissingDefMod <+ MissingDef)> [f|fs]

  MissingDef : 
    (f, n) -> <error> ["error: operator ", f, "/", n, " undefined "]

  MissingDefMod : 
    (Mod(c, m), n) -> 
    <error> ["error: operator ", c, "^", m , "/", n, " undefined "]

\end{code}

	\paragraph{Distributing Congruences}

	For each constructor \verb|c|, there is a corresponding
	distributing congruence \verb|c^D|, defined according to
	the following scheme:

\begin{verbatim}
  c^D(s1,...,sn) : Pair(c(x1,...,xn),env) -> c(y1,...,yn)
  where <s1> Pair(x1,env) => y1;
        ...
        <sn> Pair(xn, envn) => yn
\end{verbatim}
	
	This is implemented by the following rules.

\begin{code}
overlays
  OpPair(t1, t2) = Op("Pair", [t1,t2])

rules
  DefineCongruence :
    (c, "D", n) -> 
    SDef(Mod(c, "D"), ss, Scope([env | <conc>(xs1, ys1)], 
                                SRule(Rule(OpPair(Op(c, xs2), Var(env)), 
                                           Op(c, ys2), 
                                           Seqs(conds)))))
    where new => env;
          <copy(MkDistApplication); tuple-unzip(id)> (n, Var(env)) 
              => (conds, ss, xs1, xs2, ys1, ys2)

  MkDistApplication : 
    env -> (BAM(Call(SVar(s),[]), OpPair(Var(x), env), Var(y)), 
            s, x, Var(x), y, Var(y))
    where new => s; new => x; new => y
\end{code}

	\paragraph{Threading Congruences}

	For each constructor \verb|c|, there is a corresponding
	threading congruence \verb|c^T|, defined according to
	the following scheme:

\begin{verbatim}
  c^T(s1,...,sn) : Pair(c(x1,...,xn),e-first) -> Pair(c(y1,...,yn), e-last)
  where <s1> Pair(x1,e-first) => Pair(y1,e2);
              ...;
        <sn> Pair(xn, en) => Pair(yn, e-last)
\end{verbatim}

	The following rules implement this scheme:

\begin{code}

  DefineCongruence :
    (c, "T", 0) -> 
    SDef(Mod(c, "T"), [], Scope([e], 
                                SRule(Rule(OpPair(Op(c, []), Var(e)), 
                                           OpPair(Op(c, []), Var(e)), 
                                           Id))))
    where new => e

  DefineCongruence :
    (c, "T", n) -> 
    SDef(Mod(c, "T"), ss, Scope([e-first | <concat> [es, xs1, ys1]], 
                                SRule(Rule(OpPair(Op(c, xs2), Var(e-first)), 
                                           OpPair(Op(c, ys2), Var(e-last)), 
                                           Seqs(as)))))
    where <copy(new)> (<add>(n,1), ()) => [e-first | es];
          <last> es => e-last;
          <zipr(MkThreadApplication); tuple-unzip(id)> ([e-first | es], es)
	     => (as, ss, xs1, xs2, ys1, ys2)
  MkThreadApplication : 
    (e1,e2) -> (BAM(Call(SVar(s),[]), OpPair(Var(x), Var(e1)), 
                                      OpPair(Var(y), Var(e2))), 
                s, x, Var(x), y, Var(y))
    where new => s; new => x; new => y
\end{code}
