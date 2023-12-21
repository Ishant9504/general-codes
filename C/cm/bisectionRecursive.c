#include<stdio.h>
#include<math.h>

#define epsilon 1e-6
#define f(x) (x*x-4)

double bisection(double lower,double upper){
    double midValue=(upper+lower)/2;
    if(fabs(f(midValue))<epsilon){
        return midValue;
    }
    else if(f(midValue)*f(lower)<0){
        return bisection(lower,midValue);
    }
    else{
        return bisection(midValue,upper);
    }
}

int main(){
    printf("root:%lf",bisection(1,4));
    return 0;
}