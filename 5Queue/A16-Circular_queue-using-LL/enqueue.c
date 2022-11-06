#include "queue.h"

int enqueue(Queue_t **front, Queue_t **rear, int data)
{
     Queue_t *new = malloc(sizeof(Queue_t));
       /* error checking */
     if(new == NULL)
     {
	    return FAILURE;
     }
	/* updating data and link of the new node */
     new->data = data;
     new->link = NULL;
      
        /* if list empty updating front and rear */
     if(*front == NULL)
     {
    	 *front = *rear = new;
    	 new->link = new;
     }
        /*else updating rear with new node */
     else
     {
    	 (*rear)->link = new;
    	 new->link = *front;
    	 *rear = new;
     }
     new->link = *front;
     
     return SUCCESS;
}
