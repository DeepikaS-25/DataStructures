#include "dll.h"

int dl_insert_first(Dlist **head, Dlist **tail, int data)
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

    /* Updating node */
    Dlist *temp = *head;

    new->next = temp;
    temp->prev = new;
    
    *head = new; 

    return SUCCESS;
}
