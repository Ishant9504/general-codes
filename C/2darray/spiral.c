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
        for(int j=0;j<num;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}