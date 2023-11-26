#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student{
    char name[25];
    char class[10];
    int roll_number;
    struct student * next;
}student;

int main(){
    student * s1=(student*)malloc(sizeof(student));
    strcpy(s1->name,"amam");
    strcpy(s1->class,"CSE 1");
    s1->roll_number=001;
    s1->next=NULL;

    printf("%s\n",s1->name);
    printf("%s\n",s1->class);
    printf("%d\n",s1->roll_number);

}
