//! WAP to print even and odd digits of a number
#include <stdio.h>
int main()
{
    int num, remainder;
    printf("enter your number:");
    scanf("%d", &num);
    int temp = num;
    printf("Even digit of number is:");
    while (temp != 0)
    {
        remainder = temp % 10;
        if (remainder % 2 == 0)
        {
            printf("%d,", remainder);
        }

        temp = temp / 10;
    }
    return 0;
}