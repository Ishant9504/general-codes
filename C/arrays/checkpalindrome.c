//check if given array is pallindrome
#include<stdio.h>
int main(){
     int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d of array:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are:");
    for(int j=0;j<size;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    int rev[size];
    for(int i=0;i<size;i++){
        rev[i]=arr[size-i-1];
    }
    printf("The elements of array are:");
    for(int j=0;j<size;j++){
        printf("%d ",rev[j]);
    }
    int isPallin=0;
    for(int i=0;i<size;i++){
        if(rev[i]==arr[i]){
            isPallin=1;
        }
        else{
            isPallin=0;
        }
    }
    if(isPallin==1){
        printf("\nIt is a pallindrome");
    }
    else{
        printf("\nIt is not a pallindrome");
    }
}