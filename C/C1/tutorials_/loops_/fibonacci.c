//! WAP to print fibonacci series
#include <stdio.h>
int main()
{
    int a, b, c;
    a = 0;
    b = 1;
    c = a + b;
    printf("term 1 is 0\nterm 2 is 1\n");

    for (int i = 3; i <= 10; i++)

    {
        c = a + b;
        a = b;
        b = c;
        printf("term %d is %d\n", i, c);
    }
}