/*
Name                    :   Deepika.S
Date                    :   14.10.2022
Description             :   Program to delete the given data node from the BST
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assignments/Assign25$ make
							cc    -c -o BST_delete.o BST_delete.c
							cc    -c -o inorder.o inorder.c
							cc    -c -o find_min.o find_min.c
							cc    -c -o main.o main.c
							cc    -c -o insert_BST.o insert_BST.c
							gcc -o out.exe BST_delete.o inorder.o find_min.o main.o insert_BST.o  
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign25$ ./out.exe
							1
							Enter the data to insert into the BST : 50
							1
							Enter the data to insert into the BST : 40
							1
							Enter the data to insert into the BST : 45
							1
							Enter the data to insert into the BST : 25
							1
							Enter the data to insert into the BST : 70
							1
							Enter the data to insert into the BST : 65
							1
							Enter the data to insert into the BST : 80
							1
							Enter the data to insert into the BST : 85
							2
							25 40 45 50 65 70 80 85 
							3
							Enter the data to be deleted: 80
							INFO : Element deleted successfully
							2
							25 40 45 50 65 70 85 
							4
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign25$ 

*/

#include "tree.h"

int status;

int main()
{
	/* Intializing the root with NULL */
	Tree_t *root = NULL;
	int result;
	/* Declaring the variables */
	int option, data;

	//printf("1. insert BST\n2. in order Traversal\n3.BST Delete\n4.Exit\n");
	//printf("Enter the option: ");
	while (1)
	{
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				/* Reading the data from the user */
				printf("Enter the data to insert into the BST : ");
				scanf("%d", &data);

				/* Calling the function to insert the element */
				if ((result = insert_into_BST(&root, data)) == DUPLICATE)
				{
					printf("INFO : Duplicate found\n");
				}
				else if (result == FAILURE)
				{
					printf("INFO : Node not created\n");
				}
				break;
			case 2:
				/* Function to Printing the data in in-order form */
				inorder(root);
				printf("\n");
				break;

			case 3:
				/* Function to delete the data from the tree */
				printf("Enter the data to be deleted: ");
				scanf("%d", &data);
				if (root)
				{
			        root = delete_BST(root, data);
			        if (status)
			            printf("INFO : Element deleted successfully\n");
			        else
			            printf("INFO : Element not found\n");
				}
				else
				    printf("INFO : Tree is empty\n");
			            
				break;
			case 4:
				
			    return SUCCESS;
				break;
			
			default:
				printf("Invalid Option\n");
		}

		/* If user press y means loop will continue */
	}
	return 0;
}