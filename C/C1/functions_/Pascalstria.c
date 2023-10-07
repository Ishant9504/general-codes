//! WAP to print PASCAL'S TRIANGLE
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
int combination(int n, int r)
{
    int ncr = Factorial(n) / (Factorial(n - r) * Factorial(r));
    return ncr;
}
int main()
{
    int rows;
    printf("enter no of rows in triangle");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", combination(i, j));
        }
        printf("\n");
    }
    return 0;
}