//count number of elements in array greater than some given number x
#include<stdio.h>
int main(){
    int size,count=0,x;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter number which should be checked with:");
    scanf("%d",&x);
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
    for(int j=0;j<size;j++){
        if(arr[j]>x){
            count+=1;
        }
    }
    printf("No of elements greater than %d : %d",x,count);
}