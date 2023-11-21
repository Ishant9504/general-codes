#include<iostream>
#include<cstring>

using namespace std;
class employee{
    public:
    string name;
    int age;
    int e_id;
    void insert(string n,int a,int e){
        name=n;
        age=a;
        e_id=e;
    }
    void show(){
        cout<<name<<endl<<age<<endl<<e_id<<endl;
    }
};
int main(){
    employee e1;
    e1.insert("Ishant",19,050);
    e1.show();
    return 0;
}