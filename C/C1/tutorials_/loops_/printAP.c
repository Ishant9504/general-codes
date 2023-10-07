//! WAP to print AP using all three types of loops
#include <stdio.h>
int main()
{
    int first, inc, terms;
    printf("enter first term:-");
    scanf("%d", &first);
    printf("enter increment:-");
    scanf("%d", &inc);
    printf("enter number of term:-");
    scanf("%d", &terms);
    int sum = 0;
    for (int j = 0; j < terms; j++)
    {
        sum = sum + first;
        printf("%d term of AP is :%d\n", j + 1, first);
        first = first + inc;
    }
    printf("Sum of AP is:%d", sum);
    printf("\n");
    // int i = 0;
    // while (i < terms)
    // {
    //     printf("%d \n", first);
    //     first += inc;
    //     i++;
    // }
    // printf("\n");
    // int k = 0;
    // do
    // {
    //     printf("%d\t", first);
    //     first += inc;
    //     k++;

    // } while (k < terms);

    return 0;
}