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
	 (option-defined(?Input(infile)) <+ !stdin => infile);
  	 split(id, <ReadFromFile> infile)

  apply-strategy(strat) =
   	 where(dtime);
   	 strat;
   	 where(dtime => runtime);
	 \(options, trm) -> (Cons(Runtime(runtime), options), trm)\

  output-file' =
	 (option-defined(?Output(outfile)) <+ !stdout => outfile, id);
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

OBSOLETE

(*

  iowrap'(strat) = iowrapO'(strat)

  iowrapO'(strat) = 
  obsolete("iowrapO'/1");	
  { 
    prog, silent, infile, outfile, binary, stats, help, pp, runtime:
    def-options(?prog, ?silent, ?infile, ?outfile, 
                ?binary, ?stats, ?help, ?pp);
    (  test(!help); 
       usage(!prog); 
       <exit> 1
    <+ 
       split(id, (!infile <+ !stdin); ReadFromFile);
       where(dtime);
       strat;
       where(dtime; ?runtime);
       (test(!pp); output-pp-file(!outfile)
        <+ output-file(!outfile, !binary)); 
       <printnl> (stderr, ["  rewriting succeeded (", runtime, " secs)"]);
       <exit> 0
    <+
       output-file(!outfile, !binary);
       <printnl> (stderr, ["  rewriting failed"]); 
       <exit> 1
    )
  }

strategies

  get-options(opts)   = rec x(Nil + opts; x <+ Cons(id, x))
  options(prog, opts) = Cons(prog, get-options(opts)); Tl
  option(flag)        = Cons(flag, id); Tl
  aoption(flag, arg)  = Cons(flag, Cons(arg, id)); Tl; Tl

  aoption-pref(flag, arg) = 
	Cons(split(explode-string, flag; explode-string);
             zipr-tail-match(eq); arg, id); Tl

  aoption'(flag)      = Cons(flag, Cons(id, id))

  aoption''(flag, x)  = aoption'(flag); Cons(id, Cons(id, x))

  optionargsnil(flag) = rec x((Nil + aoption''(flag, x))
                              <+ Cons(id, x); Tl)

  optionargs(flag)    = rec x((aoption''(flag, optionargsnil(flag)))
                              <+ Cons(id, x); Tl)

  def-options(prog, silent, infile, outfile, binary, stats, help, pp) =
  options(prog, option("-silent"; silent) + 
                aoption("-i", infile) + 
                aoption("-o", outfile) +
	        option("-b"; binary) + 
	        option("-stats"; stats) + 
	        option("-help"; help) + 
	        option("-h"; help) + 
                option("-pp"; pp))
  <+ usage(!"");
     <exit> 1
         
  usage(prog) = 
  where(<printnl> (stderr, ["usage : ", <prog>(), 
        " [-silent] [-i file] [-o file] [-pp] [-b] [-stats] [-help|-h]"]))

rules

  ProgOption ::
	Cons(x, xs) --> Cons(("prog", x), xs)

  AOption(flag) :: 
	Cons(flag;?f, Cons(?arg, xs)) --> Cons((f, arg), xs)

  Option(flag) ::
	Cons(flag;?f, xs) --> Cons((f, ()), xs)

  Other : 
	Cons(x, xs) -> Cons(("other", x), xs)

  MergeOptions : 
	((f, os1), (f, os2)) -> (f, <conc>(os1, os2))

strategies

  compress-options(opts) = 
	ProgOption; 
	Cons(id, rec x(Nil + opts; Cons(id, x)));
        sort-list(LMerge(MergeOptions))

  output-file(outfile, binary) =
    split(outfile <+ !stdout, id); 
    (test(binary); WriteToBinaryFile
                <+ WriteToTextFile)

  output-pp-file(outfile) = fail

*)
