/*
Name                    :   Deepika.S
Date                    :   08.10.2022
Description             :   Binary search function in recursive method
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign18$ make
                            cc    -c -o main.o main.c
                            cc    -c -o BS_recursive.o BS_recursive.c
                            gcc -o out.exe main.o BS_recursive.o  
                            emertxe@ubuntu:~/ECEP/DS/Assign18$ ./out.exe
                            Enter the size of an array
                            5
                            Enter the elements of an array
                            1 2 3 4 5      
                            Enter the key to search
                            6
                            INFO : Key not found
                            emertxe@ubuntu:~/ECEP/DS/Assign18$ ./out.exe
                            Enter the size of an array
                            5 
                            Enter the elements of an array
                            1 6 8 9 10
                            Enter the key to search
                            5
                            INFO : Key not found
                            emertxe@ubuntu:~/ECEP/DS/Assign18$ ./out.exe
                            Enter the size of an array
                            5
                            Enter the elements of an array
                            1 2 3 4 5
                            Enter the key to search
                            6
                            INFO : Key not found
                            emertxe@ubuntu:~/ECEP/DS/Assign18$
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
	if ((res = binarySearch_recursive(arr, size, key, 0, size - 1)) == DATA_NOT_FOUND)
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
    int temp;
    for(int i = 0; i < size; i++ )          //loop to give elements of array one by one
    {
        for(int j = 0; j < (size - i - 1); j++) //loop to sort array elements
        {
           if ( arr[j] > arr[j + 1] )
            {
               temp = arr[j];                 //swapping elements if condition is true
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
            }
        }
    }
}
