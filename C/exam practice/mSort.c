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
    for(int i=0;i<n2;i++){
        R[i]=arr[mid+1+i];
    }
}