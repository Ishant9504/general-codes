#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct queue
{
    node *front;
    node *rear;
} queue;

node *createnewNode(int data)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));

    if (ptr == NULL)
    {
        printf("Memory Allocation Failed");
        return NULL;
    }
    ptr->data = data;

    return ptr;
}

queue * initialise()
{
    queue * q=(queue*)malloc(sizeof(queue));
    q->front=NULL;
    q->rear=NULL;

    return q;
}

queue * insertion(queue *q,int data){
    node* ptr=createnewNode(data);
    if(q->front==NULL){
        q->front=ptr;
        q->rear=ptr;
    }
    else{
        q->rear->next=ptr;
        q->rear=ptr;
    }

    return q;
}

queue * deletion(queue * q){
    if(q->front!=NULL){
        if(q->front==q->rear){
            q->front=q->rear=NULL;
        }
        else{
            q->front=q->front->next;
        }
    }
    else{
        printf("Cannot delete element queue empty");
    }

    return q;
}