#include "queue.h"

int print_queue(Queue_t *front, Queue_t *rear)
{
	/* if queue empty returning failure */
    if (front == NULL)
	{
		printf("INFO : Queue is Empty\n");
		return FAILURE;
	}
	  /* else printing elements in the queue */ 
	printf("Front -> ");
	while (front)		
	{
		printf("%d ", front -> data);
		front = front -> link;
		if (rear -> link != front)
		{
		    printf("-> ");
		}
		else
		    break;
	}

	printf("<- Rear\n");
	return SUCCESS;
}
