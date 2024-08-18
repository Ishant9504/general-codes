#include<stdio.h>

void swap(int * num1,int * num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}

void bubble(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void selection(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(&arr[minIndex],&arr[i]);
    }
}

void insertion(int arr[],int size){
    int j=0,key=0;
    for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            swap(&arr[j],&arr[j+1]);
            j--;
        }
        arr[j+1]=key;
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ,",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={1,34,2,3,53,123,24};
    int size=sizeof(arr)/sizeof(int);
    printf("before sorting:");
    printArray(arr,size);

    printf("after sorting :");
    insertion(arr,size);
    printArray(arr,size);

    return 0;
    
}