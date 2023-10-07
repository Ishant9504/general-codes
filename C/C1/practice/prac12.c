#include<stdio.h>
int main(){
   char a;
   printf("enter value of c");
   scanf("%c",&a);
   int d;
   d=(int)a;
   printf("%d  \n ",d);
   if(d<=122&&d>=97){
    printf("it is lower case");
   }else if(65<=d&& d<=90){
    printf("It is uppercase");
   }else if(d>=48&&d<=57){
    printf("it is number");
   }
    
    return 0;
}