// WAP to insert a node in a linked list in the beginning
#include <stdio.h>
#include <stdlib.h>

// Declaration of structure node
struct node
{
    int data;
    struct node *next;
};

struct node *insertbegin(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

void traversal(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    while (ptr != NULL)
    {
        printf("Element is:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    // First node aka Head
    head->data = 2;
    head->next = second;

    // Second node
    second->data = 3;
    second->next = third;

    // Third node
    third->data = 4;
    third->next = fourth;

    // Fourth node
    fourth->data = 5;
    fourth->next = NULL;

    // Insertion of new node in the beginning
    head = insertbegin(head, 1);

    // Displaying the LL after updation
    traversal(head);
    return 0;
}