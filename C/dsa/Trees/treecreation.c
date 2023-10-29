// WAP to implement a tree structure using structures
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *createnode(int data)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}
// void traversal(node* root){
//     while(root->left!=NULL&&root->right!=NULL){
//         printf("%d",root->data);
//         root=root->left;
//         root=root->right;
//     }

int main()
{
    // node *root = (node *)malloc(sizeof(node));
    // node *nodeleft = (node *)malloc(sizeof(node));
    // node *noderight = (node *)malloc(sizeof(node));

    // root->data = 1;
    // root->right = noderight;
    // root->left = nodeleft;

    // nodeleft->data = 2;
    // nodeleft->left = NULL;
    // nodeleft->right = NULL;

    // noderight->data = 3;
    // noderight->left = NULL;
    // noderight->right = NULL;

    // while (root != NULL)
    // {
    //     printf("%d\n", root->data);
    //     root = root->left;
    // }

    node* root=createnode(10);
}