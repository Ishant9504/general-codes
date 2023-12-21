#include<stdio.h>
#include<math.h>

#define EPSILON 1e-8

#define f(x) (x*x-4)

double secant(double x0,double x1,int iteration){
    double x2;
    int i=0;
    while(i<iteration){
         x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));

        x0=x1;
        x1=x2;
        printf("Iteration %d: x2 = %lf, f(x2) = %lf\n", i + 1, x2, f(x2));

        if(fabs(f(x2))<EPSILON){
            return x2;
        }
        i++;
    }
    return x2;

}

int main(){
    double root=secant(1,4,20);
    printf("Root is:%lf",root);

    return 0;
}