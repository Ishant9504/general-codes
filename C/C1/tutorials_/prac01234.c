#include <stdio.h>
void main()
{
    int i = 0;
    do
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
        i++;
    } while (
        i < 101);
}
