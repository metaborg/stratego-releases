\literate[Backend]

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
module backend
imports compiler specialized ins-simplification lib
strategies

  main = iowrap(compile)

  compile = 
    where(declare-procs => decls);
    where(compile-procs => funs);
    where(get-afuns => (vardecls, mkafuns));
    !Block([Block(vardecls), 
            Block(decls),
            Block([PROC("init_afuns"), Block(mkafuns), ENDPROC]),
            Block(funs)])

  declare-procs =
    where(<create-table> "symbol-table");
    map(DeclareProc)

  DeclareProc = 
    ?SDef(f, [], s);
    <table-put> ("symbol-table", f, <conc-strings> ("_stratego_", f));
    !PROCDECL(f)

  is-toplevel-proc = ?f;
    <table-get> ("symbol-table", f)

  get-afun = ?AFun(f, i);
  where(
    <table-get> ("symbol-table", AFun(f, i)) => lab
    <+ new => lab; 
       <table-put> ("symbol-table", AFun(f, i), lab)
  );
  !lab

  get-afuns = 
    <table-getlist> "symbol-table";
    filter(?(AFun(_,_),_));
    map(\ (AFun(f, i), lab) -> 
          (VARDECL(ATerm(), lab), MOVE(lab, ATmakeAFun(f, i, 0))) \ );
    unzip    

  compile-procs =
    map(MkInstr; 
	try(Ctop);
        topdown(repeat(Cspecial <+ C));
        flatten-blocks; 
        peephole)
\end{code}

Make a strategy into an instruction 

\begin{code}
rules

  MkInstr : s -> Instr(s, [], 0)
\end{code} 
