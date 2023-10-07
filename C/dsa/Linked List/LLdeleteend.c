//WAP to delete last node of a linked list
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* dellast(struct node* head){
    struct node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    free(ptr);
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
int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* sec=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));

    //First node
    head->data=1;
    head->next=sec;

    //Second node
    sec->data=2;
    sec->next=third;

    //Third node
    third->data=3;
    third->next=NULL;

    //Deletion of last node
    dellast(head);
    traversal(head);

}