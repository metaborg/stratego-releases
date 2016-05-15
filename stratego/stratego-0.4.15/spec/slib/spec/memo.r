\literate[{\btt MEMO}]

   	The memo operator makes a strategy
   	into a memoizing strategy that looks up the term to be transformed
   	in a memo table and only computes the transformation if the
   	term is not found.

        \verb|<memo-init> tbl| creates a new memo table and
	\verb|<memo-purge> tbl| destroys it.

        \verb|<memo(tbl, s)> t| first looks up the term \verb|t| in
	the memo table. If present the association in the table is
	produced, else the result of \verb|<s> t| is computed and
	stored in the table.

\begin{code}
module memo
imports tables

strategies

  memo-init  = create-table

  memo-purge = destroy-table

rules

  memo(name, s) :
	t -> t'
	where (<table-get> (<name>(), t) => t')
	      <+ (<s> t => t'; <table-put> (<name>(), t, t'))
\end{code}