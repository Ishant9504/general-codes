// WAP for preorder traversal in trees
#include <stdio.h>
#include <stdlib.h>

// Creating a structure node to store data in our tree
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

// Function to create a new node for the user
node *createnode(int data)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

// Function for preOrder Traversal in our tree
void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Driver code
int main()
{
    // Creating our binary Tree
    node *root = createnode(1);
    node *p1 = createnode(2);
    node *p2 = createnode(3);
    node *p11 = createnode(4);
    node *p12 = createnode(5);
    node *p21 = createnode(6);

    // Linking the node together
    /*
             1
           /   \
          2     3
         / \   /
        4   5 6
   */
    root->left = p1;
    root->right = p2;
    p1->left = p11;
    p1->right = p12;
    p2->left = p21;
    p2->right = NULL;

    // Preorder traversal in our binary tree
    preorder(root);
}