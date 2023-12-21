#include<stdio.h>

void swap(int *a,int * b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int selectionSort(int arr[],int size){
    int minIndex;
    for(int i=0;i<size-1;i++){
        minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(&arr[minIndex],&arr[i]);
    }
    
}

int binary(int arr[],int left,int right,int key){
    while(left<=right){
        int mid=(left+right)/2;
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            left=mid+1;
        }
        if(key<arr[mid]){
            right=mid-1;
        }
        
    }
    return -1;
}

int main(){
    int arr[]={112,4,2,23,243,442,423,123};
    int size=sizeof(arr)/sizeof(int);
    
    selectionSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ,",arr[i]);
    }
    printf("\n");

    printf("Element found at index:%d",binary(arr,0,size,442));
}