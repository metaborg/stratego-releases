\literate[{\btt SUNIT}: Unit Testing for Stratego]

% Copyright (C) 2000 Eelco Visser <visser@acm.org>
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
module sunit
imports io exec

strategies
	
  init-record = !(0,0)

  record-success = (\x -> <add>(x,1)\ , id)

  record-failure = (id, \x -> <add>(x,1)\ )

  check-for-failures = (id, 0); <exit> 0 <+ <exit> 1

  report-test = (debug(!"successes: "), debug(!"failures: "))

  test-suite(name, tests) =
	name; debug(!"test suite: ");
	init-record;
	tests;
	report-test;
	check-for-failures

  do-test(nr, s) =
	where(nr; debug);
	(where(s); record-success <+ record-failure)

  testing(nr, s) =
	do-test(nr, s; debug(!"  succeeded: ") 
	   	    <+ debug(!"  failed: "); FAIL)

  apply-test(name, s, in, out) =
  do-test(name,
          ((in; s => tmp) 
              <+ <debug> "  failed"; FAIL);
	  out => tmp'; 
	  ((!tmp' => tmp)
             <+ (<debug(!"  result not equal: ")> tmp;
                 <debug(!"  expected: ")> tmp'); FAIL))

  apply-and-fail(name, s, in, out) =
  do-test(name,
	  ((in; not(s)); <debug> "  failed"
              <+ <debug> "  succeeded"; FAIL))          

  apply-and-show(name, s, in) =
  do-test(name,
	  ((in; s => tmp)
              <+ <debug> "  failed"; FAIL);
          <debug> ["  succeeded; result: ", tmp]
         )
\end{code}


