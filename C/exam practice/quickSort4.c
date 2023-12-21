#include<stdio.h>

void swap(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int arr[],int low,int high){
    int i=low+1,j=high;
    int pivot=arr[low];
    while(i<=j){
        while(i<=j && arr[i]<=pivot){
            i++;
        }
        while(i<=j && arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[low],&arr[j]);
    return j;
}

void quickSort(int arr[],int low,int high){
    int j;
    if(low<high){
        j=partition(arr,low,high);
        quickSort(arr,low,j);
        quickSort(arr,j+1,high);
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ,",arr[i]);
    }
    printf("\n");
}


int main(){
    int arr[15];

    for(int i=0;i<15;i++){
        arr[i]=15-i;
    }

    printf("unsorted array:");
    printArray(arr,15);

    quickSort(arr,0,14);

    printf("sorted array: ");
    printArray(arr,15);

    return 0;
}