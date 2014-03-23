\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{define PAINT\PYZus{}ALPHA()  GD.BlendFunc(ONE, ONE\PYZus{}MINUS\PYZus{}SRC\PYZus{}ALPHA) }
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{define CLEAR\PYZus{}ALPHA()  GD.BlendFunc(ZERO, ONE\PYZus{}MINUS\PYZus{}SRC\PYZus{}ALPHA)}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ClearColorA}\PY{p}{(}\PY{l+m+mh}{0x80}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{n}{PAINT\PYZus{}ALPHA}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{draw\PYZus{}left\PYZus{}circle}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{n}{CLEAR\PYZus{}ALPHA}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{draw\PYZus{}right\PYZus{}circle}\PY{p}{(}\PY{p}{)}\PY{p}{;}       
\end{Verbatim}
