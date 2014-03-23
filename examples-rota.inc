\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+c1}{// Apply a rotation around pixel (64, 64) }
\PY{k}{static} \PY{k+kt}{void} \PY{n+nf}{rotate\PYZus{}64\PYZus{}64}\PY{p}{(}\PY{k+kt}{uint16\PYZus{}t} \PY{n}{a}\PY{p}{)}
\PY{p}{\PYZob{}}
    \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}translate}\PY{p}{(}\PY{n}{F16}\PY{p}{(}\PY{l+m+mi}{64}\PY{p}{)}\PY{p}{,}\PY{n}{F16}\PY{p}{(}\PY{l+m+mi}{64}\PY{p}{)}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}rotate}\PY{p}{(}\PY{n}{a}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}translate}\PY{p}{(}\PY{n}{F16}\PY{p}{(}\PY{o}{\PYZhy{}}\PY{l+m+mi}{64}\PY{p}{)}\PY{p}{,} \PY{n}{F16}\PY{p}{(}\PY{o}{\PYZhy{}}\PY{l+m+mi}{64}\PY{p}{)}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
