\begin{Verbatim}[commandchars=\\\{\}]
\PY{k}{static} \PY{k+kt}{int} \PY{n}{a}\PY{p}{[}\PY{l+m+mi}{256}\PY{p}{]}\PY{p}{;} 

\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZdq{}walk\PYZus{}assets.h\PYZdq{} }

\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)} 
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{p}{)}\PY{p}{;}     
  \PY{n}{LOAD\PYZus{}ASSETS}\PY{p}{(}\PY{p}{)}\PY{p}{;}  
  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{256}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)}
    \PY{n}{a}\PY{p}{[}\PY{n}{i}\PY{p}{]} \PY{o}{=} \PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{512}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ClearColorRGB}\PY{p}{(}\PY{l+m+mh}{0x000050}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{BITMAPS}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{256}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{n}{i}\PY{p}{,} \PY{n}{i}\PY{p}{,} \PY{n}{i}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{n}{a}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{,} \PY{n}{i}\PY{p}{,} \PY{n}{WALK\PYZus{}HANDLE}\PY{p}{,} \PY{p}{(}\PY{n}{a}\PY{p}{[}\PY{n}{i}\PY{p}{]} \PY{o}{\PYZgt{}}\PY{o}{\PYZgt{}} \PY{l+m+mi}{2}\PY{p}{)} \PY{o}{\PYZam{}} \PY{l+m+mi}{7}\PY{p}{)}\PY{p}{;}
    \PY{n}{a}\PY{p}{[}\PY{n}{i}\PY{p}{]} \PY{o}{=} \PY{p}{(}\PY{n}{a}\PY{p}{[}\PY{n}{i}\PY{p}{]} \PY{o}{+} \PY{l+m+mi}{1}\PY{p}{)} \PY{o}{\PYZam{}} \PY{l+m+mi}{511}\PY{p}{;}
  \PY{p}{\PYZcb{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
