\begin{Verbatim}[commandchars=\\\{\}]
\PY{k+kt}{void} \PY{n+nf}{drawscreen}\PY{p}{(}\PY{k+kt}{int} \PY{n}{pressed}\PY{p}{)}  
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{get\PYZus{}inputs}\PY{p}{(}\PY{p}{)}\PY{p}{;}  
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}       

  \PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{60}\PY{p}{)}\PY{p}{;}  \PY{c+c1}{// 60\PYZhy{}pixel radius points}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Tag}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}
  \PY{k}{if} \PY{p}{(}\PY{n}{pressed} \PY{o}{=}\PY{o}{=} \PY{l+m+mi}{1}\PY{p}{)}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{LIGHT\PYZus{}GREEN}\PY{p}{)}\PY{p}{;}
  \PY{k}{else}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{DARK\PYZus{}GREEN}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{\PYZhy{}} \PY{l+m+mi}{70}\PY{p}{,} \PY{l+m+mi}{136} \PY{o}{\PYZhy{}} \PY{l+m+mi}{70}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{Tag}\PY{p}{(}\PY{l+m+mi}{2}\PY{p}{)}\PY{p}{;}
  \PY{k}{if} \PY{p}{(}\PY{n}{pressed} \PY{o}{=}\PY{o}{=} \PY{l+m+mi}{2}\PY{p}{)}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{LIGHT\PYZus{}RED}\PY{p}{)}\PY{p}{;}
  \PY{k}{else}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{DARK\PYZus{}RED}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{+} \PY{l+m+mi}{70}\PY{p}{,} \PY{l+m+mi}{136} \PY{o}{\PYZhy{}} \PY{l+m+mi}{70}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{Tag}\PY{p}{(}\PY{l+m+mi}{3}\PY{p}{)}\PY{p}{;}
  \PY{k}{if} \PY{p}{(}\PY{n}{pressed} \PY{o}{=}\PY{o}{=} \PY{l+m+mi}{3}\PY{p}{)}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{LIGHT\PYZus{}YELLOW}\PY{p}{)}\PY{p}{;}
  \PY{k}{else}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{DARK\PYZus{}YELLOW}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{\PYZhy{}} \PY{l+m+mi}{70}\PY{p}{,} \PY{l+m+mi}{136} \PY{o}{+} \PY{l+m+mi}{70}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{Tag}\PY{p}{(}\PY{l+m+mi}{4}\PY{p}{)}\PY{p}{;}
  \PY{k}{if} \PY{p}{(}\PY{n}{pressed} \PY{o}{=}\PY{o}{=} \PY{l+m+mi}{4}\PY{p}{)}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{LIGHT\PYZus{}BLUE}\PY{p}{)}\PY{p}{;}
  \PY{k}{else}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{DARK\PYZus{}BLUE}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{240} \PY{o}{+} \PY{l+m+mi}{70}\PY{p}{,} \PY{l+m+mi}{136} \PY{o}{+} \PY{l+m+mi}{70}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
