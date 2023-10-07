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
    printf("Triplets whose sum add upto %d",sum);
    printf("\n");
    for(int i=1;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(ini+arr[j]+arr[k]==sum){
                    count+=1;
                    printf("%d,%d,%d\t",ini,arr[j],arr[k]);
            }}
        }
        ini=arr[i];
        
    }
    printf("\n");
    printf("The total number of triplet whose sum is %d:%d",sum,count);
    return 0;
}