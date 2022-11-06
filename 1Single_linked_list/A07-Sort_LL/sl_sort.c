#include "sll.h"

int sl_sort(Slist **head)
{
    int flag = 1;
       /* checking list is empty */
    if(*head == NULL)
    {
        return LIST_EMPTY;
    }
       /* checking if list has only one element */
    if((*head)->link == NULL)
    {
        return SUCCESS;
    }
    
    do
    {
            /* initializing variable eaach time to traverse through the list and sort */
        Slist *prev = NULL ,*current = *head, *next = current->link;
        
	    flag = 0;                               //assinging flag as 0 is unsorted nodes found then making flag 1
            
	    /* traversing loop to null each time */
        while(next != NULL)
        {
            if(current->data  >  next->data)     //if unsorted nodes found updating flag as 1
            {
                flag = 1;
                if(prev == NULL)		        //if unsorted nodes in first node itself then updating head
                {
                    Slist *temp = next->link;	//temp pointer to establish link between nodes 
                    *head = next;
                    next->link = current;
                    current->link = temp;
                }
        		else				            //if unsorted nodes in any other nodes than the first node
        		{
        		    Slist *temp = next->link;   //temp ptr to establish link between nodes
        		    prev->link = next;
        		    next->link = current;
        		    current->link = temp;
        		}
                prev = next;			        //updating previous and next nodes
                next = current->link;
            }
            else
            {					                //if elements are in sorted order already then updating prev, current and next
                prev = current;
                current = next;
                next = next->link;
            }
        }
        
    } while(flag != 0);                         //loop will run until flag is zero that is until sorted order of list is obtained
    return  SUCCESS;
}
