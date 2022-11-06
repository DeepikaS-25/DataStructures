#include "sll.h"

/* Function to get the middle of the linked list*/
int find_mid(Slist *head, int *mid) 
{
    /* checking list empty */
    if(head == NULL)
    {
        return LIST_EMPTY;
    }
    
    /* declaring two pointers to traverse */
    Slist *temp1 = head;
    Slist *temp2 = head;
    
    while(temp1 != NULL)
    {
    	if(temp1->link == NULL)		//when last node reaches stop traversing and updating mid
    	{
    	    break;
    	}
       temp1 = temp1->link->link;	//temp1 traversing fast two nodes at a time
       temp2 = temp2->link;		//temp2 traversing slow one node at a time
    }
    return temp2->data;
} 
