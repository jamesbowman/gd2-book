\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}gradient}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,}   \PY{l+m+mh}{0x8080c0}\PY{p}{,} 
                \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{271}\PY{p}{,} \PY{l+m+mh}{0xc0d080}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0x000000}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mi}{128}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{\PYZhy{}} \PY{l+m+mi}{12} \PY{o}{\PYZhy{}} \PY{n}{EX2\PYZus{}GAMEDUINO\PYZus{}WIDTH} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{,}
             \PY{l+m+mi}{136} \PY{o}{+} \PY{l+m+mi}{12} \PY{o}{\PYZhy{}} \PY{n}{EX2\PYZus{}GAMEDUINO\PYZus{}HEIGHT} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{,}
             \PY{n}{EX2\PYZus{}GAMEDUINO\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0xffffff}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mh}{0xff}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{\PYZhy{}} \PY{n}{EX2\PYZus{}GAMEDUINO\PYZus{}WIDTH} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{,}
             \PY{l+m+mi}{136} \PY{o}{\PYZhy{}} \PY{n}{EX2\PYZus{}GAMEDUINO\PYZus{}HEIGHT} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{,}
             \PY{n}{EX2\PYZus{}GAMEDUINO\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
