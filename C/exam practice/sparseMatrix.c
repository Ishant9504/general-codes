// WAP to implement a sparse matrix program using structures
#include <stdio.h>
#include <stdlib.h>

// Defining the structure of non zero elements
typedef struct Element
{
    int row, col, value;
} Element;

// Defining the structure of Sparse matrix
typedef struct Sparse
{
    int rows, cols, numElements;
    Element *elements;
} Sparse;

// Initialisation function for the Sparse Matrix
Sparse *initialize(int row, int col, int numElements)
{
    Sparse *s;
    s = (Sparse *)malloc(sizeof(Sparse));
    s->rows = row;
    s->cols = col;
    s->numElements = numElements;
    s->elements = (Element *)malloc(numElements * sizeof(Element));
    return s;
}

// Function to enter the non zero elements into the sparse matrix
void enterElements(Sparse *s)
{
    printf("Enter the non zero elements of the sparse matrix:\n");
    for (int i = 0; i < s->numElements; i++)
    {
        printf("Enter row,column & value of non zero element:");
        scanf("%d%d%d", &s->elements[i].row, &s->elements[i].col, &s->elements[i].value);
    }
}

// Function to display the sparse matrix
void displaySparse(Sparse *s)
{
    int elementIndex = 0;
    for (int i = 0; i < s->rows; i++)
    {
        for (int j = 0; j < s->cols; j++)
        {
            if (elementIndex < s->numElements && s->elements[elementIndex].row == i && s->elements[elementIndex].col == j)
            {
                printf("%d ", s->elements[elementIndex].value);
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

// Driver code
int main()
{
    // Taking user input for the properties of the sparse matrix
    int row, col, num;
    printf("Enter rows , column and number of non zero elements:\n");
    scanf("%d%d%d", &row, &col, &num);

    // Creating a sparse matrix and initializing it
    Sparse *s = initialize(row, col, num);

    // Entering elements into the matrix
    enterElements(s);

    // Displaying our resultant matrix
    displaySparse(s);

    return 0;
}