//?WAP recursively to print numbers from n to 1
#include <stdio.h>
void printn(int num)
{
    if (num == 0)
    {
        return;
    }
    else
    {
        printf("%d\t", num);
    }
    printn(num - 1);
}
int main()
{
    int number;
    printf("enter till where:");
    scanf("%d", &number);
    printn(number);
    return 0;
}