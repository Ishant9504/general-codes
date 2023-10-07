//! WAP to print highest common divisor of two numbers
#include <stdio.h>
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
        return b;
}
int HCF(int a, int b)
{
    int hcf = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
int main()
{
    int a, b;
    printf("enter a:");
    scanf("%d", &a);

    printf("enter b:");
    scanf("%d", &b);
    printf("HCF of %d and %d :%d", a, b, HCF(a, b));
}