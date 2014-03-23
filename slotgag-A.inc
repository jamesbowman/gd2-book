\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}EEPROM.h\PYZgt{} }
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}SPI.h\PYZgt{}}
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}GD2.h\PYZgt{}}

\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZdq{}slotgag\PYZus{}assets.h\PYZdq{}}

\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{LOAD\PYZus{}ASSETS}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapHandle}\PY{p}{(}\PY{n}{BACKGROUND\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BitmapSize}\PY{p}{(}\PY{n}{NEAREST}\PY{p}{,} \PY{n}{REPEAT}\PY{p}{,} \PY{n}{REPEAT}\PY{p}{,} \PY{l+m+mi}{480}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{BACKGROUND\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0xa0a0a0}\PY{p}{)}\PY{p}{;}  
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{\PYZhy{}} \PY{n}{GAMEDUINO\PYZus{}WIDTH} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{,} 
               \PY{l+m+mi}{136} \PY{o}{\PYZhy{}} \PY{n}{GAMEDUINO\PYZus{}HEIGHT} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{,}
               \PY{n}{GAMEDUINO\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}

  \PY{k}{static} \PY{k+kt}{int} \PY{n}{x} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{LineWidth}\PY{p}{(}\PY{l+m+mi}{20} \PY{o}{*} \PY{l+m+mi}{16}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{DST\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{LINES}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{+} \PY{l+m+mi}{100}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{)}\PY{p}{;}
  \PY{n}{x} \PY{o}{=} \PY{p}{(}\PY{n}{x} \PY{o}{+} \PY{l+m+mi}{20}\PY{p}{)} \PY{o}{\PYZpc{}} \PY{l+m+mi}{480}\PY{p}{;} 

  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
