// WAP to implement stack using linked list
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the node structure for linked list
typedef struct node
{
    int data;
    struct node *next;
} node;

// Define a stack type data structure
typedef struct stack
{
    struct node *top;
} stack;

// Define a function to add node
node *createnew(int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}

// Function to initialize an empty stack
stack *creatstack()
{
    stack *s = (stack *)malloc(sizeof(stack));
    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    s->top = NULL;
    return s;
}

// Function to check if stack is empty
bool isEmptystack(stack *s)
{
    if (s->top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Function to push element in the stack
void push(stack *s, int data)
{
    node *ptr = createnew(data);
    ptr->next = (node *)s->top;
    s->top = ptr;
    printf("%d pushed to stack.\n", data);
}

// Function to pop element from stack
stack* pop(stack *s)
{
    if (isEmptystack(s) == true)
    {
        printf("Stack is empty cannot pop\n");
        exit(1);
    }
    node *ptr = s->top;
    int poppedData = ptr->data;
    s->top = (node *)ptr->next;
    printf("%d was popped from stack\n",ptr->data);
    free(ptr);
   
    return s;
}

// Function to peek in our stack at a given index
stack * peek(stack * s)
{
    if (isEmptystack(s) == true)
    {
        printf("Stack empty");
    }
    printf( "%d",s->top->data);
    return s;
}

// Function to traverse our stack
void traverse(node *top)
{
    printf("ELements:");
    while (top != NULL)
    {
        printf("%d, ", top->data);
        top = top->next;
    }
    printf("\n");
}

// Driver code
int main()
{
    stack *s = creatstack();

    push(s, 12);
    push(s, 10);
    push(s, 15);
    push(s, 20);
    push(s, 36);
    push(s, 45);

    traverse(s->top);

    s=pop(s);
    s=pop(s);
    s=pop(s);
    //s=peek(s);

    traverse(s->top);
    return 0;
}
