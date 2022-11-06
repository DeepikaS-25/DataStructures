#include "main.h"


int merge_sort(int *array, int narray)
{
      /* declaring mid for mid of the array */
    int mid;
      
      /* returning SUCCESS if array has only one element */
    if(narray == 1)
    {
        return SUCCESS;
    }

    mid = narray / 2;    //finding mid of array
     
      /* dynamically allocating memory for left array */
    int *left = (int *)malloc(mid * (sizeof(int)));
      /* error checking*/
    if(left == NULL)
    {
        return FAILURE;
    }
      /* copying array elements to left array till mid */
    for(int i = 0; i < mid; i++)
    {
        left[i] = array[i];
    }

      
      /* dynamically allocating memory for right array */
    int *right = (int *)malloc(mid * (sizeof(int)));
      /* error checking */
    if(right == NULL)
    {
        return FAILURE;
    }
      /* copying elements of array to right array from mid */
    for(int i = mid; i < narray; i++)
    {
        right[i - mid] = array[i];
    }
    
      
      /* dividing elemets of array into left and right till mid */
    merge_sort(left, mid);
    merge_sort(right, (narray - mid));

      /* merging divided left and right array*/
    merge(array, narray, left, mid, right, (narray - mid));
    
      /* freeing dynamically allocated memory */
    free(left);
    free(right);

    return SUCCESS;
}
