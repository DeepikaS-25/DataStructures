#include "sll.h"

int sl_insert_after(Slist **head, data_t g_data, data_t ndata)
{
    /*checking list empty */
    if(*head == NULL)
    {
	return LIST_EMPTY;
    }
    Slist *temp = *head;
    /* traversing till last node */
    while(temp != NULL)
    {
	if(g_data != temp->data)
	{
	    temp = temp->link;
	}
	else
	{
	    /* creating a node */
	    Slist *new = malloc(sizeof(Slist));
	    /* Checking for error */
    	    if(new == NULL)
    	    {   
        	return FAILURE;
    	    }   
    	    /* Updating node */
    	    new->data = ndata;
    	    new->link = temp->link; 
    	    temp->link = new;
	    return SUCCESS;	    
	}
    }
    return DATA_NOT_FOUND;
}
