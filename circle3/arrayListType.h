#ifndef H_arrayListType
#define H_arrayListType

/*
   preconditions for using this class
      ITEM must be defined in the file itemtype.h
      the operator << must be overloaded
      the operator == must be overloaded
*/

#include "itemtype.h"

class arrayListType
{
public:
    bool isEmpty() const;
      //Function to determine whether the list is empty
      //Postcondition: Returns true if the list is empty;
      //               otherwise, returns false.
    bool isFull() const;
      //Function to determine whether the list is full
      //Postcondition: Returns true if the list is full; 
      //               otherwise, returns false.
    int listSize() const;
      //Function to determine the number of elements in the list
      //Postcondition: Returns the value of length.
    int maxListSize() const;
      //Function to determine the maximum size of the list
      //Postcondition: Returns the value of maxSize.
    void print() const;
      //Function to output the elements of the list
      //Postcondition: Elements of the list are output on the 
      //               standard output device.
    bool isItemAtEqual(int location, ITEM item) const;
      //Function to determine whether item is the same as
      //the item in the list at the position specified 
      //by location
      //Postcondition: Returns true if the list[location] 
      //               is the same as item; otherwise, 
      //               returns false.
    void insertAt(int location, ITEM insertItem);
      //Function to insert insertItem in the list at the 
      //position specified by location. 
      //Postcondition: Starting at location, the elements 
      //               of the list are shifted down, 
      //               list[location] = insertItem;, and
      //               length++;    
      //       If the list is full or location is out of
      //       range, an appropriate message is displayed.
    void insertEnd(ITEM insertItem);
      //Function to insert an item at the end of the list 
      //The parameter insertItem specifies the item to be 
      //inserted.
      //Postcondition: list[length] = insertItem; and length++;
      //               If the list is full, an appropriate 
      //               message is displayed.
    void removeAt(int location);
      //Function to remove the item from the list at the 
      //position specified by location 
      //Postcondition: The list element at list[location] is 
      //               removed and length is decremented by 1.
      //       If location is out of range, an appropriate message
      //       is displayed.
    void retrieveAt(int location, ITEM& retItem) const;
      //Function to retrieve the element from the list at the  
      //position specified by location 
      //Postcondition: retItem = list[location] 
      //      If location is out of range, an appropriate 
      //      message is displayed.
    void replaceAt(int location, ITEM repItem);
      //Function to replace the elements in the list at the 
      //position specified by location. The item to be replaced 
      //is specified by the parameter repItem.
      //Postcondition: list[location] = repItem 
      //      If location is out of range, an appropriate 
      //      message is displayed.
    void clearList();
      //Function to remove all the elements from the list 
      //After this operation, the size of the list is zero.
      //Postcondition: length = 0;
    int seqSearch(ITEM) const;
      //Function to search the list for a given item. 
      //Postcondition: If the item is found, returns the location
      //               in the array where the item is found; 
      //               otherwise, returns -1.
    void insert(ITEM insertItem);
      //Function to insert the item specified by the parameter 
      //insertItem at the end of the list. However, first the
      //list is searched to see whether the item to be inserted
      //is already in the list. 
      //Postcondition: list[length] = insertItem and length++
      //     If the item is already in the list or the list
      //     is full, an appropriate message is displayed.
    void remove(ITEM removeItem);
       //Function to remove an item from the list. The parameter
      //removeItem specifies the item to be removed.
      //Postcondition: If removeItem is found in the list,
      //      it is removed from the list and length is 
      //      decremented by one.
    arrayListType(int size = 100);
       //constructor
      //Creates an array of the size specified by the 
      //parameter size. The default array size is 100.
      //Postcondition: The list points to the array, length = 0,
      //               and maxSize = size
    arrayListType (const arrayListType& otherList); 
       //copy constructor
    ~arrayListType();
      //destructor
      //Deallocate the memory occupied by the array.
   const arrayListType& operator=(const arrayListType& otherList);

protected:
    ITEM *list;    //array to hold the list elements
    int length;   //variable to store the length of the list
    int maxSize;  //variable to store the maximum 
                  //size of the list
};

#endif
