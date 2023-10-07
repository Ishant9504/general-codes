//? WAP to check if a number is divisible by both 3 and 5
#include <stdio.h>
int main()
{
    int num;
    printf("enter number");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    {

        printf("%d is divisble by both 3 and 5", num);
    }
    else if (num % 5 == 0)
    {
        printf("%d is only divisble by 5", num);
    }
    else if (num % 3 == 0)
    {
        printf("%d is only divisble by 3", num);
    }
    else
    {
        printf("not divisble by either");
    }
}