//! WAP to print factorial of n number
#include <stdio.h>
int main()
{
    int strt, end;
    printf("enter starting:");
    scanf("%d", &strt);
    printf("enter ending:");
    scanf("%d", &end);

        for (int i = strt; i <= end; i++)
    {
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        printf("Factorial of %d is:%d\n", i, fact);
    }
    return 0;
}