#include<iostream>
#include<cstring>
class student{
    std::string name;
    int age;
    int roll_no;
    public:
    student(){
        name="noname";
        age=0;
        roll_no=0;
    }
    student(std::string n,int a,int r):name(n),age(a),roll_no(r){};
    void display(){
        std::cout<<name<<std::endl;
        std::cout<<age<<std::endl;
        std::cout<<roll_no<<std::endl;
    }
    student(std::string n,int a):name(n),age(a),roll_no(0){};
};
int main(){
    student s1;
    s1.display();
    student s2("ishant",19);
    s2.display();
    return 0;

}
