#include "sll.h"

/* Function for finding the loop in the link */
int find_loop(Slist *head)
{
      /*checking if list is empty */
    if(head == NULL)
    {
        return LIST_EMPTY;
    }
    
      /* declaring temp pointers to traverse list */
    Slist *temp = head;
    Slist *temp2 = head;
    
        /* traversing till NULL */
    while((temp != NULL) && (temp2 != NULL) && (temp2->link != NULL))
    {
        temp2 = temp2->link->link;      //temp2 traversing 2 nodes at a time
        temp = temp->link;              //temp traverses single node at a time

        if(temp == temp2)               //when both are equal then loop is found
        {
            return SUCCESS;
        }
    }
    
      /* returning loop not found if cannot detect loop */
    return LOOP_NOT_FOUND;

}