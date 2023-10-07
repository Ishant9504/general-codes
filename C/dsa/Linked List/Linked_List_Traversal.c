// WAP for a linked list traversal
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }

}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *sec = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    head->data = 8;
    head->next = sec;
    sec->data = 10;
    sec->next = third;
    third->data = 10;
    third->next = NULL;
    traverse(head);
}
