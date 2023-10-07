//Factorial of a number n
#include<stdio.h>
int main(){
    int n;
    printf("enter num:");
    scanf("%d", &n);
    int fact = 1;
    
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of number is:%d",fact);
    return 0;
}