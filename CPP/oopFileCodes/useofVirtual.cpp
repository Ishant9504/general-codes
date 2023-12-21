#include<iostream>
using namespace std;

class LIST{
public:
    virtual void store(int value)=0;
    virtual int retrieve()=0;
};

class Stack: public LIST{
private:
    int stack[100];
    int top;
public:
    Stack()
        :top(-1){}
    
    void store(int value) override{
        if(top<99){
            stack[++top]=value;
            cout<<"Element pushed to stack"<<value<<endl;
        }
        else{
            cout<<"Stack Overflow cannot push more elements"<<endl;
        }
    }

    int retrieve() override{
        if(top==-1){
            cout<<"Stack underflow cannot pop element"<<endl;
            return -1;
        }
        else{
            int value=stack[top--];
            cout<<"Element popped"<<value<<endl;
            return value;
        }
    }
};

class Queue:public LIST{
private:
    int queue[100];
    int front,rear;
public:
    Queue()
        :front(-1),rear(-1){}
    
    void store(int value) override{
        if(rear<99){
            queue[++rear]=value;
            if(front==-1){
                front=0;
            }
            cout<<"Element has been stored"<<value<<endl;
        }
        else{
            cout<<"Queue Overflow! Cannot store element"<<endl;
        }
    }

    int retrieve() override{
        if(front==-1){
            cout<<"Queue empty cannot retreive element";
            return -1;
        }
        else if(front!=-1 && front<=rear){
            int value=queue[front++];
            cout<<"value retrieved succesfully"<<value<<endl;
            if(front>rear){
                front=rear=-1;
            }
            return value;
        }
    }
};

int main(){
    Stack stack;
    Queue queue;

    stack.store(10);
    stack.store(12);
    stack.retrieve();

    queue.store(10);
    queue.store(12);
    queue.retrieve();
}