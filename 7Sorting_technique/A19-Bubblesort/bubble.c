#include "main.h"

data_t bubble(data_t *arr, int size )
{
    int temp, i, j;
    for(i = 0; i < size; i++ )          //loop to give elements of array one by one
    {
        for(j = 0; j < (size - i - 1); j++) //loop to sort array elements
        {
           if (arr[j] > arr[j + 1])
            {
               temp = arr[j];                 //swapping elements if condition is true
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
            }
        }
    }
    
}
