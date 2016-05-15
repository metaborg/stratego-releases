\literate[{\btt PACK-STRATEGO}]

	\begin{abstract}

	This module defines a packing algorithm for Stratego.

	\end{abstract}

	- command-line option handling

	- writing dependencies to .r.dep

	- finding file based on path

	- parsing the file for a module based on given parser

	- flattening

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
module pack-stratego
imports lib pack-graph pack-modules sugar 

strategies

  main = pack-modules(pack-stratego, basename)
  
strategies

  pack-stratego(mkpt) =
	\ root -> (root, (), []) \;
	graph-nodes(Fst; parse(parse-mod, mkpt, !"r"),
		    get-stratego-imports,
		    \ (n,x,xs) -> [x|xs] \ );
	unzip;
	(id, flatten-stratego)

  (* parse :: (filename -> parsetree) 
	      * (() -> path) 
              * (() -> ext) 
              -> (filename -> parsetree) 
  *)

  parse(parser, mkpath, ext) =
	find-file(mkpath, ext);
	split(id, parser)

  get-stratego-imports =
	\ (_, Specification(xs)) -> xs \;
        filter(\Imports(xs) -> xs\ );
        concat

  flatten-stratego = 
	map(\Specification(xs) -> xs\; filter(not(Imports(id))));
	concat; 
	\ xs -> Specification(xs) \ 

rules

  parse-mod : in -> trm
    where <conc-strings> ("pack-stratego", 
                          <get-pid; int-to-string>()) => out; 
	  (* <printnl> (stderr, ["  parsing ", in]); *)
	  <call>("parse-mod", ["-silent", "-i", in, "-o", out]);
	  <ReadFromFile> out => trm;
	  <rm-files> [out]
\end{code}

