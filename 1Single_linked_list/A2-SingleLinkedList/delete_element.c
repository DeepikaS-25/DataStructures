#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
   
    /* checking list is empty */
    if(*head == NULL)
    {
	return FAILURE;
    }
    
    /* creating temp pointer to traverse and prev to hold prev node */
    Slist *temp = *head;
    Slist *prev;
    /* if given data is in head */
    if(data == temp->data)
    {
	*head = temp->link;
	free(temp);
	return SUCCESS;
    }
     /* traversing till last node */
    while(temp != NULL)
    {
	/* freeing when given data found */
	if(data == temp->data)
	{
	    prev->link = temp->link;
	    free(temp);
	    return SUCCESS;
	}
	else
	{
	    prev = temp;
	    temp = temp->link;
	}
    }
    return DATA_NOT_FOUND;
}
