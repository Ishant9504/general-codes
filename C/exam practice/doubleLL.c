#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *prev;
    struct node *next;
} node;

node* createnew(int data){
    node * ptr=(node*)malloc(sizeof(node));
    if(ptr=NULL){
        printf("Memory Allocation failed");
        exit(1);
    }
    ptr->data=data;
    ptr->next=NULL;
    ptr->prev=NULL;
    return ptr;
}

node * insertmid(node *head,int key,int index){
    node* ptr=createnew(key);
    node * p=head;
    int i=0;
    while(p->next!=NULL&& i<index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    ptr->prev=p;
    p->next=ptr;
    return head;
}