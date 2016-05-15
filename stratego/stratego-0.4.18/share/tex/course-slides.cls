\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{course-slides}
\RequirePackage{comment}
\RequirePackage{multicol}
\raggedcolumns

\DeclareOption*{\PassOptionsToClass{\CurrentOption}{slides}}

\ProcessOptions

\LoadClass{slides}
 
\newcommand{\fullslide}{\parskip.5\baselineskip}
\newcommand{\veryfullslide}{\parskip.3\baselineskip}
\newcommand{\overfullslide}{\parskip.1\baselineskip}
\newcommand{\header}[1]{\begin{center}\bf #1\end{center}}
\excludecomment{Notes}

\long\def\doublelist#1#2{
\begin{minipage}[t]{13cm}
	\raggedright
  \begin{itemize}
    #1
  \end{itemize}
\end{minipage}
\begin{minipage}[t]{13cm}
	\raggedright
  \begin{itemize}
    #2
  \end{itemize}
\end{minipage}
}

\long\def\singlelist#1#2{
  \begin{itemize}
    #1
    #2
  \end{itemize}
}