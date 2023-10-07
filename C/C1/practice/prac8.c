#include<stdio.h>
int main(){
   int day;
   printf("type\n1-monday\n2-tuesday\n3-wednesday\n4-thursday\n5-friday\n6-saturday\n7-sunday\n");
   scanf("%d",&day);
   printf("The user choice was-%d\n",day);
   switch(day){
    case 1:printf("today is monday"); break;
    case 2:printf("today is tuesday"); break;
    case 3:printf("today is wednesday"); break;
    case 4:printf("today is thursday");break;
    case 5:printf("today is friday"); break;
    case 6:printf("today is saturday");break;
    case 7:printf("today is sunday"); break;
    default:printf("enter a valid number!!!!");
   }
   
   return 0;
}