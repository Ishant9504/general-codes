#include<iostream>
using namespace std;

class list{
public:
    virtual void store(int value)=0;
    virtual void retreive()=0;
};

class Stack:public list{
private:
    int stack[100];
    int top;
public:
    Stack():
        top(-1){}
    
    void store(int value) override{
        if(top<99){
            stack[++top]=value;
            cout<<"value has been succesfully stored::"<<value<<endl;
        }
        else{
            cout<<"Stack Overflow cannot add more elements~"<<endl;
        }
    }

    void retreive() override{
        if(top==-1){
            cout<<"Stack underflow cannot retreive element"<<endl;
        }
        else{
            int value=stack[top--];
            cout<<"Element succcesfully retreived::"<<value<<endl;
        }
    }
};

class Queue:public list{
private:
    int queue[100];
    int front,rear;
public:
    Queue():
        front(-1),rear(-1){}
    
    void store(int value) override{
        if(rear<99){
            queue[++rear]=value;
            cout<<"Value stored succesfully::"<<value<<endl;
            if(front==-1){
                front=0;
            }
        }
        else{
            cout<<"Queue Overflow cannot add more elements"<<endl;
        }
    }

    void retreive() override{
        if(front!=-1 && front<=rear){
            int value=queue[front++];
            cout<<"Element has been retreived succesfully::"<<value<<endl;
            if(front>rear){
                front=rear=-1;
            }
        }
        else{
            cout<<"Queue Underflow cannot retreive element~"<<endl;
        }
    }
};

int main(){
    Queue queue;
    Stack stack;

    queue.store(10);
    queue.store(20);
    queue.retreive();

    stack.store(10);
    stack.store(20);
    stack.retreive();


    return 0;
}
