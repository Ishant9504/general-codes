//! Wap to check for leap year
#include <stdio.h>
int main()
{
    int year;
    printf("enter year:");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}