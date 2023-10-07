//* WAP to tell if a loss is made or profit
#include <stdio.h>
int main()
{
    int cp;
    int sp;
    printf("enter cost price");
    scanf("%d", &cp);
    printf("enter selling price");
    scanf("%d", &sp);
    int net;
    net = sp - cp;
    if (net > 0)
    {
        printf("%d is the profit", net);
    }
    else if (net < 0)
    {
        printf("%d is the loss", net * (-1));
    }
    else
    {
        printf("cost price is same as selling price");
    }
    return 0;
}