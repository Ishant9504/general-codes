#include<stdio.h>
#include<stdlib.h>
int main(){
    // int a=23;
    // int* ptr=&a;
    // printf("%d\n",ptr);
    // ptr=ptr+1;
    // printf("%d",ptr);
    int num;
    printf("Enter number of elements:");
    scanf("%d",&num);
    int* ptr;
    ptr=calloc(num,sizeof(int));
   if(ptr==NULL){
    printf("Memory allocation failed\n");
    exit(0);
   }
   else{
    printf("Memory allocated succesfully\n");
   }
   for(int i=0;i<num;i++){
    printf("%d, ",ptr+i);
   }
   printf("\n");
   for(int j=0;j<num;j++){
    printf("%d, ",*(ptr+j));
    printf("%d, ",ptr+j);
    }
  free(ptr);
  printf("%d",ptr);


}