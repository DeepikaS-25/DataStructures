#include "stack.h"

int Push(Stack_t **top, data_t data)
{
    /* creating a node */
    Stack_t *new = malloc(sizeof(Stack_t));
    
    /*error checking */
    if(new == NULL)
    {
    	return FAILURE;
    }
    
    /* updating links of new node */
    new->data = data;
    new->link = *top;
    /* updating top */
    *top = new;
    
    return SUCCESS;
}
