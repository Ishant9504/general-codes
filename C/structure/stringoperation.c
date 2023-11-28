#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char string1[20],copiedstring1[25];
    //Getting our string from user
    printf("enter string you wanna get:");
    //used fgets here as it accounts for the blank space in the middle too unlike scanf function
    fgets(string1,sizeof(string1),stdin);
    
    int index=0;
    for(int i=0;i<strlen(string1);i++){
            
            if(string1[i]==' '){
                continue;
            }
            else{
                copiedstring1[index]=string1[i];
                index++;
            }
        
    }
    copiedstring1[index]='\0';

    for(int j=0;j<strlen(copiedstring1);j++){
        printf("%c",copiedstring1[j]);
    }
    return 0;

}