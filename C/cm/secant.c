// WAP to implement false position method for finding approximate root of a function Fn
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) pow(x, 3) - 5 * x + 1

int main()
{
    float num1, num2, num3, a = 0.00000001;

    printf("Enter lower bound and Upper bound:");
    scanf("%f%f", &num1, &num2);

    float fun1 = f(num1), fun2 = f(num2), fun3;

    do
    {
        num3 = (fun1 * num2 - fun2 * num1) / (fun1 - fun2);
        fun3 = f(num3);
        num1 = num2;
        num2 = num3;
        fun1 = fun2;
        fun2 = fun3;

        printf("x=%.8f, F(x)=%.8f \n", num3, fun3);
    } 
    while (fabs(fun3) > a);

    printf("\nThe root of this equation is %.8f", num3);
    return 0;
}