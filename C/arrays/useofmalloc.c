#include<stdio.h>
#include<stdlib.h>
int main(){
    int num=5;
    int *arr=(int *)malloc(num * sizeof(int));
    if(arr==NULL){
        printf("falied");
        exit(1);
    }
    for(int i=0;i<num;i++){
        scanf("%d",arr+i);
    }
    for(int i=0;i<num;i++){
        printf("%d",*(arr+i));
    }
    free(arr);
    return 0;
}