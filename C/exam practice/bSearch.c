#include<stdio.h>

void swap(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int bSearch(int arr[],int key,int left,int right){
    
    while (left<=right)
    {
    int mid=(left+right)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        right=mid-1;
    }
    else{
        left=mid+1;
    }
    }
    return -1;
}

void bubble(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[]={21,34,335,12,34,1,2323};
    int size=sizeof(arr)/sizeof(int);
    bubble(arr,size);

    for(int i=0;i<size;i++){
        printf("%d ,",arr[i]);
    }

    printf("\n element found at:%d",bSearch(arr,1,0,size-1));

    return 0;

}