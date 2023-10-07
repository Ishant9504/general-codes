#include<stdio.h>
int main(){ 
        int num,i=0;
        printf("Enter number of elements:");
        scanf("%d",&num);
        int sumeven,sumodd;
        while (i<num){
            int carnum,sumeven=0,sumodd=0;
            printf("Enter license number:");
            scanf("%d",&carnum);
            while (carnum!=0){
                int digit = carnum%10;
                if(digit%2==0){
                    sumeven+=digit;
                }
                else sumodd+=digit;
                carnum/=10;    
            }
            printf("sum of even number:%d\n",sumeven);
            printf("sum of odd number:%d\n",sumodd);
            if (sumeven%4==0||sumodd%3==0){
               printf("yes\n");
            } 
            else printf("no\n");
           i++;
        }
    }
       


