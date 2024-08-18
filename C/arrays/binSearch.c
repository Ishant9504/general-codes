#include<stdio.h>
int binSearch(int arr[],int target,int left,int right){
    while(left<=right){
    int mid=left+(right-left)/2;
    if(target==arr[mid]){
        return mid;
    }
    else if(target>arr[mid]){
        return binSearch(arr,target,mid+1,right);
    }
    else if( target<arr[mid]){
        return binSearch(arr,target,left,mid-1);
    }
    else{
        return mid+1;
    }}
    return left;
}

int main(){
    int arr[]={1,2,3,5,6,7,8};
    printf("%d",binSearch(arr,4,0,sizeof(arr)/sizeof(int)-1));

    return 0;

}