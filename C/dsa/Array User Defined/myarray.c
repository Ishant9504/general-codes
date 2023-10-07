//Make a user defined array with different functions using structures
#include<stdio.h>
#include<stdlib.h>
struct myarray
{
    int total_size;
    int size_used;
    int *ptr;
};
void create( struct myarray * arr,int T_size,int U_size){
    (*arr).total_size=T_size;//a->total_size=T_size;
    (*arr).size_used=U_size;
    (*arr).ptr=(int*)malloc(T_size*sizeof(int));
}
void setvalue(struct myarray *arr ){
    printf("Enter elements of array:");
    for(int i=0;i<arr->size_used;i++){
        scanf("%d",(arr->ptr)+i);
    }
}
void show(struct myarray *arr){
    printf("Elements in my array are:");
    for(int i=0;i<arr->size_used;i++){
        printf("%d ",*((arr->ptr)+i));
    }
    printf("\n");
}
void getval(struct myarray *arr,int i){
    printf("Value at index %d :%d",i,*((arr->ptr)+i));
}

int main(){
    struct myarray marks;
    create(&marks,10,3);
    setvalue(&marks);
    show(&marks);
    getval(&marks,1);
    return 0;
}