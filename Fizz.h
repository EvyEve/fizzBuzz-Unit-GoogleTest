//Author: Eva Cedent
//CS360 - Assignment5
//Dr. Zavala
//Fizz.h
#ifndef FIZZ_H //Define / include if header file definition doesn't exist
#define FIZZ_H

#include <iostream>
#include <string>

using namespace std;

//Fizzbuzz function
string fizzbuzz( string w)
{
  if ((w[0] == 'f' ) && (w[w.length()-1] == 'z'))
  {
    return "fizzbuzz";
  }
  else if (w[w.length()-1] == 'z')
  {
    return "buzz";
  }
  else if (w[0] == 'f')
  {
    return "fizz";
  }
  else
  {
    return w;
  }
}

#endif //End of header file definition
