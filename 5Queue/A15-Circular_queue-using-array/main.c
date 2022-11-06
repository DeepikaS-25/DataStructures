/*
Name                    :   Deepika.S
Date                    :   09.10.2022
Description             :   Circular queue implementation using array
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign15$ make
                            cc    -c -o print_queue.o print_queue.c
                            cc    -c -o enqueue.o enqueue.c
                            cc    -c -o main.o main.c
                            cc    -c -o dequeue.o dequeue.c
                            cc    -c -o queue_status.o queue_status.c
                            gcc -o out.exe print_queue.o enqueue.o main.o dequeue.o queue_status.o
                            emertxe@ubuntu:~/ECEP/DS/Assign15$ ./out.exe
                            Enter the size of the queue : 4
                            1. Enqueue
                            2. Dequeue
                            3. Print Queue
                            4. Exit
                            Enter the option : 1
                            Enter the element you want to insert : 1
                            1
                            Enter the element you want to insert : 2
                            1
                            Enter the element you want to insert : 3
                            1
                            Enter the element you want to insert : 4
                            3
                            Front -> 1 2 3 4 <- Rear
                            2
                            INFO : Dequeue successfull
                            3
                            Front -> 2 3 4 <- Rear
                            2
                            INFO : Dequeue successfull
                            2
                            INFO : Dequeue successfull
                            3
                            Front -> 4 <- Rear
                            2
                            INFO : Dequeue successfull
                            3
                            INFO : Queue is empty
                            2
                            INFO : Queue is empty
                            4
                            emertxe@ubuntu:~/ECEP/DS/Assign15$

*/


#include "queue.h"

int create_queue(Queue_t *q, int size)
{
    q->Que = malloc(sizeof(int) * size);
       /*error checking */
    if (q->Que == NULL)
    {
        return FAILURE;
    }
    
       /* updating count, capacity, rear and front for queue */
    q->count = 0;
    q->capacity = size;
    q->front = -1;
    q->rear = -1;
    
    return SUCCESS;
}

int main()
{
	Queue_t q;
	int size;
	printf("Enter the size of the queue : ");
	scanf("%d", &size);
	if (create_queue(&q, size) == FAILURE)
	{
	    printf("INFO : Queue not created\n");
	    return FAILURE;
	}

	char ch;
	int choice, data;
	printf("1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\nEnter the option : ");
	while (1)
	{
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				/* Function to Enqueue the Queue */
				printf("Enter the element you want to insert : ");
				scanf("%d", &data);
				if (enqueue(&q, data) == FAILURE)
				{
					printf("INFO : Queue full\n");
				}
				break;
			case 2:
				/* Function to dequeueue the queue */
				if (dequeue(&q) == FAILURE)
				{
					printf("INFO : Queue is empty\n");
				}
				else
				{
					printf("INFO : Dequeue successfull\n");
				}
				break;
			case 3:
				/* Function to print the queue */
				print_queue(q);
				break;
			case 4:
				return SUCCESS;
			default:
				printf("Invalid option !!!\n");
		}

	}
}
