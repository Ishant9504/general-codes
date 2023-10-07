//?WAP to count digits of a number
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d", &num);
    int remainder;
    int digits = 0;
    int temp = num;
    int new_num = 0;
    int sum_digits = 0;
    while (temp != 0)
    {
        remainder = temp % 10;
        temp = temp / 10;
        digits++;
        if (remainder % 2 == 0)
        {
            printf("Even digits are:%d\n", remainder);
        }
        if (remainder % 2 != 0)
        {
            printf("Odd digits are:%d\n", remainder);
        }
        // new_num = new_num + (remainder * remainder * remainder);
        sum_digits += remainder;
    }
    printf("Sum of digits is:%d\n", sum_digits);
    // if (num == new_num)
    // {
    //     printf("%d is an armstrong number\n");
    // }
    // else
    // {
    //     printf("%d is not an armstrong number\n");
    // }
    printf("The number of digits in %d are: %d", num, digits);
    return 0;
}
