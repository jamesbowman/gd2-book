\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+c1}{// Apply a scale (s, t) around pixel (64, 64) }
\PY{k}{static} \PY{k+kt}{void} \PY{n+nf}{scale\PYZus{}64\PYZus{}64}\PY{p}{(}\PY{k+kt}{uint32\PYZus{}t} \PY{n}{s}\PY{p}{,} \PY{k+kt}{uint32\PYZus{}t} \PY{n}{t}\PY{p}{)}
\PY{p}{\PYZob{}}
    \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}translate}\PY{p}{(}\PY{n}{F16}\PY{p}{(}\PY{l+m+mi}{64}\PY{p}{)}\PY{p}{,}\PY{n}{F16}\PY{p}{(}\PY{l+m+mi}{64}\PY{p}{)}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}scale}\PY{p}{(}\PY{n}{s}\PY{p}{,} \PY{n}{t}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}translate}\PY{p}{(}\PY{n}{F16}\PY{p}{(}\PY{o}{\PYZhy{}}\PY{l+m+mi}{64}\PY{p}{)}\PY{p}{,} \PY{n}{F16}\PY{p}{(}\PY{o}{\PYZhy{}}\PY{l+m+mi}{64}\PY{p}{)}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
