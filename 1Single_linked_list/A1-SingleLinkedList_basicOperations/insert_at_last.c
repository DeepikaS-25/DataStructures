#include "sll.h"

int insert_at_last(Slist **head, data_t data)
{
    /* creating a node */
    Slist *new = malloc(sizeof(Slist));

    /* Checking for error */
    if(new == NULL)
    {
	return FAILURE;
    }

    /* Updating node */
    new->data = data;
    new->link = NULL;

    /* checking list is empty */
    if(*head == NULL)
    {
	*head = new;
	return SUCCESS;
    }
    
    /* traversing list to NULL */
    Slist *temp = *head;

    while(temp->link != NULL)
    {
	temp = temp->link;
    }

    /* linking node */
    temp->link = new;
    return SUCCESS;

}
