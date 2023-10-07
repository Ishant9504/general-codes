#include<stdio.h>
int main(){
    int i=1;
    int n=6;
    int fact=1;
    for(i;i<=n;i++){
        fact*=i;
    }printf("%d",fact);
}