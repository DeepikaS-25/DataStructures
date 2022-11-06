/*
Name                    :   Deepika.S
Date                    :   09.10.2022
Description             :   Sorting array using Selection sort
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign21$ make
                            cc    -c -o main.o main.c
                            cc    -c -o selection.o selection.c
                            gcc -o out.exe main.o selection.o  
                            emertxe@ubuntu:~/ECEP/DS/Assign21$ ./out.exe
                            Enter the size of an array
                            5
                            Enter the array elements
                            9 7 2 3 6
                            Sorted array is : 2 3 6 7 9 
                            emertxe@ubuntu:~/ECEP/DS/Assign21$ 
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
	data_t arr[limit];

		
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
	    /* Scanning the array elements */
		scanf("%d", &arr[i]);
	}
		
	/* Calling the function to bubble sort */
	selection(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
	printf("\n");
		
	return 0;
}
