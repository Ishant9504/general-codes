#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

int main(){
    ifstream inputFile("input.txt");
    if(!inputFile){
        ofstream createInputFile("input.txt");
        createInputFile.close();
        ifstream inputFile("input.txt");

    }
    
    
    
    ofstream outputFile("output.txt");
    char ch;
    while(inputFile.get(ch)){
        if(!isspace(ch)){
            outputFile.put(ch);
        }
    }

    inputFile.close();
    outputFile.close();
    cout<<"White Spaces have been removed "<<endl;


    return 0;
}