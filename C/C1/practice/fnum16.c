//switch
#include<stdio.h>
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    switch(a){
        case 1: printf("a");
                break;
        case 2: printf("b");
                break;
        default: printf("welp");
    }
    return 0;
}