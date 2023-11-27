#include<iostream>
float f(float x,float y){
    return x+y;
}

float rangeKutta(float x0,float y0,float h,float target){
    float y0_,p1,p2,p3,p4;
    for(float i=x0;i<target;i+=h){
        p1=h*f(i,y0);
        p2=h*f(i+h/2,y0+p1/2);
        p3=h*f(i+h/2,y0+p2/2);
        p4=h*f(i+h,y0+p3); 
        y0_=(p1+2*p2+2*p3+p4)/6;
        y0=y0+y0_;
    }
    return y0;
}

int main(){
    std::cout<<rangeKutta(0,1,0.1,0.1);
    return 0;
}