gd2-book
========

LaTeX source for [The Gameduino 2 Tutorial, Reference and Cookbook]
(http://www.amazon.com/gp/product/1492888621/ref=as_li_ss_tl?ie=UTF8&camp=1789&creative=390957&creativeASIN=1492888621&linkCode=as2&tag=wispdiary-20)

To prepare for build on Debian/Ubuntu, install these packages:

``texlive-latex-base``
``texlive``
``texlive-latex-extra``

For example:

    sudo apt-get install texlive-latex-base texlive texlive-latex-extra

Then to build the PDF, run:

    pdflatex book-en.tex
    makeindex book-en

Notes to translators
--------------------

Please copy the English version files
``book-en.tex``
``drawcommands-en.tex``
``highcommands-en.tex``
to files with the suffix for your language.
There are the only files that you should need to change.
