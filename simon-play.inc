\begin{Verbatim}[commandchars=\\\{\}]
\PY{k+kt}{void} \PY{n+nf}{play}\PY{p}{(}\PY{k+kt}{int} \PY{n}{pressed}\PY{p}{)} 
\PY{p}{\PYZob{}}
  \PY{c+c1}{//                 G   R   Y   B}
  \PY{c+c1}{//                 E3  A4  C\PYZsh{}4 E4}
  \PY{n}{byte} \PY{n}{note}\PY{p}{[}\PY{p}{]} \PY{o}{=} \PY{p}{\PYZob{}} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{52}\PY{p}{,} \PY{l+m+mi}{69}\PY{p}{,} \PY{l+m+mi}{61}\PY{p}{,} \PY{l+m+mi}{64} \PY{p}{\PYZcb{}}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{play}\PY{p}{(}\PY{n}{BELL}\PY{p}{,} \PY{n}{note}\PY{p}{[}\PY{n}{pressed}\PY{p}{]}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{30}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)}
    \PY{n}{drawscreen}\PY{p}{(}\PY{n}{pressed}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{15}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)}
    \PY{n}{drawscreen}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
