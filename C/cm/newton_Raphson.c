#include<stdio.h>
#include<math.h>
#define e 1e-8
#define f(x) (x*x-4)
#define fn(x) (2*x)

double NR(double initial,int iterations){
    double next;
    int i=0;

    while(i<iterations){
        next=initial-(f(initial))/(fn(initial));
        
        printf("initial:%lf next:%lf value:%lf\n",initial,next,f(next));
        initial=next;
        if(fabs(f(next)<e)){
            return next;
            break;
        }
        i++;
    }
    return next;
}

int main(){
    printf("%lf",NR(1,10));
    return 0;
}
