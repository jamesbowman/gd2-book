\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;} 
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{110}\PY{p}{,} \PY{l+m+mi}{6}\PY{p}{)}\PY{p}{;}             \PY{c+c1}{// Top left: ALWAYS}
\PY{n}{GD}\PY{p}{.}\PY{n}{AlphaFunc}\PY{p}{(}\PY{n}{EQUAL}\PY{p}{,} \PY{l+m+mi}{255}\PY{p}{)}\PY{p}{;}         \PY{c+c1}{// Top right: (A == 255)}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{6}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{AlphaFunc}\PY{p}{(}\PY{n}{LESS}\PY{p}{,} \PY{l+m+mi}{160}\PY{p}{)}\PY{p}{;}          \PY{c+c1}{// Bottom left: (A \PYZlt{} 160)}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{110}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{AlphaFunc}\PY{p}{(}\PY{n}{GEQUAL}\PY{p}{,} \PY{l+m+mi}{160}\PY{p}{)}\PY{p}{;}        \PY{c+c1}{// Bottom right: (A \PYZgt{}= 160)}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
