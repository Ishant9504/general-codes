#include <stdio.h>

int main() {
    int num,i;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }

   for(i=num;i>0;i--){
    printf("%d",arr[i]);
   }
   int len=sizeof(arr);
   int rarr[num];
   
   for(int j=0;j<len;j++){
    rarr[j]=arr[len-j-1];
   }
   for(int k=0;i<len;i++){
    printf("%d",rarr[k]);
   }
    return 0;
}