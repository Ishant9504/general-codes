#include<iostream>
using namespace std;

class class1{
private:
    int data;
public:
    class1(){}
    class1(int a)
        :data(a){}
    class1(const class1& other)
        : data(other.data){}
    ~class1(){
        cout<<"Destructor was called here"<<endl;
    }

    void display(){
        cout<<data<<endl;
    }

    friend void add();
};

void add(){
    class1 A;
    cin>>A.data;
    A.data+=A.data;
    A.display();
}

int main(){
    class1 A(12);
    class1 B=A;
    A.display();
    add();
    B.display();
    return 0;
}