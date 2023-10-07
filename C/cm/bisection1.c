#include<stdio.h>
#include<math.h>
#include<conio.h>
#define f(x) (x*x*x)-(4*x)+1
void main(){
    float a=0.01;
    float x0,x1,x2;
    float f0,f1,f2;
    int i=0;
    printf("Enter values of x0 and x1:");
    scanf("%f%f",&x0,&x1);
    do{
        f0=f(x0);
        f1=f(x1);
        x2=(x1+x0)/2;
        f2=f(x2);
        if(f0*f2<0){
            x1=x2;
        }
        else{
            x0=x2;
            i++;
        }
        printf("no of iterations=%d",i);
        printf("Root=%f",x2);
        printf("Value of function%f",f2);
    }
    while(fabs(f2)>a);
    getch();
    }

