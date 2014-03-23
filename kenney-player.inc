\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{BitmapHandle}\PY{p}{(}\PY{n}{PLAYER1\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}  
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
\PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{3}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
  \PY{n}{rotate\PYZus{}player}\PY{p}{(}\PY{n}{a} \PY{o}{+} \PY{n}{i} \PY{o}{*} \PY{l+m+mh}{0x7000}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Cell}\PY{p}{(}\PY{n}{i}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{n}{state}\PY{p}{.}\PY{n}{p}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{x} \PY{o}{\PYZhy{}} \PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{n}{PLAYER1\PYZus{}SIZE} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{)}\PY{p}{,}
              \PY{n}{state}\PY{p}{.}\PY{n}{p}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{y} \PY{o}{\PYZhy{}} \PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{n}{PLAYER1\PYZus{}SIZE} \PY{o}{/} \PY{l+m+mi}{2}\PY{p}{)}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
