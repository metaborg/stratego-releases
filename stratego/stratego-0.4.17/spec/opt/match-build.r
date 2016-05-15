\literate[Match-Build]

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
module match-build
imports strategy
imports list
rules

(* Preprocess match and build *)

  Mch0  : Match(Wld)       -> Id
  Mch1  : Match(Var(x))    -> MatchVars([x], [], Id)
  Mch2  : Match(Op(f, [])) -> MatchFunA(Fun(f, 0), [], [], Id)

  Mch3  : Match(Op(f, ts)) -> 
          MatchFunA(Fun(f, <length> ts), [], [], 
                    <map(MkMatch); paths; seqs> ts)

  Mch4  : Match(Op(f, ts)) -> Cong(f, <map(MkMatch)> ts)

  Cng   : Cong(f, []) -> MatchFunA(Fun(f, 0), [], [], Id)

  Cng   : Cong(f, ss) -> 
           MatchFunA(Fun(f, <length> ss), [], [], <paths; seqs> ss)

  MkMatch : t -> Match(t)
  MkPath  : (n, s) -> Path(n, s)
  MkSeq   : (s1, s2) -> Seq(s1, s2)

  Mch5 : Cong(f, ss) -> MatchFunA(Fun(f, <length> ss), [], [], CongWld(ss))

strategies

  defmb = topdown(repeat(Mch0 + Mch1 + (Mch2 <+ Mch4) + Mch5))

  paths = NZip0 ; nzip(MkPath)
\end{code}
