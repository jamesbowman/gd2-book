\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{StencilOp}\PY{p}{(}\PY{n}{INCR}\PY{p}{,} \PY{n}{INCR}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// incrementing stencil }
\PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{135} \PY{o}{*} \PY{l+m+mi}{16}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;}         \PY{c+c1}{// Draw three white circles}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{\PYZhy{}} \PY{l+m+mi}{100}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{+} \PY{l+m+mi}{100}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0xff0000}\PY{p}{)}\PY{p}{;}    \PY{c+c1}{// Draw pixels with stencil==2 red}
\PY{n}{GD}\PY{p}{.}\PY{n}{StencilFunc}\PY{p}{(}\PY{n}{EQUAL}\PY{p}{,} \PY{l+m+mi}{2}\PY{p}{,} \PY{l+m+mi}{255}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{RECTS}\PY{p}{)}\PY{p}{;}          \PY{c+c1}{// Visit every pixel on the screen}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,}\PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;} \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{480}\PY{p}{,}\PY{l+m+mi}{272}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
