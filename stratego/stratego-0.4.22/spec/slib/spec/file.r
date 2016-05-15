\literate[{\btt FILE}]

\begin{code}
module file
imports io

rules

  find-in-path :
    (file, path) -> 
    <rec x(\ [dir|_] -> <concat-strings; file-exists> [dir,"/",file] \
	   <+ Tl; x)> path

strategies

  find-in-path(mkpath) =
	file-exists 
	<+ split(id, mkpath); find-in-path
	<+ \ x -> <fatal-error> ["no such file: ", x] \

  find-file(mkpath, ext) =
        guarantee-extension(ext);
	find-in-path(mkpath)
\end{code}