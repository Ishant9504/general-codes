#include<stdio.h>
int main(){
    int students,marks,roll_no;
    printf("Enter no of students:");
    scanf("%d",&students);
    int arr[students];
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        printf("Enter marks of student %d:",i+1);
        scanf("%d",&arr[i]);
        }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
    for(int i=0;i<size;i++){
        if(arr[i]<=35){
            printf("Roll no:%d\n",i+1);
        }
    }
}

