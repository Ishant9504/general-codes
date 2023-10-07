//factorial of a number n using recursions
#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("enter number whose factorial is needed:");
    scanf("%d",&n);
    printf("factorial of number %d is :%d",n,fact(n));
    return 0;

}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factnm1=fact(n-1);
    int fact=factnm1*n;
    

}