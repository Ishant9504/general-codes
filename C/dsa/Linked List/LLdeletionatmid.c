//WAP to delete the node at a given index from a Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node* deletemid(struct node* head,int index){
    int i=0;
    struct node* p=head;
    struct node* q=head->next;
    while(i<index-1){
        p=p->next;
        q=q->next;
        i++;
    }

    p->next=q->next;
    free(q);
    return head;

}
void traverse(struct node*head){
    while(head!=NULL){
        printf("Element is : %d\n",head->data);
        head=head->next;
    }
}
int main(){
    
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    // First node Head
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
    head=deletemid(head,3);
    traverse(head);


}