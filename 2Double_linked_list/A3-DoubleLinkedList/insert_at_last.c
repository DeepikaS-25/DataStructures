#include "dll.h"

int dl_insert_last(Dlist **head, Dlist **tail, int data)
{
    /* creating new node */

    Dlist *new = malloc(sizeof(Dlist));

    /* error checking */
    if(new == NULL)
    {
	return FAILURE;
    }

    /* Updating node */
    new->data = data;
    new->next = NULL;
    new->prev = NULL;

    /* checking list is empty */
    if(*head == NULL)
    {
	*head = new;
	*tail = new;
	return SUCCESS;
    }
    
    /* Creating temp pointer to traverse */
    Dlist *temp = *head;

    /* traverse till NULL */
    while(temp->next != NULL)
    {
	temp = temp->next;
    }
    
    /* Updating node */
    temp->next = new;
    new->prev = temp;
    *tail = new;
    
    return SUCCESS;

}
