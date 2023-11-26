// A registration/login portal for users

// Including header files
#include <iostream>
#include <fstream>
#include <string>

// Defined a user class
class user
{
private:
    std::string username, Email, password;
    std::string searchName,searchEmail, searchPassword;
    std::fstream file;

public:
    void Login();
    void SignUp();
    void Forgotpw();
};

// Function definition for user sign up
void user::SignUp()
{
    std::cout << "Enter username::";
    std::cin>>username;
    std::cout << "Enter user Email id::";
    std::cin>>Email;
    std::cout << "Enter user Password::";
    std::cin>>password;

    file.open("logindata.txt", std::ios::out | std::ios::app);
    file << username << "*" << Email << "*" << password << std::endl;
    file.close();
}

// Function definition for user login
void user::Login()
{
    std::cout << "----LOGIN----" << std::endl;

    std::cout << "Enter username::";
    std::cin>>searchName;
    std::cout << "Enter user password::";
    std::cin>> searchPassword;

    file.open("logindata.txt", std::ios::in);
    std::getline(file, username, '*');
    std::getline(file, Email, '*');
    std::getline(file, password, '\n');
    while (!file.eof())
    {   
        std::getline(file, username, '*');
        std::getline(file, Email, '*');
        std::getline(file, password, '\n');
        if (username == searchName)
        {
            if (password == searchPassword)
            {
                std::cout << "\nAccount Login Successful......" << std::endl;
                std::cout << "Welcome user" << username << std::endl;
                std::cout << username << std::endl;
                std::cout << Email << std::endl;
                break;
            }
            else
            {
                std::cout << "<<<Password incorrect>>>" << std::endl;
            }}
        else{
            std::cout<<"<<<Incorrect Username>>>";
        }
    }
        
    
    file.close();
}

//Function definition for Forgot password
void user::Forgotpw(){
    std::cout<<"\nEnter username::";
    std::getline(std::cin,searchName);
    std::cout<<"\nEnter Email::";
    std::getline(std::cin,searchEmail);

    file.open("logindata.txt",std::ios::in);
    
    while(!file.eof()){
        std::getline(file,username,'*');
        std::getline(file,Email,'*');
        std::getline(file,password,'\n');
        if(username==searchName){
            if(Email==searchEmail){
                std::cout<<"Account found....."<<std::endl;
                std::cout<<password<<std::endl;
                break;
                }
            else{
                std::cout<<"<<<Incorrect user Email>>>"<<std::endl;
                }
            }
        else{
            std::cout<<"<<<Incorrect username>>>";
             }
        }
    file.close();
    }


int main()
{
    char choice;
    user User1;

    std::cout << "1-Login\n2-Sign Up\n3- Forgot Password\n4-Exit" << std::endl;
    std::cout << "enter your choice";
    std::cin >> choice;

    switch (choice)
    {
    case '1':
        User1.Login();
        break;
    case '2':
        User1.SignUp();
        break;
    case '3':
        User1.Forgotpw();
        break;
    case '4':
        std::cout << "Exiting menu";
        break;
    default:
        std::cout << "~Invalid Selection~";
        break;
    }
}