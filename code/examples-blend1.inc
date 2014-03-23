\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;}  \PY{c+c1}{// draw 50\PYZhy{}pixel wide green circles }
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mi}{20}\PY{p}{,} \PY{l+m+mi}{91}\PY{p}{,} \PY{l+m+mi}{71}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{50} \PY{o}{*} \PY{l+m+mi}{16}\PY{p}{)}\PY{p}{;}

  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{x} \PY{o}{=} \PY{l+m+mi}{100}\PY{p}{;} \PY{n}{x} \PY{o}{\PYZlt{}}\PY{o}{=} \PY{l+m+mi}{380}\PY{p}{;} \PY{n}{x} \PY{o}{+}\PY{o}{=} \PY{l+m+mi}{40}\PY{p}{)}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{l+m+mi}{72}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{SRC\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE}\PY{p}{)}\PY{p}{;}   \PY{c+c1}{// additive blending}
  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{x} \PY{o}{=} \PY{l+m+mi}{100}\PY{p}{;} \PY{n}{x} \PY{o}{\PYZlt{}}\PY{o}{=} \PY{l+m+mi}{380}\PY{p}{;} \PY{n}{x} \PY{o}{+}\PY{o}{=} \PY{l+m+mi}{40}\PY{p}{)}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{l+m+mi}{200}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
