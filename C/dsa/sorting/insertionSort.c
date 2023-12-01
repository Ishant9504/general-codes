//Implement Insertion Sort
#include<stdio.h>
#include<stdlib.h>

void insertSort(int * array,int size){
    int key,j,temp;
    for(int i=1;i<=size-1;i++){
        key=array[i];
        j=i-1;
        while(array[j]>key&&j>=0){
            array[j+1]=array[j];
            j--;
            
        }
        array[j+1]=key;
    }
}

int main(){
    int* arr,size=10,j=0;
    arr=(int*)malloc(size*sizeof(int));

    //entering elements into array
    for(int i=size-1;i>=0;i--){
        arr[j]=i;
        j++;
    }

    insertSort(arr,size);

    //Printing our unsorted array
    printf("Unsorted array:");
    for(int i=0;i<size;i++){
        printf("%d ,",*(arr+i));
    }


    
    
    //Printing our sorted array
    printf("\nsorted array:");
    for(int i=0;i<size;i++){
        printf("%d ,",*(arr+i));
    }

    return 0;
}