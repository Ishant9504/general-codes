//! WAP to print a generalised GP
#include <stdio.h>
int main()
{
    int first, ratio, terms;
    printf("Enter first term:-");
    scanf("%d", &first);
    printf("Enter common ratio:-");
    scanf("%d", &ratio);
    printf("Enter number of terms in series:-");
    scanf("%d", &terms);
    int sum = first;
    for (int i = 0; i < terms; i++)
    {
        sum = sum + first;
        printf("Term %d of GP series is:%d \n", i + 1, first);
        first = first * ratio;
    }
    printf("Sum of GP is %d", sum);
    return 0;
}