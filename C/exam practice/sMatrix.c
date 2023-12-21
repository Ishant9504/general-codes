#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
    int row, col, value;
} element;

typedef struct Sparse
{
    int rows, cols, numElements;
    element *elem;
} sparse;

sparse *initialize(int rows, int cols, int numElements)
{
    sparse *s = (sparse *)malloc(sizeof(sparse));
    if (s == NULL)
    {
        printf("Memory Allocation Failed\n");
        return NULL;
    }
    s->rows = rows;
    s->cols = cols;
    s->numElements = numElements;
    s->elem = (element *)malloc(numElements * sizeof(element));

    return s;
}

sparse *enterElements(sparse *s)
{
    int row, col;
    printf("Enter the non zero elements' row,col,value::\n");
    for (int i = 0; i < s->numElements; i++)
    {
        printf("Enter:");
        scanf("%d%d%d", &s->elem[i].row, &s->elem[i].col, &s->elem[i].value);
    }

    return s;
}

void displayMatrix(sparse *s)
{
    int elementIndex = 0;
    for (int i = 0; i < s->rows; i++)
    {
        for (int j = 0; j < s->cols; j++)
        {
            if (elementIndex < s->numElements && s->elem[elementIndex].row == i && s->elem[elementIndex].col == j)
            {
                printf("%d ", s->elem[elementIndex].value);
                elementIndex++;
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols, numnonZero;
    printf("Enter rows,cols, and number of non zero elements:");
    scanf("%d%d%d", &rows, &cols, &numnonZero);
    sparse *s = initialize(rows, cols, numnonZero);

    enterElements(s);

    displayMatrix(s);

    return 0;
}