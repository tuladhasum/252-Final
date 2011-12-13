// This demonstrates the binary search tree class, BST,
// particularly the new methods added to the class.
#include <iostream>
#include "bst.h"

void visit(string& item)
{
   for (int i=0; i<item.length(); i++)
      item[i] = toupper(item[i]);
}

int main()
{
   string s;
   BST<string> names;
   cout << "enter name: ";
   getline(cin,s);
   while (!cin.eof())
   {
      names.insert(s);
      cout << "enter name: ";
      getline(cin,s);
   }
   names.inorderTraversal(visit);
   cout << endl;
   names.inorderTraversal();
   names.reset();
   while (names.inorderGetNextItem(s))
      cout << s << endl;
   return 0;
}

