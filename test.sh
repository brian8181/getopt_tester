#!/bin/bash

set -v 

./getopt
./getopt -a
./getopt -b
./getopt -c
./getopt -b -c
./getopt -a -c
./getopt -a -b -c
./getopt -c -b -a

./getopt -e
./getopt -f

./getopt -a 55 -b
./getopt -abc 66
./getopt -a "foo" "bar"
./getopt -a "foo" -b "bar"

