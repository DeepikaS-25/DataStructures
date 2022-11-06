#include "main.h"

int Prefix_Eval(char *Prefix_exp, Stack_t *stk)
{
    /* declaring i for index of array, op1 and op2 for operand 1 and operand 2 and result */
    int i = 0, op1, op2, result;

    while(Prefix_exp[i])
    {
    	/* checking if element is digit */
    	if(isdigit(Prefix_exp[i]))
    	{
    	    push(stk, (Prefix_exp[i] - 48));   
    	}
    	else
    	{
    		op1 = peek(stk);      		//getting operand from the stack
    		pop(stk);
    		op2 = peek(stk);
    		pop(stk);
    		switch (Prefix_exp[i]) 		//passing operand to switch case which returns result
    		{
    		    case '+':
    		       	result = op1 + op2;
    		       	break;
    		    case '-':
    		       	result = op1 - op2;
    		       	break;
    		    case '*':
    			    result = op1 * op2;
    		       	break;
    		    case '/':
    		       	result = (int)  op1 / op2;
    		       	break;
    		}
    		push(stk, result);		//adding result into the stack
    	 }
    	 i++;					    //incrementing index to access next element
    }
    return (stk->stack[stk->top]);  //returning result in the stack
}
