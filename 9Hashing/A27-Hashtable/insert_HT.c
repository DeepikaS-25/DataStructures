#include"hash.h"

int insert_HT(hash_t *arr, int element, int size)
{
      /* finding index */
    int i = element % size;
      /* if no element is present adding at first position */
    if(arr[i].value == -1)
    {
        arr[i].value = element;
        return SUCCESS;
    }
     
      /* creating new node to add */
    hash_t *new = malloc(sizeof(hash_t));
      /* error checking */
    if(new == NULL)
    {
        return FAILURE;
    }
      /* updating links */
    new->value = element;
    new->link = NULL;
    new->index = i;
     
      /* when only one element is present at the given index */
    if(arr[i].link == NULL)
    {
        arr[i].link = new;
        return SUCCESS; 
    }
      /* else traversing through the last and inserting at the end */
    hash_t *temp;
    temp = arr[i].link;
    
    while(temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = new;

    return SUCCESS;
}