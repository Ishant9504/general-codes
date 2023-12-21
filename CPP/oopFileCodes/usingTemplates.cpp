//WAP using templates
#include<iostream>

template <typename T>
T sum(T num1,T num2){
    return num1+num2;
}

template <typename T>
T squareof(T num1){
    return num1*num1;
}

template <typename T>
class complexNumber{
    private:
        T number1,number2;
    public:
        friend T bigger(complexNumber ,integerNumber );
};

template<typename T>
class integerNumber{
    private:
    int data;
    public:
    friend T bigger(complexNumber ,integerNumber);
};
 
// template<typename T> 
// T bigger(complexNumber ,integern){

// }


int main(){
    std::cout<<"sum of these 2 numbers is::"<<sum(0.05,0.04)<<std::endl;
    std::cout<<"sum of these 2 numbers is::"<<sum(5,4)<<std::endl;
    std::cout<<"square of this number is ::"<<squareof(2.5)<<std::endl;
    std::cout<<"square of this number is::"<<squareof(25)<<std::endl;

    return 0;
}