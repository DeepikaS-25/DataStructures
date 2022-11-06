#include "tree.h"

/* Iteratively */
int search_BST(Tree_t * root, int data)
{
     /* checking tree empty */
    if(root == NULL)
    {
        return FAILURE;
    }
      
      /* declaring temp pointer to traverse */
    Tree_t *temp = root;
      
      /* traversing till NULL */
    while(temp != NULL)
    {
          /* if given data lesser than temp data then moving leftwards */
        if(data < temp->data)
        {
            temp = temp->left;
        }
          /* if given data greater than temp data then moving rightwards */
        else if(data > temp->data)
        {
            temp = temp->right;
        }
          /* if data found returning success */
        else
        {
            return SUCCESS;
        }
    }
    
      /* returning element not found */
    return NOELEMENT;
}