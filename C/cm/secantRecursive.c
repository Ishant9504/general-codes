#include <stdio.h>
#include <math.h>
#define epsilon 1e-8

#define f(x) (x * x - 4)

double secant(double x0, double x1, int iterations)
{
    double x2;
    int i = 0;
    while (i < iterations)
    {
        x2 = (x0*f(x1) - x1*f(x0)) / (f(x1) - f(x0));
        x0 = x1;
        x1 = x2;

        if (fabs(f(x2)) < epsilon)
        {
            return x2;
        }
        i++;
    }
    return x2;
}

int main()
{
    double root = secant(1, 3, 10);
    printf("root:%lf", root);
    return 0;
}