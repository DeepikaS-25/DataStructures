/*
Name                    :   Deepika.S
Date                    :   14.10.2022
Description             :   Program to search given data and to find max data node from the BST
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assignments/Assign24$ make
							cc    -c -o postorder.o postorder.c
							cc    -c -o search_BST.o search_BST.c
							cc    -c -o inorder.o inorder.c
							cc    -c -o find_min.o find_min.c
							cc    -c -o main.o main.c
							cc    -c -o insert_BST.o insert_BST.c
							cc    -c -o find_max.o find_max.c
							cc    -c -o preorder.o preorder.c
							gcc -o out.exe postorder.o search_BST.o inorder.o find_min.o main.o insert_BST.o find_max.o preorder.o  
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign24$ ./out.exe
							1. insert BST
							2. in order Traversal
							3. pre order Traversal
							4. post order Traversal
							5. BST Search
							6. Find minimum
							7. Find maximum
							Enter the option: 1
							Enter the data to insert into the BST : 56
							1
							Enter the data to insert into the BST : 34
							1
							Enter the data to insert into the BST : 23
							1
							Enter the data to insert into the BST : 87
							1
							Enter the data to insert into the BST : 67
							2
							23 34 56 67 87 
							3
							56 34 23 87 67 
							4
							23 34 67 87 56 
							5
							Enter the element to be searched: 23
							INFO : Data found
							6
							INFO : Minimum value in the tree is 23
							7
							INFO : Maximum value in the tree is 87
							8
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign24$ 

*/

#include "tree.h"

int main()
{
	/* Intializing the root with NULL */
	Tree_t *root = NULL;
	int result;
	/* Declaring the variables */
	int option, data;

	//printf("1. insert BST\n2. in order Traversal\n3. pre order Traversal\n4. post order Traversal\n5. BST Search\n6. Find minimum\n7. Find maximum\n");
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
				/* Function to Printing the data in pre-order form */
				preorder(root);
				printf("\n");
				break;
			case 4:
				/* Function to Printing the data in post-order form */
				postorder(root);
				printf("\n");
				break;
			
			case 5:
				printf("Enter the element to be searched: ");
				scanf("%d", &data);
				result = search_BST(root, data);
				if (result == NOELEMENT)
				{
					printf("INFO : Data not found\n");
				}
				else if (result == FAILURE)
				{
				    printf("INFO : Tree is empty\n");
				}
				else
				{
					printf("INFO : Data found\n");
				}

				break;
			case 6: 
				result = findmin(root);
				if (result == FAILURE)
				{
					printf("INFO : Tree is empty\n");
				}
				else
				{
				    printf("INFO : Minimum value in the tree is %d\n", result);	
				}
				break;
			case 7: 
				result = findmax(root);
				if (result == FAILURE)
				{
					printf("INFO : Tree is empty\n");
				}
				else
				{
				    printf("INFO : Maximum value in the tree is %d\n", result);	
				}	
				break;
			case 8:
			    return SUCCESS;
			
			default:
				printf("Invalid Option\n");
		}

		/* If user press y means loop will continue */
	}
	return 0;
}