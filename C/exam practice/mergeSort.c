#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int left,int mid,int right){
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;

    int L[n1],R[n2];

    for(int i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }

    i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k++]=L[i++];
        }
        if(R[j]<=L[i]){
            arr[k++]=R[j++];
        }
    }
    while(i<n1){
        arr[k++]=L[i++];
    }
    while(j<n2){
        arr[k++]=R[j++];
    }

}

void mergeSort(int arr[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
int main() {
    int arr[] = {12, 11, 11, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    // Perform merge sort
    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    return 0;
}

