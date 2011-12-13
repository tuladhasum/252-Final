// This file contains the functions that implement the Selection Sort.

#ifndef _SWAP_
#define _SWAP_
template<class ItemType>
inline void Swap(ItemType& item1, ItemType& item2)
// Post: Contents of item1 and item2 have been swapped.
{
    ItemType tempItem;
    tempItem = item1;
    item1 = item2;
    item2 = tempItem;
}
#endif

template<class ItemType>
void SelectionSort(ItemType values[], int numValues)
// Post: The elements in the array values are sorted by key.
{
    int endIndex = numValues-1;
    int indexOfMin;
    for (int current = 0; current < endIndex; current++)
    {
        indexOfMin = current;
        for (int index = current + 1; index <= endIndex; index++)
            if (values[index] < values[indexOfMin])
                indexOfMin = index;
        Swap(values[current], values[indexOfMin]);
    }

}
