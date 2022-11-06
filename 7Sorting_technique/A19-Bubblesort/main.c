/*
Name                    :   Deepika.S
Date                    :   09.10.2022
Description             :   Sorting array using bubble sort
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign19$ make
                            cc    -c -o bubble.o bubble.c
                            cc    -c -o main.o main.c
                            gcc -o out.exe bubble.o main.o
                            emertxe@ubuntu:~/ECEP/DS/Assign19$ ./out.exe
                            Enter the size of an array
                            5
                            Enter the array elements
                            7 3 9 1 4
                            Sorted array is : 1 3 4 7 9
                            emertxe@ubuntu:~/ECEP/DS/Assign19$
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
	bubble(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
	printf("\n");	
	return 0;
}
