// File:   main.cpp
// Author: Dan Brekke

// This program demonstrates the use of the openfiles function.
// If both the input file and the output file (whose names are
// taken from the command line) are successfully opened, the program
// will be executed.  If opening either file failed, do nothing.  
// Note: the input file must exist prior to executing
// the program, the output file need not.  Once the files are opened,
// a single char will be read from the input file and written to 
// the output file.

#include <fstream>
#include <iostream>
using namespace std;

// function prototypes
bool openfiles(int,char * [],ifstream&,ofstream&);
char read_one_char(ifstream &);
void write_one_char(ofstream &, char);

int main(int argc,char *argv[])
{
   ifstream ifs;
   ofstream ofs;
   char ch;

   if (openfiles(argc,argv,ifs,ofs))
   {
      ch = read_one_char(ifs);
      write_one_char(ofs,ch);
      ifs.close();
      ofs.close();
   }
   return 0;
}
