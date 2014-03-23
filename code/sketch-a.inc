\begin{Verbatim}[commandchars=\\\{\}]
\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)} 
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}memset}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{480UL} \PY{o}{*} \PY{l+m+mi}{272UL}\PY{p}{)}\PY{p}{;}   \PY{c+c1}{// clear the bitmap}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}                           \PY{c+c1}{// draw the bitmap}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapLayout}\PY{p}{(}\PY{n}{L8}\PY{p}{,} \PY{l+m+mi}{480}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapSize}\PY{p}{(}\PY{n}{NEAREST}\PY{p}{,} \PY{n}{BORDER}\PY{p}{,} \PY{n}{BORDER}\PY{p}{,} \PY{l+m+mi}{480}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}sketch}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{480}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{L8}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// start sketching}
  \PY{n}{GD}\PY{p}{.}\PY{n}{finish}\PY{p}{(}\PY{p}{)}\PY{p}{;}                          \PY{c+c1}{// flush all commands}
\PY{p}{\PYZcb{}}

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)} \PY{p}{\PYZob{}} \PY{p}{\PYZcb{}} 
\end{Verbatim}
