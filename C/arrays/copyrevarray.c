#include<stdio.h>
int main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d of array:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are:");
    for(int j=0;j<size;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    int rev[size];
    for(int i=0;i<size;i++){
        rev[i]=arr[size-i-1];
    }
    printf("The elements of array are:");
    for(int j=0;j<size;j++){
        printf("%d ",rev[j]);
    }
}