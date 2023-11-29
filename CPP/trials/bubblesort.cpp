#include<iostream>

int* bubbleSort(int* arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}

int main(){
    int *arr;
    int size=4;
    arr=new int[size];
    std::cout<<"enter array to be sorted:";

    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }

    std::cout<<"unsorted array:";
    for(int j=0;j<size;j++){
        if(j==size-1){
            std::cout<<arr[j];
        }
        else{
        std::cout<<arr[j]<<",";
        }
    }
    std::cout<<" "<<std::endl;

    arr=bubbleSort(arr,size);
    std::cout<<"sorted array:";
    for(int i=0;i<size;i++){
        if(i==size-1){
            std::cout<<arr[i];
        }
        else{
        std::cout<<arr[i]<<",";
        }
    }
    return 0;
}