/*
Name                    :   Deepika.S
Date                    :   04.10.2022
Description             :   Implementation of stack using array
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign11$ make
            			    cc    -c -o push.o push.c
            			    cc    -c -o peek.o peek.c
                            cc    -c -o peep.o peep.c
                            cc    -c -o pop.o pop.c
                            cc    -c -o main.o main.c
                            gcc -o out.exe push.o peek.o peep.o pop.o main.o 
                            emertxe@ubuntu:~/ECEP/DS/Assign11$ ./out.exe
                            Enter the size of the stack: 5
                            1. Push
                            2. Pop
                            3. Display Stack
                            4. Peek(Element at Top)
                            5. Exit
                            Enter your choice : 1
                            Enter the element to be pushed in stack : 23
                            1
                            Enter the element to be pushed in stack : 45
                            1
                            Enter the element to be pushed in stack : 42
                            2
                            INFO : Pop operation is successfull
                            3
                            Top -> 45 23
                            4
                            INFO : Peek element is 45
                            2
                            INFO : Pop operation is successfull
                            3
                            Top -> 23
                            2
                            INFO : Pop operation is successfull
                            3
                            INFO : Stack is empty
                            4
                            INFO : Stack is empty
                            1
                            Enter the element to be pushed in stack : 2
                            1
                            Enter the element to be pushed in stack : 2
                            1
                            Enter the element to be pushed in stack : 23
                            1
                            Enter the element to be pushed in stack : 45
                            1
                            Enter the element to be pushed in stack : 67
                            1
                            Enter the element to be pushed in stack : 34
                            INFO : Stack Full
                            3
                            Top -> 67 45 23 2 2
                            4
                            INFO : Peek element is 67
                            5
                            emertxe@ubuntu:~/ECEP/DS/Assign11$
*/


#include "stack.h"

int create_stack(Stack_t *stk, int size)
{
    /* dynamically allocating memory for array */
    stk->stack = malloc(sizeof(int) * size);
    
    /* error checking */
    if(stk->stack == NULL)
    {
	    return FAILURE;
    }
    stk->top = -1;
    stk->capacity = size; 	//assigning size as capacity of the stack
    
    return SUCCESS;
}


int main()
{
	int choice, element, peek, size;
	Stack_t stk;

    printf("Enter the size of the stack: ");
    scanf("%d", &size);
    
    create_stack(&stk, size);
	printf("1. Push\n2. Pop\n3. Display Stack\n4. Peek(Element at Top)\n5. Exit\nEnter your choice : ");
    
	while (1)
	{
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to be pushed in stack : ");
				scanf("%d", &element);
				if (Push(&stk, element) == FAILURE)
				{
					printf("INFO : Stack Full\n");
				} 
				break;
			case 2:
				if (Pop(&stk) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
				    printf("INFO : Pop operation is successfull\n");
				}
				break;
			case 3:
				Peep(stk);
				break;
			case 4:
				if ((peek = Peek(&stk)) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
					printf("INFO : Peek element is %d\n", peek);
				}
				break;
			case 5:
				return SUCCESS;
			default:
				printf("Invalid Choice.\n");
				break;
		}
	}
	return 0;
}
