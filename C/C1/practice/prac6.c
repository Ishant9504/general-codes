//sum of n natural numbers using recursion
#include<stdio.h>
int sum(int n);
int main(){
    printf("sum of mumbers is:%d",sum(5));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumnm1=sum(n-1);//the value of sum of n-1 numbers
    int sumn=sumnm1+n;

}