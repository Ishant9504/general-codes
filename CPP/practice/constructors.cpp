#include<iostream>
using namespace std;

class something{
    int a, b;
    public:
    something(){
        
    };
    
    something(int x){
        a=x;
        b=x;
    }
    something(int x,int y){
        a=x;
        b=y;
    }
    ~something(){
        cout<<"Exit"<<endl;
    }
    void display(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
 

int main(){
    something A;
    something B(1);
    something C(1,2);
    A.display();
    B.display();
    C.display();

}