#include "main.h"

data_t insertion(data_t *arr, data_t size)
{
    int key, i, j;      //declaring variables
    for(i = 0; i < size; i++)    //loop to compare all elements of array
    {
    	key = arr[i];           //assigning a key value to find position for it and to insert it
    	j = i - 1;
    	while(j >= 0 && arr[j] > key)    //swapping elements if position is found
    	{
    	   arr[j + 1] = arr[j];
    	   j= j - 1;
    	}
    	arr[j + 1] = key;       //inserting key element at the position
    }
}
