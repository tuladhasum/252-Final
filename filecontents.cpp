#include <iomanip>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
   ifstream f;
   char filename[80];
   cout << "enter filename: ";
   cin >> filename;
   f.open(filename);
   char ch;
   f.get(ch);
   while (!f.eof())
   {
      cout << setw(3) << static_cast<int>(ch);
      if (ch == '\n')
         cout << "  '\\n'" << endl;
      else
         cout << setw(3) << "'" << ch << "'" << endl;
      f.get(ch);
   }
   return 0;
}
