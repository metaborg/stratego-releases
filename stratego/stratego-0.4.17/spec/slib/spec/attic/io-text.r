(*

Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*)

\literate
\begin{code}
module io-text
strategies
  output-pp-file(outfile) =
    where((outfile <+ !stdout); open-file);
    rec txt(V(txt, txt) +
            rec ln(H(ln, ln) + 
                   L(Cs(split(outfile, id); printascii)) +
                   Wd(id))
    )
\end{code}