#include "sll.h"

/* Function to reverse the given single linked list */
int reverse_iter(Slist **head) 
{
    /* checking list is empty */
    if(*head == NULL)
    {
	    return LIST_EMPTY;
    }
    
    /* declaring pointers to reverse */
    Slist *prev = NULL, *next, *current;
    next = current = *head;
    
    /* traversing till null and reversing nodes */
    while(next != NULL)
    {
	    /* updating links to reverse */
    	next = next->link;
    	current->link = prev;
    	prev = current;
    	current = next;
    }
    *head = prev;
    
    return SUCCESS;
} 
