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

        preorder(root->left);
        preorder(root->right);
        printf("%d ", root->data);
    }
}

// Function for inOrder Traversal in our tree
void inOrder(node *root)
{
    if (root != NULL)
    {

        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// Function for postorder Traversal in our tree
void postorder(node *root)
{
    if (root != NULL)
    {

        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Driver code
int main()
{
    // Creating our binary Tree
    node *root = createnode(4);
    node *p1 = createnode(2);
    node *p2 = createnode(6);
    node *p11 = createnode(1);
    node *p12 = createnode(3);
    node *p21 = createnode(5);

    // Linking the node together
    /*
             4
           /   \
          2     6
         / \   /
        1   3 5
   */
    root->left = p1;
    root->right = p2;
    p1->left = p11;
    p1->right = p12;
    p2->left = p21;
    p2->right = NULL;

    // Preorder traversal in our binary tree
    printf("Post Order Traversal:");
    preorder(root);

    // inOrder traversal in our binary tree
    printf("\nInorder traversal:");
    inOrder(root);

    // postorder traversal in our binary tree
    printf("\nPost order Traversal:");
    postorder(root);
}