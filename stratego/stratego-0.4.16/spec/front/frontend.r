\literate[{\tt FRONTEND}]
	
% $Id: frontend.r,v 1.9 2000/06/19 21:00:22 visser Exp $

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
module frontend
imports normalize-spec 
	spec-to-sdefs 
	use-def 
	check-constructors
strategies
 
  frontendIO = iowrap(frontend)  

  frontend =
	//where(dtime; debug(!"  frontend initialization: "));
	normalize-spec;   
	//where(dtime; debug(!"  normalize-spec: "));
        where(spec-use-def);
	//where(dtime; debug(!"  spec-use-def: "));
        ExpandOverlays;
	//where(dtime; debug(!"  ExpandOverlays: "));
	try(CheckConstructors)//;
	//where(dtime; debug(!"  CheckConstructors: "))
\end{code}
