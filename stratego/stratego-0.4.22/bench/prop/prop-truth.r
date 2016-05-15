\literate[{\btt prop-truth}]
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
module prop-truth
imports prop

rules

  T1  : Not(True) -> False       T2  : Not(False) -> True

  T3  : And(True, x) -> x        T5  : And(False, x) -> False  
  T4  : And(x, True) -> x        T6  : And(x, False) -> False  
  
  T7  : Or(True, x) -> True      T9  : Or(False, x) -> x
  T8  : Or(x, True) -> True      T10 : Or(x, False) -> x

  T11 : Impl(True, x) -> x       T14 : Impl(False, False) -> True
  T12 : Impl(x, True) -> True    T15 : Impl(True, False) -> False
  T13 : Impl(False, x) -> True

  T16 : Eq(False, x) -> Not(x)   T18 : Eq(True, x) -> x
  T17 : Eq(x, False) -> Not(x)   T19 : Eq(x, True) -> x

rules

  T1(s)  : Not(True) -> <s>False       T2(s)  : Not(False) -> <s>True

  T3(s)  : And(True, x) -> x           T5(s)  : And(False, x) -> <s>False  
  T4(s)  : And(x, True) -> x           T6(s)  : And(x, False) -> <s>False  
  
  T7(s)  : Or(True, x) -> <s>True      T9(s)  : Or(False, x) -> x
  T8(s)  : Or(x, True) -> <s>True      T10(s) : Or(x, False) -> x

  T11(s) : Impl(True, x) -> x          T14(s) : Impl(False, False) -> <s>True
  T12(s) : Impl(x, True) -> <s>True    T15(s) : Impl(True, False) -> <s>False
  T13(s) : Impl(False, x) -> <s>True

  T16(s) : Eq(False, x) -> <s>Not(x)   T18(s) : Eq(True, x) -> x
  T17(s) : Eq(x, False) -> <s>Not(x)   T19(s) : Eq(x, True) -> x
\end{code}
