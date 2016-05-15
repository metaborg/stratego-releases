\literate[{\btt TABLES}]

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

	An interface to the ATerm table facility. Note that these
	primitives work by side-effect.

	\verb|<create-table> name| creates a table with name
	\verb|name|, which can be any term.

	\verb|<destroy-table> name| destroys it.

	\verb|<table-put> (name, key, value)| associates \verb|value|
	with \verb|key| in the \verb|name| table.

	\verb|<table-get> (name, key)| yields the value associated to
	\verb|key| or fails.

	\verb|<table-remove> (name, key)| removes the entry for
	\verb|key| from table \verb|name|.

	\verb|<table-keys> name| produces the list of keys of table
	\verb|name|.

\begin{code}
module tables
strategies

  create-table 	= prim("_ST_create_table")
  destroy-table = prim("_ST_destroy_table")
  table-put 	= prim("_ST_table_put")
  table-get 	= prim("_ST_table_get")
  table-remove 	= prim("_ST_table_remove")
  table-keys 	= prim("_ST_table_keys")

  table-getlist = 
        ?name; table-keys; map(\ x -> (x, <table-get> (name, x))\ )

  table-putlist =
	?(name, list); <map({x,y: ?(x, y); <table-put> (name, x, y)})> list
\end{code}
