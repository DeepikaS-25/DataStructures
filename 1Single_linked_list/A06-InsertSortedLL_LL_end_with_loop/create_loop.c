#include "sll.h"

/* Function to create the loop */
int create_loop(Slist **head, data_t data)
{
      /*checking if list is empty */
    if(head == NULL)
    {
        return LIST_EMPTY;
    }
    
      /* declaring temp pointers to traverse list */
    Slist *temp = *head, *temp2 = NULL;
    
        /* traversing till NULL */
    while(temp->link != NULL)
    {
          /* when data found updating link with temp to make loop */
        if(data == temp->data)
        {
            temp2 = temp;
        }
        temp = temp->link;
    }
    temp->link = temp2;
     
      /* if loop was not created then returning data not found */
    if(temp2 == NULL)
    {
        return DATA_NOT_FOUND;
    }

    return SUCCESS;

}