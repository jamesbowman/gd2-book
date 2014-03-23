\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{define MASK\PYZus{}ALPHA()   GD.BlendFunc(ZERO, SRC\PYZus{}ALPHA)  }

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{k+kt}{int} \PY{n}{x} \PY{o}{=} \PY{l+m+mi}{240} \PY{o}{\PYZhy{}} \PY{n}{GAMEDUINO\PYZus{}WIDTH} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapHandle}\PY{p}{(}\PY{n}{GRADIENT\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapSize}\PY{p}{(}\PY{n}{NEAREST}\PY{p}{,} \PY{n}{REPEAT}\PY{p}{,} \PY{n}{BORDER}\PY{p}{,} \PY{l+m+mi}{480}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}            \PY{c+c1}{// don\PYZsq{}t touch A yet}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}gradient}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{40}\PY{p}{,} \PY{l+m+mh}{0x505060}\PY{p}{,}
                  \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{,} \PY{l+m+mh}{0xc0c080}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}                   \PY{c+c1}{// top bitmap}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{l+m+mi}{80}\PY{p}{,} \PY{n}{GAMEDUINO\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{ONE}\PY{p}{,} \PY{n}{ZERO}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{180}\PY{p}{,} \PY{n}{GRADIENT\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}

                                       \PY{c+c1}{// invert the image}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}translate}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{n}{F16}\PY{p}{(}\PY{n}{GAMEDUINO\PYZus{}HEIGHT} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{)}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}scale}\PY{p}{(}\PY{n}{F16}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{)}\PY{p}{,} \PY{n}{F16}\PY{p}{(}\PY{o}{\PYZhy{}}\PY{l+m+mi}{1}\PY{p}{)}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}translate}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{o}{\PYZhy{}}\PY{n}{F16}\PY{p}{(}\PY{n}{GAMEDUINO\PYZus{}HEIGHT} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{)}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}setmatrix}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{n}{MASK\PYZus{}ALPHA}\PY{p}{(}\PY{p}{)}\PY{p}{;}                        \PY{c+c1}{// mask with gradient}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{l+m+mi}{190}\PY{p}{,} \PY{n}{GAMEDUINO\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}            \PY{c+c1}{// draw the reflection}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{DST\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE\PYZus{}MINUS\PYZus{}DST\PYZus{}ALPHA}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{l+m+mi}{190}\PY{p}{,} \PY{n}{GAMEDUINO\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
