\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;} 
\PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}}\PY{o}{=} \PY{l+m+mi}{254}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Tag}\PY{p}{(}\PY{n}{i}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}number}\PY{p}{(}\PY{p}{(}\PY{n}{i} \PY{o}{\PYZpc{}} \PY{l+m+mi}{16}\PY{p}{)} \PY{o}{*} \PY{l+m+mi}{30}\PY{p}{,} \PY{p}{(}\PY{n}{i} \PY{o}{/} \PY{l+m+mi}{16}\PY{p}{)} \PY{o}{*} \PY{l+m+mi}{17}\PY{p}{,} \PY{l+m+mi}{26}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{i}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}
\PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{get\PYZus{}inputs}\PY{p}{(}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
