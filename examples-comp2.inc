\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}             \PY{c+c1}{// now alpha is all zeroes }
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,}\PY{l+m+mi}{1}\PY{p}{,}\PY{l+m+mi}{1}\PY{p}{,}\PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}  \PY{c+c1}{// draw tree, but leave alpha zero}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}          
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,}\PY{l+m+mi}{0}\PY{p}{,}\PY{l+m+mi}{0}\PY{p}{,}\PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}      
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{ONE}\PY{p}{,} \PY{n}{ONE\PYZus{}MINUS\PYZus{}SRC\PYZus{}ALPHA}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{120}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// outer circle}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{136}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{ZERO}\PY{p}{,} \PY{n}{ONE\PYZus{}MINUS\PYZus{}SRC\PYZus{}ALPHA}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{110}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// inner circle}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{136}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{ONE}\PY{p}{,} \PY{n}{ONE\PYZus{}MINUS\PYZus{}SRC\PYZus{}ALPHA}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}clock}\PY{p}{(}\PY{l+m+mi}{136}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{,} \PY{l+m+mi}{130}\PY{p}{,}
               \PY{n}{OPT\PYZus{}NOTICKS} \PY{o}{|} \PY{n}{OPT\PYZus{}NOBACK}\PY{p}{,} \PY{l+m+mi}{8}\PY{p}{,} \PY{l+m+mi}{41}\PY{p}{,} \PY{l+m+mi}{39}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;} 

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,}\PY{l+m+mi}{1}\PY{p}{,}\PY{l+m+mi}{1}\PY{p}{,}\PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{DST\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0x808080}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{RECTS}\PY{p}{)}\PY{p}{;}        \PY{c+c1}{// Visit every pixel on the screen}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,}\PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{480}\PY{p}{,}\PY{l+m+mi}{272}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
