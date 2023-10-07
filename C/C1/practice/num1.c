//WAP TO CHECK ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int main(){
   int n,onum,rem,res=0;
   printf("enter a integer:");
   scanf("%d",&n);
   printf("%d",n);
   n=onum;
   while (onum!=0){
    rem=n%10;
    res+=pow(rem,3);
    n/=10;
    }
    if(n==res){
        printf(" is an armstrong number" );
        
    }else{
        printf(" is not an armstrong number");
    }
    return 0;
}

