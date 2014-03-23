\begin{Verbatim}[commandchars=\\\{\}]
\PY{k}{switch} \PY{p}{(}\PY{n}{GD}\PY{p}{.}\PY{n}{inputs}\PY{p}{.}\PY{n}{track\PYZus{}tag} \PY{o}{\PYZam{}} \PY{l+m+mh}{0xff}\PY{p}{)} \PY{p}{\PYZob{}}   
\PY{k}{case} \PY{n}{TAG\PYZus{}DIAL}:
\PY{k}{case} \PY{n}{TAG\PYZus{}SLIDER}:
\PY{k}{case} \PY{n}{TAG\PYZus{}TOGGLE}:
  \PY{n}{value} \PY{o}{=} \PY{n}{GD}\PY{p}{.}\PY{n}{inputs}\PY{p}{.}\PY{n}{track\PYZus{}val}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
