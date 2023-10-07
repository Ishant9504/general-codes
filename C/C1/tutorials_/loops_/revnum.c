//! WAP to type reverse of a number
#include <stdio.h>
int main()
{
    int num, remainder;
    printf("enter your number:");
    scanf("%d", &num);
    int temp = num;
    int rev = 0;

    while (temp != 0)
    {
        rev *= 10;
        remainder = (temp % 10);
        rev = rev + remainder;

        temp = temp / 10;
    }
    printf("reverse via loop is:%d\n", rev);
    printf("Sum of number and it's reverse is :%d", num + rev);
    return 0;
}