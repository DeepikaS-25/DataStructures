/*
Name                    :   Deepika.S
Date                    :   19.10.2022
Description             :   Program to sort given array using heap sort
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assignments/Assign28$ make
							cc    -c -o build_maxheap.o build_maxheap.c
							cc    -c -o heap_sort.o heap_sort.c
							cc    -c -o main.o main.c
							cc    -c -o max_heapify.o max_heapify.c
							gcc -o out.exe build_maxheap.o heap_sort.o main.o max_heapify.o  
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign28$ ./out.exe
							Enter the size of an array
							5
							Enter the array elements
							2 3 1 5 4
							Sorted array is : 1 2 3 4 5 
							emertxe@ubuntu:~/ECEP/DS/Assignments/Assign28$ 
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
	int heap[limit];

		
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
	    /* Scanning the array elements */
		scanf("%d", &heap[i]);
	}
		

    build_maxheap(heap, limit);
    
	/* Calling the function to bubble sort */
	heap_sort(heap, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", heap[i]);
	}
	printf("\n");
		
	return 0;
}

 /* function to swap two values */
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
