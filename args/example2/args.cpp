// This program shows the use of argc and argv for getting file names
// from the command line.  The command line must consist of the name
// to execute the program followed by the name of the input
// file and the name of the output file.  If the command line is not
// in the proper form, or if an error occurred in opening a file, the
// appropriate error message is displayed.

// If everything works correctly, the program will simply read two
// ints from the input file and write the sum to the output file.

#include <iostream>
#include <fstream>
#include <cstdlib>  // needed to use exit(1)
using namespace std;

int main(int argc,char *argv[])
{
   ifstream ifs;
   ofstream ofs;
   int x,y;
   if (argc != 3)
   {
      cerr << "usage: " << argv[0] << " <inputfile> <outputfile>\n";
      exit(1);
   }
   ifs.open(argv[1]);
   if (ifs.fail())
   {
      cerr << "error opening inputfile: '" 
           << argv[1] << "' doesn't exist?\n";
      exit(1);
   }
   ofs.open(argv[2]);
   if (ofs.fail())
   {
      cerr << "error opening outputfile\n";
      exit(1);
   }
   ifs >> x >> y;
   ofs << "the sum of " << x << " and " << y;
   ofs << " is " << x+y << endl;
   ifs.close();
   ofs.close();
   return 0;
}
