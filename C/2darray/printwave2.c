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
    printf("Matrix in wave:");
    for(int j=0;j<num;j++){
        if(j%2==0){
            for(int i=0;i<num;i++){
                printf("%d ",arr[i][j]);
            }
        }
        else if(j%2!=0){
            for(int i=num-1;i>=0;i--){
                printf("%d ",arr[i][j]);
            }
        }
    }
    return 0;
}
