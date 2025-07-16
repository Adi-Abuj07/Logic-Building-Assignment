///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name   : Program4.c
//  Description : Find the maximum element in a singly linear linked list
//  Author      : Aditya Abuj
//  Date        : 15/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure for a node in the linked list
struct node
{
    int data;              // Data of the node
    struct node *next;     // Pointer to the next node
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Function to insert a new node at the beginning of the list
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    // Allocate memory for new node
    newn = (PNODE)malloc(sizeof(NODE));

    // Assign data and set next pointer to NULL
    newn->data = no;
    newn->next = NULL;

    // If list is empty, make new node the first node
    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        // Otherwise, link the new node before the current first node
        newn->next = *first;
        *first = newn;
    }
}

// Function to find the maximum value in the linked list
int Maximum(PNODE first)
{
    PNODE temp = first;

    // If list is empty, show error and return -1
    if (first == NULL)
    {
        printf("Linked list is empty\n");
        return -1;
    }

    int iMax = temp->data;  // Initialize max with first node's data

    // Traverse the list to find maximum
    while (temp != NULL)
    {
        if (temp->data > iMax)
        {
            iMax = temp->data;
        }
        temp = temp->next;
    }

    return iMax;  // Return maximum value
}

// Function to display the linked list
void Display(PNODE first)
{
    PNODE temp = first;

    // If list is empty, print message and return
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

// Entry point of the program
int main()
{
    PNODE head = NULL;   // Initialize the head pointer
    int iRes = 0;        // Variable to store result

    // Insert elements into the linked list
    InsertFirst(&head, 30);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    // Display the linked list
    Display(head);

    // Find the maximum element
    iRes = Maximum(head);

    // Print the result
    printf("Maximum element in linked list is : %d\n", iRes);
    
    return 0;
}

/*
    Output:

   | 10 |->| 20 |->| 30 |->| 40 |->| 30 |->NULL

    Maximum element in linked list is : 40

*/