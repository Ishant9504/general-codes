//To show sum of two integers using input via user
#include<stdio.h>

int main(){
    int a,b;
    printf("a is: ");
    scanf("%d", &a);
    printf("b is: ");
    scanf("%d", &b);
   /* instead of using a third variable as done below just use a+b
    int sum= a + b;*/
    printf("sum is %d",a+b);
    return 0;
}