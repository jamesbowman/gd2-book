\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapLayout}\PY{p}{(}\PY{n}{L8}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{ONE}\PY{p}{,} \PY{n}{ZERO}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapSize}\PY{p}{(}\PY{n}{NEAREST}\PY{p}{,} \PY{n}{REPEAT}\PY{p}{,} \PY{n}{REPEAT}\PY{p}{,} \PY{l+m+mi}{60}\PY{p}{,} \PY{l+m+mi}{30}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{10}\PY{p}{,} \PY{l+m+mi}{10}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// each vertex draws a 60X30 rectangle}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{110}\PY{p}{,} \PY{l+m+mi}{110}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{210}\PY{p}{,} \PY{l+m+mi}{210}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
