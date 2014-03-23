\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}EEPROM.h\PYZgt{} }
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}SPI.h\PYZgt{}}
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}GD2.h\PYZgt{}}

\PY{c+cp}{\PYZsh{}}\PY{c+cp}{define MUSICFILE   \PYZdq{}mesmeriz.ima\PYZdq{}}

\PY{k}{static} \PY{n}{Streamer} \PY{n}{stream}\PY{p}{;}

\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{stream}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{n}{MUSICFILE}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}gradient}\PY{p}{(}\PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{40}\PY{p}{,} \PY{l+m+mh}{0x282830}\PY{p}{,}
                  \PY{l+m+mi}{0}\PY{p}{,} \PY{l+m+mi}{272}\PY{p}{,} \PY{l+m+mh}{0x606040}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}text}\PY{p}{(}\PY{l+m+mi}{240}\PY{p}{,} \PY{l+m+mi}{100}\PY{p}{,} \PY{l+m+mi}{31}\PY{p}{,} \PY{n}{OPT\PYZus{}CENTER}\PY{p}{,} \PY{n}{MUSICFILE}\PY{p}{)}\PY{p}{;}
  \PY{k+kt}{uint16\PYZus{}t} \PY{n}{val}\PY{p}{,} \PY{n}{range}\PY{p}{;}
  \PY{n}{stream}\PY{p}{.}\PY{n}{progress}\PY{p}{(}\PY{n}{val}\PY{p}{,} \PY{n}{range}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{cmd\PYZus{}slider}\PY{p}{(}\PY{l+m+mi}{30}\PY{p}{,} \PY{l+m+mi}{160}\PY{p}{,} \PY{l+m+mi}{420}\PY{p}{,} \PY{l+m+mi}{8}\PY{p}{,} \PY{l+m+mi}{0}\PY{p}{,} \PY{n}{val}\PY{p}{,} \PY{n}{range}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{swap}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{finish}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{stream}\PY{p}{.}\PY{n}{feed}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
