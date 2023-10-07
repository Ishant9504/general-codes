#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

typedef float fl;
fl func(fl num){
    return pow(num,3)-5*(num)+1;
}
int main(){
    fl lim=0.0001;
    fl* a=(fl*)calloc(1,sizeof(fl));
    fl* b=(fl*)calloc(1,sizeof(fl));
    if(a==NULL||b==NULL){
        printf("Memory Allocation failed");
        exit(0);
    }
    scanf("%f%f",a,b);
    printf("%.3f %.3f\n",func(*a),func(*b));
    printf("\n");
     float temp;
    float c;
    if(func(*a)*func(*b)<=0){
        printf("Root exists in this range\n");\
         do{
        c=((*a)+(*b))/2;
        if(func(c)*func(*a)<0){
            temp=*b;
            *b=c;
        }
        else{
            *a=c;
        }
        printf("a=%.4f b=%.4f c=%.4f f=%.4f\n",*a,temp,c,func(c));

    }
    while(fabs(func(c))>lim);
    }
    else{
        printf("root doesn't exist in this range");
    }
    printf("Root is %.6f",c);
    free(a);
    free(b);
    }