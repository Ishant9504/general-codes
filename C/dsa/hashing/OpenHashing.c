// Implementing Hashing in a program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

// Structure storing data of students i.e their name and roll no:
typedef struct Student
{
    char name[30];
    int rollno;
} Student;

// Structure node that'll store the student element and address of next node
typedef struct Node
{
    struct Student *stud;
    struct Node *next;
} Node;

// Creating a hashtable that'll store an array of type node and creating a global hashtable
struct Hashtable
{
    Node *students[SIZE];
} *H;

// Hash function for open Hatching
int hashfunction(int key)
{
    return key % SIZE;
}

// Function for creating and initializing student variables
Student *createStudent()
{
    Student *s = (Student *)malloc(sizeof(Student));

    if (s == NULL)
    { // checking if memory allocation for student * failed
        printf("Memory Allocation has failed\n");
        exit(0);
    }

    // Inputting values into our member variables
    printf("enter student name:");
    scanf(" %[^\n]", s->name);
    getchar();
    printf("enter student roll no:");
    scanf("%d", &(s->rollno));

    // Getting our index for the hashtable using hash function
    int index = hashfunction(s->rollno);

    // creating a node that'll store our data member
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->stud = s;

    // Inserting the node into our hash table
    if (H->students[index] == NULL)
    {
        H->students[index] = newnode;
        newnode->next = NULL;
    }
    else
    {
        Node *ptr = H->students[index];
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->next = NULL;
        free(ptr);
    }
    return s;
}

// Search function
void display(int key)
{
    int index = hashfunction(key);
    if (H->students[index] == NULL)
    {
        printf("No element with roll no %d found in the record\n", key);
        return;
    }
    else
    {
        Node *ptr = H->students[index];
        while (ptr != NULL)
        {
            if (ptr->stud->rollno == key)
            {
                printf("Record found!! Student with roll no %d is %s\n", key, ptr->stud->name);
                return;
            }
            else
            {
                ptr = ptr->next;
            }
        }
        printf("No element with roll no %d found in the record\n", key);
        free(ptr);
    }
    return;
}

int main()
{ // Initializing a hash table to store array of students
    H = (struct Hashtable *)malloc(sizeof(struct Hashtable));
    if (H == NULL)
    {
        printf("Memory Allocation failed\n");
        exit(0);
    }

    // Initializing every element with NULL
    for (int i = 0; i < SIZE; i++)
    {
        H->students[i] = NULL;
    }

    // creating the array of students
    int number;
    printf("enter number of students:");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        Student *s = createStudent();
    }

    // Searching for our element
    int key;
    printf("Enter roll no to look for:");
    scanf("%d", &key);

    display(key);
    return 0;
}
