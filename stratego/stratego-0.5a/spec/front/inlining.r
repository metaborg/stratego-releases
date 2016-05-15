\literate[Inlining]

% $Id: inlining.r,v 1.9 2001/01/20 08:35:29 visser Exp $

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
module inlining
imports strategy stratlib lib stratego-laws
\end{code}

  \paragraph{Inlining with Definition Environment}

	The inlining strategy uses an environment with all
	the defininitions to be inlined and distributes it over
	the other definitions, substituting bodies for calls to
	operators.

	Heuristics for inlining: inline all operators with arguments.
	Also nullary operators that represent rules (do a match as
	first action).

\begin{code}
strategies

  inlineIO = iowrap(inline)

  inline = 
    repeat(init-exand; 
           expand-definitions);
    rename-sdefs

  // select definitions to inline

  init-exand = 
    //map(simplify0);
    split(filter(not(definition-to-inline)), 
          filter(definition-to-inline); not([]))

  definition-to-inline = 
    SDef(id, [id| id], id) +
    SDef(not("main"), [], body-to-inline)

  body-to-inline = 
    rec x(
        Id
	+ Fail
	+ Seq(Match(id), id)
	+ Scope(id, Seq(Match(id), id))
	+ Seq(Scope(id, Seq(Match(id), id)), id)
	// + Choice(x, x)
	// + LChoice(x, x)
    )

strategies

  // inlining calls

  expand-definitions =
    env-topdown(repeat(ExpandCall (* + Simplify *) ))

rules

  ExpandCall :		
    (Call(SVar(f), ss), env) -> (<strename> s, <ExtendEnv> (xs, ss, env))
    where <length> ss => n; 
	  <fetch(SDef(?f, where(length => n); ?xs , ?s))> env

  ExpandCall :
    (Call(SVar(f), ss), env) -> (Call(SVar(g), ss), env)
    where <fetch(?SDef(f, [], Call(SVar(g), [])))> env

  ExtendEnv : 
    (xs, ss, env) -> 
    <conc> (<zip(\ (x, s) -> SDef(x, [], s)\ )> (xs, ss), env)

rules

  // Rename the names of all top-level strategy definitions; 
  // The Stratego syntax cannot be used for names of C functions.

  rename-sdefs : 
    sdefs -> sdefs'
    where <filter(NewName)> sdefs => tbl;
          <map((id, MkCall))> tbl => sbs;
          <map(RenameSDef(!tbl, !sbs))> sdefs => sdefs'

  NewName : 
    SDef(x, _, _) -> (x, <new>())
    where not(!x => "main")

  RenameSDef(mktbl, mksbs) : 
    SDef(x, xs, s) -> SDef(y, xs, <ssubs> (<mksbs>(), s))
    where (mktbl; fetch(?(x, y))) <+ (!x => y)
\end{code} 

TODO: generate a name that looks more like the original name.
