#include "main.h"

int Infix_Postfix_conversion(char *Infix_exp, char *Postfix_exp, Stack_t *stk)
{
    /* declaring i and j for index of infix and postfix arrays */
    int i= 0, j = 0;
    while (Infix_exp[i])
    {
	/* checking whether element is digit */
	if (isdigit(Infix_exp[i]))
	{
	    Postfix_exp[j++] = Infix_exp[i++];
	}
	else
	{
    	    /* if stack empty pushing element into stack */
    	    if(stk->top == -1)
    	    {
    		    push(stk, Infix_exp[i++]);
    	    }
    	    /* else if element is '(' pushing into stack */
    	    else if(Infix_exp[i] == '(')
    	    {
    		    push(stk, Infix_exp[i++]);
    	    }
    	    /* when element is ')' poping all elements till ')' */
    	    else if(Infix_exp[i] == ')')
    	    {
        		while(peek(stk) != '(')
        		{
        		    Postfix_exp[j++] = peek(stk);
        		    pop(stk);
        		}
        		pop(stk);
        		i++;
    	    }
    	    /* if elements are operators checking precedence and poping elements from the stack */
    	    else if(priority(stk->stack[stk->top]) >= priority(Infix_exp[i]))
    	    {
        		Postfix_exp[j++] = peek(stk);
        		pop(stk);
    	    }
    	    else
    	    {
    		    push(stk, Infix_exp[i++]);
    	    }
    	}
    }
    while(stk->top != -1)
    {
    	if(peek(stk) != '(' && peek(stk) != ')')
    	{
    	    Postfix_exp[j++] = peek(stk);
    	}
    	pop(stk);
    }
    
    /* adding null at the end of the array */
    Postfix_exp[j] = '\0';
    return 0;
}

