#include "dll.h"

int dl_delete_list(Dlist **head, Dlist **tail)
{
    /* checking list is empty */
    if(*head == NULL)
    {
        return FAILURE;
    }
    while(*head != NULL)
    {
	/* updating head and deleting node */
	Dlist *temp = *head;

	*head = temp->next;
    	free(temp);
    }
    return SUCCESS;

}
