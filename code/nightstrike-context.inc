\begin{Verbatim}[commandchars=\\\{\}]
\PY{k}{static} \PY{k+kt}{void} \PY{n+nf}{blocktext}\PY{p}{(}\PY{k+kt}{int} \PY{n}{x}\PY{p}{,} \PY{k+kt}{int} \PY{n}{y}\PY{p}{,} \PY{n}{byte} \PY{n}{font}\PY{p}{,} \PY{k}{const} \PY{k+kt}{char} \PY{o}{*}\PY{n}{s}\PY{p}{)}  
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{SaveContext}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0x000000}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{n}{x}\PY{o}{\PYZhy{}}\PY{l+m+mi}{1}\PY{p}{,} \PY{n}{y}\PY{o}{\PYZhy{}}\PY{l+m+mi}{1}\PY{p}{,} \PY{n}{font}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{s}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{n}{x}\PY{o}{+}\PY{l+m+mi}{1}\PY{p}{,} \PY{n}{y}\PY{o}{\PYZhy{}}\PY{l+m+mi}{1}\PY{p}{,} \PY{n}{font}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{s}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{n}{x}\PY{o}{\PYZhy{}}\PY{l+m+mi}{1}\PY{p}{,} \PY{n}{y}\PY{o}{+}\PY{l+m+mi}{1}\PY{p}{,} \PY{n}{font}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{s}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{n}{x}\PY{o}{+}\PY{l+m+mi}{1}\PY{p}{,} \PY{n}{y}\PY{o}{+}\PY{l+m+mi}{1}\PY{p}{,} \PY{n}{font}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{s}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{RestoreContext}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{,} \PY{n}{font}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{s}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
