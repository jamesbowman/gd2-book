\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}loadimage}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}     
  \PY{n}{GD}\PY{p}{.}\PY{n}{load}\PY{p}{(}\PY{l+s}{\PYZdq{}}\PY{l+s}{tree.jpg}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}
  \PY{k+kt}{int} \PY{n}{x0} \PY{o}{=} \PY{l+m+mi}{160}\PY{p}{,} \PY{n}{x1} \PY{o}{=} \PY{l+m+mi}{240}\PY{p}{,} \PY{n}{x2} \PY{o}{=} \PY{l+m+mi}{320}\PY{p}{;}
  \PY{k+kt}{int} \PY{n}{y0} \PY{o}{=}  \PY{l+m+mi}{56}\PY{p}{,} \PY{n}{y1} \PY{o}{=} \PY{l+m+mi}{136}\PY{p}{,} \PY{n}{y2} \PY{o}{=} \PY{l+m+mi}{216}\PY{p}{;}
  \PY{n}{button}\PY{p}{(}\PY{n}{x0}\PY{p}{,} \PY{n}{y0}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;} \PY{n}{button}\PY{p}{(}\PY{n}{x1}\PY{p}{,} \PY{n}{y0}\PY{p}{,} \PY{l+m+mi}{2}\PY{p}{)}\PY{p}{;} \PY{n}{button}\PY{p}{(}\PY{n}{x2}\PY{p}{,} \PY{n}{y0}\PY{p}{,} \PY{l+m+mi}{3}\PY{p}{)}\PY{p}{;}
  \PY{n}{button}\PY{p}{(}\PY{n}{x0}\PY{p}{,} \PY{n}{y1}\PY{p}{,} \PY{l+m+mi}{4}\PY{p}{)}\PY{p}{;} \PY{n}{button}\PY{p}{(}\PY{n}{x1}\PY{p}{,} \PY{n}{y1}\PY{p}{,} \PY{l+m+mi}{5}\PY{p}{)}\PY{p}{;} \PY{n}{button}\PY{p}{(}\PY{n}{x2}\PY{p}{,} \PY{n}{y1}\PY{p}{,} \PY{l+m+mi}{6}\PY{p}{)}\PY{p}{;}
  \PY{n}{button}\PY{p}{(}\PY{n}{x0}\PY{p}{,} \PY{n}{y2}\PY{p}{,} \PY{l+m+mi}{7}\PY{p}{)}\PY{p}{;} \PY{n}{button}\PY{p}{(}\PY{n}{x1}\PY{p}{,} \PY{n}{y2}\PY{p}{,} \PY{l+m+mi}{8}\PY{p}{)}\PY{p}{;} \PY{n}{button}\PY{p}{(}\PY{n}{x2}\PY{p}{,} \PY{n}{y2}\PY{p}{,} \PY{l+m+mi}{9}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0xffffff}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{DST\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE\PYZus{}MINUS\PYZus{}DST\PYZus{}ALPHA}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{RECTS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;} \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{480}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{)}\PY{p}{;}  
\end{Verbatim}
