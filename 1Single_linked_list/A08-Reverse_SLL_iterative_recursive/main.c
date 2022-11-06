/*
Name                    :   Deepika.S
Date                    :   04.10.2022
Description             :   Reversing single linked list using recursive and iterative methods
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign8$ make
                            cc    -c -o reverse_rec.o reverse_rec.c
                            cc    -c -o print_list.o print_list.c
                            cc    -c -o reverse_iter.o reverse_iter.c
                            cc    -c -o insert_at_last.o insert_at_last.c
                            cc    -c -o main.o main.c
                            gcc -o out.exe reverse_rec.o print_list.o reverse_iter.o insert_at_last.o main.o
                            emertxe@ubuntu:~/ECEP/DS/Assign8$ ./out.exe
                            1. Insert the element
                            2. Print list
                            3. Reverse Iterative
                            4. Reverse Recusive
                            5. Exit
                            Enter your choice : 1
                            Enter the number that you want to insert at last: 1
                            1
                            Enter the number that you want to insert at last: 2
                            1
                            Enter the number that you want to insert at last: 3
                            1
                            Enter the number that you want to insert at last: 4
                            1
                            Enter the number that you want to insert at last: 5
                            2
                            1 -> 2 -> 3 -> 4 -> 5 -> NULL
                            3
                            INFO : Reverse iterative successfull
                            2
                            5 -> 4 -> 3 -> 2 -> 1 -> NULL
                            4
                            INFO : Reverse recursive successfull
                            2
                            1 -> 2 -> 3 -> 4 -> 5 -> NULL
                            5
                            emertxe@ubuntu:~/ECEP/DS/Assign8$

*/

#include "sll.h"

int main()
{
	int option, data;


	Slist *head = NULL; //initialize the header to NULL

	printf("1. Insert the element\n2. Print list\n3. Reverse Iterative\n4. Reverse Recusive\n5. Exit\nEnter your choice : ");
	while(1)
	{

		/*ask user options*/
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &data);

				/*insert_at_last function call*/
				if (insert_at_last(&head, data) == FAILURE) //pass by reference
				{
					printf("INFO : Insert at last failure\n");
				}
				break;

			case 2:
				/* print list function call*/
				print_list(head);
				break;
			case 3:
				if (reverse_iter(&head) == LIST_EMPTY)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Reverse iterative successfull\n");
				}
				break;
			case 4:
				if (reverse_recursion(&head) == LIST_EMPTY)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Reverse recursive successfull\n");
				}
				break;
			case 5:
				return SUCCESS;
			default: printf("Enter proper choice !!\n");
		}

	}

	return SUCCESS;
}
