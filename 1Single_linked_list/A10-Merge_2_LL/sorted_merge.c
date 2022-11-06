#include "sll.h"

int sorted_merge( Slist **head1, Slist **head2)
{
    if(*head1 == NULL && *head2 == NULL)        //if both lists are empty returning failure
    {
	    return FAILURE;
    }
    else if(*head1 == NULL)                     //if only list1 is empty then moving head1 to head of 2nd list
    {
	    *head1 = *head2;
    }
    else if(*head1 != NULL && *head2 != NULL)   //if both lists are non empty then merge 2nd list at the end of 1st list
    {
    	Slist *temp = *head1;                   //declaring temp pointer
    	
    	while(temp->link)                       //traversing to the end of list 1
    	{
    	    temp = temp->link;
    	}
    	temp->link = *head2;                    //when reached NULL merging second list with one
    }
    sort(head1);                                //calling sort function once 2 lists are merged
    return SUCCESS;

}
