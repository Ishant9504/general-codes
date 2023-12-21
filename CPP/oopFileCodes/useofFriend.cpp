#include<iostream>

class A{
    private:
    int dataofA;
    public:
    friend void findMax();
};

class B{
    private:
    int dataofB;
    public:
    friend void findMax();
};

void findMax(){
    A numA;
    B numB;
    std::cin>>numA.dataofA;
    std::cin>>numB.dataofB;
    if(numA.dataofA>numB.dataofB){
        std::cout<<"element of first class greater::"<<numA.dataofA<<std::endl;
    }
    if(numA.dataofA<numB.dataofB){
        std::cout<<"element of second class greater::"<<numB.dataofB<<std::endl;
    }
    if(numA.dataofA==numB.dataofB){
        std::cout<<"element of both class are equal::"<<numA.dataofA<<std::endl;
    }
}

int main(){
    findMax();

    return 0;
}