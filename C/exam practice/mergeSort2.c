#include<stdio.h>

void merge(int arr[],int left,int mid,int right){
    int i,j,k;
    
    int n1=mid-left+1;
    int n2=right-mid;

    int L[n1],R[n2];

    for(int i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[mid+j+1];
    }

    i=0,j=0,k=left;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k++]=L[i++];
        }
        else{
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

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ,",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={12,3,42,23,24,54,65};
    int size=sizeof(arr)/sizeof(int);

    printf("Unsorted array:");
    printArray(arr,size);

    mergeSort(arr,0,6);
    printf("Sorted array:");
    printArray(arr,size);

    return 0;
}