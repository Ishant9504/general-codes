#include<stdio.h>
//checks if character is digit or not
int main(){
    int age;
    printf("enter value:");
    scanf("%d", &age);
    if(age>=18){
        printf("person is an adult \n");
    }
    else if(age>=13 && age<18){
        printf("person is still a teenager \n");
    }
    printf("Thankyou");
    return 0;
}