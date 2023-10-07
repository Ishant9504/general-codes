//WAP to user input a string and display it
#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="Hello World";
    gets(str);
    printf("My first string is:\n");
    puts(str);
}
