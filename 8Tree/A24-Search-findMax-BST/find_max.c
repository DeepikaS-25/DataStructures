#include "tree.h"

int findmax(Tree_t * root)
{
      /* checking if tree is empty */
    if(root == NULL)
    {
        return FAILURE;
    }
      /* declaring temp pointer to traverse through tree */
    Tree_t *temp = root;

      /* traversing all through the right to find max */
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
        /* returning right most element that is maximum */
    return temp->data;
}
