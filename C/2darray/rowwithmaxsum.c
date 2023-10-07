#include<stdio.h>
#include<limits.h>
int main(){
   int row,col;
   printf("Enter number of row:");
   scanf("%d",&row);
   printf("Enter number of column:");
   scanf("%d",&col);
   int arr[row][col];
    int sum=INT_MIN;
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("Enter element at %d,%d for matrix 1:",i,j);
        scanf("%d",&arr[i][j]);
    
    }
   }
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){

        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
   
   for(int i=0;i<row;i++){
    int sumrow=0;
    for(int j=0;j<col;j++){
        sumrow+=arr[i][j];

    }
    if(sumrow>sum){
        sum=sumrow;
    }
   }

printf("%d",sum);
}
