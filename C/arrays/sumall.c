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
    printf("The elements or array are:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int sum=1;
    for(int i=0;i<size;i++){
        sum*=arr[i];
    }
    printf("The sum of elements of array: %d",sum);
    return 0;
}