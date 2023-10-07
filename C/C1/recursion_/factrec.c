//?WAP using recursion to print factorial of a number
#include <stdio.h>
int facto(int a)
{
    int fact = 1;
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return fact = a * facto(a - 1);
    }
}
int main()
{
    int a;
    printf("enter value of a:");
    scanf("%d", &a);
    printf("factorial of %d is %d ", a, facto(a));
    return 0;
}