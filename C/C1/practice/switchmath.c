#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements");
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++){
        printf("enter element of array");
        scanf("%d",&marks[i]);       
    } 
    printf("The array is:");
    for(int j=0;j<n;j++){
     printf("%d,",marks[j]);
     }
    
    return 0;
}