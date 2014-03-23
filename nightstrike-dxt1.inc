\begin{Verbatim}[commandchars=\\\{\}]
\PY{k+kt}{void} \PY{n+nf}{draw\PYZus{}dxt1}\PY{p}{(}\PY{n}{byte} \PY{n}{color\PYZus{}handle}\PY{p}{,} \PY{n}{byte} \PY{n}{bit\PYZus{}handle}\PY{p}{)}  
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{ONE}\PY{p}{,} \PY{n}{ZERO}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mh}{0x55}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{bit\PYZus{}handle}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{ONE}\PY{p}{,} \PY{n}{ONE}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mh}{0xaa}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{bit\PYZus{}handle}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,}\PY{l+m+mi}{1}\PY{p}{,}\PY{l+m+mi}{1}\PY{p}{,}\PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}scale}\PY{p}{(}\PY{n}{F16}\PY{p}{(}\PY{l+m+mi}{4}\PY{p}{)}\PY{p}{,} \PY{n}{F16}\PY{p}{(}\PY{l+m+mi}{4}\PY{p}{)}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}setmatrix}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{DST\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ZERO}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{color\PYZus{}handle}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{ONE\PYZus{}MINUS\PYZus{}DST\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{color\PYZus{}handle}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{RestoreContext}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
