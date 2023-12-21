#include<stdio.h>
#include<math.h>

#define EPSILON 1e-6

double f(double x){
    return x*x-4;
}

double bisection(double lower,double upper){
    double mid=(upper+lower)/2;
    double width=upper-lower;
    printf("lower:%lf upper:%lf mid:%lf f(x):%lf\n",lower,upper,mid,f(mid));

    if(fabs(f(mid))<EPSILON){
        return mid;
    }
    else if(f(lower)*f(mid)<0){
        return bisection(lower,mid);
    }
    else{
        return bisection(mid,upper);
    }
}

int main(){

    double root=bisection(1,4);
    printf("root is :%lf",root);

    return 0;
}
