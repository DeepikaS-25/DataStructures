/*
Name                    :   Deepika.S
Date                    :   07.10.2022
Description             :   Binary search function in iterative method
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign17$ make
                            cc    -c -o BS_iterative.o BS_iterative.c
                            cc    -c -o main.o main.c
                            gcc -o out.exe BS_iterative.o main.o
                            emertxe@ubuntu:~/ECEP/DS/Assign17$ ./out.exe
                            Enter the size of an array
                            5
                            Enter the elements of an array
                            1 2 3 4 5
                            Enter the key to search
                            3
                            INFO : Key found at the position 3
                            emertxe@ubuntu:~/ECEP/DS/Assign17$ ./out.exe
                            Enter the size of an array
                            10
                            Enter the elements of an array
                            2 3 6 8 10 12 14 16 34 88
                            Enter the key to search
                            5
                            INFO : Key not found
                            emertxe@ubuntu:~/ECEP/DS/Assign17$

*/


#include "main.h"

/* Main Function */
int main()
{

    /* Declaring the variables */
    data_t option, res, key, size;
    
    /* Reading the number of elements from the user */
    printf("Enter the size of an array\n");
    scanf("%d", &size);
    
    data_t arr[size];
    /* Sorting the elements for binary search */
    printf("Enter the elements of an array\n");
    for (int i = 0; i < size; i++)
    {
	    scanf("%d", &arr[i]);
    }
    //sort(arr, size);

    printf("Enter the key to search\n");
	scanf("%d", &key);

	/* Calling the function to search the element */
	if ((res = binarySearch_iterative(arr, size, key)) == DATA_NOT_FOUND)
	{
	    printf("INFO : Key not found\n");
	}
	else
	{	
	    printf("INFO : Key found at the position %d\n", res);
	}
	
    return 0;
}
int sort(int *arr, int size)
{
    int temp, i, j;
    for(i = 0; i < size; i++ )          //loop to give elements of array one by one
    {
        for(j = 0; j < (size - i - 1); j++) //loop to sort array elements
        {
           if (arr[j] > arr[j + 1])
            {
               temp = arr[j];                 //swapping elements if condition is true
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
            }
        }
    }
}
