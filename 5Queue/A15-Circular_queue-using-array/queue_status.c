#include "queue.h"

int IsQueueFull(Queue_t *q)
{
      /* checking whether q is full */
    if(q->count == (q->capacity))
    {
	    return SUCCESS;
    }
    else
    {
	    return FAILURE;
    }    
}

int IsQueueEmpty(Queue_t *q)
{
      /* checking whether queue is empty */
    if(q->count == 0)
    {
	    return SUCCESS;
    }
    else
    {
	    return FAILURE;
    }   
}
