//WAP to create a stack
#include<stdio.h>
#include<stdlib.h>
int top=-1;
int arr[100];
int push(){
    int a;
    if(top>=100){
        printf("Cant add more elements to stack");
    }
    scanf("%d",&a);
    top++;
    arr[top]=a;
}
int main(){
    int num;
    printf("Enter no of elements in stack:");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        push();
    }
    printf("stack is:");
    for(int i=num;i>=0;i--){
        printf("%d, ",arr[i]);
}
}