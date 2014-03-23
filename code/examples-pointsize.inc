\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;} 
\PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{136}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{255}\PY{p}{)}\PY{p}{,} \PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{255}\PY{p}{)}\PY{p}{,} \PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{255}\PY{p}{)}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{n}{i}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{polar}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{,} \PY{n}{i}\PY{p}{,} \PY{n}{i} \PY{o}{*} \PY{l+m+mi}{2500}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{+} \PY{n}{x}\PY{p}{,} \PY{l+m+mi}{136} \PY{o}{+} \PY{n}{y}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
