\begin{Verbatim}[commandchars=\\\{\}]
\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)} 
\PY{p}{\PYZob{}}
  \PY{k+kt}{int} \PY{n}{sequence}\PY{p}{[}\PY{l+m+mi}{100}\PY{p}{]}\PY{p}{;}
  \PY{k+kt}{int} \PY{n}{length} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;}

  \PY{k}{while} \PY{p}{(}\PY{l+m+mi}{1}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{delay}\PY{p}{(}\PY{l+m+mi}{500}\PY{p}{)}\PY{p}{;}

    \PY{n}{sequence}\PY{p}{[}\PY{n}{length}\PY{o}{+}\PY{o}{+}\PY{p}{]} \PY{o}{=} \PY{n}{random\PYZus{}note}\PY{p}{(}\PY{p}{)}\PY{p}{;}

    \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{n}{length}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)}
      \PY{n}{play}\PY{p}{(}\PY{n}{sequence}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{)}\PY{p}{;}

    \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{n}{length}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
      \PY{k+kt}{int} \PY{n}{pressed} \PY{o}{=} \PY{n}{get\PYZus{}note}\PY{p}{(}\PY{p}{)}\PY{p}{;}
      \PY{k}{if} \PY{p}{(}\PY{n}{pressed} \PY{o}{!}\PY{o}{=} \PY{n}{sequence}\PY{p}{[}\PY{n}{i}\PY{p}{]}\PY{p}{)} \PY{p}{\PYZob{}}
        \PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{69}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZgt{}} \PY{l+m+mi}{49}\PY{p}{;} \PY{n}{i}\PY{o}{\PYZhy{}}\PY{o}{\PYZhy{}}\PY{p}{)} \PY{p}{\PYZob{}}
          \PY{n}{GD}\PY{p}{.}\PY{n}{play}\PY{p}{(}\PY{n}{BELL}\PY{p}{,} \PY{n}{i}\PY{p}{)}\PY{p}{;}
          \PY{n}{delay}\PY{p}{(}\PY{l+m+mi}{50}\PY{p}{)}\PY{p}{;}
        \PY{p}{\PYZcb{}}
        \PY{k}{return}\PY{p}{;}
      \PY{p}{\PYZcb{}}
    \PY{p}{\PYZcb{}}
  \PY{p}{\PYZcb{}}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
