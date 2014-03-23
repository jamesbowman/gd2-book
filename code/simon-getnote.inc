\begin{Verbatim}[commandchars=\\\{\}]
\PY{k}{static} \PY{k+kt}{int} \PY{n+nf}{get\PYZus{}note}\PY{p}{(}\PY{p}{)} 
\PY{p}{\PYZob{}}
  \PY{n}{byte} \PY{n}{pressed} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;}
  \PY{k}{while} \PY{p}{(}\PY{n}{pressed} \PY{o}{=}\PY{o}{=} \PY{l+m+mi}{0}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{p}{)}\PY{p}{;}
    \PY{n}{drawscreen}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
    \PY{k}{if} \PY{p}{(}\PY{p}{(}\PY{l+m+mi}{1} \PY{o}{\PYZlt{}}\PY{o}{=} \PY{n}{GD}\PY{p}{.}\PY{n}{inputs}\PY{p}{.}\PY{n}{tag}\PY{p}{)} \PY{o}{\PYZam{}}\PY{o}{\PYZam{}} \PY{p}{(}\PY{n}{GD}\PY{p}{.}\PY{n}{inputs}\PY{p}{.}\PY{n}{tag} \PY{o}{\PYZlt{}}\PY{o}{=} \PY{l+m+mi}{4}\PY{p}{)}\PY{p}{)}
      \PY{n}{pressed} \PY{o}{=} \PY{n}{GD}\PY{p}{.}\PY{n}{inputs}\PY{p}{.}\PY{n}{tag}\PY{p}{;}
  \PY{p}{\PYZcb{}}
  \PY{n}{play}\PY{p}{(}\PY{n}{pressed}\PY{p}{)}\PY{p}{;}
  \PY{k}{return} \PY{n}{pressed}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
