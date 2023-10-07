#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int digit,rev=0;
    while(num!=0){
        digit=num%10;
        rev+=digit;
       
        num=num/10;
        rev=rev*10;
    }
    printf("%d",rev);
}

