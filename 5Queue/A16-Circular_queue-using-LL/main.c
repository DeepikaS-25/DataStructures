/*
Name                    :   Deepika.S
Date                    :   09.10.2022
Description             :   Circular queue implementation using Linked list
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign16$ make
                            cc    -c -o print_queue.o print_queue.c
                            cc    -c -o enqueue.o enqueue.c
                            cc    -c -o main.o main.c
                            cc    -c -o dequeue.o dequeue.c
                            gcc -o out.exe print_queue.o enqueue.o main.o dequeue.o  
                            emertxe@ubuntu:~/ECEP/DS/Assign16$ ./out.exe
                            1. Enqueue
                            2. Dequeue
                            3. Print Queue
                            4. Exit
                            Enter the option : 1
                            Enter the element you want to insert : 2
                            1
                            Enter the element you want to insert : 3
                            1
                            Enter the element you want to insert : 4
                            3
                            Front -> 2 -> 3 -> 4 <- Rear
                            2
                            INFO : Dequeue successfull
                            3
                            Front -> 3 -> 4 <- Rear
                            2
                            INFO : Dequeue successfull
                            3
                            Front -> 4 <- Rear
                            1
                            Enter the element you want to insert : 5
                            3
                            Front -> 4 -> 5 <- Rear
                            1
                            Enter the element you want to insert : 2
                            3
                            Front -> 4 -> 5 -> 2 <- Rear
                            4
                            emertxe@ubuntu:~/ECEP/DS/Assign16$ 
*/

#include "queue.h"

int main()
{
	Queue_t *front = NULL, *rear = NULL;

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
				if (enqueue(&front, &rear, data) == FAILURE)
				{
					printf("INFO : Queue full\n");
				}
				break;
			case 2:
				/* Function to dequeueue the queue */
				if (dequeue(&front, &rear) == FAILURE)
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
				print_queue(front, rear);
				break;
			case 4:
				return SUCCESS;
			default:
				printf("Invalid option !!!\n");
		}

	}
}
