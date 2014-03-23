\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{ClearColorRGB}\PY{p}{(}\PY{l+m+mh}{0x602010}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}             
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{10}\PY{p}{,} \PY{l+m+mi}{72}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}rotate}\PY{p}{(}\PY{n}{DEGREES}\PY{p}{(}\PY{l+m+mf}{22.5}\PY{p}{)}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}setmatrix}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{176}\PY{p}{,} \PY{l+m+mi}{72}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}rotate}\PY{p}{(}\PY{n}{DEGREES}\PY{p}{(}\PY{l+m+mf}{22.5}\PY{p}{)}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}setmatrix}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{342}\PY{p}{,} \PY{l+m+mi}{72}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}  
\end{Verbatim}
