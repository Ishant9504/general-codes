// WAP for preorder traversal in trees
#include <stdio.h>
#include <stdlib.h>

// Creating a structure node to store data in our tree
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

// Function to create a new node for the user
node *createnode(int data)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

node* create(){
    node* ptr=(node*)malloc(sizeof(node));
    if(ptr==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    int data;
    printf("\nenter data for element:");
    scanf("%d",&data);
    ptr->data=data;
    if(data==-1){
        return NULL;
    }
    
        printf("\nEnter elements on the left");
        ptr->left=create();
        printf("\nEnter elements on the right");
        ptr->right=create();
    
    return ptr;
}

// Function for preOrder Traversal in our tree
void preorder(node *root)
{
    if (root != NULL)
    {

        preorder(root->left);
        preorder(root->right);
        printf("%d ", root->data);
    }
}

// Function for inOrder Traversal in our tree
void inOrder(node *root)
{
    if (root != NULL)
    {

        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// Function for postorder Traversal in our tree
void postorder(node *root)
{
    if (root != NULL)
    {

        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Function to Search for an element in our binary search tree
node *Search(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return Search(root->left, key);
    }
    else if (root->data < key)
    {
        return Search(root->right, key);
    }
}

//Function to insert a node in the existing BST
void insert(node* root,int key){
    node *prev=NULL;
    node *current=root;
    while(current!=NULL){
    prev=current;
    if(key==prev->data){
        printf("Invalid! Cannot add duplicate elements");
        exit(1);
        }
    else if(key<prev->data){
        current=current->left;
        }
    else if(key>prev->data){
        current=current->right;
        }
    }
    node *ptr=createnode(key);
    if(key<prev->data){
        prev->left=ptr;
    }
    else {
        prev->right=ptr;
    }
}

// Driver code
int main()
{
    // Creating our binary Tree
    node *root = createnode(4);
    node *p1 = createnode(2);
    node *p2 = createnode(9);
    node *p11 = createnode(1);
    node *p12 = createnode(3);
    node *p21 = createnode(5);
    
    node* root1=create();
    inOrder(root1);
    // Linking the node together
    /*
             4
           /   \
          2     6
         / \   /
        1   3 5
   */
    root->left = p1;
    root->right = p2;
    p1->left = p11;
    p1->right = p12;
    p2->left = p21;
    p2->right = NULL;
    insert(root,8);
    // Preorder traversal in our binary tree
    printf("Post Order Traversal:");
    preorder(root);

    // inOrder traversal in our binary tree
    printf("\nInorder traversal:");
    inOrder(root);

    // postorder traversal in our binary tree
    printf("\nPost order Traversal:");
    postorder(root);

    // Searching for element in our BST
    node *ptr = Search(root, 5);
    printf("\nResult after searching is:%d", ptr->data);
}