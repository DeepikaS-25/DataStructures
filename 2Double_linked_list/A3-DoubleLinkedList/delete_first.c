#include "dll.h"

int dl_delete_first(Dlist **head, Dlist **tail)
{
    /* checking list is empty */
    if(*head == NULL)
    {
	return FAILURE;
    }
    
    /* temp pointer to hold node for freeing */
    Dlist *temp = *head;

    if(temp->next == NULL)
    {
	*head = NULL;
	*tail = NULL;
	free(temp);
	return SUCCESS;
    }
    else
    {
	*head = temp->next;
	temp->next->prev = NULL;

	free(temp);
    }
    
    return SUCCESS;

}
