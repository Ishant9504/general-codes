//enter a number and give its divisors aswell as factorial
#include<stdio.h>
int fact(int num){
    return num*fact(num-1);}

int main(){
    int num;
    int div;
    printf("enter number whose divisor is needed:");
    scanf("%d",&num);
    printf("divisors of %d are:",num);
        for(int i=1;i<=num;i++){
            if(num%i==0){
                printf("%d,",i);
            }

        }printf("\n");
    fact(num);
    return 0;
}