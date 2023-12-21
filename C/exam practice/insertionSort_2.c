#include<stdio.h>

void insertSort(int arr[],int size){
    int i,key,j;
    for(i=1;i<size;i++){
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}