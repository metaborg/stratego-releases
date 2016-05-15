\literate[{\btt PARSE-OPTIONS}]

\begin{code}
module parse-options
imports lib
signature
  sorts Option
  constructors
    Program   : String -> Option
    Undefined : String -> Option

strategies

  parse-options(s) =
	Cons(\x -> Program(x)\,
	     rec x(([] + s; [id|x]) <+ UndefinedOption))

rules

  Option(is-flag, label) :
	[flag|rest] -> [<label>()|rest]
	where <is-flag> flag

  ArgOption(is-flag, label) :
  	[flag, arg | rest] -> [<label> arg | rest]
	where <is-flag> flag

  Arg2Option(is-flag, label) :
  	[flag, arg1, arg2 | rest] -> [<label> (arg1, arg2) | rest]
	where <is-flag> flag

  UndefinedOption :
	[x | rest] -> [Undefined(x) | rest]

strategies

  defined-option(s) = fetch(s)

  option-defined(s) = fetch(s)

  arg-option-value(s) = fetch(s)
\end{code}