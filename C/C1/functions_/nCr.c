//! WAP to print permutaion combination of two numbers
#include <stdio.h>
int Factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int Permu(int a, int b)
{
    int permu = Factorial(a) / Factorial(a - b);
    return permu;
}

int main()
{
    int num1, num2;
    printf("Enter number:");
    scanf("%d", &num1);
    printf("Enter number:");
    scanf("%d", &num2);
    printf("%d\n", Factorial(num1));
    printf("%d", Permu(num1, num2));
    return 0;
}