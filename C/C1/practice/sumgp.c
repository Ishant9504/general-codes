#include<stdio.h>
int main(){
    int a,r,n,sum=0;
    printf("enter first term ");
    scanf("%d",&a);
    printf("enter common ratio ");
    scanf("%d",&r);
    printf("enter terms");
    scanf("%d",&n);
    printf("terms of gp are:");
    for(int i=1;i<=n;i++){ 
        printf("%d,",a);
        sum=a+sum;
        a=a*r;
    }printf("\n %d",sum);
}