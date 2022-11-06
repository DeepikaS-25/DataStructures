/*
Name                    :   Deepika.S
Date                    :   14.10.2022
Description             :   Program to find the height & the number of nodes in the given tree
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assignments/Assign26$ make
                            cc    -c -o inorder.o inorder.c
                            cc    -c -o find_height.o find_height.c
                            cc    -c -o main.o main.c
                            cc    -c -o insert_BST.o insert_BST.c
                            cc    -c -o find_no_ofnodes.o find_no_ofnodes.c
                            gcc -o out.exe inorder.o find_height.o main.o insert_BST.o find_no_ofnodes.o
                            emertxe@ubuntu:~/ECEP/DS/Assignments/Assign26$ ./out.exe
                            1
                            Enter the data to insert into the BST : 50
                            1
                            Enter the data to insert into the BST : 20
                            1
                            Enter the data to insert into the BST : 30
                            1
                            Enter the data to insert into the BST : 52
                            1
                            Enter the data to insert into the BST : 55
                            2
                            20 30 50 52 55 
                            3
                            INFO : Total no.of nodes are 5
                            4
                            INFO : Height of the tree is 3
                            5
                            emertxe@ubuntu:~/ECEP/DS/Assignments/Assign26$  
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

	//printf("1. insert BST\n2. in order Traversal\n3. Find height\n4. 4.Exit\n");
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
				
			    if ((result = total_nodes(root)) == 0)
			    {
			        printf("INFO : Tree is empty\n");
			    }
				else
				    printf("INFO : Total no.of nodes are %d\n", result);
			            
				break;
			case 4:
			
			    if ((result = find_height(root)) == 0)
			    {
			        printf("INFO : Tree is empty\n");
			    }
			    else
			    {
			        printf("INFO : Height of the tree is %d\n", result);
			    }
			    break;
			case 5:
				
			    return SUCCESS;
				break;
			
			default:
				printf("Invalid Option\n");
		}

		/* If user press y means loop will continue */
	}
	return 0;
}