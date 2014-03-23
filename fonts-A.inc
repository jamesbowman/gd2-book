\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}EEPROM.h\PYZgt{} }
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}SPI.h\PYZgt{}}
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}GD2.h\PYZgt{}}

\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZdq{}fonts\PYZus{}assets.h\PYZdq{}}

\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{LOAD\PYZus{}ASSETS}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ClearColorRGB}\PY{p}{(}\PY{l+m+mh}{0x103000}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{16}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{k+kt}{int} \PY{n}{x} \PY{o}{=} \PY{p}{(}\PY{n}{i} \PY{o}{\PYZam{}} \PY{l+m+mi}{8}\PY{p}{)} \PY{o}{?} \PY{l+m+mi}{260} \PY{o}{:} \PY{l+m+mi}{20}\PY{p}{;}
    \PY{k+kt}{int} \PY{n}{y} \PY{o}{=} \PY{l+m+mi}{12} \PY{o}{+} \PY{l+m+mi}{33} \PY{o}{*} \PY{p}{(}\PY{n}{i} \PY{o}{\PYZpc{}} \PY{l+m+mi}{8}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{SRC\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE\PYZus{}MINUS\PYZus{}SRC\PYZus{}ALPHA}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}number}\PY{p}{(}\PY{n}{x}\PY{p}{,} \PY{n}{y}\PY{p}{,} \PY{l+m+mi}{26}\PY{p}{,} \PY{n}{OPT\PYZus{}CENTERY}\PY{p}{,} \PY{l+m+mi}{16} \PY{o}{+} \PY{n}{i}\PY{p}{)}\PY{p}{;}
    \PY{c+c1}{// GD.BlendFunc(SRC\PYZus{}ALPHA, ZERO);}
    \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{n}{x} \PY{o}{+} \PY{l+m+mi}{20}\PY{p}{,} \PY{n}{y}\PY{p}{,} \PY{l+m+mi}{16} \PY{o}{+} \PY{n}{i}\PY{p}{,} \PY{n}{OPT\PYZus{}CENTERY}\PY{p}{,} \PY{l+s}{\PYZdq{}}\PY{l+s}{This font}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
  \PY{p}{\PYZcb{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ClearColorRGB}\PY{p}{(}\PY{l+m+mh}{0x103000}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{byte} \PY{n}{font} \PY{o}{=} \PY{n}{NIGHTFONT\PYZus{}HANDLE}\PY{p}{;}  
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{40}\PY{p}{,} \PY{n}{font}\PY{p}{,} \PY{n}{OPT\PYZus{}CENTER}\PY{p}{,} \PY{l+s}{\PYZdq{}}\PY{l+s}{abcdefghijklm}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{100}\PY{p}{,} \PY{n}{font}\PY{p}{,} \PY{n}{OPT\PYZus{}CENTER}\PY{p}{,} \PY{l+s}{\PYZdq{}}\PY{l+s}{nopqrstuvwxyz}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{160}\PY{p}{,} \PY{n}{font}\PY{p}{,} \PY{n}{OPT\PYZus{}CENTER}\PY{p}{,} \PY{l+s}{\PYZdq{}}\PY{l+s}{ABCDEFGHIJKLM}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{220}\PY{p}{,} \PY{n}{font}\PY{p}{,} \PY{n}{OPT\PYZus{}CENTER}\PY{p}{,} \PY{l+s}{\PYZdq{}}\PY{l+s}{NOPQRSTUVWXYZ}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;} 
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  
  \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{10}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{GD}\PY{p}{.}\PY{n}{ClearColorRGB}\PY{p}{(}\PY{l+m+mh}{0x301000}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{136}\PY{p}{,} \PY{l+m+mi}{31}\PY{p}{,} \PY{n}{OPT\PYZus{}CENTER}\PY{p}{,} \PY{l+s}{\PYZdq{}}\PY{l+s}{Night font}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
    \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{p}{\PYZcb{}}

\PY{p}{\PYZcb{}} 
\end{Verbatim}
