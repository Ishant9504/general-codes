#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }

    Complex(int a,int b):
        real(a),imag(b){

        }
    
    Complex(int a):
        real(a),imag(a){

        }
    
    void Add(Complex& A,Complex& B){
        this->real= A.real+B.real;
        this->imag=A.imag+B.imag;
    }

    void display();
};

void Complex::display(){
    cout<<real<<"+ i"<<imag;
}

int main(){
    Complex A(1,2);
    Complex B(1);
    Complex C;
    C.Add(A,B);
    C.display();
    return 0;
}