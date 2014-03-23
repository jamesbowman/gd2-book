\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}EEPROM.h\PYZgt{} }
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}SPI.h\PYZgt{}}
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}GD2.h\PYZgt{}}

\PY{k}{static} \PY{k+kt}{int} \PY{n}{x0}\PY{p}{[}\PY{l+m+mi}{17}\PY{p}{]}\PY{p}{,} \PY{n}{yy0}\PY{p}{[}\PY{l+m+mi}{17}\PY{p}{]}\PY{p}{;}
\PY{k}{static} \PY{k+kt}{int} \PY{n}{x1}\PY{p}{[}\PY{l+m+mi}{17}\PY{p}{]}\PY{p}{,} \PY{n}{yy1}\PY{p}{[}\PY{l+m+mi}{17}\PY{p}{]}\PY{p}{;}

\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{n}{byte} \PY{n}{th} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{th} \PY{o}{\PYZlt{}} \PY{l+m+mi}{17}\PY{p}{;} \PY{n}{th}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{k+kt}{int} \PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{polar}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{,} \PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{128}\PY{p}{,} \PY{n}{th} \PY{o}{\PYZlt{}}\PY{o}{\PYZlt{}} \PY{l+m+mi}{12}\PY{p}{)}\PY{p}{;}
    \PY{n}{x0}\PY{p}{[}\PY{n}{th}\PY{p}{]} \PY{o}{=} \PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{240} \PY{o}{+} \PY{n}{x}\PY{p}{;}
    \PY{n}{yy0}\PY{p}{[}\PY{n}{th}\PY{p}{]} \PY{o}{=} \PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{136} \PY{o}{+} \PY{n}{y}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{polar}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{,} \PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{16}\PY{p}{,} \PY{n}{th} \PY{o}{\PYZlt{}}\PY{o}{\PYZlt{}} \PY{l+m+mi}{12}\PY{p}{)}\PY{p}{;}
    \PY{n}{x1}\PY{p}{[}\PY{n}{th}\PY{p}{]} \PY{o}{=} \PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{240} \PY{o}{+} \PY{n}{x}\PY{p}{;}
    \PY{n}{yy1}\PY{p}{[}\PY{n}{th}\PY{p}{]} \PY{o}{=} \PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{190} \PY{o}{+} \PY{n}{y}\PY{p}{;}
  \PY{p}{\PYZcb{}}
\PY{p}{\PYZcb{}}

\PY{k}{static} \PY{k+kt}{void} \PY{n+nf}{polar}\PY{p}{(}\PY{k+kt}{int} \PY{n}{r}\PY{p}{,} \PY{k+kt}{uint16\PYZus{}t} \PY{n}{th}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{k+kt}{int} \PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{polar}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{,} \PY{l+m+mi}{16} \PY{o}{*} \PY{n}{r}\PY{p}{,} \PY{n}{th}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{240} \PY{o}{+} \PY{n}{x}\PY{p}{,} \PY{l+m+mi}{16} \PY{o}{*} \PY{l+m+mi}{136} \PY{o}{+} \PY{n}{y}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k}{static} \PY{k+kt}{void} \PY{n+nf}{drawgame}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0x2020ff}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{LINE\PYZus{}STRIP}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{n}{byte} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{17}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{n}{x0}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{,} \PY{n}{yy0}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{LINE\PYZus{}STRIP}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{n}{byte} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{17}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{n}{x1}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{,} \PY{n}{yy1}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{LINES}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{n}{byte} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{17}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{n}{x0}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{,} \PY{n}{yy0}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2f}\PY{p}{(}\PY{n}{x1}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{,} \PY{n}{yy1}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{)}\PY{p}{;}
  \PY{p}{\PYZcb{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorRGB}\PY{p}{(}\PY{l+m+mh}{0xffff00}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{LINE\PYZus{}STRIP}\PY{p}{)}\PY{p}{;}
  \PY{n}{polar}\PY{p}{(}\PY{l+m+mi}{128}\PY{p}{,} \PY{l+m+mh}{0x3000}\PY{p}{)}\PY{p}{;}
  \PY{n}{polar}\PY{p}{(}\PY{l+m+mi}{142}\PY{p}{,} \PY{l+m+mh}{0x3900}\PY{p}{)}\PY{p}{;}
  \PY{n}{polar}\PY{p}{(}\PY{l+m+mi}{128}\PY{p}{,} \PY{l+m+mh}{0x4000}\PY{p}{)}\PY{p}{;}
  \PY{n}{polar}\PY{p}{(}\PY{l+m+mi}{118}\PY{p}{,} \PY{l+m+mh}{0x3c00}\PY{p}{)}\PY{p}{;}
  \PY{n}{polar}\PY{p}{(}\PY{l+m+mi}{128}\PY{p}{,} \PY{l+m+mh}{0x3e00}\PY{p}{)}\PY{p}{;}
  \PY{n}{polar}\PY{p}{(}\PY{l+m+mi}{134}\PY{p}{,} \PY{l+m+mh}{0x3900}\PY{p}{)}\PY{p}{;}
  \PY{n}{polar}\PY{p}{(}\PY{l+m+mi}{128}\PY{p}{,} \PY{l+m+mh}{0x3300}\PY{p}{)}\PY{p}{;}
  \PY{n}{polar}\PY{p}{(}\PY{l+m+mi}{118}\PY{p}{,} \PY{l+m+mh}{0x3400}\PY{p}{)}\PY{p}{;}
  \PY{n}{polar}\PY{p}{(}\PY{l+m+mi}{128}\PY{p}{,} \PY{l+m+mh}{0x3000}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}                   \PY{c+c1}{// Clear to black }

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mh}{0x30}\PY{p}{)}\PY{p}{;}              \PY{c+c1}{// Draw background glows}
  \PY{n}{GD}\PY{p}{.}\PY{n}{LineWidth}\PY{p}{(}\PY{l+m+mi}{48}\PY{p}{)}\PY{p}{;}
  \PY{n}{drawgame}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mh}{0xff}\PY{p}{)}\PY{p}{;}              \PY{c+c1}{// Draw foreground vectors}
  \PY{n}{GD}\PY{p}{.}\PY{n}{LineWidth}\PY{p}{(}\PY{l+m+mi}{10}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{SRC\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// additive blending}
  \PY{n}{drawgame}\PY{p}{(}\PY{p}{)}\PY{p}{;} 

  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}  
\PY{p}{\PYZcb{}}
\end{Verbatim}
