\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{stop-report}

\RequirePackage{fancyhdr}
\RequirePackage{boxedminipage}

\DeclareOption*{\PassOptionsToClass{\CurrentOption}{report}}

\ProcessOptions

\LoadClass{report}

% MAKETITLE

\renewcommand{\maketitle}{
{
	\hrule

	\Large{\bf
	\@title}\\

	\hrule

	\vspace{0.5cm}
	
	\Large 
	\@author

	\vspace{0.3cm}

	\large
	\@date\\
	\hrule
}}


\newcommand{\maketitleR}{
{
	\hrule
	\par
	\vspace{0.2cm}
	\begin{raggedleft}
	\Large{\bf
	\@title}\\
	\end{raggedleft}
	\par
	\vspace{1cm}
	\hrule

	\vspace{0.2cm}
	
	\begin{raggedleft}
	\Large 
	\@author\\
	\end{raggedleft}

	\vspace{0.3cm}

	\begin{raggedleft}
	\large
	\@date\\
	\end{raggedleft}

	\vspace{1cm}
	\hrule
}}

% HEADERS

\def\@chapterMARK{}
\def\@sectionMARK{}
\def\@subsectionMARK{}  

\def\setChapterMark#1{\def\@chapterMARK{#1}\\}

\renewcommand{\part}[2][]{
 \clearpage 
 \addcontentsline{toc}{part}{\protect\uppercase{#2}}{}
 \vspace*{\fill}
 \begin{center}
    \Huge\bf #2
 \end{center}
 \vspace*{\fill}
 \clearpage 
}

\renewcommand{\chapter}[2][]{
 \clearpage 
 \addcontentsline{toc}{chapter}{\protect\uppercase{#2}}{}
 \def\@chapterMARK{Chapter: #2\\}
 \def\@sectionMARK{}
}

\newcommand{\SectionName}{Section}
\renewcommand{\appendix}{\newpage\renewcommand{\SectionName}{Appendix}}

\renewcommand{\section}[2][]{
 \clearpage 
 \addcontentsline{toc}{section}{\protect\bf#2}{}
 \def\@sectionMARK{\SectionName: #2}
}

\newcommand{\topicheading}[1]{
  {\bf\uppercase{#1}}
  \smallskip
}

\renewcommand{\subsection}[2][]{
\clearpage 
  \topicheading{#2}
  \addcontentsline{toc}{subsection}{\protect\sc\protect\lowercase{#2}} 
}

\renewcommand{\paragraph}[2][]{
\par\noindent{\sc\lowercase{#2}}\par
}

\renewcommand{\subparagraph}[2][]{
{\parskip.7\baselineskip\par\noindent{\sc\lowercase{#2}}\parskip0pt\par
  \vspace{-.7\baselineskip}}
}


% THESIS SENTENCE

\newenvironment{thesis}
  {\begin{boxedminipage}{\hsize}}
  {\end{boxedminipage}}

\renewenvironment{abstract}
  {\begin{boxedminipage}{\hsize}}
  {\end{boxedminipage}}

% BIBLIOGRAPHY

\renewenvironment{thebibliography}[1]
     {\subsection{Bibliography}%
      \list{\@biblabel{\@arabic\c@enumiv}}%
           {\settowidth\labelwidth{\@biblabel{#1}}%
            \leftmargin\labelwidth
            \advance\leftmargin\labelsep
            \@openbib@code
            \usecounter{enumiv}%
            \let\p@enumiv\@empty
            \renewcommand\theenumiv{\@arabic\c@enumiv}}%
      \sloppy
      \clubpenalty4000
      \@clubpenalty \clubpenalty
      \widowpenalty4000%
      \sfcode`\.\@m}
     {\def\@noitemerr
       {\@latex@warning{Empty `thebibliography' environment}}%
      \endlist}

% TABLE OF CONTENTS

\renewcommand\tableofcontents{
  {\parskip.3\baselineskip
   \topicheading{Contents}
   \@starttoc{toc}
  }
}

\renewcommand{\l@chapter}{\@dottedtocline{1}{0em}{0em}}
\renewcommand{\l@section}{\@dottedtocline{1}{1em}{0em}}
\renewcommand{\l@subsection}{\bf\@dottedtocline{1}{2em}{0em}}
\renewcommand{\@dotsep}{10000}

% PAGE STYLE

\def\ps@stop{
  \def\@evenhead{\begin{minipage}{\hsize}
		\@chapterMARK\@sectionMARK
		\end{minipage}}
  \def\@oddhead{\begin{minipage}{\hsize}
		\@chapterMARK\@sectionMARK
		\end{minipage}}

  \def\@evenfoot{\hfill\thepage\hfill}
  \def\@oddfoot{\hfill\thepage\hfill}  
}

\pagestyle{stop}

% LAYOUT

\parskip.7\baselineskip
\parindent0pt

% FIGURES

\newenvironment{boxedfigure}[2]
  {
    \gdef\@CAPTION{#2}\gdef\@LABEL{#1}
    \begin{figure}[hp]
     \begin{boxedminipage}{\hsize}}
  {
     \end{boxedminipage}
     \caption{\@CAPTION}
     \label{Fig:\@LABEL}
    \end{figure}
  }

\setcounter{totalnumber}{10}
\setcounter{topnumber}{10}
\setcounter{bottomnumber}{10}
\renewcommand{\topfraction}{1}
\renewcommand{\bottomfraction}{1}

% AUXILIARY COMMANDS

\newcommand{\rfile}[1]{ 
	\begin{figure}[!h]
	\begin{boxedminipage}{\hsize}
	\inputverbatim{xmpl/#1}
	\end{boxedminipage}
	\caption{file: #1}
	\end{figure}
}
