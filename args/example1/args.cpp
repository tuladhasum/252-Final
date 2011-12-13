// argc is argument count (the number of arguments on the command line)
// argv is argument vector (the arguments on the command line)

#include <iostream>
#include <string>
using namespace std;

int main(int argc,char *argv[])
{
   cout << argc << " command line arguments" << endl;
   for (int i=0; i<argc; i++)
      cout << "argv[" << i << "] = " << argv[i] << endl;
   return 0;
}
