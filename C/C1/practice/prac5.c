/*program to take input from user and printing area of circle,square
and rectangle via the use of function
*/
#include<stdio.h>
void areasqr(int s);
void arearect(int a,int b);
void areacirc(float r);
int main(){
    char c;
    printf("s for sqaure\nr for rectangle\nc for circle\nenter:");
    scanf("%c",&c);
    if(c=='s'){
        int s;
        printf("enter side of square:");
        scanf("%d",&s);
        areasqr(s);
    }else if(c=='r'){
        int a,b;
        printf("enter side 1:");
        scanf("%d",&a);
        printf("entr side 2:");
        scanf("%d",&b);
        arearect(a,b);
    }else if(c=='c'){
        float r;
        printf("enter radius:");
        scanf("%f",&r);
        areacirc(r);
    }
    return 0;
    }
    void areasqr(int s){
        printf("area of square is:%d",s*s);
    }
    void arearect(int a,int b){
        printf("area of rectangle is:%d",a*b);
    }
    void areacirc(float r){
        printf("area of circle is :%f",3.14*r*r);
    }
    
    
    
