#!/bin/bash

echo "compiling test version"
g++ -g -D_TEST_ -std=c++11 $1.cpp  -lbenchmark -lpthread -lgtest -o $1_test
./$1_test
#rm ./$1_test
#echo "compiling benchmark version"
#g++  -std=c++11 $1.cpp  -lbenchmark -lpthread -lgtest -o $1_bm
