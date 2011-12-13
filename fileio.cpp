// Author: Dan Brekke
// etc.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream ifs;
   ofstream ofs;
   int num1,num2,sum;
   ifs.open("data");
   if (!ifs)
      cout << "opening the input file failed\n";
   else
   {
      ifs >> num1 >> num2;
      ifs.close();
      ofs.open("result");
      sum = num1 + num2;
      ofs << "the sum is " << sum << endl;
      ofs.close();
      cout << "the program read from the file data\n";
      cout << "the program output to the file results\n";
   }
   return 0;
}
