#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
      /* creating new node */
    Tree_t *new = malloc(sizeof(Tree_t));
    /* error checking */
    if(new == NULL)
    {
        return FAILURE;
    }
    
      /* updating data and left and right of new node */
    new->data = data;
    new->left = NULL;
    new->right = NULL;

      /* if tree is empty then making new as root */
    if(*root == NULL)
    {
        *root = new;
        return SUCCESS;
    }
      
      /* declaring temp node and parent to traverse */
    Tree_t *temp = *root;
    Tree_t *parent;
    int flag = 0;

    while(temp != NULL)
    {
        parent = temp;
        if(data < temp->data)
        {                           // if data less than temp->data then making flag as 1 to insert at the left
            temp = temp->left;
            flag = 1;

        }
        else if(data > temp->data)
        {                           // if data greater than temp->data then making flag as 0 to insert at the right
            temp = temp->right;
            flag = 0;
        }
        else
        {                           // if duplicate is found then returning duplicate found
            return DUPLICATE;
        }
    }
    if(flag == 1)
    {
        parent->left = new;         // if flag is 1 then appending data at left
    }
    else
    {
        parent->right = new;         // if flag is 0 then appending data at right
    }
    return SUCCESS;
}