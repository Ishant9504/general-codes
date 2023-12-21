#include<stdio.h>
#include<stdlib.h>

typedef struct Elements{
    int row,col,value;
} Elements;

typedef struct Sparse{
    int numElements,rows,cols;
    Elements * elements;
} Sparse;

Sparse* initialize(int numElements,int rows,int cols){
    Sparse* s;
    s=(Sparse *)malloc(sizeof(Sparse));
    s->numElements=numElements;
    s->rows=rows;
    s->cols=cols;
    s->elements=(Elements*)malloc(s->numElements*sizeof(Elements));
    return s;
}

void enterElements(Sparse * s){
    printf("Enter non zero elements of the Sparse matrix:\n");
    for(int i=0;i<s->numElements;i++){
        scanf("%d%d%d",&s->elements[i].row,&s->elements[i].col,&s->elements[i].value);
    }
}

void displaySparse(Sparse* s){
    int elementIndex=0;
    for(int i=0;i<s->rows;i++){
        for(int j=0;j<s->cols;j++){
            if(elementIndex<s->numElements && s->elements[elementIndex].row==i && s->elements[elementIndex].col==j){
                printf("%d ",s->elements[elementIndex].value);
                elementIndex++;
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    Sparse * s;
    s=initialize(3,3,3);
    enterElements(s);
    displaySparse(s);
}
