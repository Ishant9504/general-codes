#include<stdio.h>
#include<math.h>
#define f(x) (1/(x*x))

double trapezoidal(double x0,double x1,int interval){
    double h=(x1-x0)/interval;
    double y=0;
    int i=0;
    while(i<=interval){
        if(i==0 || i==interval){
            y+=h*f(x0+i*h)*0.5;
        }
        else{
            y+=h*f(x0+h*i);
        }
        i++;
    }
    return y;
}

double simpsonThird(double x0,double x1,int intervals){
    double h=(x1-x0)/intervals;
    double y=0;
    for( int i=0;i<=intervals;i++){
        if(i==0 || i==intervals){
            y+=(h/3)*f(x0+i*h);
        }
        else if(i!=0 && i%2==0){
            y+=2*(h/3)*f(x0+i*h);
        }
        else{
            y+=4*(h/3)*f(x0+i*h);
        }
    }
    return y;
}

double simpsonEighth(double x0,double x1,int interval){
    double h=(x1-x0)/interval;
    double y=0;
    for(int i=0;i<=interval;i++){
        if(i==0 || i==interval){
            y+=((h*3)/8)*f(x0+i*h);
        }
        else if(i!=interval && i%3==0){
            y+=2*((h*3)/8)*f(x0+i*h);
        }
        else{
            y+=3*((h*3)/8)*f(x0+i*h);
        }
    }
    return y;

}

int main(){
    
    printf("Via Trapezoidal it is:");
    printf("%lf\n",trapezoidal(1,6,6));
    
    printf("Via Simpson One Third it is:");
    printf("%lf\n",simpsonThird(1,6,6));

    printf("Via Simpson Three by Eight it is:");
    printf("%lf\n",simpsonEighth(1,6,6));
    return 0;
}