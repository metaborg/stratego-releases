\literate

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



\paragraph{Collecting definitions with the same label}

\begin{code}
module obsolete
rules

  MkBucket: SDef(f, xs, s) -> (f, [(xs, s)])

  BucketContract : Cons((f, l1), Cons((f, l2), xs)) -> 
                   Cons((f, <conc> (l1, l2)), xs)

  JoinDefs : (f, Cons((xs, s), l)) -> SDef(f, ys, Choices(ss))
	     where <map(new)> xs => ys ;
		   <map({x: <<x -> Call(SVar(x), [])>>})> ys => ys' ; 
		   <map({zs, s: <<(zs, s) -> <ssubs> (zs, ys', s)>>})>
                     Cons((xs, s), l) => ss

strategies

   collectSDefs = map(MkBucket) ; 
                  sort(Sort((Fst, Fst) ; str_gt) + BucketContract) ;
	          map(JoinDefs)
\end{code} 

\paragraph{Sort List into Nested Let (not used)}

	Sort the sdefs in the list by the order of the call graph such
	that a definition comes after all its uses in the list

\begin{code}
rules

  CalledBy2 :
	(SDef(f, xs, s1), SDef(g, ys, s2)) ->
  	(SDef(g, ys, s2), SDef(f, xs, s1))
	where <in> (SVar(g), s1) 

  Graph : SDef(f, xs, s) -> (f , <svars> SDef(f, xs, s), SDef(f, xs, s))
 
  CalledBy : ((f, xs, sdef1), (g, ys, sdef2)) -> () 
	   where <member> (g, xs)

  Main : sdefs -> (sdefs, Call(SVar("main"), []))

  MkLet1 : (Nil, s) -> s
  MkLet2 : (Cons(sdef, sdefs), s) -> (sdefs, Let(sdef, s))

  MkMain : Nil -> Call(SVar("main"), [])
  MkLet  : (sdef, s) -> Let(sdef, s)  

strategies

  constructStrat = desugarSpec

  constructStrat2 = desugarSpec ; 
		   map(Graph) ; 
		   sort(LSort(CalledBy)) ;
		   map(Third) ;
		   foldr(MkMain, MkLet)

  constructStrat2 = desugarSpec ; 
		   map(Graph) ; 
		   sort(LSort(CalledBy)) ;
		   map(Third) ;
		   Main ;
		   repeat(MkLet1 + MkLet2)
\end{code}
