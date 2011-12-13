template<class ItemType>
void QuickSort(ItemType values[], int count)
{
   QSort(values,0,count-1);
}

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
void QSort(ItemType values[], int first, int last)
{
    if ( first < last)
    {
	int splitPoint;
	Split(values, first, last, splitPoint);
	// values[first]..values[splitPoint-1] <= splitVal
	// values[splitPoint] = splitVal
	// values[splitPoint + 1]..values[last] > splitVal
	QSort(values, first, splitPoint-1);
	QSort(values, splitPoint + 1, last);
    }
}

template<class ItemType>
void Split(ItemType values[], int first, int last, int& splitPoint)
{
    ItemType splitVal = values[first];
    int saveFirst = first;
    bool onCorrectSide;

    first++;
    do
    {
	onCorrectSide = true;
	while (onCorrectSide) // Move first toward last.
	    if (values[first] > splitVal)
		onCorrectSide = false;
	    else
	    {
		first++;
		onCorrectSide = (first <= last);
	    }
	onCorrectSide = (first <= last);
	while (onCorrectSide) // Move last toward first.
	    if (values[last] <= splitVal)
		onCorrectSide = false;
	    else
	    {
		last--;
		onCorrectSide = (first <= last);
	    }
	if (first < last)
	{
	    Swap(values[first], values[last]);
	    first++;
	    last--;
	}
    } while (first <= last);
    splitPoint = last;
    Swap(values[saveFirst], values[splitPoint]);
}

