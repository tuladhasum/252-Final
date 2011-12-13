// File:   read.cpp
// Author: Dan Brekke

// This function will read a single char from an opened input
// file and returns it.

#include <fstream>
using namespace std;

// Input:   f - the opened input file stream
// Output:  f - the input file pointer has changed
//          ch - the character read
char read_one_char(ifstream &f)
{
   char ch;
   f >> ch;
   return ch;
}
