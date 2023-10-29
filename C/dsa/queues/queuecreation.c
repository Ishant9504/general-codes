//WAP for queue implementation using data structure
#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int rear;
    int front;
    int *arr;
};

struct queue enqueue(struct queue q,int data)
{
    ++q.rear;
    q.arr[q.rear]=data;
    return q;
}
int dequeue(struct queue q){
    ++q.front;
    return q.front;
}

int main()
{
 struct queue q;

 int size;

 printf("Enter size of queue:");
 scanf("%d",&size);

 q.size=size;
 q.rear=q.front=-1;

 q.arr=(int*)malloc(q.size*sizeof(int));

 q=enqueue(q,12);
 q=enqueue(q,13);
 
 q.front=dequeue(q);
for(int i=q.front;i<=q.rear;i++){
    printf("Value at %d:%d\n",i,q.arr[i]);
}
 
}