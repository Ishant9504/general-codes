//WAP to search an array for an element x using binary search
#include<stdio.h>
#include<stdlib.h>
int search(int arr[],int element,int size){
    int start=0,end=size-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if((arr[mid])==element){
           return mid;
        }
      
        else if(arr[mid]<element){
            start=mid+1;
        }  
          else if (arr[mid]>element){
            end=mid-1;

        }
    }
    
};
int main(){
    int num,elem;
    printf("Enter no of elements in array:");
    scanf("%d",&num);
    int *arr=(int*)calloc(num,sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation failed\n");
        exit(0);
    }
    printf("Enter elements of array:");
    for(int i=0;i<num;i++){
        scanf("%d",arr+i);
    }
    for(int i=0;i<num;i++){
        for(int j=i;j<num;j++){
            if(*(arr+i)>*(arr+j)){
                int temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
        }
    }
    printf("The sorted array is:");
    for(int i=0;i<num;i++){
        printf("%d ",*(arr+i));
    }
    printf("\nEnter number you wanna search");
    scanf("%d",&elem);
    printf("At this index can the number be found:%d",search(arr,elem,num));
    free(arr);
    return 0;
}