#!/bin/bash

curl -O http://valgrind.org/downloads/valgrind-3.8.1.tar.bz2

md5sum valgrind-3.8.1.tar.bz2

tar -xjvf valgrind-3.8.1.tar.bz2

cd valgrind-3.8.1

./configure

make

sudo make install
