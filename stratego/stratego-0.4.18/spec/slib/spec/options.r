\literate[{\btt OPTIONS}]

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
module options
imports io parse-options
signature
  constructors
    Silent      : Option
    Verbose     : Option
    Version     : Option
    Input       : String -> Option
    Output      : String -> Option
    Binary      : Option
    Statistics  : Option
    Help        : Option
    Runtime     : Real   -> Option
    DeclVersion : String -> Option
\end{code}

	The operator \verb|iowrap| defines a default wrapper around a
	strategy that handles processing of options and reading and
	writing of terms from and to files.

\begin{code}
strategies

  iowrap(strat) = iowrapO((id, strat), fail)

  iowrapO(strat, extra-options) =
   	(parse-options(extra-options <+ io-options));
	(need-help
   	 <+ input-file';
	    apply-strategy(strat);
	    output-file';
	    report-success
   	 <+ report-failure
	)

  iowrapNoOutput(strat, extra-options) =
   	(parse-options(extra-options <+ io-options));
	(need-help
   	 <+ input-file';
	    apply-strategy(strat);
	    report-success
   	 <+ report-failure
	)
\end{code}

	Handling of options

\begin{code}
strategies

  io-options =
	Option("-S",            !Silent())
	+ Option("--silent",    !Silent())
	+ Option("--verbose",   !Verbose())
	+ Option("-v",          !Version())
	+ Option("--version",   !Version())
	+ ArgOption("@version",  \x -> DeclVersion(x)\ )
	+ ArgOption("-i",       \x -> Input(x)\ )
	+ ArgOption("--input",  \x -> Input(x)\ )
	+ ArgOption("-o",       \x -> Output(x)\ )
	+ ArgOption("--output", \x -> Output(x)\ )
	+ Option("-b",          !Binary())
	+ Option("-s",          !Statistics())
	+ Option("--help",      !Help())
	+ Option("-h",          !Help())
	+ Option("-?",          !Help())

  usage' =
  	 where(option-defined(?Program(prog));
	       <printnl>
	       (stderr,
	       	["usage : ", prog, 
		 " [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"]);
	       <exit> 1)

  need-help =
   	option-defined(Help + Undefined(id)); 
	usage'

  need-help(u) =
	option-defined(Help + Undefined(id) + Version); u
\end{code}

	Input, strategy application and output

\begin{code}
  input-file' =
	 where((option-defined(?Input(infile)) <+ !stdin => infile));
  	 split(id, <ReadFromFile> infile)

  apply-strategy(strat) =
   	 where(dtime);
   	 strat;
   	 where(dtime => runtime);
	 \(options, trm) -> ([Runtime(runtime) | options], trm)\

  output-file' =
	 where((option-defined(?Output(outfile)) <+ !stdout => outfile, id)); 
	 (id, split(!outfile, id));
   	 ((option-defined(?Binary()), WriteToBinaryFile)
	  <+ (id, WriteToTextFile))

  report-success =
   	 where(try((not(option-defined(?Silent())), id);
		   (option-defined(?Runtime(runtime)), id);
		   (option-defined(?Program(prog)), id);
		   <printnl> (stderr,
			      [prog, " (", runtime, " secs)"])));
	 <exit> 0

  report-failure =
       	<printnl> (stderr, ["rewriting failed"]); 
       	<exit> 1
\end{code}
