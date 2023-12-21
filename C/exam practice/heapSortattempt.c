#include<stdio.h>

void swap(int * a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[],int size,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<size && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<size && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(&arr[largest],&arr[i]);
        heapify(arr,size,largest);
    }
}

void heapSort(int arr[],int size){
    for(int i=size/2-1;i>=0;i--){
        heapify(arr,size,i);
    }
    for(int i=size-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={12,2,4,45,75,71};
    int size=sizeof(arr)/sizeof(int);

    printf("Unsorted array is:");
    printArray(arr,size);

    heapSort(arr,size);
    printf("Sorted array using Heap Sort is:");
    printArray(arr,size);

    return 0;
}