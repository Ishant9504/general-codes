// WAP to implement stack using structure
#include <stdio.h>
#include <stdlib.h>

// Creating a structure stack
struct stack
{
    int size;
    int top;
    int *arr;
};

// Function to check if stack is empty
int isempty(struct stack *s)
{
    if (s->top == -1)
    {
        printf("\nstack is empty");
    }
    else
    {
        printf("\nstack isn't empty");
    }
}

// Function to push element into stack
int push(int num, struct stack *s)
{
    if (s->top == s->size)
    {
        printf("stack is full cannot add element");
    }
    s->top++;

    s->arr[s->top] = num;
}

// Function for popping element
int pop(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Under flow or stack is empty cannot pop any element");
        return 0;
    }
    printf("Popped element is:%d ", s->arr[s->top]);
    --s->top;
    return 1; // Implies success
}

// Function to print element at a certain index
int peek(struct stack *s, int index)
{
    if (index > s->size - 1 || index < 0 || s->top == -1)
    {
        printf("\nInvalid Index or stack underflow");
        return -1;
    }
    printf("\n%d", s->arr[(s->top) - index]);
    return 0;
}

// Function to display elements in stack
int display(struct stack *s)
{
    if (s->top == -1)
    {
        printf("\nStack is empty");
        return -1;
    }
    printf("The elements in stack are:");
    for (int i = s->top; i >= 0; i--)
    {
        printf("%d, ", s->arr[i]);
    }
    return 0;
}

// Driver code
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));

    //Check for memory allocation failure
    if(s==NULL){
        printf("Memory allocation failed");
        exit(0);
    }

    // Creating a dynamically alloted array of user defined size
    printf("Enter size of stack: ");
    scanf("%d", &s->size);
    s->arr = (int *)calloc((*s).size, sizeof(int));
    s->top = -1;

    // Inputting elements into the stack using push
    int num;
    printf("Enter elements of stack: ");
    for (int i = 0; i < s->size; i++)
    {
        scanf("%d", &num);
        push(num, s);
    }

    // Popping elements of stack
    for (int i = 0; i < s->size; i++)
    {
        int choice;
        printf("Enter choice:\n0-->continue\n1-->stop\n");
        scanf("%d", &choice);
        if (choice == 0)
        {
            pop(s);
            printf("\n");
        }
        else if (choice == 1)
        {
            break;
        }
        else
            ("Invalid choice");
    }

    display(s); // Displaying our stack

    peek(s, 1); // Checking element at some index

    isempty(s); // Checking if our stack if empty or not

    free(s->arr); // freeing our pointer array in stack

    return 0;
}