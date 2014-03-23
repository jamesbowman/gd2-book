\begin{Verbatim}[commandchars=\\\{\}]
  \PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{p}{)}\PY{p}{;}                   \PY{c+c1}{// Clear to black }

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mh}{0x30}\PY{p}{)}\PY{p}{;}              \PY{c+c1}{// Draw background glows}
  \PY{n}{GD}\PY{p}{.}\PY{n}{LineWidth}\PY{p}{(}\PY{l+m+mi}{48}\PY{p}{)}\PY{p}{;}
  \PY{n}{drawgame}\PY{p}{(}\PY{p}{)}\PY{p}{;}

  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{l+m+mh}{0xff}\PY{p}{)}\PY{p}{;}              \PY{c+c1}{// Draw foreground vectors}
  \PY{n}{GD}\PY{p}{.}\PY{n}{LineWidth}\PY{p}{(}\PY{l+m+mi}{10}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{BlendFunc}\PY{p}{(}\PY{n}{SRC\PYZus{}ALPHA}\PY{p}{,} \PY{n}{ONE}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// additive blending}
  \PY{n}{drawgame}\PY{p}{(}\PY{p}{)}\PY{p}{;} 
\end{Verbatim}
