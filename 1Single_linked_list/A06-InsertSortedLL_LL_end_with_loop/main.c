/*
Name                    :   Deepika.S
Date                    :   13.10.2022
Description             :   Program to insert the new data in the already sorted linked list & to detect whether the given linked list is ending with loop or not
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assignments/Assign6$ make
							cc    -c -o insert_sorted.o insert_sorted.c
							cc    -c -o print_list.o print_list.c
							cc    -c -o create_loop.o create_loop.c
							cc    -c -o main.o main.c
							cc    -c -o find_loop.o find_loop.c
							gcc -o out.exe insert_sorted.o print_list.o create_loop.o main.o find_loop.o  
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign6$ ./out.exe
							1. Insert sorted
							2. Find loop
							3. Create loop
							4. Print list
							5. Exit
							Enter Your choice : 1
							Enter the data to be inserted : 50
							4
							50 -> NULL
							5
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign6$ ./out.exe
							1. Insert sorted
							2. Find loop
							3. Create loop
							4. Print list
							5. Exit
							Enter Your choice : 1
							Enter the data to be inserted : 10
							1
							Enter the data to be inserted : 20
							1
							Enter the data to be inserted : 30
							1
							Enter the data to be inserted : 40
							1
							Enter the data to be inserted : 50
							3
							Enter a data to create the loop : 55
							INFO : 55 not found at the list
							5
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign6$ ./out.exe
							1. Insert sorted
							2. Find loop
							3. Create loop
							4. Print list
							5. Exit
							Enter Your choice : 1
							Enter the data to be inserted : 10
							1
							Enter the data to be inserted : 20
							1
							Enter the data to be inserted : 30
							1
							Enter the data to be inserted : 5
							2
							INFO : Loop is not found
							5
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign6$ 
*/

#include "sll.h"

int main()
{
	int option, data, ret;


	Slist *head = NULL; //initialize the header to NULL

	printf("1. Insert sorted\n2. Find loop\n3. Create loop\n4. Print list\n5. Exit\nEnter Your choice : ");
	while (1)
	{

		/*ask user options*/
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the data to be inserted : ");
				scanf("%d", &data);
				if (insert_sorted(&head, data) == -1)
				{
					printf("INFO : Insert sorted failure\n");
				}
			
				break;
			case 2:
				/* Function to find the loop */
				if ((ret = find_loop(head)) == LOOP_NOT_FOUND)
				{
					printf("INFO : Loop is not found\n");
				}
				else if (ret == LIST_EMPTY)
				{
					printf("INFO : List is empty\n");
				}
				else
					printf("INFO : Loop found\n");
				break;
			case 3:
				printf("Enter a data to create the loop : ");
				scanf("%d", &data);

				/*insert_at_last function call*/
				if ((ret = create_loop(&head, data)) == LIST_EMPTY) //pass by reference
				{
					printf("INFO : List is empty\n");
				}
				else if (ret == DATA_NOT_FOUND)
				{
					printf("INFO : %d not found at the list\n", data);
				}
				else
				{
					printf("INFO : Loop created successfully\n");
				}
				break;

			case 4:
				/* print list function call*/
				print_list(head);
				break;
			case 5: return SUCCESS;
			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}