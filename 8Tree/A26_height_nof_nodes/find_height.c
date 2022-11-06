#include "tree.h"

int find_height(Tree_t *root)
{
      /* if root returning NULL */
    if(root == NULL)
    {
        return 0;
    }
      
      /* declaring leftheight and traversing through left */
    int LeftHeight = find_height(root->left);
    
      /* declaring rightheight and traversing through right */
    int RightHeight = find_height(root->right);
    
    int height;
    
      /* assigning height which is higher among left and right */
    if(LeftHeight > RightHeight)
    {
        height = 1 + LeftHeight;
    }
    else
    {
        height = 1 + RightHeight;
    }

    return height;
}
