#include<iostream>
#include<cstring>
class Student{
    public:
    std::string name;
    int age;
    int rollno;
    
    void getdata(void);
    void display(void);
    
};
void Student::getdata(void){
    std::cout<<"Enter name of student:";
    std::cin>>name;
    std::cout<<"Enter age of student:";
    std::cin>>age;
    std::cout<<"Enter roll no of student";
    std::cin>>rollno;
}
void Student:: display(void){
    std::cout<<"Name of student:"<<name<<std::endl;
    std::cout<<"Age of student:"<<age<<std::endl;
    std::cout<<"Roll no of student:"<<rollno<<std::endl;
}

int main(){
    Student s1;
    s1.getdata();
    s1.display();
    Student s2;
    s2.name="Ishant";
    s2.display();

}