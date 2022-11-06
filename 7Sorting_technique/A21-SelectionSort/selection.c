#include "main.h"

data_t selection(data_t *arr, data_t size )
{
    int i, j, min, temp;		//declaring variables
    for(i = 0; i < size; i++)
    {
    	min = i;			//assigning min as i each time
    	
    	for(j = i + 1; j < size; j++)   //accessing array elements to compare with arr[min]
    	{
    	    if(arr[j] < arr[min])       //if current element is smaller then changing minimum index as j
    	    {
    		    min = j;
    	    }
    	}
    	
    	temp = arr[min];		//swapping elements after changing minimum index using temp variable
    	arr[min] = arr[i];
    	arr[i] = temp;
    }    
}
