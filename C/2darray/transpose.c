#include<stdio.h>
int main(){
    int r,c;
    printf("Enter rows and columns:");
    scanf("%d%d",&r,&c);
    int arr1[r][c],arr2[c][r];
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element at %d,%d:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Matrix before transpose:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            arr2[i][j]=arr1[j][i];
        }
    }
    printf("Matrix after transpose:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

}
