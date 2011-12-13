// File:     openfiles.cpp
// Author:   Dan Brekke

// The function openfiles will open both the input and output files
// whose name is taken from the command line.  If there is any error
// in opening the files, the function returns false.  If the files
// are opened successfully, the function returns true.

#include <fstream>
#include <iostream>
using namespace std;

// Input:   argc  - the number of arguments on the command line
//          argv  - the argument vector
// Output:  ifs   - the opened input file stream
//          ofs   - the opened output file stream
bool openfiles(int argc,char *argv[],ifstream &ifs,ofstream &ofs)
{
   if (argc != 3)  // check to see that there are 3 command line args
   {
      cerr << "usage:  " << argv[0] << " <inputfile> <outputfile>\n";
      return false;
   }
   ifs.open(argv[1]);   // open the input file
   if (ifs.fail())
   {
      cerr << "error opening inputfile: '" << argv[1] << "' doesn't exist?\n";
      return false;
   }
   ofs.open(argv[2]);   // open the output file
   if (ofs.fail())
   {
      cerr << "error opening outputfile\n";
      return false;
   }
   return true;        // opening the files was successful
}
