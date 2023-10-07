#include<stdio.h>
int main(){
    int size;
    printf("Size of array:");
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
    int max=arr[0];
    for(int j=0;j<size;j++){
        if(max<arr[j]){
            max=arr[j];
        }
    }
    printf("The max element in array :%d",max);
}