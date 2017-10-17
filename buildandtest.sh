#!/bin/bash

export MAKEFLAGS=-j
export CFLAGS="-O0 -g -Wall -Wextra -Werror -Wmissing-prototypes -Wold-style-definition -Wpedantic"

rm MonetDBLite_*
git submodule update --recursive --remote --depth 1 && \
R CMD build . && \
R CMD INSTALL --build MonetDBLite_*.tar.gz && \
R CMD INSTALL MonetDBLite_*.tgz && \
(cd tests; R  --slave -f testthat.R) && \
(cd ~/source/dbplyr/tests && git pull && R --slave -f testthat.R)
