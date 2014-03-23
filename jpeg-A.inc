\begin{Verbatim}[commandchars=\\\{\}]
\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)} 
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}loadimage}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{load}\PY{p}{(}\PY{l+s}{\PYZdq{}}\PY{l+s}{healsky3.jpg}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
