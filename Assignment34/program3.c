///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name   : Program3.c
//  Description : Adds elements to a singly linear linked list and calculates the sum of all elements.
//  Author      : Aditya Abuj
//  Date        : 15/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure for node in singly linked list
struct node
{
    int data;              // Stores data of the node
    struct node *next;     // Pointer to next node
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Function to insert a node at the beginning
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    // Allocate memory for new node
    newn = (PNODE)malloc(sizeof(NODE));

    // Assign data and set next to NULL
    newn->data = no;
    newn->next = NULL;

    // If list is empty, new node becomes first
    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        // Link new node at the beginning
        newn->next = *first;
        *first = newn;
    }
}

// Function to calculate sum of all node data
int Addition(PNODE first)
{
    PNODE temp = first;
    int iSum = 0;

    // If list is empty
    if (first == NULL)
    {
        printf("Linked list is empty\n");
        return -1;
    }

    // Traverse and add node data
    while (temp != NULL)
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }

    return iSum;
}

// Function to display linked list
void Display(PNODE first)
{
    PNODE temp = first;

    // If list is empty
    if (first == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    // Traverse and print all nodes
    while (temp != NULL)
    {
        printf("| %d |->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Main function
int main()
{
    PNODE head = NULL;     // Initialize head pointer
    int iRes = 0;          // Variable to hold addition result

    // Insert nodes at beginning
    InsertFirst(&head, 30);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    // Display the list
    Display(head);

    // Get sum of all elements
    iRes = Addition(head);
    printf("Addition of all elements in linked list is : %d\n", iRes);

    return 0;
}


/*
    Output:

   | 10 |->| 20 |->| 30 |->| 40 |->| 30 |->NULL
   Addition of all elements in linked list is : 130

*/