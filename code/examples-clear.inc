\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{ClearColorRGB}\PY{p}{(}\PY{l+m+mh}{0x0000ff}\PY{p}{)}\PY{p}{;} \PY{c+c1}{// Clear color to blue }
\PY{n}{GD}\PY{p}{.}\PY{n}{ClearStencil}\PY{p}{(}\PY{l+m+mh}{0x80}\PY{p}{)}\PY{p}{;}      \PY{c+c1}{// Clear stencil to 0x80}
\PY{n}{GD}\PY{p}{.}\PY{n}{ClearTag}\PY{p}{(}\PY{l+m+mi}{100}\PY{p}{)}\PY{p}{;}           \PY{c+c1}{// Clear tag to 100}
\PY{n}{GD}\PY{p}{.}\PY{n}{Clear}\PY{p}{(}\PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{,} \PY{l+m+mi}{1}\PY{p}{)}\PY{p}{;}          \PY{c+c1}{// Go! }
\end{Verbatim}
