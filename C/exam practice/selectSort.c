#include<stdio.h>

void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
    printf("Sorted array : ");
    for(int i=0;i<size;i++){
        if(i==size-1){
            printf("%d",arr[i]);
        }
        else{
            printf("%d ,",arr[i]);
        }
    }
}

int main(){
    int arr[20];

    for(int i=0;i<20;i++){
        arr[i]=20-i;
    }

    selectionSort(arr,20);

    return 0;
}