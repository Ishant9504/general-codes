//Search for a number in the array and give its index
#include<stdio.h>
int search(int arr[],int b,int n){
    for(int i=0;i<n;i++){
        if(b==arr[i]){
            printf("Value found at index:%d\n",i);

        }
        else continue;
    }
}
int main(){
    int size,searchno;
    printf("Size of array:");
    scanf("%d",&size);
    printf("Enter number to search for:");
    scanf("%d",&searchno);
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
    search(arr,searchno,size);

}
