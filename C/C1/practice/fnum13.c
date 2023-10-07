//ternary statement
#include<stdio.h>
int main(){
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    age>=18?printf("adult"):printf("minor");
    return 0;
}