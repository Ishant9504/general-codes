// WAP to find approximate roots of a function Fn using Newton Raphson Method
#include <stdio.h>
#include <math.h>

#define f(x) cos(x) - x*exp(x)

#define fo(x) 3 * x *x - 5

int main()
{
    float num1, num2, a = 0.0001;

    printf("Enter initial point:");
    scanf("%f", &num1);

    float fun1 = f(num1), fun2;
    do
    {
        num2 = num1 - (fun1 / (fo(num1)));
        fun2 = f(num2);
        num1 = num2;
        fun1 = fun2;

        printf("x:%.5f, F(x):%.5f\n", num2, fun2);
    } 
    while (fabs(fun2) > a);
    
    printf("\nRoot of this function is:%.6f", num2);
    return 0;
}