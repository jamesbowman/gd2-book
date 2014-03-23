\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;} 
\PY{n}{GD}\PY{p}{.}\PY{n}{BitmapHandle}\PY{p}{(}\PY{n}{TILES\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}
\PY{k}{const} \PY{n}{PROGMEM} \PY{n}{prog\PYZus{}uchar} \PY{o}{*}\PY{n}{src} \PY{o}{=} \PY{n}{layer1\PYZus{}map} \PY{o}{+} \PY{p}{(}\PY{n}{y} \PY{o}{\PYZgt{}}\PY{o}{\PYZgt{}} \PY{l+m+mi}{5}\PY{p}{)} \PY{o}{*} \PY{l+m+mi}{15}\PY{p}{;}
\PY{n}{byte} \PY{n}{yo} \PY{o}{=} \PY{n}{y} \PY{o}{\PYZam{}} \PY{l+m+mi}{31}\PY{p}{;}
\PY{k}{for} \PY{p}{(}\PY{n}{byte} \PY{n}{j} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{j} \PY{o}{\PYZlt{}} \PY{l+m+mi}{10}\PY{p}{;} \PY{n}{j}\PY{o}{+}\PY{o}{+}\PY{p}{)}
  \PY{k}{for} \PY{p}{(}\PY{n}{byte} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{15}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{byte} \PY{n}{t} \PY{o}{=} \PY{n}{pgm\PYZus{}read\PYZus{}byte\PYZus{}near}\PY{p}{(}\PY{n}{src}\PY{o}{+}\PY{o}{+}\PY{p}{)}\PY{p}{;}
    \PY{k}{if} \PY{p}{(}\PY{n}{t} \PY{o}{!}\PY{o}{=} \PY{l+m+mi}{0}\PY{p}{)} \PY{p}{\PYZob{}}
      \PY{n}{GD}\PY{p}{.}\PY{n}{Cell}\PY{p}{(}\PY{n}{t} \PY{o}{\PYZhy{}} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}
      \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{32} \PY{o}{*} \PY{n}{i}\PY{p}{,} \PY{l+m+mi}{16} \PY{o}{*} \PY{p}{(}\PY{p}{(}\PY{l+m+mi}{32} \PY{o}{*} \PY{n}{j}\PY{p}{)} \PY{o}{\PYZhy{}} \PY{n}{yo}\PY{p}{)}\PY{p}{)}\PY{p}{;}
    \PY{p}{\PYZcb{}}
  \PY{p}{\PYZcb{}} 
\end{Verbatim}
