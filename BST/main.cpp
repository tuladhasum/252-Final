// This demonstrates the binary search tree class, BST,
// particularly the new methods added to the class.
#include <iostream>
#include "bst.h"

using namespace std;

// Function passed to traverals. Must return void and take a single pass by
// reference argument of the type stored in the binary search tree.  This
// is a requirement of the traversals.
void visit1(int& x)
{
   cout << x << endl;
}
   
// Function passed to traverals. Must return void and take a single pass by
// reference argument of the type stored in the binary search tree.  This
// is a requirement of the traversals.
void visit2(int& x)
{
   cout << x << ' ';
}
   
int main()
{
   BST<int> tree; // the derived (augmented) class created by Dan Brekke
   
   int num;

   cout << "Enter numbers ending with 0." << endl;
   cin >> num;
   while (num != 0)
   {
      tree.insert(num);
      cin >> num;
   }

   cout << endl;
   cout << "tree height = " << tree.treeHeight() << endl;
   cout << "node count  = " << tree.treeNodeCount() << endl;
   cout << "leaves count  = " << tree.treeLeavesCount() << endl;

   cout << "------- Passing visit functions to traversals -------\n";
   cout << "inorder traversal\n";
   tree.inorderTraversal(visit1); // pass visit1 function to traveral
   cout << "preorder traversal:  ";
   tree.preorderTraversal(visit2); // pass visit2 function to traversal
   cout << endl;
   cout << "postorder traversal: ";
   tree.postorderTraversal(visit2); // pass visit2 function to traversal
   cout << endl;

// The below code works only if tree is of type BST
   cout << "------- traversals using ...GetNextItem -------\n";
   tree.reset();
   cout << "inorder traversal:   ";
   while (tree.inorderGetNextItem(num))
   {
      cout << num << ' ';
   }
   cout << endl;
   tree.reset();
   cout << "preorder traversal:  ";
   while (tree.preorderGetNextItem(num))
   {
      cout << num << ' ';
   }
   cout << endl;
   return 0;
}

