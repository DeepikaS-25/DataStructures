#include "dll.h"

int dl_delete_last(Dlist **head, Dlist **tail)
{
    /* checking list is empty */
    if(*head == NULL)
    {
	return FAILURE;
    }

    /* creating temp pointer to hold node for freeing */
    Dlist *temp = *head;

    if(temp->next == NULL)
    {
        *head = NULL;
	*tail = NULL;
	return SUCCESS;
    }
    /* traversing till NULL */
    while(temp->next != NULL)
    {
	temp = temp->next;
    }                                       
    temp->prev->next = NULL;
    *tail = temp->prev;    

    free(temp);

    return SUCCESS;

}
