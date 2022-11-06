/*
Name                    :   Deepika.S
Date                    :   03.10.2022
Description             :   Remove duplicates in Single linked list
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign9$ make
                            cc    -c -o print_list.o print_list.c
                            cc    -c -o remove_duplicates.o remove_duplicates.c
                            cc    -c -o insert_at_last.o insert_at_last.c
                            cc    -c -o main.o main.c
                            gcc -o out.exe print_list.o remove_duplicates.o insert_at_last.o main.o
                            emertxe@ubuntu:~/ECEP/DS/Assign9$ ./out.exe
                            
                            1. To insert the last element
                            2. To print the list
                            3. To remove the duplicates
                            4. Exit
                            Enter your option : 1
                            Enter the number that you want to insert at last: 10
                            1
                            Enter the number that you want to insert at last: 20
                            1
                            Enter the number that you want to insert at last: 30
                            1
                            Enter the number that you want to insert at last: 10
                            1
                            Enter the number that you want to insert at last: 20
                            1
                            Enter the number that you want to insert at last: 40
                            1
                            Enter the number that you want to insert at last: 10
                            2
                            10 -> 20 -> 30 -> 10 -> 20 -> 40 -> 10 -> NULL
                            3
                            INFO : Duplicates are removed Successfully
                            2
                            10 -> 20 -> 30 -> 40 -> NULL
                            4
                            emertxe@ubuntu:~/ECEP/DS/Assign9$
*/


#include "sll.h"

int main()
{
	int option, data;


	Slist *head = NULL; /* initialize the header to NULL */

	printf("\n1. To insert the last element\n2. To print the list\n3. To remove the duplicates\n4. Exit\nEnter your option : ");
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
					printf("INFO : insert last failure\n");
				}
				break;

			case 2:
				/* print list function call*/
				print_list(head);
				break;
			case 3:
				if (remove_duplicates(&head) == FAILURE)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Duplicates are removed Successfully\n");
				}
				break;
			case 4:
				return SUCCESS;
				break;
			default: 
				printf("Enter proper choice !!\n");
		       		break;
		}

	}

	return SUCCESS;
}
