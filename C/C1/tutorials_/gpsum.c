// TODO: gp series and it's sum
#include <stdio.h>
int main()
{
    int firs, ratio, terms;
    printf("enter first term");
    scanf("%d", &firs);
    printf("enter common ratio");
    scanf("%d", &ratio);
    printf("enter number of terms");
    scanf("%d", &terms);
    int sum = firs;
    for (int i = 0; i < terms; i++)
    {
        sum = sum + firs;
        printf("terms is:%d\n", firs);
        firs = firs * ratio;
    }
    printf("sum of %d terms of G.P is %d", terms, sum);
}