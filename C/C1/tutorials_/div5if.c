// WAP to check if a number is divisble by another number
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter value of a");
    scanf("%d", &a);
    printf("enter value of b");
    scanf("%d", &b);
    if (a % b == 0)
    {
        printf("%d is divisble by %d", a, b);
    }
    else
    {
        printf("not divisble");
    }
    return 0;
}