\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;} 
\PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// red only}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{\PYZhy{}} \PY{l+m+mi}{100}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// green only}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// blue only}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{+} \PY{l+m+mi}{100}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
