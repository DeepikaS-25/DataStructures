#include "main.h"

int priority(char opr)
{
    /* passing operator and returning values according to their precedence */
    switch(opr)
    {
	case '+':
	    return 3;		//same value for + and - because both have same priority
	    break;
	case '-':
	    return 3;
	    break;
	case '*':
	    return 5;		//same value for * and / as they have same priority
	    break;
	case '/':
	    return 5;
	    break;
	case '(':		//since ( and ) are not considered returning 0 
	    return 1;
	    break;
	case ')':
	    return 1;
	    break;
	default:
	    return 0;
	    break;
    }

}

void push(Stack_t *stk, int data)
{
	++(stk -> top);
	stk -> stack[stk -> top] = data;
}

void pop(Stack_t *stk)
{
	if (stk -> top != -1)
		--(stk -> top);
}

int peek(Stack_t *stk)
{
	if (stk -> top != -1)
	{
		return stk -> stack[stk -> top];
	}
	return -1;
}

