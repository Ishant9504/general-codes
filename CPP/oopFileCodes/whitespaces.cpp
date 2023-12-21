#include<iostream>
#include<fstream>
#include<cctype>
#include<string>

using namespace std;

int main(){
    ifstream inputFile("input1.txt");
    if(!inputFile){
        ofstream createInputFile("input1.txt");
        createInputFile.close();
    }
    ifstream input("input1.txt");
    ofstream outputFile("output.txt");
    char ch;
    while(inputFile.get(ch)){
        if(!isspace(ch)){
            outputFile.put(ch);
        }
    }

    inputFile.close();
    outputFile.close();
    return 0;
}