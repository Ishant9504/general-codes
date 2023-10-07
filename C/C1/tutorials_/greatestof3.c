//? WAP TO CHECK GREATEST OF 3 NUMBERS
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter first:");
    scanf("%d", &a);
    printf("enter second:");
    scanf("%d", &b);
    printf("enter third:");
    scanf("%d", &c);
    // checking which is greatest
    if (a > b && a > c)
    {
        printf("%d is greatest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }
    else
    {
        printf("%d is greatest", c);
    }
    return 0;
}