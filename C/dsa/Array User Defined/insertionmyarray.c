// Insertion in a user defined array
#include <stdio.h>
#include <stdlib.h>
// Define a structure
struct myarray
{
    int total_size;
    int size_used;
    int *ptr;
};
void create(struct myarray *arr, int T_size, int U_size)
{
    (*arr).total_size = T_size; // a->total_size=T_size;
    (*arr).size_used = U_size;
    (*arr).ptr = (int *)malloc(T_size * sizeof(int));
}
void setvalue(struct myarray *arr)
{
    printf("Enter elements of array:");
    for (int i = 0; i < arr->size_used; i++)
    {
        scanf("%d", (arr->ptr) + i);
    }
}
void show(struct myarray *arr)
{
    for (int i = 0; i < arr->size_used; i++)
    {
        printf("%d ", *((arr->ptr) + i));
    }
    printf("\n");
}
int insertion(struct myarray *arr, int val, int index)
{
    if (arr->size_used >= arr->total_size)
    {
        return -1;
    }
    for (int i = arr->size_used ; i >= index; i--)
    {

        *(((arr->ptr) + i) + 1) = *((arr->ptr) + i);
        // (*arr).ptr[i+1]=(*arr).ptr[i];
        if (i == index)
        {
            *((arr->ptr) + i) = val;
        }
    }
    arr->size_used++;
}
// void getval(struc>t myarray *arr,int i){
//     printf("Value at index %d :%d",i,*((arr->ptr)+i));
// }

int main()
{
    struct myarray array;
    int size, sizeuse, value, index;
    printf("Enter total size of array to be created: ");
    scanf("%d", &size);
    printf("Enter number of elements in array: ");
    scanf("%d", &sizeuse);
    create(&array, size, sizeuse);
    setvalue(&array);
    printf("Elements in the array are:");
    show(&array);
    printf("Enter value to be inserted and on which index: ");
    scanf("%d%d", &value, &index);
    insertion(&array, value, index);
    printf("Elements in the updated array are:");
    show(&array);
    // getval(&marks,1);
    return 0;
}