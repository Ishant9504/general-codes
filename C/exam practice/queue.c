#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct Queue
{
    node *front;
    node *rear;
} queue;

node *createNewnode(int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
        return NULL;
    }
    ptr->data = data;
    ptr->next = NULL;

    return ptr;
}

queue *initializeQueue()
{
    queue *q = (queue *)malloc(sizeof(queue));
    if (q == NULL)
    {
        printf("Memory Allocation Failed\n");
        return NULL;
    }
    q->front = NULL;
    q->rear = NULL;
    return q;
}

queue *enqueue(queue *q, int data)
{
    node *ptr = createNewnode(data);
    if (q->front == NULL)
    {
        q->front = ptr;
        q->rear = ptr;
    }
    else
    {
        q->rear->next = ptr;
        q->rear = ptr;
    }
    return q;
}

queue *dequeue(queue *q)
{
    node *ptr = q->front;
    if (q->front == NULL)
    {
        printf("Queue empty cannot dequeue\n");
        return NULL;
    }

    printf("Element dequeued from the queue:%d\n", ptr->data);
    q->front = q->front->next;
    if (q->front == NULL)
    {
        q->rear = NULL;
        free(ptr);
    }
    return q;
}

void traversal(queue *q)
{
    node *ptr = q->front;
    printf("Elements of queue are:");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    // Example usage
    queue *myQueue = initializeQueue();

    myQueue = enqueue(myQueue, 10);
    myQueue = enqueue(myQueue, 20);
    myQueue = enqueue(myQueue, 30);

    traversal(myQueue);

    myQueue = dequeue(myQueue);
    myQueue = dequeue(myQueue);

    traversal(myQueue);

    return 0;
}
