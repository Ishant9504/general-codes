//! wap to print absolute value of an integer
#include <stdio.h>
int main()
{
    int num;
    printf("enter integer");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("%d", num * (-1));
    }
    else
    {
        printf("%d", num);
    }
    return 0;
}