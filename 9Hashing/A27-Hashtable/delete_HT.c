#include"hash.h"

int destroy_HT(hash_t *arr, int size)
{
    int i;
    hash_t *temp;
    hash_t *temp1;
    for(i = 0; i < size; i++)
    {
          /* deleting elements one by one till value in hashtable is -1 */
        if(arr[i].value != -1)
        {
            temp = arr[i].link;
            arr[i].value = -1;
            arr[i].link = NULL;
        }
        while(temp)
        {
            temp1 = temp->link;
            free(temp);
            temp = temp1;
        }
    }
    return SUCCESS;
}