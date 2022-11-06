/*
Name                    :   Deepika.S
Date                    :   09.10.2022
Description             :   Sorting array using Quick sort
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign22$ make
                            cc    -c -o partition.o partition.c
                            cc    -c -o main.o main.c
                            cc    -c -o quick_sort.o quick_sort.c
                            gcc -o out.exe partition.o main.o quick_sort.o  
                            emertxe@ubuntu:~/ECEP/DS/Assign22$ ./out.exe
                            Enter the size of an array
                            5
                            Enter the array elements
                            9 7 5 8 1
                            Sorted array is : 1 5 7 8 9 
                            emertxe@ubuntu:~/ECEP/DS/Assign22$ 

*/

#include "main.h"

/* Main Function */
int main()
{
	int i, limit, option;

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
		
	/* Calling the function to bubble sort */
	quick_sort(arr, 0, limit - 1);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
	printf("\n");
		
	return 0;
}
