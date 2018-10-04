#!/bin/bash

export MAKEFLAGS=-j
export CFLAGS="-O0 -g -Wall -Wextra -Werror -Wmissing-prototypes -Wold-style-definition -Wpedantic"

rm MonetDBLite_*
 git fetch monetdblite && git subtree pull --prefix src/monetdblite monetdblite Aug2018 --squash && \
R CMD build . && \
R CMD INSTALL --build MonetDBLite_*.tar.gz && \
R CMD INSTALL MonetDBLite_*.tgz && \
(cd tests; R  --slave -f testthat.R) # && \
#(cd ~/source/dbplyr/tests && git pull && R --slave -f testthat.R)
