#include <stdio.h>
int pFact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * pFact(num - 1);
    }
}
int main()
{
    int a = 6;
    //*
    printf("%d", pFact(a));
}