//?WAP to print factorial of a number
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number whose factorial wanted:");
    scanf("%d", &num);
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of number %d is:%d", num, fact);
}