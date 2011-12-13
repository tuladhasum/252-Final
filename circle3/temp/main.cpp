#include <iostream>
#include "circle.h"
#include "itemtype.h"
#include "arrayListType.h"
using namespace std;

int main()
{
   arrayListType<Circle> list(25);
   Circle c;
   c.setRadius(4);
   list.insert(c);
   list.insertEnd(c);
   c.setRadius(8);
   list.insert(c);
   c.setRadius(3);
   list.insert(c);
   c.setRadius(7);
   list.insert(c);
   list.print();
   cout << "-----\n";
   c.setRadius(6);
//   list.removeAt(list.seqSearch(c));
   list.remove(c);
   list.print();

   cout << "-----\n";
//   list.clearList();
   list.print();
   cout << "-----\n";
   Circle num;
   for (int i=0; i<list.listSize(); i++)
   {
      list.retrieveAt(i,num);
      num.setRadius(num.radius()+1);
      list.replaceAt(i,num);
   }
   list.print();
   Circle c1(5);
   Circle c2(3);
   if (c1 > c2)
      cout << "yes\n";
   else
      cout << "no\n";

   cout << "********************\n";
   arrayListType<Circle> mylist;
   mylist = list;
   cout << "size of list is " << list.listSize() << endl;
   cout << "size of mylist is " << mylist.listSize() << endl;
   mylist.print();
   cout << "********************\n";
   mylist.insert(c2);
   mylist.print();
   cout << "********************\n";
   list.print();
   mylist = mylist;
   
   return 0;
}
