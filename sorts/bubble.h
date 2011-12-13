// This file contains the functions to implement Bubble Sort.
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
void BubbleSort(ItemType values[], int numValues)
// Post: The elements in the array values are sorted by key.
{
    int current = 0;
    while (current < numValues - 1)
    {
        for (int index = numValues-1; index > current ; index--)
            if (values[index] < values[index-1])
                Swap(values[index], values[index-1]);
        current++;
    }
}
