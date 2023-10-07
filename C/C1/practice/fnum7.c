//WAP to calculate simple interest
#include<stdio.h>
int main(){
    int princ;
    int time;
    float rate;
    printf("principal amount is:");
    scanf("%d", &princ);
    printf("rate of interest is:");
    scanf("%f",&rate);
    printf("time period is:");
    scanf("%d",&time);
    float interest= (princ*rate*time)/100;
    printf("simple interest on this is:%f \n",interest);
    printf("total amount received will be:%f",princ+interest);
    return 0;
}