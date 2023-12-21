#include<stdio.h>

void swap(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1,j=high;
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

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i == size - 1) {
            printf("%d", arr[i]);
        } else {
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[20];

    for (int i = 0; i < 20; i++) {
        arr[i] = 20 - i;
    }

    printf("Unsorted array is: ");
    printArray(arr, 20);

    quickSort(arr, 0, 19);

    printf("Sorted array is: ");
    printArray(arr, 20);

    return 0;
}
