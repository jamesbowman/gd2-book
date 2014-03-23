\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}    

  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(} \PY{l+m+mi}{52}\PY{p}{,} \PY{l+m+mi}{50}\PY{p}{)}\PY{p}{;}                    \PY{c+c1}{// left bitmap}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}                 \PY{c+c1}{// only draw A}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{k+kt}{int} \PY{n}{r} \PY{o}{=} \PY{l+m+mi}{20}\PY{p}{;}                               \PY{c+c1}{// corner radius}
  \PY{n}{GD}\PY{p}{.}\PY{n}{LineWidth}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{n}{r}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{RECTS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{300} \PY{o}{+} \PY{n}{r}\PY{p}{,}       \PY{l+m+mi}{50} \PY{o}{+} \PY{n}{r}\PY{p}{)}\PY{p}{;}       \PY{c+c1}{// top\PYZhy{}left}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{300} \PY{o}{+} \PY{l+m+mi}{127} \PY{o}{\PYZhy{}} \PY{n}{r}\PY{p}{,} \PY{l+m+mi}{50} \PY{o}{+} \PY{l+m+mi}{127} \PY{o}{\PYZhy{}} \PY{n}{r}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// bottom\PYZhy{}right}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorMask}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{)}\PY{p}{;}                 \PY{c+c1}{// draw bitmap}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{DST\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE\PYZus{}MINUS\PYZus{}DST\PYZus{}ALPHA}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(} \PY{l+m+mi}{300}\PY{p}{,} \PY{l+m+mi}{50}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
