/*
Name                    :   Deepika.S
Date                    :   07.10.2022
Description             :   Conversion from Infix to Postfix and evaluation of Postfix expression
Sample execution        :   emertxe@ubuntu:~/ECEP/DS/Assign13$ make
                            cc    -c -o stack.o stack.c
                            cc    -c -o infix_postfix.o infix_postfix.c
                            cc    -c -o main.o main.c
                            cc    -c -o postfix_evaluation.o postfix_evaluation.c
                            gcc -o out.exe stack.o infix_postfix.o main.o postfix_evaluation.o  
                            emertxe@ubuntu:~/ECEP/DS/Assign13$ ./out.exe
                            Enter the Infix expression : 2*3-3+8/4/(1+1)
                            PostFix expression : 23*3-84/11+/+
                            
                            Result : 4
                            emertxe@ubuntu:~/ECEP/DS/Assign13$ ./out.exe
                            Enter the Infix expression : 1+2+3-4
                            PostFix expression : 12+3+4-
                            
                            Result : 2
                            emertxe@ubuntu:~/ECEP/DS/Assign13$ 

*/

#include "main.h"
#include <string.h>

int main()
{
	char Infix_exp[50], Postfix_exp[50], ch;
	int choice, result;
	Stack_t stk;
	stk.top = -1;

	printf("Enter the Infix expression : ");
	scanf("%s", Infix_exp);

	Infix_Postfix_conversion(Infix_exp, Postfix_exp, &stk);
	printf("PostFix expression : %s\n", Postfix_exp);
	stk.top = -1;
	result = Postfix_Eval(Postfix_exp, &stk);
	printf("\nResult : %d\n", result);
	return 0;
}
