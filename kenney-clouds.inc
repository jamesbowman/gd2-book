\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}  
\PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{ONE}\PY{p}{,} \PY{n}{ONE\PYZus{}MINUS\PYZus{}SRC\PYZus{}ALPHA}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{BitmapHandle}\PY{p}{(}\PY{n}{CLOUD\PYZus{}HANDLE}\PY{p}{)}\PY{p}{;}
\PY{n}{GD}\PY{p}{.}\PY{n}{Cell}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}
\PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{20}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
  \PY{n}{byte} \PY{n}{lum} \PY{o}{=} \PY{l+m+mi}{128} \PY{o}{+} \PY{l+m+mi}{5} \PY{o}{*} \PY{n}{i}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{n}{lum}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{lum}\PY{p}{,} \PY{n}{lum}\PY{p}{,} \PY{n}{lum}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{n}{state}\PY{p}{.}\PY{n}{clouds}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{x}\PY{p}{,} \PY{n}{state}\PY{p}{.}\PY{n}{clouds}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{y}\PY{p}{)}\PY{p}{;}
  \PY{n}{state}\PY{p}{.}\PY{n}{clouds}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{y} \PY{o}{+}\PY{o}{=} \PY{p}{(}\PY{l+m+mi}{4} \PY{o}{+} \PY{p}{(}\PY{n}{i} \PY{o}{\PYZgt{}}\PY{o}{\PYZgt{}} \PY{l+m+mi}{3}\PY{p}{)}\PY{p}{)}\PY{p}{;}
  \PY{k}{if} \PY{p}{(}\PY{n}{state}\PY{p}{.}\PY{n}{clouds}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{y} \PY{o}{\PYZgt{}} \PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{272}\PY{p}{)}\PY{p}{)}
    \PY{n}{state}\PY{p}{.}\PY{n}{clouds}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{.}\PY{n}{y} \PY{o}{\PYZhy{}}\PY{o}{=} \PY{l+m+mi}{16} \PY{o}{*} \PY{p}{(}\PY{l+m+mi}{272} \PY{o}{+} \PY{n}{CLOUD\PYZus{}HEIGHT}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
