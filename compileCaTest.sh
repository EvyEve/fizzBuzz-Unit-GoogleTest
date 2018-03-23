#!/bin/bash

#Shell script to compile and make Fizz.out executable

Name=FizzCTest.out

g++ -o $Name Fizz.h FizzCTest.cpp

echo "$Name has been created"
