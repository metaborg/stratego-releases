\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{course-notes}
\RequirePackage{boxedminipage}
\RequirePackage{comment}
\RequirePackage{multicol}
\raggedcolumns

\DeclareOption*{\PassOptionsToClass{\CurrentOption}{article}}

\ProcessOptions

\LoadClass{article}
 
\newenvironment{slide}[1][]{
%\begin{center}
%\begin{boxedminipage}{10cm}\sf
}{
%\end{boxedminipage}
%\end{center}
}

\includecomment{Notes}

%\newcommand{\header}[1]{\begin{center}\bf #1\end{center}}
\newcommand{\header}[1]{\paragraph{#1}}

\parskip.3\baselineskip
\newcommand{\fullslide}{\parskip.3\baselineskip}
\newcommand{\veryfullslide}{\parskip.1\baselineskip}
\newcommand{\overfullslide}{\parskip0pt}
\parindent0pt

\long\def\doublelist#1#2{
%\par
%\begin{minipage}[t]{6cm}
  \begin{itemize}
    #1
%  \end{itemize}
%\end{minipage}
%\begin{minipage}[t]{6cm}
%  \begin{itemize}
    #2
  \end{itemize}
%\end{minipage}
}

\long\def\singlelist#1#2{
  \begin{itemize}
    #1
    #2
  \end{itemize}
}