#include<stdio.h>
//to check average of 3 numbers
int main(){
    int a,b,c;
    printf("enter a :");
    scanf("%d", &a);
    printf("enter b :");
    scanf("%d", &b);
    printf("enter c :");
    scanf("%d", &c);
    float sum=(float) a+b+c;
    printf("%f",sum/3);
    return 0;

}