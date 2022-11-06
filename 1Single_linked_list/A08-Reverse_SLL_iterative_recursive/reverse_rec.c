#include "sll.h"

int reverse_recursion(Slist ** head)
{
    /* checking list is empty */
    if(*head == NULL)
    {
	    return LIST_EMPTY;
    }
    
    /* declaring static pointers as using recursion */
    static Slist *prev = NULL, *current, *next;
    current = *head;
    
    /* updating links to reverse */
    next = current->link;
    current->link = prev;
    prev = current;
    current = next;
    
    /* calling recursively till NULL is reached */ 
    if(current != NULL)
    {
	    reverse_recursion(&current);
    }

    *head = prev;
    return SUCCESS;

}
