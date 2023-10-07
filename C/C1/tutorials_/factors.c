//? wap to get factors of number
#include <stdio.h>
int main()
{
    int a, count = 0, fac = 1;
    printf("enter value of a:");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
            printf("factor of %d:%d\n", a, i);
        }
        fac = fac * i;
    }
    if (count <= 2)
    {
        printf("number is a prime\n");
    }
    else
    {
        printf("number isn't a prime\n");
    }
    printf("Factorial of number is :%d", fac);
    return 0;
}