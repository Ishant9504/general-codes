#include<iostream>
using namespace std;
#define MAX 100
 
typedef struct Stack{
    int arr[MAX];
    int top=-1;
} Stack;

void push(Stack * s,int data){
    if(s->top-1==MAX){
        cout<<"Invalid operation stack overflow\n";
    }
    else {
        s->top++;
        s->arr[s->top]=data;
    }
}

// int pop(Stack * s){
//     if(s->top==-1){
//         cout<<"Empty Stack";
//         return -1;
//     }
//     else{
        
//         return s->arr[s->top--]; ;    
//     }
// }


void display(Stack *s){
    int i=s->top;
    cout<<"Element of stack is:";
    while(i-1!=-1){
        cout<<s->arr[i]<<" ";
        i--;
    }
    cout<<endl;
}


int main(){
    Stack * s;

    push(s,10);
    push(s,11);
    push(s,13);

    display(s);

    // cout<<pop(s);

    return 0;
}