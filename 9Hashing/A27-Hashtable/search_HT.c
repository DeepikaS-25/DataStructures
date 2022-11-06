#include"hash.h"

int search_HT(hash_t *arr, int data, int size)
{
      /* finding index */
    int i = data % size;
      /* if data present at first position */
    if(arr[i].value == data)
    {
        return SUCCESS;
    }
      
      /* temp variable to traverse */
    hash_t *temp;
    temp = arr[i].link;
      
      /* if temp found returning SUCCESS else returning data not found */
    while(temp)
    {
        if(temp->value == data)
        {
            return SUCCESS;
        }
        temp = temp->link;
    }
    return DATA_NOT_FOUND;
}