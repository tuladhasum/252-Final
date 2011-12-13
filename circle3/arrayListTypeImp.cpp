#include <iostream>
#include <cassert>
#include "arrayListType.h"

using namespace std;

bool arrayListType::isEmpty() const
{
	return (length == 0);
}

bool arrayListType::isFull() const
{
	return (length == maxSize);
}

int arrayListType::listSize() const
{
	return length;
}

int arrayListType::maxListSize() const
{
	return maxSize;
}

void arrayListType::print() const
{
	int i;

	for (i = 0; i < length; i++)
		cout << list[i] << endl;
	cout << endl;
}

bool arrayListType::isItemAtEqual(int location, ITEM item) const
{
	return(list[location] == item);
}

void arrayListType::insertAt(int location, ITEM insertItem)
{
    int i;

    if (location < 0 || location >= maxSize)
        cout << "The position of the item to be inserted "
             << "is out of range." << endl;
    else
        if (length >= maxSize)  //list is full
            cout << "Cannot insert in a full list." << endl;
        else
        {
            for (i = length; i > location; i--)
                list[i] = list[i - 1]; //move the elements down

            list[location] = insertItem; //insert insertItem 
                                         //at the specified 
                                         //position

            length++;	//increment the length
        }
} //end insertAt


void arrayListType::insertEnd(ITEM insertItem)
{
	if (length >= maxSize)  //the list is full
		cout << "Cannot insert in a full list." << endl;
	else
	{
		list[length] = insertItem;	//insert the item at the end
		length++;	//increment length
	}
} //end insertEnd


void arrayListType::removeAt(int location)
{
	int i;

	if (location < 0 || location >= length)
    	cout << "The location of the item to be removed "
			 << "is out of range." << endl;
	else
	{
   		for (i = location; i < length - 1; i++)
	 		list[i] = list[i+1];

		length--;
	}
} //end removeAt

void arrayListType::retrieveAt(int location, ITEM& retItem) const
{
	if (location < 0 || location >= length)
    	cout << "The location of the item to be retrieved is "
			 << "out of range." << endl;
	else
		retItem = list[location];
} // retrieveAt


void arrayListType::replaceAt(int location, ITEM repItem)
{
	if (location < 0 || location >= length)
    	cout << "The location of the item to be replaced is "
			 << "out of range." << endl;
	else
		list[location] = repItem;

} //end replaceAt

void arrayListType::clearList()
{
	length = 0;
} // end clearList

arrayListType::arrayListType(int size)
{
    if (size <= 0)
    {
        cout << "The array size must be positive. Creating "
             << "an array of size 100. " << endl;

        maxSize = 100;
    }
    else
        maxSize = size;

    length = 0;
    list = new ITEM[maxSize];
    assert(list != NULL);
}

arrayListType::~arrayListType()
{
   cout << "*********** I'm in the destructor ***************\n";
	delete [] list;
        list = NULL;
}

	//copy constructor
arrayListType::arrayListType(const arrayListType& otherList)
{
    int j;

    maxSize = otherList.maxSize;
    length = otherList.length;
    list = new ITEM[maxSize];  //create the array
    assert(list != NULL);   //terminate if unable to allocate
                            //memory space

    for (j = 0; j < length; j++)  //copy otherList
        list [j] = otherList.list[j];
}//end copy constructor

const arrayListType& arrayListType::operator=(const arrayListType& otherList)
{
    int j;
   // prevent self copy
    if (this == &otherList)
       return *this;
    delete [] list;
cout << "I'm in the operator=\n";
    maxSize = otherList.maxSize;
    length = otherList.length;
    list = new ITEM[maxSize];  //create the array
                            //memory space

    for (j = 0; j < length; j++)  //copy otherList
        list [j] = otherList.list[j];
   return *this;
}


int arrayListType::seqSearch(ITEM item)  const
{
	int loc;
	bool found = false;

	for (loc = 0; loc < length; loc++)
	   if (list[loc] == item)
	   {
			found = true;
			break;
	   }

	if (found)
		return loc;
	else
		return -1;
} //end seqSearch

void arrayListType::insert(ITEM insertItem)
{
    int loc;

    if (length == 0)     //list is empty
        list[length++] = insertItem; //insert the item and 
                                     //increment the length
    else
        if (length == maxSize)
            cout << "Cannot insert in a full list." << endl;
        else
        {
            loc = seqSearch(insertItem);

            if (loc == -1)   //the item to be inserted 
                             //does not exist in the list
                list[length++] = insertItem;
            else
                cout << "the item to be inserted is already "
                     << "in the list. No duplicates are "
                     << "allowed." << endl;
	}
} //end insert

void arrayListType::remove(ITEM removeItem)
{
	int loc;

	if (length == 0)
		cout << "Cannot delete from an empty list." << endl;
	else
	{
		loc = seqSearch(removeItem);

		if (loc != -1)
			removeAt(loc);
		else
			cout << "The tem to be deleted is not in the list."
				 << endl;
	}

} //end remove
