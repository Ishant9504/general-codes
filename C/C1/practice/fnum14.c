#include<stdio.h>
int main(){
    int math,hin,engl,phy,chem;
    printf("math are:");
    scanf("%d",&math);
    printf("hin are:");
    scanf("%d",&hin);
    printf("engl are:");
    scanf("%d",&engl);
    printf("phy are:");
    scanf("%d",&phy);
    printf("chem are:");
    scanf("%d",&chem);
    float average=(math+hin+engl+phy+chem)/5.0;
    printf("average is %f \n",average); 
    if(average>=90.0){
        printf("grade A \n");
    }
    else if(average<=90 && average>80){
        printf("grade B");
    }
    else if(average<=80 && average>70){
        printf("grade C");
    }
    else if(average<=70 && average>60){
        printf("grade D");
    }
   
    return 0;
}