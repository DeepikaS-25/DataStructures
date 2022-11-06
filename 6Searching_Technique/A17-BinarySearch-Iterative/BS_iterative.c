#include "main.h"

/* Function for binary search using iterations */
data_t binarySearch_iterative(data_t *arr, data_t size, data_t key)
{
    /* declaring low, high and mid as index to access elements of array */
    int low = 0, high = size - 1, mid;
    /* loops iteratively till low less than high */
    while(low <= high)
    {
    	    /* assigning mid between high and low */
    	mid = (int) (low + high) / 2;
    	
    	    /* if key found returning position */
    	if(arr[mid] == key)
    	{
    	    return mid;
    	}
    	    /* else if key smaller shifting search towards left */
    	else if(key < arr[mid])
    	{
    	    high = mid - 1;
    	}
    	    /* if key larger than mid value then shifting towards right */
    	else
    	{
    	    low = mid + 1;
    	}
    }
    /* if key not returning data not found macro */
    return DATA_NOT_FOUND;

}
