#include "sll.h"

int find_node(Slist *head, data_t data)
{
    /* checking list is empty */
    if(head == NULL)
    {
	return LIST_EMPTY;
    }
    /* creating temp pointer to traverse and count to return position */
    Slist *temp = head;
    int count = 1;

    while(temp != NULL)
    {
	if(data == temp->data)
	{
	    return count;
	}
	else
	{
	    temp = temp->link;
	    count++;
	}
    }
    return DATA_NOT_FOUND;	
}
