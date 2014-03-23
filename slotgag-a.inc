\begin{Verbatim}[commandchars=\\\{\}]
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
\end{Verbatim}
