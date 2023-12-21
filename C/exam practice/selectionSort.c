// WAP to implement selection sort
#include<stdio.h>

void selectSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }

    printf("The sorted array is:");
    for(int i=0;i<size;i++){
        printf("%d ,",arr[i]);
    }
}

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=10-i;
    }

    selectSort(arr,10);
    return 0;
}