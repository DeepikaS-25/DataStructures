#include "main.h"

int Postfix_Eval(char *Postfix_exp, Stack_t *stk)
{
    /* declaring i for index of array, op1 and op2 for operand 1 and operand 2 and result */
    int i = 0, op1, op2, result;
    while(Postfix_exp[i])
    {
    	/* checking if element is digit */
    	if(isdigit(Postfix_exp[i]))
    	{
    	    push(stk, (Postfix_exp[i] - 48));
    	}
    	else 
    	{
    		op1 = peek(stk);		//getting operand from the stack
    		pop(stk);
    		op2 = peek(stk);
    		pop(stk);
    		switch (Postfix_exp[i]) 		//passing operand to switch case which returns result
    		{
    		    case '+':
    		       	result = op1 + op2;
    		       	break;
    		    case '-':
    		       	result = op2 - op1;
    		       	break;
    		    case '*':
    			    result = op1 * op2;
    		       	break;
    		    case '/':
    		       	result = (int)  op2 / op1;
    		       	break;
    		}
    		push(stk, result);		//adding result into the stack
    	    }
    	i++;					//adding result into the stack
    }
    return (stk->stack[stk->top]);
}
