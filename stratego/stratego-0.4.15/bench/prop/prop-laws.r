\literate[{\btt prop-main}]
% Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>
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
module prop-laws
imports prop
rules

  AA    : And(And(x, y), z) -> And(x, And(y, z))
  AO    : Or(Or(x, y), z) -> Or(x, Or(y, z))
  AI    : Impl(Impl(x, y), z) -> Impl(x, Impl(y, z))
  AE    : Eq(Eq(x, y), z) -> Eq(x, Eq(y, z))
  
  CA    : And(x, y) -> And(y, x) 
  CO    : Or(x, y) -> Or(y, x)
  CE    : Eq(x, y) -> Eq(y, x)

  IDA   : And(x, x) -> x
  IDO   : Or(x, x) -> x
  IDI   : Impl(x, x) -> True
  IDE   : Eq(x, x) -> True

  DAOL  : And(Or(x, y), z) -> Or(And(x, z), And(y, z))
  DAOR  : And(z, Or(x, y)) -> Or(And(z, x), And(z, y))
  DOAL  : Or(And(x, y), z) -> And(Or(x, z), Or(y, z))
  DOAR  : Or(z, And(x, y)) -> And(Or(z, x), Or(z, y))

  DN    : Not(Not(x)) -> x

  DMA   : Not(And(x, y)) -> Or(Not(x), Not(y))
  DMO   : Not(Or(x, y))  -> And(Not(x), Not(y))
  DMI   : Not(Impl(x, y)) -> And(x, Not(y))
  DME   : Not(Eq(x, y)) -> Or(And(Not(x), y), And(x, Not(y)))

  DefN  : Not(x) -> Impl(x, False)
  DefI  : Impl(x, y) -> Or(Not(x), y)
  DefE  : Eq(x, y) -> And(Impl(x, y), Impl(y, x))
  DefO1 : Or(x, y) -> Impl(Not(x), y)
  DefO2 : Or(x, y) -> Not(And(Not(x), Not(y)))
  DefA1 : And(x, y) -> Not(Or(Not(x), Not(y)))
  DefA2 : And(x, y) -> Not(Impl(x, Not(y)))

  IDefI : Or(Not(x), y) -> Impl(x, y)
  IDefE : And(Impl(x, y), Impl(y, x)) -> Eq(x, y)


rules

  AA(s)    : And(And(x, y), z) -> <s>And(x, <s>And(y, z))
  AO(s)    : Or(Or(x, y), z) -> <s>Or(x, <s>Or(y, z))
  AI(s)    : Impl(Impl(x, y), z) -> <s>Impl(x, <s>Impl(y, z))
  AE(s)    : Eq(Eq(x, y), z) -> <s>Eq(x, <s>Eq(y, z))
  
  CA(s)    : And(x, y) -> <s>And(y, x) 
  CO(s)    : Or(x, y) -> <s>Or(y, x)
  CE(s)    : Eq(x, y) -> <s>Eq(y, x)

  IDA(s)   : And(x, x) -> x
  IDO(s)   : Or(x, x) -> x
  IDI(s)   : Impl(x, x) -> <s>True
  IDE(s)   : Eq(x, x) -> <s>True

  DAOL(s)  : And(Or(x, y), z) -> <s>Or(<s>And(x, z), <s>And(y, z))
  DAOR(s)  : And(z, Or(x, y)) -> <s>Or(<s>And(z, x), <s>And(z, y))
  DOAL(s)  : Or(And(x, y), z) -> <s>And(<s>Or(x, z), <s>Or(y, z))
  DOAR(s)  : Or(z, And(x, y)) -> <s>And(<s>Or(z, x), <s>Or(z, y))

  DN(s)    : Not(Not(x)) -> x

  DMA(s)   : Not(And(x, y)) -> <s>Or(<s>Not(x), <s>Not(y))
  DMO(s)   : Not(Or(x, y))  -> <s>And(<s>Not(x), <s>Not(y))
  DMI(s)   : Not(Impl(x, y)) -> <s>And(x, <s>Not(y))
  DME(s)   : Not(Eq(x, y)) -> <s>Or(<s>And(<s>Not(x), y), <s>And(x, <s>Not(y)))

  DefN(s)  : Not(x) -> <s>Impl(x, <s>False)
  DefI(s)  : Impl(x, y) -> <s>Or(<s>Not(x), y)
  DefE(s)  : Eq(x, y) -> <s>And(<s>Impl(x, y), <s>Impl(y, x))
  DefO1(s) : Or(x, y) -> <s>Impl(<s>Not(x), y)
  DefO2(s) : Or(x, y) -> <s>Not(<s>And(<s>Not(x), <s>Not(y)))
  DefA1(s) : And(x, y) -> <s>Not(<s>Or(<s>Not(x), <s>Not(y)))
  DefA2(s) : And(x, y) -> <s>Not(<s>Impl(x, <s>Not(y)))

  IDefI(s) : Or(Not(x), y) -> <s>Impl(x, y)
  IDefE(s) : And(Impl(x, y), Impl(y, x)) -> <s>Eq(x, y)
\end{code}
