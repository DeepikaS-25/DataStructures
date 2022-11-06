#include "sll.h"

/* Function for insert the number in sorted linked list */
int insert_sorted( Slist **head, data_t data) 
{
        /* creating a node */
	Slist *new = malloc(sizeof(Slist));
	    /* error checking */
    if(new == NULL)
    {   
        return FAILURE;
    }   
    	/* Updating node */
    new->data = data;
    new->link = NULL;

    /*checking list empty */
    if(*head == NULL)
    {
	    *head = new;
        return SUCCESS;
    }

    Slist *temp = *head;
      /* if data in head less than given data, then adding new node at the beginning */
    if((*head)->data > data)
    {
        new->link = temp;
        *head = new;
        return SUCCESS;
    }
    
    Slist *prev;
      /* traversing till NULL to find position for the new node */
    while(temp->link != NULL)
    {
        if(temp->data > data)      //if position found then updating links and inserting node before temp 
        {
            prev->link = new;
            new->link = temp;
            return SUCCESS;
        }
           //else advancing prev and temp pointers 
        prev = temp;
        temp = temp->link;
    }

      /* if data in last node is lesser than given data then inserting new node at last */
    if(temp->data < data)
    {
        temp->link = new;
        return SUCCESS;
    }
    else
    {   /* if data has to be inserted before last node */
        prev->link = new;
        new->link = temp;
        return SUCCESS;
    }

} 