#include "main.h"

/* Function to search the element using binary search */
data_t binarySearch_recursive(data_t *arr, data_t size, data_t key, data_t first, data_t last)
{
    int mid = (int) (first + last) / 2;
    
    if(first <= last)
    {
    	/* if key found returning position */
        if(key == arr[mid])
        {
    	    return mid;
        }
            /* else if key smaller shifting search towards left */
        else if(key < arr[mid])
        {                                   //calling function recursively with changed last
    	    return binarySearch_recursive(arr, size, key, first, mid - 1);
        }
            /* if key larger than mid value then shifting towards right */
        else if(key > arr[mid])
        {                                   //calling function recursively with changed first 
    	    return binarySearch_recursive(arr, size, key, mid + 1, last);
        }
    }
        /* if key not returning data not found macro */
    return DATA_NOT_FOUND;
}
