#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int size;
    int rear,front;
    int * arr;
}queue;

queue * enqueue(queue * q,int data){
    if(q->rear==q->size-1){
        printf("Queue Overflow.Cannot add more elements");
        exit(1) ;
    }
    else{
        q->arr[++q->rear]=data;
    }
    return q;
}
 int main(){
    queue * q;
    q->size=10;
    q->rear=q->front=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));

    q=enqueue(q,12);
    q=enqueue(q,13);
    for(int i=q->front+1;i<=q->rear;i++){
        printf("%d\n",q->arr[i]);
    }
 }