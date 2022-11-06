#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
       /* if queue is empty returning failure */
    if(*front == NULL)
    {
    	return FAILURE;
    }
       /* if only one node is present */
    if(*front == *rear)
    {
        free(*front);
        *front = *rear = NULL;
        return SUCCESS;
    }
       /* else updating front and freeing node */
    else
    {
    	*front = (*front)->link;
    	free((*rear)->link);
    	(*rear)->link = *front;
    }

    return SUCCESS;

}
