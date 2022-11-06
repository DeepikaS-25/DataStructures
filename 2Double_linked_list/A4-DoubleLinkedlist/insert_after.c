#include "dll.h"

int dl_insert_after(Dlist **head, Dlist **tail, int gdata, int ndata)
{
    /* checking list is empty */
    if(*head == NULL)
    {
	    return LIST_EMPTY;
    }
    //creating temp ptr to traverse
    Dlist *temp = *head;

     //creating new node
    Dlist *new = malloc(sizeof(Dlist));
     //error checking
    if(!new)
    {
        return FAILURE;
    }
     //updating new node
    new->data = ndata;
    new->next = NULL;
    new->prev = NULL;
     //traversing to find given data
    while(temp != NULL)
    {
    	if(temp->data != gdata)
    	{
    	    temp = temp->next;
    	}
    	else
    	{
    	    //updating links between node when given data found
    	    new->prev = temp;
    	    if(temp != *tail)
    	    {
        		new->next = temp->next;
        		temp->next->prev = new;
    	    }
    	    else
    	    {
        		*tail = new;
        		new->next = NULL;
    	    }
    	    temp->next = new;
    	    return SUCCESS;
    	}
    }
    return DATA_NOT_FOUND;

}
