#include<stdio.h>


int main(){
    int terms,a=0,b=1;
    int c=a+b;
    printf("enter terms of series:");
    scanf("%d",&terms);
    printf("0,1,");
    for(int i=3;i<=terms;i++){
        printf("%d,",c);
        a=b;
        b=c;
        c=a+b;
        
    }
}