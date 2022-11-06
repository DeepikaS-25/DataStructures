#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
    /* checking list empty */
    if(*head == NULL)
    {
	return LIST_EMPTY;
    }

    Slist *temp = *head;
    /* given data is at first node */
    if(g_data == temp->data)
        {
            /* Creating the new node */
            Slist *new = malloc(sizeof(Slist));

            /* Check whether new node created or not */
            if (new == NULL)
            {
                return FAILURE;
            }

            /* Fill the parts of the node */
            new->data = ndata;
            new->link = *head;
            *head = new;
            return SUCCESS;
        }
    /* traversing list to NULL */
    while(temp->link != NULL)
    {
	if(g_data == temp->link->data)
	{
	    /* Creating the new node */
	    Slist *new = malloc(sizeof(Slist));

	    /* Check whether new node created or not */
	    if (new == NULL)
	    {
	 	return FAILURE;
	    }

	    /* Fill the parts of the node */
	    new->data = ndata;
	    new->link = temp->link;
	    temp->link = new;
	    return SUCCESS;
	}
	else
	{
	    temp = temp->link;
	}
    }
    return DATA_NOT_FOUND;

}
