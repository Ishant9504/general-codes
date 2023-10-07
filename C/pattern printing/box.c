#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<(2*n-1);i++){
        for (int j = 0; j<(2*n-1); j++)
        {
           if (i==0||j==0||i==2*n-1||j==2*n-1)
           {
            printf("%d",n);
           }
           
        }
        
    }
}