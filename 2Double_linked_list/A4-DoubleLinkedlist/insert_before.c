#include "dll.h"

int dl_insert_before(Dlist **head, Dlist **tail, int gdata, int ndata)
{
    /*checking list is empty */
    if(*head == NULL)
    {
	    return LIST_EMPTY;
    }
    Dlist *temp = *head;

    /* creating node and updating data */

    Dlist *new = malloc(sizeof(Dlist));
    if(!new)
    {
	    return FAILURE;
    }
    new->data = ndata;
    new->next = NULL;
    new->prev = NULL;
    // traversing till NULL
    while(temp != NULL)
    {
    	if(temp->data != gdata)
    	{
    	    temp = temp->next;
    	}
    	else
    	{
    	    //updating links and adding node when given data is found
    	    new->next = temp;
    	    if(temp != *head)
    	    {
        		new->prev = temp->prev;
        		temp->prev->next = new;
    	    }
    	    else
    	    {
        		*head = new;
        		new->prev = NULL;
        		*tail = temp;
    	    } 
    	    temp->prev = new;
    	    return SUCCESS;
    	}
    }

    return DATA_NOT_FOUND;
}
