#!/bin/bash


cd `dirname $0`

svn checkout http://svn.code.sf.net/p/jp2a/code/ jp2a
cd jp2a
aclocal
autoconf
autoheader
automake --add-missing
./configure --prefix=$HOME
make && make install
