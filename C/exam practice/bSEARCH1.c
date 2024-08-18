#include<stdio.h>
 
int bsearch(int arr[],int key,int left,int right){
    while(left<=right)
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

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=i;
    }

    printf("\n%d ,",bsearch(arr,2,0,9));

    return 0;
}