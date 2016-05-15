\literate[{\btt ABOX}]

	\begin{abstract}

	It is often desirable to format a (program) text in various output
	formats such as plain text, \LaTeX, or HTML.
	This module provides an abstract-syntax interface to Merijn de
	Jonge's Box format for generic pretty-printing. The \verb|gpp|
	package
	provides formatters that translate boxes to ASCII text, HTML and
	\LaTeX. This interface can be used to format a program by transforming
	its abstract syntax tree to a Box term and then formatting that with
	one of the formatters from \verb|gpp|.

	\end{abstract}

% Copyright (C) 1999, 2000 Eelco Visser <visser@acm.org>
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

	\paragraph{Kernel}

	The basic constructor for boxes is the \verb|S| operator that
	creates a string box. The box \verb|S("string")| denotes the
	literal text \verb|string|.

	The fundamental constructors for composing boxes from other
	boxes are \verb|H| that places boxes horizontally next to
	each other and \verb|V| that places boxes vertically above
	each other. The box \verb|H([],[S("a"),S("b")])| denotes the
	text \verb|a b|, the box \verb|V([],[S("a"),S("b")])| denotes
	the text
\begin{verbatim}
a
b
\end{verbatim}
	The constructor \verb|HV| is a less rigid combination of horizontal
	and vertical composition. It places boxes horizontally as long as
	there is space and then continues placing boxes on the next
	line. The constructor \verb|ALT| chooses the argument box which
	fits best.

\begin{code}
module abox
imports list-cons tuple
signature
  sorts Box
  constructors
    S     : String -> Box
    H     : List(S-Option) * List(Box) -> Box
    V     : List(S-Option) * List(Box) -> Box
    HV    : List(S-Option) * List(Box) -> Box
    ALT   : Box * Box -> Box
\end{code}

	\paragraph{Space Options}

	The first argument of the Box operators above is a list of 
	space options that determine the horizontal or vertical spacing
	between the elements composed by the operator. An option
	\verb|SOpt(HS,1)| determines a horizontal spacing of 1 between
	boxes. If no space option is specified a default spacing is
	applied. For \verb|H| the default is a horizontal spacing of
	1 and for \verb|V| the default is a horizontal spacing of 0.

\begin{code}
    SOpt  : Space-Symbol * Int -> S-Option
    SOptb : Space-Symbol * Box -> SOptb
    VS    : Space-Symbol
    HS    : Space-Symbol
    IS    : Space-Symbol
\end{code}

	\paragraph{Alignments}

	The alignment operator can be used to produce tables.

\begin{code}
    A     : List(A-Option) * List(S-Option) * List(Box) -> Box
    R     : List(S-Option) * List(Box) -> Box
    AL	  : List(S-Option) -> A-Option
    AC	  : List(S-Option) -> A-Option
    AR	  : List(S-Option) -> A-Option
\end{code}

	\paragraph{Fonts}

	The box constructor \verb|FBOX| can be used to declare the
	font to be used in the argument box. The scope of the font
	declaration reaches until the enclosed font constructors.
	The parameters \verb|KW|, \verb|VAR|, \verb|NUM| and \verb|MATH|
	declare abstract fonts for the categories keyword, variable, 
	number and mathematical expression.

\begin{code}
    FBOX  : Font-Operator * Box -> Box
    F     : List(F-Option) -> Font-Operator

    FInt  : Font-Param * Int -> F-Option
    FFID  : Font-Param * FID -> F-Option
    FN    : Font-Param
    FM    : Font-Param
    SE    : Font-Param
    SH    : Font-Param
    SZ    : Font-Param
    CL    : Font-Param

    KW    : Font-Operator
    VAR   : Font-Operator
    NUM   : Font-Operator
    MATH  : Font-Operator
\end{code}

	\paragraph{Crossreferences}

	The constructors \verb|LBL| and \verb|REF| define labels and
	crossreferences to these labels, respetively.

\begin{code}
    LBL   : String * Box -> Box
    REF   : String * Box -> Box

    C     : List(S-Option) * List(Box) -> Box
    L     : Box * Box -> Box
    LINT  : Int * Box -> Box
\end{code}

	\paragraph{Pretty-Print Tables}

\begin{code}
    Arg   : Int       -> Box
    Arg2  : Int * Int -> Box
\end{code}
