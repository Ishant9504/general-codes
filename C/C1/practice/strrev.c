#include<stdio.h>
// #include<string.h>
// int main(){
//     char str[21]="abcdef";
//     int s=strlen(str);
//     printf(" 1:%d\n",s);
//     str[3]='\0';

//     s+=strlen(str);
//     printf(" 2: %d\n",s);
//     strcpy(str,"ABCD");
//     printf(" %d\n",s);
//     s+=strlen(str);
//     printf(" %d\n",s);
//     strcat(str,"ABC");
//     printf(" %d\n",s);
//     s+=strlen(str);
//     printf("%d",s);
// }
int main(){
    int p=8>5>2;
    int r=8>5>0;
    int q=8>5>1;
    printf("%d%d%d",p,r,q);
}