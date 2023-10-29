#include <stdio.h>
#include <stdlib.h>

//Defined a structure queue
typedef struct queue
{
    int size;
    int rear, front;
    int *arr;
} queue;

//Function for insertion into queue
queue *enqueue(queue *q, int data)
{
    if (q->rear == q->size - 1)
    {
        printf("Queue Overflow.Cannot add more elements");
        exit(1);
    }
    else
    {
        q->arr[++q->rear] = data;
    }
    return q;
}

//Function for deletion from queue
queue *dequeue(queue *q)
{
    if (q->rear == q->front)
    {
        printf("Queue is empty cannot dequeue");
        exit(1);
    }
    else
    {
        q->front++;
    }
    return q;
}

//Function for traversal
void traverse(queue * q){
    for(int i=q->front+1;i<=q->rear;i++){
        printf("%d\n",q->arr[i]);
    }
}
//Driver code
int main()
{
    queue *q=(queue*)malloc(sizeof(queue));
    q->size = 10;
    q->rear = q->front = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    q = enqueue(q, 12);
    q = enqueue(q, 13);

    // q = dequeue(q);
    // q = dequeue(q);

    traverse(q);
    // for (int i = q->front + 1; i <= q->rear; i++)
    // {
    //     printf("%d\n", q->arr[i]);
    // }
}