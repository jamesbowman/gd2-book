\begin{Verbatim}[commandchars=\\\{\}]
      \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0xffffff}\PY{p}{)}\PY{p}{;}    
      \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{p}{(}\PY{l+m+mi}{255} \PY{o}{/} \PY{n}{OVERSAMPLE}\PY{p}{)} \PY{o}{+} \PY{l+m+mi}{50}\PY{p}{)}\PY{p}{;}
      \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{j} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{j} \PY{o}{\PYZlt{}} \PY{n}{OVERSAMPLE}\PY{p}{;} \PY{n}{j}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
        \PY{n}{byte} \PY{n}{linear} \PY{o}{=} \PY{l+m+mi}{255} \PY{o}{*} \PY{p}{(}\PY{n}{i} \PY{o}{*} \PY{n}{OVERSAMPLE} \PY{o}{+} \PY{n}{j}\PY{p}{)} \PY{o}{/}
                            \PY{p}{(}\PY{n}{OVERSAMPLE} \PY{o}{*} \PY{n}{MOVETIME} \PY{o}{\PYZhy{}} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}
        \PY{n}{byte} \PY{n}{scurve} \PY{o}{=} \PY{n}{sinus}\PY{p}{(}\PY{n}{linear}\PY{p}{)}\PY{p}{;}
        \PY{k+kt}{int} \PY{n}{x} \PY{o}{=} \PY{n}{x0} \PY{o}{+} \PY{p}{(}\PY{k+kt}{long}\PY{p}{)}\PY{p}{(}\PY{n}{x1} \PY{o}{\PYZhy{}} \PY{n}{x0}\PY{p}{)} \PY{o}{*} \PY{n}{scurve} \PY{o}{/} \PY{l+m+mi}{255}\PY{p}{;}
        \PY{k+kt}{int} \PY{n}{y} \PY{o}{=} \PY{n}{y0} \PY{o}{+} \PY{p}{(}\PY{k+kt}{long}\PY{p}{)}\PY{p}{(}\PY{n}{y1} \PY{o}{\PYZhy{}} \PY{n}{y0}\PY{p}{)} \PY{o}{*} \PY{n}{scurve} \PY{o}{/} \PY{l+m+mi}{255}\PY{p}{;}

        \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{)}\PY{p}{;}
      \PY{p}{\PYZcb{}} 
\end{Verbatim}
