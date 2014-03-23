\begin{Verbatim}[commandchars=\\\{\}]
\PY{k}{static} \PY{k+kt}{void} \PY{n+nf}{zigzag}\PY{p}{(}\PY{k+kt}{int} \PY{n}{x}\PY{p}{)} 
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{\PYZhy{}} \PY{l+m+mi}{10}\PY{p}{,}   \PY{l+m+mi}{10}\PY{p}{)}\PY{p}{;} \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{+} \PY{l+m+mi}{10}\PY{p}{,}   \PY{l+m+mi}{60}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{\PYZhy{}} \PY{l+m+mi}{10}\PY{p}{,}  \PY{l+m+mi}{110}\PY{p}{)}\PY{p}{;} \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{+} \PY{l+m+mi}{10}\PY{p}{,}  \PY{l+m+mi}{160}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{\PYZhy{}} \PY{l+m+mi}{10}\PY{p}{,}  \PY{l+m+mi}{210}\PY{p}{)}\PY{p}{;} \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{+} \PY{l+m+mi}{10}\PY{p}{,}  \PY{l+m+mi}{260}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{LINES}\PY{p}{)}\PY{p}{;}
  \PY{n}{zigzag}\PY{p}{(}\PY{l+m+mi}{140}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{LINE\PYZus{}STRIP}\PY{p}{)}\PY{p}{;}
  \PY{n}{zigzag}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{LineWidth}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{10}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{LINE\PYZus{}STRIP}\PY{p}{)}\PY{p}{;}
  \PY{n}{zigzag}\PY{p}{(}\PY{l+m+mi}{340}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
