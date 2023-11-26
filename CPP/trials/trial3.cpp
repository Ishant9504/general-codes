#include<iostream>
#include<string>
#include<vector>

class studentrecord{
    private:
    std::string name;
    std::string class_;
    long int roll_no;

    public:
    void getdata();
    void displaydata();
};

void studentrecord::getdata(){
    std::cout<<"Enter student name::";
    std::getline(std::cin,name);
    std::cout<<"Enter class::";
    std::getline(std::cin,class_);
    std::cout<<"Enter roll no.";
    std::cin>>roll_no;
}

void studentrecord::displaydata(){
    std::cout<<name<<','<<class_<<','<<roll_no<<std::endl;
}

int main(){
    studentrecord record;
    record.getdata();
    record.displaydata();
    return 0;
}