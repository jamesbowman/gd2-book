\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapHandle}\PY{p}{(}\PY{n}{STRIPE\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}    
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapSize}\PY{p}{(}\PY{n}{NEAREST}\PY{p}{,} \PY{n}{REPEAT}\PY{p}{,} \PY{n}{REPEAT}\PY{p}{,} \PY{l+m+mi}{480}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ClearColorRGB}\PY{p}{(}\PY{l+m+mh}{0x103000}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}   \PY{c+c1}{// write A only}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{ONE}\PY{p}{,} \PY{n}{ONE}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{,} \PY{l+m+mi}{31}\PY{p}{,} \PY{n}{OPT\PYZus{}CENTER}\PY{p}{,}
              \PY{l+s}{\PYZdq{}}\PY{l+s}{STRIPES ARE IN, BABY!}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}   \PY{c+c1}{// write R,G,B only}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{DST\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE\PYZus{}MINUS\PYZus{}DST\PYZus{}ALPHA}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{STRIPE\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}  
\end{Verbatim}
