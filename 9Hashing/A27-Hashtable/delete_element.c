#include"hash.h"

int delete_element(hash_t *arr, int data, int size)
{
    int i = data % size;                            //finding index
    
      /* temp and prev variable to traverse */
    hash_t *temp;               
    temp = arr[i].link;
    hash_t *prev;
      /* if there is only one element */
    if((arr[i].value == data) && temp == NULL)
    {
        arr[i].value = -1;
        return SUCCESS;
    }
      /* if element found at first position */
    if((arr[i].value == data) && temp != NULL)
    {
        arr[i].value = temp->value;
        arr[i].link = temp->link;
        return SUCCESS;
    }
    prev = temp;
    
    while(temp)
    {
          /* if data present next to value */
        if((temp->value == data) && (prev == temp))
        {
            arr[i].link = temp->link;
            return SUCCESS;
        }
          /* if data found */
        else if(temp->value == data)
        {
            prev->link = temp->link;
            return SUCCESS;
        }
        prev = temp;
        temp = temp->link;
    }
      /* returning data not found if data not present */
    return DATA_NOT_FOUND;
}