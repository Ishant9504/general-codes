//user enter number until multiple of 7 using loop
#include<stdio.h>
int main(){
    int a;
   for(int i=1;i>0;) {
        printf("enter value:");
        scanf("%d",&a);
    if(a%7==0){
        break;
    }
    } 
        
    printf("it ended");
}