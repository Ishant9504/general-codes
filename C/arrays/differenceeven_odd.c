#include<stdio.h>
int main(){
    int size,sumeven=0,sumodd=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d of array:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Elements of array are:");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(int i=0;i<size;i++){
        if(i%2==0){
            sumeven+=arr[i];
        }
        else{
            sumodd+=arr[i];
        }
    }
    printf("Sum of even indices element:%d\n",sumeven);
    printf("Sum of odd indices element:%d\n",sumodd);
    printf("Difference between them:%d",sumeven-sumodd);

}