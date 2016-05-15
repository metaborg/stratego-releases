\literate[postprocess]

	Postprocessing of generated code to extract global variable
	information.

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
module postprocess
imports instructions lib list-misc list-sort  

rules

  CR1 : ICountRule(f) -> RuleCounter(f)

  CR2 : RuleCounter(f) -> RuleCounter(f, <new> f)

  CR3(b_rcs) : ICountRule(f) -> ICountRule(f')
	where b_rcs; fetch(match(RuleCounter(f, f')))

  Main : Block(is) -> Program(RuleCounters(rcs), Block(is'))
	 where
            <filter(CR1); uniq; map(CR2)> is => rcs;
	    <map(try(CR3(build(rcs))))> is => is'

strategies

  main = iowrap(Main)
\end{code}
