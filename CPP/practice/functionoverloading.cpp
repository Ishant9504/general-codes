//WAP to implement operator overloading 
#include<iostream>

//Defining a class vector2 which has coordinates as data members and methods to deal with it
class vector2{

private:
    float x, y;

public:
    //Default Constructor
    vector2()
        :x(-1),y(-1) { 
        };

    //Parameterized Constructor    
    vector2(float x,float y)
        : x(x),y(y){
        }

    //Add function to add two vector2
    vector2 Add(const vector2& other){
       return vector2(x+other.x,y+other.y);
    }

    //Multiply function to multiply 2 vector2
    vector2 Multiply(const vector2& other){
        return vector2(x*other.x,y*other.y);
    }

    //overloaded + operator
    vector2 operator+(const vector2& other){
        return vector2(x+other.x,y+other.y);
    }

    //Overloaded * operator
    vector2 operator*(const vector2& other){
        return vector2(x*other.x,y*other.y);
    }

    //Function to display coordinates
    float displayX(){
        return x;
    }
    float displayY(){
        return y;
    }
};

int main(){

   
    vector2 position(1.0f,2.0f);
    vector2 speed(2.0f,3.0f);
    vector2 powerup(1.1f,1.1f);
    vector2 distance= position+speed*powerup;

    std::cout<<"The x and y coordinates respectively are:"<<distance.displayX()<<" and "<<distance.displayY()<<std::endl;
}