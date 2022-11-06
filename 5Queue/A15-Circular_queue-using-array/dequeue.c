#include "queue.h"

/* Function to deque the element */
int dequeue(Queue_t *q)
{
     /* returning failure if queue is empty */
    if(q->count == 0)
    {
	    return FAILURE;
    }
     /* removing element and updating front and rear */
    q->front = (q->front + 1) % (q->capacity);

    if(q->front > q->rear)
    {
    	q->front = -1;
    	q->rear = -1;
    }
    --(q->count);			//decrementing count when element is deleted
    
    return SUCCESS;
}
