#include<iostream>
#include<cstring>
using namespace std;

class String{
private:
    string str;
public:
    String(string st=""):
    str(st){

    }

    string operator+(String const &other){
        string concat;
        concat=other.str+str;
        return concat;
    }

    String& operator=(const String &other){
        if(this->str==other.str){
            return *this;
        }
        
    }
};