//Multiply odd indices value by 2
//Increase even indices value by 10
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
    for(int i=0;i<size;i++){
        if(i%2==0){
            arr[i]=arr[i]+10;
        }
        else{
            arr[i]=arr[i]*2;
        }
    }
    printf("The elements of updated array are:");//
    for(int j=0;j<size;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}