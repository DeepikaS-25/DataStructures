/*
Name                    :   Deepika.S
Date                    :   07.10.2022
Description             :   Conversion from Infix to Prefix and evaluation of Prefix expression
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign14$ make
                            cc    -c -o stack.o stack.c
                            cc    -c -o infix_prefix.o infix_prefix.c
                            cc    -c -o main.o main.c
                            cc    -c -o prefix_evaluation.o prefix_evaluation.c
                            gcc -o out.exe stack.o infix_prefix.o main.o prefix_evaluation.o
                            emertxe@ubuntu:~/ECEP/DS/Assign14$ ./out.exe
                            Enter the Infix expression : 2*3-3+8/4/(1+1)
                            PreFix expression : +-*233//84+11
                            
                            Result : 4
                            emertxe@ubuntu:~/ECEP/DS/Assign14$ ./out.exe
                            Enter the Infix expression : 1+2+3*4
                            PreFix expression : ++12*34
                            
                            Result : 15
                            emertxe@ubuntu:~/ECEP/DS/Assign14$
*/


#include "main.h"

void strrev(char *str)
{
    /* logic for string reverse */
    int i, temp, len;                           //declaring variables
    for(len = 0; str[len] != '\0'; ++len);        //finding length of the string

    for(i = 0; i < len/2; i++)          //loop to swap the elements till len/2 times since we are swapping two characters at a time
    {
        temp = str[i];                  //temp variable to store the char
        str[i] = str[len - i - 1];      //swapping 1st with last, 2nd with 2nd last till len/2
        str[len - i - 1] = temp;
    }
}
int main()
{
	char Infix_exp[50], Prefix_exp[50], ch;
	int choice, result;
	Stack_t stk;
	stk.top = -1;

	printf("Enter the Infix expression : ");
	scanf("%s", Infix_exp);

	strrev(Infix_exp);
	Infix_Prefix_conversion(Infix_exp, Prefix_exp, &stk);
	strrev(Prefix_exp);
	printf("PreFix expression : %s\n", Prefix_exp);

	stk.top = -1;

	strrev(Prefix_exp);
	result = Prefix_Eval(Prefix_exp, &stk);
	printf("\nResult : %d\n", result);
	return 0;
}
