#include<stdio.h>
int main(){
   int num;
   printf("Enter number of students:");
   scanf("%d",&num);
   int stud[num][num];
   for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
        stud[i][j]=10;
    }
   }
   for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
        printf("%d ",stud[i][j]);
    }
    printf("\n");
   }
}