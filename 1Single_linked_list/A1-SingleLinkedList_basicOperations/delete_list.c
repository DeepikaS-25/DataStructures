#include "sll.h"

int sl_delete_list(Slist **head)
{
    /* checking list is empty */
    if(*head == NULL)
    {   
        return LIST_EMPTY;
    }
    while(*head != NULL)
    {
	/* updating head and deleting node */
	Slist *temp = *head;
 
	*head = temp->link;
    	free(temp);
    }	
    return SUCCESS;
}
