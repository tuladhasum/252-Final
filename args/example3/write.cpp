// File:   write.cpp
// Author: Dan Brekke

// This function will output a single char to an opened output file

#include <fstream>
using namespace std;

// Input:   f - the opened output file stream
//          ch - character to be output
// Output:  f - the output file pointer has changed
void write_one_char(ofstream &f,char ch)
{
   f << ch << endl;
}
