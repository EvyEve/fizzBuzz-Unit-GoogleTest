#!/bin/bash

# Shell script to link googletest libraries & build file to compile an executable file from designatd header and .cpp file

LIB_DIR=googletest/googletest
Name=FizzGT.out

g++ -o $Name -std=c++11 -isystem $LIB_DIR/include/ -pthread Fizz.h FizzGTest.cpp $LIB_DIR/build/libgtest.a

echo "$Name has been created"

