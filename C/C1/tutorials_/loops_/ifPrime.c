//! WAP to check if number is prime or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number to check for if prime:");
    scanf("%d", &num);
    if (num == 2)
    {
        printf("2 is a prime number");
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number", num);
            break;
        }
        else
        {
            printf(" %d is a prime number", num);
            break;
        }
    }
    return 0;
}