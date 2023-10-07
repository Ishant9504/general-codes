// WAP to insert a node in a linked list in the beginning
#include <stdio.h>
#include <stdlib.h>

// Declaration of structure node
struct node
{
    int data;
    struct node *next;
};

struct node *deletebegin(struct node *head)
{
    head=head->next;
    return head;
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
    head->data = 1;
    head->next = second;

    // Second node
    second->data = 2;
    second->next = third;

    // Third node
    third->data = 3;
    third->next = fourth;

    // Fourth node
    fourth->data = 4;
    fourth->next = NULL;
    printf("Before Deletion\n");
    traversal(head);
    // Insertion of new node in the beginning
    head = deletebegin(head);

    // Displaying the LL after updation
    printf("After deletion\n");
    traversal(head);
    return 0;
}