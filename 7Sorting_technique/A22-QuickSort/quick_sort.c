#include "main.h"

/* Function to sort the array in quick sort method */
int quick_sort( int *arr, int first, int last )
{
    int temp;
    if(first < last)
    {					//calling quicksort function with modified first and last when first is lesser than last and temp from partitioned array
    	temp = partition(arr, first, last);
    	quick_sort(arr, first, temp - 1);
    	quick_sort(arr, temp + 1, last);
    }
}
