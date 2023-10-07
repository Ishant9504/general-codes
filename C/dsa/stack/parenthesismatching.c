//WAP to implement parenthesis matching
#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    char *arr;
    int top;
};

void push(struct Stack *s){
    if(s->top==s->size-1){
        printf("Stack overflow");
        exit(1);
    }
    s->top++;
    s->arr[s->top]='(';
}
void pop(struct Stack *s){
    s->top--;
}
void isEmpty(struct Stack *s){
    if(s->top==-1){
        printf("Stack empty");
    }
    else{
        printf("Not empty");
    }
}
int main(){
    struct Stack *s;
    s->size=10;
    s->arr=(char*)malloc(s->size*sizeof(char));
    s->top=-1;
    char * expr=(char*)malloc(s->size*sizeof(char));
    gets(expr);
    for(int i=0;i<s->size;i++){
        if(expr[i]=='('){
            push(s);
        }
    }
     for(int i=0;i<s->size;i++){
        if(expr[i]==')'){
            pop(s);
        }
    }
    isEmpty(s);

}