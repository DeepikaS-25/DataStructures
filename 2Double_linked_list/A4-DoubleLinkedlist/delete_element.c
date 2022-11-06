#include "dll.h"

int dl_delete_element(Dlist **head, Dlist **tail, int data)
{
    //checking if list is empty
    if(*head == NULL)
    {
	    return LIST_EMPTY;
    }
    //creating temp pointer to traverse
    Dlist *temp = *head;
    while(temp != NULL)
    {
    	//when given data is found
    	if(temp->data == data)
    	{
    	    //when only one node is present
    	    if(*head  == *tail)
    	    {
        		*head = NULL;
        		*tail = NULL;
    	    }
    	    else if(temp == *head)     //if first node
    	    {
        		*head = temp->next;
        		temp->next->prev = NULL;
    	    }
    	    else if(temp == *tail)    //if last node
    	    {
        		temp->prev->next = NULL;
        		*tail = temp->prev;
    	    }
    	    else		     //other nodes
    	    {
        		temp->prev->next = temp->next;
        		temp->next->prev = temp->prev;
    	    }
    	    //freeing temp
    	    free(temp);
    	    return SUCCESS;
    	}
    	else
    	{
    	    temp = temp->next;
    	}
    }
    return DATA_NOT_FOUND;
}
