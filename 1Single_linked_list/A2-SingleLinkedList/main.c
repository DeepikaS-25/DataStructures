/*
Name                    :   Deepika.S
Date                    :   28.09.2022
Description             :   Single linked list
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign2$ make
                            cc    -c -o print_list.o print_list.c
                            cc    -c -o insert_after.o insert_after.c
                            cc    -c -o insert_before.o insert_before.c
                            cc    -c -o insert_at_first.o insert_at_first.c
                            cc    -c -o insert_nth.o insert_nth.c
                            cc    -c -o main.o main.c
                            cc    -c -o delete_element.o delete_element.c
                            gcc -o out.exe print_list.o insert_after.o insert_before.o insert_at_first.o insert_nth.o main.o delete_element.o
                            emertxe@ubuntu:~/ECEP/DS/Assign2$ ./out.exe
                            1.Insert at first
                            2.Insert after
                            3.Insert before
                            4.Insert Nth
                            5.Delete element
                            6.Print list
                            7. Exit
                            Enter any option : 1
                            Enter the number you have to insert : 10
                            1
                            Enter the number you have to insert : 20
                            2
                            Enter the value of gdata : 10
                            Enter the ndata that you want to insert after 10 : 9
                            3
                            Enter the value of gdata : 10
                            iEnter the ndata that you want to insert before 10 : 23
                            6
                            20 -> 23 -> 10 -> 9 -> NULL
                            5
                            Enter the element you need to delete : 23
                            Element Successfully deleted
                            5
                            Enter the element you need to delete : 1
                            INFO : Element is not found
                            6
                            20 -> 10 -> 9 -> NULL
                            7
                            emertxe@ubuntu:~/ECEP/DS/Assign2$ 

*/

#include "sll.h"

int main()
{
 
    int option, ndata, gdata, ret, n, pos;


    Slist *head = NULL; //initialize the header to NULL

	printf("1.Insert at first\n2.Insert after\n3.Insert before\n4.Insert Nth\n5.Delete element\n6.Print list\n7. Exit\nEnter any option : ");
    while(1)
    {

	/*ask user options*/

	scanf("%d", &option);

	switch (option)
	{
	    case 1:
		    printf("Enter the number you have to insert : ");
		    scanf("%d", &ndata);
		    if (insert_at_first(&head, ndata) == FAILURE)
		    {
		       printf("INFO : Insert first failure\n");
	    	    }
	    	break;

	    case 2:
	    	printf("Enter the value of gdata : ");
	    	scanf("%d", &gdata);
	    	printf("Enter the ndata that you want to insert after %d : ", gdata);
    		scanf("%d", &ndata);
    		/*insert_at_last function call*/
	    	if ((ret = sl_insert_after(&head, gdata, ndata)) == DATA_NOT_FOUND) //pass by reference
	    	{
	    	    printf("INFO : %d is not found at the list\n", gdata);
	    	}
	    	else if (ret == LIST_EMPTY)
	    	{
	    	    printf("INFO : List is empty\n");
	    	}
	
    		break;

	   case 3:
    		printf("Enter the value of gdata : ");
	    	scanf("%d", &gdata);
	    	printf("Enter the ndata that you want to insert before %d : ", gdata);
    		scanf("%d", &ndata);
	    	/*insert_at_last function call*/
    		if ((ret = sl_insert_before(&head, gdata, ndata)) == DATA_NOT_FOUND) //pass by reference
	    	{
	    	    printf("INFO %d is not found at the list\n", gdata);
    		}
	    	else if (ret == LIST_EMPTY)
	    	{
	    	    printf("INFO : List is empty\n");
    		}
	    	break;

	    case 4:
	    	printf("Enter the node number : ");
	    	scanf("%d", &n);
		    printf("Enter the number that you want to insert %dth position : ", n);
		    scanf("%d", &ndata);
		    /*insert_at_last function call*/
		    if ((ret = sl_insert_nth(&head, ndata, n)) == POSITION_NOT_FOUND)//pass by reference
		    {
			printf("INFO : %d Position not found\n", n);
	            }
	    	    else if (ret == LIST_EMPTY)
		    {
		        printf("INFO : List is empty\n");
		    }
		    else
		    {
		        printf("%d is successfully inserted at the position %d\n", ndata, n);
		    }
		    break;

	    case 5:
		    // To delete the element
		    printf("Enter the element you need to delete : ");
		    scanf("%d", &ndata);
		    if ((ret = sl_delete_element(&head, ndata)) == DATA_NOT_FOUND)
		    {
		        printf("INFO : Element is not found\n");
		    }
		    else if (ret == FAILURE)
		    {
		        printf("INFO : List is empty\n");
		    }
		    else
		    {
		        printf("Element Successfully deleted\n");
		    }
		    break;

	    case 6:
		    print_list(head);
		    break;

            case 7:
                    return SUCCESS;
            	    break;

	    default:
		    printf("Enter proper choice !!\n");
		    break;
	    }
    }
    return SUCCESS;
}
