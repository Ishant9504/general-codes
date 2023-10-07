//? WAP to print power of one number raised to another
#include <stdio.h>
int main()
{
    int a, power;
    printf("enter number and power:");
    scanf("%d%d", &a, &power);
    int num = 1;
    while (power > 0)
    {
        num *= a;
        power--;
    }
    printf("%d", num);
}