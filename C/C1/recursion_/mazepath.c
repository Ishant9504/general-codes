//! WAP to print no of paths in a maze of m,n
#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{
    int rightways = 0, downway = 0, TotalWays;
    if (cr == er && cc == ec)
    {
        return 1;
    }
    if (cr == er)
    {
        rightways += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec)
    {
        downway += maze(cr + 1, cc, er, ec);
    }
    if (cc < ec && cr < er)
    {
        rightways += maze(cr, cc + 1, er, ec);
        downway += maze(cr + 1, cc, er, ec);
    }
    TotalWays = rightways + downway;
    return TotalWays;
}
int main()
{
    int rows, columns;
    printf("Enter no of rows:");
    scanf("%d", &rows);
    printf("Enter no of columns:");
    scanf("%d", &columns);
    printf("Total no of paths that can be taken:%d", maze(1, 1, rows, columns));
    return 0;
}