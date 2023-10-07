//bubble sort
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
    printf("Elements of array are:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size+1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nElements of array are:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    
   
}
printf("\n%d",arr[size-2]);
}