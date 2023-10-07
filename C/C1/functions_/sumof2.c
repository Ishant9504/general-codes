//?WAP to print sum of two number via function calling
#include <stdio.h>
int SUM(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int num1, num2;
    printf("enter one number:");
    scanf("%d", &num1);
    printf("enter second number:");
    scanf("%d", &num2);
    printf("The sum of both numbers is:%d", SUM(num1, num2));
    return 0;
}