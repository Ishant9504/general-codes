//? WAP to print all armstrong number between two numbers
#include <stdio.h>
#include <math.h>
int main()
{
    int ini, last;
    printf("Enter starting");
    scanf("%d", &ini);
    printf("Enter ending");
    scanf("%d", &last);
    for (ini; ini < last; ini++)
    {
        int temp = ini;
        int temp2 = ini;
        int new_num = 0;
        int count = 0;
        while (temp2 != 0)
        {
            temp2 = temp2 / 10;
            count++;
        }
        while (temp != 0)
        {
            int digit = temp % 10;
            temp = temp / 10;
            int powerr = (pow(digit, count));
            new_num = new_num + powerr;
        }
        if (new_num == ini)
        {
            printf("%d\n", ini);
        }
    }
    return 0;
}
