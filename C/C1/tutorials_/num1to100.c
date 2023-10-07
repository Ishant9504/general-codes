//? wap to print numbers from 1 to 100
#include <stdio.h>
int main()
{
    int first;
    printf("enter first term:");
    scanf("%d", &first);
    int increm;
    printf("enter increment:");
    scanf("%d", &increm);
    int num;
    printf("enter no of terms:");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        int next = first + (i * increm);
        printf("the %d term is %d: \n", i, next);
    }
    return 0;
}