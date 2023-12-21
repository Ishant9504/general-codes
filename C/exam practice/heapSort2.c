#include<stdio.h>

void swap(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void heapify(int arr[],int size,int i){
    //initialize indices for largest,left child and right child
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    //check if largest element is less than left child,update index of largest
    if(left<size && arr[left]>arr[largest]){
        largest=left;
    }

    //check if largest element is less than right child,update index of largest
    if(right<size && arr[right]>arr[largest]){
        largest=right;
    }

    //check if largest index is different from index of root
    if(largest!=i){
        //swap the largest element with the root element
        swap(&arr[largest],&arr[i]);
        //heapify the array recursively for root index =largest
        heapify(arr,size,largest);
    }
}

void heapSort(int arr[],int size){
    //reaarange the array into a heap
    for(int i=size/2-1;i>=0;i--){
        heapify(arr,size,i);
    }

    //extract largest element and keep it at the last
    for(int i=size-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    // Perform heap sort
    heapSort(arr, arr_size);

    printf("Sorted array is \n");
    printArray(arr, arr_size);

    return 0;
}