#include "queue.h"

/* Function to Insert the element */
int enqueue(Queue_t *q, int data)
{
      /* checking whether queue is full */
    if(IsQueueFull(q) == SUCCESS)
    {
	    return FAILURE;
    }
     /* incrementing front when queue is empty */
    if(q->front == -1)
    {
	    (q->front)++;
    }
     /* updating rear and adding data and incrementing count */
    q->rear = (q->rear + 1) % (q->capacity);
    q->Que[q->rear] = data;
    (q->count)++;
    
    return SUCCESS;

}
