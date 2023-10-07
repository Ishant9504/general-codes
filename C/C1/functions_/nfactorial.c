//?WAP to print factorial of n numbers using a function
#include <stdio.h>
int fact(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int a;
    printf("enter till where factorial is needed:");
    scanf("%d", &a);
    printf("The factorials till %d for:\n", a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d:%d\n", i, fact(i));
    }
    return 0;
}