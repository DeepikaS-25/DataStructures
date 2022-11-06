#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{
    /* checking list is empty */
    if(*head == NULL)
    {
	    return FAILURE;
    }
    Slist  *current, *next, *prev, *temp = *head;
    while(temp != NULL)   				//traversing till NULL
    {
     	next = temp->link;
    	prev = temp;
    	while(next != NULL)  			//traversing till NULL to compare data with temp->data
    	{
    	    if(temp->data == next->data)   	//comparing data
    	    {
        		if(next->link == NULL)     	//when duplicate data in last node
        		{
        		    prev->link = NULL;
        		    current = next;
        		    next = NULL;
        		    free(current);
        		}
        		else				//duplicate data in other nodes
        		{
        		    prev->link = next->link;
        		    current = next;
            		next = next->link;
        		    free(current);
        		}			//freeing duplicate data
    	    }
    	    else
    	    {
        		prev = next;
    		    next = next->link;
    	    }
    	}
	    temp = temp->link;			//moving to next node
    }
    return SUCCESS;
}