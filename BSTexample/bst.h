#ifndef _BST_H_
#define _BST_H_

/* Author: Dan Brekke

   This class was created to allow inorder and preorder traversals
   of a binary search tree one item at a time.  The traversals
   provided the textbook traversed the entire tree all at once.
   BST is-a bSearchTreeType. bSearchTreeType is-a binaryTreeType.
*/
#include "binarySearchTree.h"
#include <iostream>
#include <stack>  // STL stack

using namespace std;

template <class elemType>
class BST : public bSearchTreeType<elemType>
{
public:
    void reset(); 
    //function that resets the tree in preparation for an item by item
    //traversal using either inorderGetNextItem or preorderGetNextItem
    //this must be called each time a traversal is to begin
    //Postcondition: current is pointing to the root of the tree

    bool inorderGetNextItem(elemType& item); 
    //function that will return the next item in an inorder traversal
    //of the binary tree.  This was added because the existing traversals
    //traversed the entire tree.  This allows one item at a time.
    //preconditions: The reset method was invoked to set the current pointer.
    //               No modifications have been done to the tree since reset.
    //               inorderGetNextItem and preorderGetNextItem can't be 
    //               concurrent.
    //postcondition: pass by reference item contains next item in traversal
    //               function returned false if traversal done, else true

    bool preorderGetNextItem(elemType& item);
    //function that will return the next item in an preorder traversal
    //of the binary tree.  This was added because the existing traversals
    //traversed the entire tree.  This allows one item at a time.
    //preconditions: The reset method was invoked to set the current pointer.
    //               No modifications have been done to the tree since reset.
    //               inorderGetNextItem and preorderGetNextItem can't be 
    //               concurrent.
    //postcondition: pass by reference item contains next item in traversal
    //               function returned false if traversal done, else true

private:
    nodeType<elemType>  *current;
    stack<nodeType <elemType>*> s;
};

   //Definition of member functions


template <class elemType>
bool BST<elemType>::inorderGetNextItem(elemType& item)
{
   if (current == NULL && s.empty())
      return false;
   while (current != NULL)
   {
      s.push(current);
      current = current->llink;
   }
   current = s.top();
   s.pop();
   item = current->info;
   current = current->rlink;
   return true;
}

template <class elemType>
bool BST<elemType>::preorderGetNextItem(elemType& item)
{
   if (current == NULL)
      return false;
   item = current->info;
   s.push(current);
   current = current->llink;
   while (current==NULL && !s.empty())
   {
      current = s.top();
      s.pop();
      current = current->rlink;
   }
   return true;
}

template <class elemType>
void BST<elemType>::reset()
{
   current = binaryTreeType<elemType>::root;
}

#endif

