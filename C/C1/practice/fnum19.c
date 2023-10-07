//table of a number input by the user
#include<stdio.h>
int main(){
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<11;i++){
        printf("%d",n ); 
        printf("x%d:",i);
        printf("%d\n",n*i);
    }
    return 0;
}