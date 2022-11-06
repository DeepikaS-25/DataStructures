#include "tree.h"

int findmin(Tree_t * root)
{
      /* checking if tree is empty */
    if(root == NULL)
    {
        return FAILURE;
    }
      /* declaring temp pointer to traverse through tree */
    Tree_t *temp = root;

      /* traversing all through the left to find min */
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
        /* returning left most element that is minimum */
    return temp->data;
}
