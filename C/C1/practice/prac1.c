//using functions to print namaste and french
#include<stdio.h>
void printnamaste();
void printbonjour();
int main(){
    char a;
    printf("i for india:\nf for french:\nenter response:");
    scanf("%c",&a);
    switch(a){
        case 'f':
            printbonjour();
            break;
        case 'i':
            printnamaste();
            break;
         
        }
    

   
    return 0;
}
//making a function to print namaste for indian and bonjour for french
void printnamaste(){
    printf("namaste");
}
void printbonjour(){
    printf("bonjour");
}