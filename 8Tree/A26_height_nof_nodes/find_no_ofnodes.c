#include "tree.h"

int total_nodes(Tree_t *root)
{
    static int count;
    
    /* If the root is not equal to NULL */
	if (root != NULL)
	{
		/* Calling the function recursively while traversing */
		total_nodes(root -> left);
        count++;                        //incrementing count
		total_nodes(root -> right);
	}
    return count;
}
