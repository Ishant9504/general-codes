//print sum of n natural numbers where n is user input
#include<stdio.h>
int main(){
    int n,a,b=0;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=1){
        a=i;
        b=a+b;
    }
    printf("%d",b);
    
}