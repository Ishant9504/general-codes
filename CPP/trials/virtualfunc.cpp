#include<iostream>

class classone{
    public:
    virtual std::string getname(){
        return "Something";
    }
};

class classtwo: public classone{
    private:
    std::string M_name;
    public:
    classtwo(const std::string& name):
        M_name(name){}
    std::string getname() override{
        return M_name;
    }
};

int main(){
    classone* one= new classone();
    std::cout<<one->getname()<<std::endl;

    std::string name = "new";
    classtwo* two = new classtwo(name);
    std::cout<<two->getname()<<std::endl;

    classone* three=two;
    std::cout<<three->getname()<<std::endl;

    delete two; // Free the allocated memory
}