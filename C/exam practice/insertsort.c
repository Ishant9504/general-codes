#include<stdio.h>

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        if(i==size-1){
            printf("%d",arr[i]);
        }
        else{
            printf("%d ,",arr[i]);
            }
    }
    return;
}
void insertsort(int arr[],int size){
    int i,j,key;
    for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    printf("\nThe sorted array is:");
    printArray(arr,size);

    return;
}

int main(){
    int arr[20];
    for(int i=0;i<20;i++){
        arr[i]=20-i;
    }

    printf("Unsorted array is: ");
    printArray(arr,20);

    insertsort(arr,20);

    return 0;
}