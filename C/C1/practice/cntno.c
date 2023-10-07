#include<stdio.h>
int main(){
    int terms=10;
    int i=3;
    int a=0,b=1;
    int c=a+b;
    printf("terms of series are:0,1,");
    for(i;i<terms;i++){
        printf("%d,",c);
        a=b;
        b=c;
        c=a+b;
    }
}