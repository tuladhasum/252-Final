#include <string>
#include <iostream>
using namespace std;


int main()
{
   int age;
   string name;
   char dummy;
   cout << "how old are you? ";
   cin >> age;
//    cin.get(dummy);
   cin.ignore(80,'\n');
   cout << "dummy: " << dummy << "ASCII: " << static_cast<int>(dummy) << endl;
   cout << "enter your name: ";
   getline(cin,name);
   cout << "your name is " << name 
        << " and you are " << age << " years old" << endl;
//    cout << name.length() << endl;
   return 0;
}

