#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} node;

node *createNew(int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("Memory Allocation failed\n");
        return NULL;
    }
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}

void insert(node *root, int key)
{
    node *current = root;
    node *previous = NULL;
    while (current != NULL)
    {
        previous = current;
        if (previous->data = key)
        {
            printf("Invalid element\n");
            return;
        }
        else if (previous->data > key)
        {
            current = previous->left;
        }
        else
        {
            current = previous->right;
        }
    }
    node *ptr = createNew(key);
    if (previous->data > key)
    {
        previous->left = ptr;
    }
    else
    {
        previous->right = ptr;
    }
}

void preOrder(node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d", root->data);
        inOrder(root->right);
    }
}

void postOrder(node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d", root->data);
    }
}