//wap to insert node in beginning of linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node * insertionmiddle(struct node *head,int data,int index){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node * p=head;
    ptr->data=data;
    int i=0;
    while(i<index-1){
        p=p->next;
        i++;
    }
   
    ptr->next=p->next;
    p->next=ptr;
    return head;
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

    head=insertionmiddle(head,24,1);

    traverse(head);
}
