#include "sll.h"

int insert_at_first(Slist **head, data_t data)
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
    
    /* adding node at first position */
    new->link = *head;
    *head = new;

	
}
