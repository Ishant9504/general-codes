#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sqr=pow(n,2);
    printf("The square of %d--> %d",n,sqr);
    return 0;
}