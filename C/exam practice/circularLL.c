#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node;

node * createnode(int data){
    node* ptr=(node*)malloc(sizeof(node));
    if(ptr==NULL){
        printf("Memory Allocation Failed\n");
        return NULL;
    }

    ptr->data=data;
    ptr->next=NULL;
    
    return ptr;
}

node * insertionEnd(node * head,int data){
    node* ptr;
    node *new=head;
    ptr=createnode(data);
    while(new->next!=head){
        new=new->next;
    }
    new->next=ptr;
    ptr->next=head;
    
    return head;
}

node * insertionBeg(node * head,int data){
    node* ptr;
    node *new=head;
    ptr=createnode(data);
 
    while(new->next!=head){
        new=new->next;
    }
    new->next=ptr;
    ptr->next=head;
    head=ptr;

    return head;
}

void display(node* head){
    node* ptr=head;
    while(ptr->next!=head){
        printf("Element is:%d ,",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");

}

int main(){
    node* head=createnode(12);
    head=insertionEnd(head,14);

    display(head);

    return 0;
}