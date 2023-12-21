//wap to perform matrix multiplication
#include<iostream>
#include<string>

class Complex{
    private:
    int real,imag;
    public:
    Complex(int x,int y ):real(x),imag(y){

    }
    
    Complex(){

    }

    friend void display(const Complex& other){
        std::cout<<"Complex number is:"<<other.real<<"+ i"<<other.imag<<std::endl;
    }
};



int main(){
    Complex c=Complex(1,2);
    display(c);
    return 0;
}