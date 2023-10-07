//Print an array in reverse
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
    for (int i = size; i>0 ; i--)
    {
        printf("%d,",arr[i-1]);
    }
    return 0;
}