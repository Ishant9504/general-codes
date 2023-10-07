//! wap to check if number is prime
#include <stdio.h>
int main()
{
    int num;
    int i = 1;
    printf("enter a number");
    scanf("%d", &num);
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
           printf("factor of%d:%d\n",num, i);
        }
    }
    printf("number of factors:%d\n", count);

    if (count > 2)
    {
        printf("entered number %d isnt a prime\n", num);
    }
    else
    {
        printf("entered number %d is a prime\n", num);
    }
    return 0;
}