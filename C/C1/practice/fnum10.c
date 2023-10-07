//check wheter number is 2 digit or not
#include<stdio.h>

int main(){
    int a;
    printf("enter value:");
    scanf("%d", &a);
    printf("%d",a>9 && a<100);
    return 0;
}