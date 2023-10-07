//No of pairs whose sum equals x
#include<stdio.h>
int main(){
    int size;
    int sum,count=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter sum:");
    scanf("%d",&sum);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d of array:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Elements of array are:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int ini=arr[0];
    printf("Pairs whose sum add upto %d",sum);
    printf("\n");
    for(int i=1;i<size;i++){
        for(int j=i;j<size;j++){
            if(ini+arr[j]==sum){
                count+=1;
                printf("%d,%d\t",ini,arr[j]);
            }
        }
        ini=arr[i];
        
    }
    printf("\n");
    printf("The total number of pair whose sum is %d:%d",sum,count);
    return 0;
}