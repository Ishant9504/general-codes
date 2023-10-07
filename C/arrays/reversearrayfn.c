//WAP to reverse array using a function
#include<stdio.h>
void revARR(int arr[],int a,int b){
    for(int i=a,j=b;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int size;
    printf("Size of array:");
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
    revARR(arr,0,size-1);
     printf("The elements of array are:");
    for(int j=0;j<size;j++){
        printf("%d ",arr[j]);
    }

}