#include<iostream>

int& bubblesort(int*& arr,int size ){
    arr[2]=12;
    return *arr;
}
int main(){
    int* arr;
    arr=new int[4];
    arr[0]=4;
    int& ptr=*arr;
    std::cout<<"arr[0]"<<ptr;
    std::cout<<bubblesort(arr[2],4);
}