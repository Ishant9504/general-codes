//? wap to check if area of a rectangle is greater than its perimeter
#include <stdio.h>
int main()
{
    int length, breadth;

    printf("enter length:");
    scanf("%d", &length);
    printf("enter breadth :");
    scanf("%d", &breadth);
    int area, perimeter;

    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("%d is the area\n", area);
    printf("%d is the perimeter\n", perimeter);
    if (area > perimeter)
    {
        printf("Area is greater");
    }
    else if (area < perimeter)
    {
        printf("Perimeter is greater than area");
    }
    else
    {
        printf("both are equal");
    }
    return 0;
}