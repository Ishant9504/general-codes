#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *createnew()
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->next = NULL;
    if (ptr == NULL)
    {
        printf("Memory allocation failed");
    }
    return ptr;
}

node *insertbeg(node *head, int data)
{
    node *ptr = createnew();
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return ptr;
}

node *insertmid(node *head, int data, int i)
{
    node *ptr = createnew();
    node *p = head;
    while (i != 0)
    {
        p = p->next;
        i--;
    }
    ptr->next = p->next;
    p->next = ptr;
    return p;
}

node *insertend(node *head, int data)
{
    node *ptr = createnew();
    node *p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=NULL;
    return head;
}

node * deletebeg(node *head){
    node * ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

node * deletemid(node * head,int index){
    node* ptr=head;
    node * q=head->next;
    int i=0;
    while(i<index-1){
        q=q->next;
        ptr=ptr->next;
        i++;
    }
    ptr->next=q->next;
    free(q);
    return head;
}

void traverse(node * head){
    while(head=!NULL){
        printf("Value of node is:%d",head->data);
        head=head->next;
    }
}