\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;}     
  \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{120}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// White outer circle}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{136}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0x000000}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{110}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// Black inner circle}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{136}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0xffffff}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}clock}\PY{p}{(}\PY{l+m+mi}{136}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{,} \PY{l+m+mi}{130}\PY{p}{,}
               \PY{n}{OPT\PYZus{}NOTICKS} \PY{o}{|} \PY{n}{OPT\PYZus{}NOBACK}\PY{p}{,} \PY{l+m+mi}{8}\PY{p}{,} \PY{l+m+mi}{41}\PY{p}{,} \PY{l+m+mi}{39}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
