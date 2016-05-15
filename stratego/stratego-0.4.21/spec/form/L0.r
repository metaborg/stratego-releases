\literate[L0]

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
module L0
imports strategy
strategies

  string = id
  int = id

  basic-term(x) =
    Var(string)
  + Int(int)
  + Str(string)
  + Op(string, map(x))

  basic-strat(x) = 
    Id
  + Fail
  + Seq(x, x)
  + LChoice(x, x)
  + Choice(x, x)
  + Not(x)
  + Test(x)
  + Scope(map(string), x)
  + Rec(string, x)
  + Let(SDef(string, map(string), x), x)
  + Cal(SVar(string), map(x))
  + Path(int, x)
  + Cong(string, map(x))
  + One(x)
  + Some(x)
  + All(x)
  + Kids 
  + Where(x)
  + Prim(string)
  + CountRule(string)
\end{code}
	
	\paragraph{L0}

	Terms have contexts and applications

\begin{code}
strategies

  m-term = rec x(term(x))

  mc-term = rec x(
    basic-term(x)
  + Con(Var(string), x, string)
  )

  b-term(strat) = rec x(
    basic-term(x)
  + App(strat, x)
  )  

  bc-term(strat) = rec x(
    basic-term(x)
  + Con(Var(string), x, string)
  + App(strat, x)
  )

  L0-strat = rec x(
    basic-strat(x)
  + BA(x, b-term(x))
  + AM(x, m-term(x))
  + Match(m-term(x))
  + Build(b-term(x))
  + SRule(Rule(mc-term, bc-term(x), x))
  )

  type = FunType(map(id), id) + ConstType(id)

  sig = Signature(map(Sorts(map(Sort(string, id))) + 
		      Operations(map(OpDecl(string, type)))))

  rdef = RDef(string, map(string), Rule(term(strat), term(strat)
  rdefs = Rules(map(rdef))

  section = sig + rdefs + sdefs

  L0 = Specification(map(section))
\end{code}
