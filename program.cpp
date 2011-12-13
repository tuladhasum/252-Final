#include <string>
#include <iostream>
using namespace std;

int main()
{
   string s;
   getline(cin,s);
   cout << s << endl;
   cout << s.length() << endl;
   for (int i=0; i<s.length(); i++)
      cout << s[i] << endl;
   return 0;
}

