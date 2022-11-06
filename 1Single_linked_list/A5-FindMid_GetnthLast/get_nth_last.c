#include "sll.h"
/* Function to get the nth node from the last of a linked list*/

int find_nth_last(Slist *head, int pos, int *data) 
{
    /* checking list empty */
   if(head == NULL)
   {
      return LIST_EMPTY;
   }

   if(pos <= 0)
   {
       return FAILURE;
   }

   Slist *temp = head;
   Slist *ref = head;
   
   //traversing ref to nth node from head
   for (int i = 0; i < pos - 1; i++) 
   {
       if (ref->link == NULL)
       {
           return FAILURE;
       }
       ref = ref->link;
   }

   //traverse ref and temp by one node till NULL
   while (ref->link != NULL) 
   {
       ref = ref->link;
       temp = temp->link;
   }
   return temp->data;
} 
