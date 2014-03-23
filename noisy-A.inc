\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}EEPROM.h\PYZgt{} }
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}SPI.h\PYZgt{}}
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZlt{}GD2.h\PYZgt{}}

\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include \PYZdq{}noisy\PYZus{}assets.h\PYZdq{}}

\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{n}{LOAD\PYZus{}ASSETS}\PY{p}{(}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k}{static} \PY{k+kt}{void} \PY{n+nf}{saydigit}\PY{p}{(}\PY{n}{byte} \PY{n}{n}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{k+kt}{uint32\PYZus{}t} \PY{n}{base}\PY{p}{,} \PY{n}{len}\PY{p}{;}
  \PY{k}{switch} \PY{p}{(}\PY{n}{n}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{k}{case} \PY{l+m+mi}{0}: \PY{n}{base} \PY{o}{=} \PY{n}{DIGIT\PYZus{}0}\PY{p}{;} \PY{n}{len} \PY{o}{=} \PY{n}{DIGIT\PYZus{}0\PYZus{}LENGTH}\PY{p}{;} \PY{k}{break}\PY{p}{;}
    \PY{k}{case} \PY{l+m+mi}{1}: \PY{n}{base} \PY{o}{=} \PY{n}{DIGIT\PYZus{}1}\PY{p}{;} \PY{n}{len} \PY{o}{=} \PY{n}{DIGIT\PYZus{}1\PYZus{}LENGTH}\PY{p}{;} \PY{k}{break}\PY{p}{;}
    \PY{k}{case} \PY{l+m+mi}{2}: \PY{n}{base} \PY{o}{=} \PY{n}{DIGIT\PYZus{}2}\PY{p}{;} \PY{n}{len} \PY{o}{=} \PY{n}{DIGIT\PYZus{}2\PYZus{}LENGTH}\PY{p}{;} \PY{k}{break}\PY{p}{;}
    \PY{k}{case} \PY{l+m+mi}{3}: \PY{n}{base} \PY{o}{=} \PY{n}{DIGIT\PYZus{}3}\PY{p}{;} \PY{n}{len} \PY{o}{=} \PY{n}{DIGIT\PYZus{}3\PYZus{}LENGTH}\PY{p}{;} \PY{k}{break}\PY{p}{;}
    \PY{k}{case} \PY{l+m+mi}{4}: \PY{n}{base} \PY{o}{=} \PY{n}{DIGIT\PYZus{}4}\PY{p}{;} \PY{n}{len} \PY{o}{=} \PY{n}{DIGIT\PYZus{}4\PYZus{}LENGTH}\PY{p}{;} \PY{k}{break}\PY{p}{;}
    \PY{k}{case} \PY{l+m+mi}{5}: \PY{n}{base} \PY{o}{=} \PY{n}{DIGIT\PYZus{}5}\PY{p}{;} \PY{n}{len} \PY{o}{=} \PY{n}{DIGIT\PYZus{}5\PYZus{}LENGTH}\PY{p}{;} \PY{k}{break}\PY{p}{;}
    \PY{k}{case} \PY{l+m+mi}{6}: \PY{n}{base} \PY{o}{=} \PY{n}{DIGIT\PYZus{}6}\PY{p}{;} \PY{n}{len} \PY{o}{=} \PY{n}{DIGIT\PYZus{}6\PYZus{}LENGTH}\PY{p}{;} \PY{k}{break}\PY{p}{;}
    \PY{k}{case} \PY{l+m+mi}{7}: \PY{n}{base} \PY{o}{=} \PY{n}{DIGIT\PYZus{}7}\PY{p}{;} \PY{n}{len} \PY{o}{=} \PY{n}{DIGIT\PYZus{}7\PYZus{}LENGTH}\PY{p}{;} \PY{k}{break}\PY{p}{;}
    \PY{k}{case} \PY{l+m+mi}{8}: \PY{n}{base} \PY{o}{=} \PY{n}{DIGIT\PYZus{}8}\PY{p}{;} \PY{n}{len} \PY{o}{=} \PY{n}{DIGIT\PYZus{}8\PYZus{}LENGTH}\PY{p}{;} \PY{k}{break}\PY{p}{;}
    \PY{k}{case} \PY{l+m+mi}{9}: \PY{n}{base} \PY{o}{=} \PY{n}{DIGIT\PYZus{}9}\PY{p}{;} \PY{n}{len} \PY{o}{=} \PY{n}{DIGIT\PYZus{}9\PYZus{}LENGTH}\PY{p}{;} \PY{k}{break}\PY{p}{;}
  \PY{p}{\PYZcb{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{sample}\PY{p}{(}\PY{n}{base}\PY{p}{,} \PY{n}{len}\PY{p}{,} \PY{l+m+mi}{8000}\PY{p}{,} \PY{n}{ADPCM\PYZus{}SAMPLES}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{saydigit}\PY{p}{(}\PY{n}{GD}\PY{p}{.}\PY{n}{random}\PY{p}{(}\PY{l+m+mi}{10}\PY{p}{)}\PY{p}{)}\PY{p}{;} \PY{n}{delay}\PY{p}{(}\PY{l+m+mi}{1000}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
