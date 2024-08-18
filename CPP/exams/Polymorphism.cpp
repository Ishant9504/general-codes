#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int imag;
public:
    Complex(){};
    Complex(int x):
        real(x),imag(x){}
    Complex(int x,int y):
        real(x),imag(y){}
    ~Complex(){
        cout<<"Destructor was called here"<<endl;
    }
    Complex Add(const Complex& other){
        real=real+other.real;
        imag=imag+other.imag;
        return *this;
    }
    Complex operator+(const Complex& other){
        real=real+other.real;
        imag=imag+other.imag;
        return *this;
    }
    Complex operator+(int x){
        real=real+x;
        imag=imag+x;
        return Complex(real,imag);
    }
    void display();
};

void Complex::display(){
    cout<<this->real<<"+ i"<<this->imag;
}

int main(){
    Complex A();
    A=A+2;
    A.display();
    return 0;
}