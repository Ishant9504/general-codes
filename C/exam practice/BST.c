#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} node;

node* createnew(int data){
    node * ptr=(node*)malloc(sizeof(node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}

void insert(node* root,int key){
    node* prev=NULL;
    node *current=root;
    while(current!=NULL){
        prev=current;
        if(prev->data==key){
            printf("Invalid insertion as no duplication is allowed in BST\n");
            exit(1);
        }
        else if(prev->data>key){
            current=prev->left;
        }
        else{
            current=prev->right;
        }
    }
    node* ptr=createnew(key);
    if(prev->data>key){
        prev->left=ptr;
    }
    else if(prev->data<key){
        prev->right=key;
    }
}