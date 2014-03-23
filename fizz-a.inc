\begin{Verbatim}[commandchars=\\\{\}]
\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)} 
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{100}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{50}\PY{p}{)}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{256}\PY{p}{)}\PY{p}{,}
                \PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{256}\PY{p}{)}\PY{p}{,}
                \PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{256}\PY{p}{)}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{256}\PY{p}{)}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{480}\PY{p}{)}\PY{p}{,} \PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{272}\PY{p}{)}\PY{p}{)}\PY{p}{;}
  \PY{p}{\PYZcb{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
