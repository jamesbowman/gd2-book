\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}memwrite}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{8}\PY{p}{)}\PY{p}{;}  
  \PY{k}{static} \PY{k}{const} \PY{n}{PROGMEM} \PY{n}{prog\PYZus{}uchar} \PY{n}{picture}\PY{p}{[}\PY{p}{]} \PY{o}{=} \PY{p}{\PYZob{}}
    \PY{l+m+mi}{0}\PY{n}{b01110111}\PY{p}{,}
    \PY{l+m+mi}{0}\PY{n}{b11100010}\PY{p}{,}
    \PY{l+m+mi}{0}\PY{n}{b11000001}\PY{p}{,}
    \PY{l+m+mi}{0}\PY{n}{b10100011}\PY{p}{,}
    \PY{l+m+mi}{0}\PY{n}{b01110111}\PY{p}{,}
    \PY{l+m+mi}{0}\PY{n}{b00111010}\PY{p}{,}
    \PY{l+m+mi}{0}\PY{n}{b00011100}\PY{p}{,}
    \PY{l+m+mi}{0}\PY{n}{b00101110}\PY{p}{,}
  \PY{p}{\PYZcb{}}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{copy}\PY{p}{(}\PY{n}{picture}\PY{p}{,} \PY{l+m+mi}{8}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapSource}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapSize}\PY{p}{(}\PY{n}{NEAREST}\PY{p}{,} \PY{n}{REPEAT}\PY{p}{,} \PY{n}{REPEAT}\PY{p}{,} \PY{l+m+mi}{480}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapLayout}\PY{p}{(}\PY{n}{L1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{8}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}  
\end{Verbatim}
