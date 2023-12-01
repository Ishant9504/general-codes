//Implement bubble sort
#include<stdio.h>
#include<stdlib.h>

//Sorting function using bubble sort algorithm
void bubbleSort(int* arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return ;
}

int main(){
    int* arr,size=10,j=0;
    arr=(int*)malloc(size*sizeof(int));

    //entering elements into array
    for(int i=size;i>0;i--){
        arr[j]=i;
        j++;
    }

    //Printing our unsorted array
    printf("Unsorted array:");
    for(int i=0;i<size;i++){
        printf("%d ,",*(arr+i));
    }


    //sorting through our array
    bubbleSort(arr,size);
    
    //Printing our sorted array
    printf("\nsorted array:");
    for(int i=0;i<size;i++){
        printf("%d ,",*(arr+i));
    }

    return 0;
}