/*
Name                    :   Deepika.S
Date                    :   12.10.2022
Description             :   Sorting given array using merge sort
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assignments/Assign23$ make
							cc    -c -o merge.o merge.c
							cc    -c -o merge_sort.o merge_sort.c
							cc    -c -o main.o main.c
							gcc -o out.exe merge.o merge_sort.o main.o  
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign23$ ./out.exe
							Enter the size of an array
							8
							Enter the array elements
							9 6 1 5 2 60 4 3
							Sorted array is : 1 2 3 4 5 6 9 60 
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign23$ 
*/

#include "main.h"

/* Main Function */
int main()
{
	int i, limit;

	/* Scanning the size */
	printf("Enter the size of an array\n");
	scanf("%d", &limit);

	/* Declaring the array with size */
	int arr[limit];

		
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
	    /* Scanning the array elements */
		scanf("%d", &arr[i]);
	}
		
	/* Calling the function to merge sort */
	merge_sort(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
