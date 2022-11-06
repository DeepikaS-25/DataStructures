#include "main.h"


void merge(int *array, int narray, int *left, int nleft, int *right, int nright)
{
    /* declaring i, j and k for array indexes  and initializing with 0*/
    int i = 0, j = 0, k = 0;
    
      /* merging array of left and right */
    while(i < nleft && j < nright)
    {
        if(left[i] < right[j])              //condition to sort array
        {
            array[k++] = left[i++];         //incrementing index of array each time to access next element next time
        }
        else
        {
            array[k++] = right[j++];
        }
    }

      /* if nright is greater than left, remaining values of right are added into array */
    while(nright > j)
    {
        array[k++] = right[j++];
    }

      /* if nleft is greater than right, remaining values of left are added into array */
    while(nleft > i)
    {
        array[k++] = left[i++];
    }
}
