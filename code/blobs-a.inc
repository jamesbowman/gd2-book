\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{define NBLOBS      128 }
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{define OFFSCREEN   \PYZhy{}16384}

\PY{k}{struct} \PY{n}{xy} \PY{p}{\PYZob{}}
  \PY{k+kt}{int} \PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{;}
\PY{p}{\PYZcb{}} \PY{n}{blobs}\PY{p}{[}\PY{n}{NBLOBS}\PY{p}{]}\PY{p}{;}

\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{n}{NBLOBS}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{blobs}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{x} \PY{o}{=} \PY{n}{OFFSCREEN}\PY{p}{;}
    \PY{n}{blobs}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{y} \PY{o}{=} \PY{n}{OFFSCREEN}\PY{p}{;}
  \PY{p}{\PYZcb{}}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
