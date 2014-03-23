\begin{Verbatim}[commandchars=\\\{\}]
\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)} 
\PY{p}{\PYZob{}}
  \PY{k}{static} \PY{n}{byte} \PY{n}{blob\PYZus{}i}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{get\PYZus{}inputs}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{k}{if} \PY{p}{(}\PY{n}{GD}\PY{p}{.}\PY{n}{inputs}\PY{p}{.}\PY{n}{x} \PY{o}{!}\PY{o}{=} \PY{o}{\PYZhy{}}\PY{l+m+mi}{32768}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{blobs}\PY{p}{[}\PY{n}{blob\PYZus{}i}\PY{p}{]}\PY{p}{.}\PY{n}{x} \PY{o}{=} \PY{n}{GD}\PY{p}{.}\PY{n}{inputs}\PY{p}{.}\PY{n}{x} \PY{o}{\PYZlt{}}\PY{o}{\PYZlt{}} \PY{l+m+mi}{4}\PY{p}{;} 
    \PY{n}{blobs}\PY{p}{[}\PY{n}{blob\PYZus{}i}\PY{p}{]}\PY{p}{.}\PY{n}{y} \PY{o}{=} \PY{n}{GD}\PY{p}{.}\PY{n}{inputs}\PY{p}{.}\PY{n}{y} \PY{o}{\PYZlt{}}\PY{o}{\PYZlt{}} \PY{l+m+mi}{4}\PY{p}{;} 
  \PY{p}{\PYZcb{}} \PY{k}{else} \PY{p}{\PYZob{}}
    \PY{n}{blobs}\PY{p}{[}\PY{n}{blob\PYZus{}i}\PY{p}{]}\PY{p}{.}\PY{n}{x} \PY{o}{=} \PY{n}{OFFSCREEN}\PY{p}{;}
    \PY{n}{blobs}\PY{p}{[}\PY{n}{blob\PYZus{}i}\PY{p}{]}\PY{p}{.}\PY{n}{y} \PY{o}{=} \PY{n}{OFFSCREEN}\PY{p}{;}
  \PY{p}{\PYZcb{}}
  \PY{n}{blob\PYZus{}i} \PY{o}{=} \PY{p}{(}\PY{n}{blob\PYZus{}i} \PY{o}{+} \PY{l+m+mi}{1}\PY{p}{)} \PY{o}{\PYZam{}} \PY{p}{(}\PY{n}{NBLOBS} \PY{o}{\PYZhy{}} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ClearColorRGB}\PY{p}{(}\PY{l+m+mh}{0xe0e0e0}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{n}{NBLOBS}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{c+c1}{// Blobs fade away and swell as they age}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{n}{i} \PY{o}{\PYZlt{}}\PY{o}{\PYZlt{}} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{p}{(}\PY{l+m+mi}{1024} \PY{o}{+} \PY{l+m+mi}{16}\PY{p}{)} \PY{o}{\PYZhy{}} \PY{p}{(}\PY{n}{i} \PY{o}{\PYZlt{}}\PY{o}{\PYZlt{}} \PY{l+m+mi}{3}\PY{p}{)}\PY{p}{)}\PY{p}{;}

    \PY{c+c1}{// Random color for each blob, keyed from (blob\PYZus{}i + i)}
    \PY{k+kt}{uint8\PYZus{}t} \PY{n}{j} \PY{o}{=} \PY{p}{(}\PY{n}{blob\PYZus{}i} \PY{o}{+} \PY{n}{i}\PY{p}{)} \PY{o}{\PYZam{}} \PY{p}{(}\PY{n}{NBLOBS} \PY{o}{\PYZhy{}} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}
    \PY{n}{byte} \PY{n}{r} \PY{o}{=} \PY{n}{j} \PY{o}{*} \PY{l+m+mi}{17}\PY{p}{;}
    \PY{n}{byte} \PY{n}{g} \PY{o}{=} \PY{n}{j} \PY{o}{*} \PY{l+m+mi}{23}\PY{p}{;}
    \PY{n}{byte} \PY{n}{b} \PY{o}{=} \PY{n}{j} \PY{o}{*} \PY{l+m+mi}{147}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{r}\PY{p}{,} \PY{n}{g}\PY{p}{,} \PY{n}{b}\PY{p}{)}\PY{p}{;}

    \PY{c+c1}{// Draw it!}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{n}{blobs}\PY{p}{[}\PY{n}{j}\PY{p}{]}\PY{p}{.}\PY{n}{x}\PY{p}{,} \PY{n}{blobs}\PY{p}{[}\PY{n}{j}\PY{p}{]}\PY{p}{.}\PY{n}{y}\PY{p}{)}\PY{p}{;}
  \PY{p}{\PYZcb{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
