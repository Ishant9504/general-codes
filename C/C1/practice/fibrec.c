#include<stdio.h>
int fib(int terms){
    int sum=0;
    int nterm=fib(terms)+fib(terms-1);
    return nterm;
}
int main(){
    int terms;
    printf("enter terms:");
    scanf("%d",&terms);
    fib(terms);
}