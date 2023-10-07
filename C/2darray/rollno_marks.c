#include<stdio.h>
int main(){
   int num;
   printf("Enter number of students:");
   scanf("%d",&num);
   int stud[num][3];
   for(int i=0;i<num;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&stud[i][j]);
    }
   }
   for(int i=0;i<num;i++){
    for(int j=0;j<4;j++){
        printf("%d ",stud[i][j]);
    }
    printf("\n");
   }
}