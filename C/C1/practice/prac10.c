#include<stdio.h>
int main(){
    char t;
    printf("Enter team name initial-\ni-india\na-australia\n");
    scanf("%c",&t);
    if(t=='i'){
        printf("India won the match");
        
    }
    else{
        printf("Australia lost the match");
    }
    return 0;
}