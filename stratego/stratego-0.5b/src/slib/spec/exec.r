\literate[{\btt EXEC}]

	\begin{abstract}
	
	Transformation systems often consist of multiple components, e.g.,
	parsers, pretty-printers and several actual transformation
	components.
	To glue these components together this module defines the
	process
	control primitive \verb|call|.

	\end{abstract}
	

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

	The strategy \verb|<call> (prog, args)| executes the program
	with name \verb|prog| and passes the list
	of arguments \verb|args| to it.

	The strategy
	\verb|<transform-file(s, suf)> (base, ext)| reads in the
	term from file "base.ext", applies strategy \verb|s| to
	it and write the result to the concatenation of the
	strings \verb|(base, <suf>())|.

\begin{code}
module exec.r
strategies

  exit       = prim("_ST_exit")
  call       = prim("_ST_call")
  call-noisy = prim("_ST_call_noisy")

  get-pid    = prim("_ST_get_pid")

  rm-files = ?files; where(<call> ("rm", ["-f" | files]))

  pipe(c, suf2) = pipe'(c, suf2, ![])

  pipe'(c, suf2, args) = 
    where(conc-strings => 'in);
    (id, suf2);
    where(conc-strings => out);
    // where(<debug(!"calling : ")> [<c>(), 'in, out]);
    where(<call> (<c>(), <conc> (<args>(), ["-i", 'in, "-o", out])))

  transform-file(s, suf) =
    where(conc-strings => 'in);
    (id, suf);
    where(conc-strings => out);
    where(<apply-to-file(s)> ('in, out))

  apply-to-file(s) =
    ?('in, out);
    where(<ReadFromFile; s> 'in => trm);
    where(<WriteToBinaryFile> (out, trm))

  copy-file(s, new-base, new-suf) =
    ?(base, suf);
    (new-base, new-suf); 
    ?(nbase, nsuf);
    where(<apply-to-file(s)> 
	    (<conc-strings> (base, suf),
	     <conc-strings> (nbase, nsuf)))
\end{code}
