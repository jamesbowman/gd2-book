\begin{Verbatim}[commandchars=\\\{\}]
\PY{k}{static} \PY{k+kt}{void} \PY{n+nf}{button}\PY{p}{(}\PY{k+kt}{int} \PY{n}{x}\PY{p}{,} \PY{k+kt}{int} \PY{n}{y}\PY{p}{,} \PY{n}{byte} \PY{n}{label}\PY{p}{)}  
\PY{p}{\PYZob{}}
  \PY{k+kt}{int} \PY{n}{sz} \PY{o}{=} \PY{l+m+mi}{18}\PY{p}{;}                    \PY{c+c1}{// button size in pixels}

  \PY{n}{GD}\PY{p}{.}\PY{n}{Tag}\PY{p}{(}\PY{n}{label}\PY{p}{)}\PY{p}{;}
  \PY{n}{PAINT\PYZus{}ALPHA}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{RECTS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{LineWidth}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{20}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{\PYZhy{}} \PY{n}{sz}\PY{p}{,} \PY{n}{y} \PY{o}{\PYZhy{}} \PY{n}{sz}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{+} \PY{n}{sz}\PY{p}{,} \PY{n}{y} \PY{o}{+} \PY{n}{sz}\PY{p}{)}\PY{p}{;}

  \PY{n}{CLEAR\PYZus{}ALPHA}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mi}{200}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mi}{200}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{LineWidth}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{15}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{\PYZhy{}} \PY{n}{sz}\PY{p}{,} \PY{n}{y} \PY{o}{\PYZhy{}} \PY{n}{sz}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{x} \PY{o}{+} \PY{n}{sz}\PY{p}{,} \PY{n}{y} \PY{o}{+} \PY{n}{sz}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mh}{0xff}\PY{p}{)}\PY{p}{;}
  \PY{n}{PAINT\PYZus{}ALPHA}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}number}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{,} \PY{l+m+mi}{31}\PY{p}{,} \PY{n}{OPT\PYZus{}CENTER}\PY{p}{,} \PY{n}{label}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
