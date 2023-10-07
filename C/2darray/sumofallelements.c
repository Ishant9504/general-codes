#include<stdio.h>
#include<limits.h>
int main(){
   int row,col;
   printf("Enter number of row:");
   scanf("%d",&row);
   printf("Enter number of column:");
   scanf("%d",&col);
   int m1[row][col],sum=0,max=INT_MIN;
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("Enter element at %d,%d for matrix 1:",i,j);
        scanf("%d",&m1[i][j]);
        sum+=m1[i][j];
    }
   }
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){

        printf("%d ",m1[i][j]);
    }
    printf("\n");
   }
   printf("Sum of elements of matrix is:%d",sum);
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if (max<m1[i][j])
        {
            max=m1[i][j];
        }
        
    }
    
}
printf("Maximum element in array is:%d",max);}