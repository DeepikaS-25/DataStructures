/*
Name                    :   Deepika.S
Date                    :   11.10.2022
Description             :   Sorting given single linked list
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign7$ make
                            cc    -c -o print_list.o print_list.c
                            cc    -c -o insert_at_last.o insert_at_last.c
                            cc    -c -o main.o main.c
                            cc    -c -o sl_sort.o sl_sort.c
                            gcc -o out.exe print_list.o insert_at_last.o main.o sl_sort.o  
                            emertxe@ubuntu:~/ECEP/DS/Assign7$ ./out.exe
                            1. Insert at last
                            2. Sort list
                            3. Print list
                            4. Exit
                            Enter your choice : 1
                            Enter the number that you want to insert at last: 3
                            1
                            Enter the number that you want to insert at last: 2
                            1
                            Enter the number that you want to insert at last: 1
                            1
                            Enter the number that you want to insert at last: 4
                            1
                            Enter the number that you want to insert at last: 6
                            1
                            Enter the number that you want to insert at last: 5
                            3
                            3 -> 2 -> 1 -> 4 -> 6 -> 5 -> NULL
                            2
                            INFO : Sorting successfull
                            3
                            1 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL
                            4
                            emertxe@ubuntu:~/ECEP/DS/Assign7$ 
*/

#include "sll.h"

int main()
{

	int option, data, key;


	Slist *head = NULL; //initialize the header to NULL

	printf("1. Insert at last\n2. Sort list\n3. Print list\n4. Exit\nEnter your choice : ");
	while (1)
	{

		/* ask user options */
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &data);

				/* insert_at_last function call */
				if (insert_at_last(&head, data) == FAILURE) 
				{
					printf("INFO : Insert last failed\n");
				}
				break;
			case 2:
				/* Function to sort the link */
				if (sl_sort(&head) == LIST_EMPTY)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Sorting successfull\n");
				}
				break;

			case 3:
				/* print list function call*/
				print_list(head);
				break;
				
			case 4:
				return 0;
			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}
