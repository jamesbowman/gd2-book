\begin{Verbatim}[commandchars=\\\{\}]
\PY{k}{static} \PY{k+kt}{void} \PY{n+nf}{drawblobs}\PY{p}{(}\PY{n}{byte} \PY{n}{lo}\PY{p}{,} \PY{n}{byte} \PY{n}{hi}\PY{p}{)} 
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{SaveContext}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0x000000}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mh}{0x80}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{n}{byte} \PY{n}{i} \PY{o}{=} \PY{n}{lo}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{n}{hi}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{3} \PY{o}{*} \PY{n}{i} \PY{o}{+} \PY{l+m+mi}{72}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{n}{blobs}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{x}\PY{p}{,} \PY{n}{blobs}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{y}\PY{p}{)}\PY{p}{;}
  \PY{p}{\PYZcb{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{RestoreContext}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{n}{byte} \PY{n}{i} \PY{o}{=} \PY{n}{lo}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{n}{hi}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{3} \PY{o}{*} \PY{n}{i}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{n}{blobs}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{x}\PY{p}{,} \PY{n}{blobs}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{y}\PY{p}{)}\PY{p}{;}
  \PY{p}{\PYZcb{}}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
