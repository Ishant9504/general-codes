#include<stdio.h>
int main(){
    int a;
    printf("type a:");
    scanf("%d",&a);
    if(a>=1){
        printf("it is a natural number");
    }else{
        printf("it's not natural number");
    }
    return 0;
}