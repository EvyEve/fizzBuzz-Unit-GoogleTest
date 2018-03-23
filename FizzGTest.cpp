//Author: Eva Cedent
//CS360 - Assignment_5
//Dr. Zavala
//Fizzbuzz fucntion unit testing using googletest

//File Name: FizzGTest.cpp 
#include "Fizz.h" //User Fizzbuzz header file
#include "gtest/gtest.h" //Googletest library

using namespace std;

TEST(FizzBuzzTest, Inputs) //Test case function using TEST() term & ASSERT_EQ Binary Comparison 
{
	//ASSERT_EQ verifies val1 == val2
	ASSERT_EQ(fizzbuzz("friend") ,"fizz");
	ASSERT_EQ(fizzbuzz("quiz") , "buzz");
	ASSERT_EQ(fizzbuzz("nice"), "nice");
	ASSERT_EQ(fizzbuzz("banana") ,"banana");
	ASSERT_EQ(fizzbuzz("jeez") , "buzz");
	ASSERT_EQ(fizzbuzz("fizz") , "fizzbuzz");
	ASSERT_EQ(fizzbuzz("futz") , "fizzbuzz");
	ASSERT_EQ(fizzbuzz("puzzle") , "puzzle");
}

int main(int argc, char * argv[]) 
{
	::testing::InitGoogleTest(&argc, argv); //Function that looks for & removes all Google Test flags from the command line
						//Gives way for user to better control test program
	return RUN_ALL_TESTS(); //To run all TEST case functions
}
