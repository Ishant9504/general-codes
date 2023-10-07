#include<stdio.h>


int main(){
    int num;
    printf("Enter size of array:");
    scanf("%d",&num);
    int arr[num][num];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   
    for(int i=0;i<num;i++){
        for(int j=i;j<num;j++){
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
    }
     for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<num;i++){
    int j=0,k=num-1;
    while(j<=k){
    int temp=arr[i][j];
    arr[i][j]=arr[i][k];
    arr[i][k]=temp;
    j++,k--;
    }}
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}