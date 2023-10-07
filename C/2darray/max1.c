#include<stdio.h>
int main(){
    int r,c,count1=0,idx=-1;
    printf("Enter no of rows:");
    scanf("%d",&r);
    printf("Enter no of columns:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element at %d,%d:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
           if(arr[i][j]==1){
            count++;
           }
        }
        if(count1<count){
            count1=count;
            idx=i;
        }
    }
    
    printf("Row with maximum 1 is:%d",idx+1);
    printf("No of 1's in this row is:%d\n",count1);
}