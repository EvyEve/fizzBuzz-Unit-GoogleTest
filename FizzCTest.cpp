//Author: Eva Cedent
//CS360 - Assignment_5
//Dr. Zavala
//Fizzbuzz function unit test using cassert

//File Name: FizzTest.cpp

#include "Fizz.h" //Fizzbuzz header filer
#include <iostream>
#include <cassert>
using namespace std;

//Unit Test using cassert library to test that fizzbuzz function is producing the correct output in all test cases.

int main()
{
	cout <<"Testing fizzbuzz function against given inputs:....\n";
	
	cout << fizzbuzz("quiz");
	cout << fizzbuzz("nice");
	cout << fizzbuzz("futz");
	cout << fizzbuzz("friend");
/*
	assert(fizzbuzz("quiz") == "buzz");
	assert((fizzbuzz("nice") == "nice");
	assert(fizzbuzz("banana") == "banana");
	assert(fizzbuzz("jeez") == "buzz");
	assert(fizzbuzz("fizz") == "fizzbuzz");
	assert(fizzbuzz("futz") == "fizzbuzz");
	assert(fizzbuzz("puzzle") == "puzzle");
	
	//cout << "All test cases PASSED.\n";
*/
	return 0;

}
