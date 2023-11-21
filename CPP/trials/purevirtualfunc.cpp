#include<iostream>
class Printable{
    public:
    virtual std::string getclassname()=0;
};

class Entity:public Printable{
    public:
    virtual std::string getname(){
        return "Entity";
    };
    std::string getclassname() override{
        return "Entity";
    }
};
 class Player:public Entity{
    private:
    std::string M_name;
    public:
    Player(const std::string& name):M_name(name){};
    std::string getname() override{
        return M_name;
    }
    std::string getclassname() override{
        return "Player";
    }
 };
 void Print(Printable* obj){
    std::cout<<obj->getclassname()<<std::endl;
 }

int main(){
    Entity * e= new Entity();
    Player* p=new Player("Ishant");
    Print(e);
    Print(p);
}