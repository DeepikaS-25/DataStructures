#include "tree.h"

extern int status;
/* Function to delete the node  */
Tree_t * delete_BST(Tree_t * root, int data)
{
    if(root == NULL)        /* condition to exit recursive loop */
    {
        return root;
    }
     
      /* if data less than root->data then searching on left side */
    if(data < root->data)
    {
        root->left = delete_BST(root->left, data);
    }
      /* if data greater than root->data then searching on right side */
    else if(data > root->data)
    {
        root->right = delete_BST(root->right, data);
    }
    else   /* if data found */
    {
        if(root->left == NULL && root->right == NULL)   //if node with no child
        {
            free(root);
            root = NULL;
            status = 1;
        }
        else if(root->left == NULL)                     //if node has only one child on the right
        {
            Tree_t *temp = root;
            root = root->right;
            free(temp);
            status = 1;
        }
        else if(root->right == NULL)                     //if node has only one child on the left
        {
            Tree_t *temp = root;
            root = root->left;
            free(temp);
            status = 1;
        }
        else                                            //if node has two children 
        {
            int min = findmin(root->right);
            root->data = min;
            root->right = delete_BST(root->right, min);
        }
        
    }
    return root;
}