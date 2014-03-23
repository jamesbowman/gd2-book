\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0x00ff00}\PY{p}{)}\PY{p}{;}                  \PY{c+c1}{// pure green}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{\PYZhy{}} \PY{l+m+mi}{130}\PY{p}{,} \PY{l+m+mi}{136} \PY{o}{\PYZhy{}} \PY{l+m+mi}{130}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0xff8080}\PY{p}{)}\PY{p}{;}                  \PY{c+c1}{// pinkish}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240}      \PY{p}{,} \PY{l+m+mi}{136} \PY{o}{\PYZhy{}} \PY{l+m+mi}{130}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0xffff80}\PY{p}{)}\PY{p}{;}                  \PY{c+c1}{// yellowish}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{\PYZhy{}} \PY{l+m+mi}{130}\PY{p}{,} \PY{l+m+mi}{136}      \PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0xffffff}\PY{p}{)}\PY{p}{;}                  \PY{c+c1}{// white}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240}      \PY{p}{,} \PY{l+m+mi}{136}      \PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
