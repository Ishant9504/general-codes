// WAP to implement a stack using linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

struct stack{
    struct node *head;
};

struct node* creation(int data){
    node* ptr=(node*)malloc(sizeof(node));
    if(ptr==NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    ptr->data=data;
    ptr->next=NULL;
    return ptr;
}
node *push(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

node *pop(node *head)
{
    // node* ptr=(node*)malloc(sizeof(node));

    node *p = head;
    printf("%d\t", p->data);
    head = head->next;
    free(p);
    return head;
}
void traversal(node *head)
{
    while (head != NULL)
    {
        pprintf("%d\t", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    node *head = (struct node *)malloc(sizeof(node));
    node *sec = (struct node *)malloc(sizeof(node));
    node *third = (struct node *)malloc(sizeof(node));

    head->data = 10;
    head->next = sec;
    sec->data = 10;
    sec->next = third;
    third->data = 10;
    third->next = NULL;
    head = push(head, 5);
    traversal(head);
    head = pop(head);
    head = pop(head);
    traversal(head);
}
