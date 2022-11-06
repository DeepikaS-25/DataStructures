#include "sll.h"

int sl_delete_last(Slist **head)
{

    Slist *temp = *head;
    /* checking list is empty */
    if(*head == NULL)
    {   
        return LIST_EMPTY;
    }   
    /* chcecking if only one node is present and deleting it */
    else if(temp->link == NULL)
    {
	free(temp);
	*head = NULL;
    }
    /* deleting last node */
    else
    {
	while(temp->link->link != NULL)
        {
            temp = temp->link;
        }
        
	free(temp->link);
        temp->link = NULL;
    }
    return SUCCESS;   
}
