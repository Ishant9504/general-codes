//! WAP to print table of a number
#include <stdio.h>
int main()
{
    int num, times;
    printf("enter number whose table is wanted");
    scanf("%d", &num);
    printf("enter till where is table needed");
    scanf("%d", &times);
    for (int i = 1; i <= times; i++)
    {
        printf("%d times %d = %d\n", num, i, num * i);
    }
    return 0;
}