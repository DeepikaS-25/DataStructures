#include "main.h"

/* Function to swap elements of array */
void swap(int *x, int *y);

/* Function to partition the array */
int partition(int *arr, int first, int last)
{
    int pivot, temp, start, end;	//declaring required variables
    
    pivot = arr[first];			//assigning first as pivot element
    start = first;			//updating start and end
    end = last;
    while(start < end)			
    {
    	while(arr[start] <= pivot)	//when start less than pivot element
    	{
    	    start++;
    	}
    	while(arr[end] > pivot)		//when end greater than pivot
    	{
    	    end--;
    	}
    	if(start < end)			//if index is smaller then swapping elements
    	{
    	    swap(&(arr[start]), &(arr[end]));
    	}
    }
    swap(&(arr[first]), &(arr[end])); //swapping elements
    return end;
}

/* swap function swapping 2 elements using temp variable */
void swap(int *element1, int *element2)
{
    int temp;
    temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}
