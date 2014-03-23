\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;} 
\PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{SRC\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{8} \PY{o}{*} \PY{l+m+mi}{16}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;}
\PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{1000}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{20} \PY{o}{+} \PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{440}\PY{p}{)}\PY{p}{,} \PY{l+m+mi}{20} \PY{o}{+} \PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{232}\PY{p}{)}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
