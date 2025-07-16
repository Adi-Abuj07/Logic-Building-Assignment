///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name   : Program4.c
//  Description : Find the minimum element in a singly linear linked list
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
    int data;              // Data part of the node
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

    // Assign data and initialize next pointer
    newn->data = no;
    newn->next = NULL;

    // If list is empty, make new node the head
    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        // Otherwise insert at beginning
        newn->next = *first;
        *first = newn;
    }
}

// Function to find the minimum value in the linked list
int Minimum(PNODE first)
{
    PNODE temp = first;

    // If list is empty
    if (first == NULL)
    {
        printf("Linked list is empty\n");
        return -1;
    }

    int iMin = temp->data;  // Initialize with first node's data

    // Traverse list and find the minimum
    while (temp != NULL)
    {
        if (temp->data < iMin)
        {
            iMin = temp->data;
        }
        temp = temp->next;
    }

    return iMin;
}

// Function to display the linked list
void Display(PNODE first)
{
    PNODE temp = first;

    // If list is empty
    if (first == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    // Traverse and print each node
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
    PNODE head = NULL;   // Head pointer
    int iRes = 0;        // Store result

    // Insert elements into linked list
    InsertFirst(&head, 30);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    // Display list
    Display(head);

    // Get minimum value
    iRes = Minimum(head);

    // Print result
    printf("Minimum element in linked list is : %d\n", iRes);
    
    return 0;
}

/*
    Output:

    | 10 |->| 20 |->| 30 |->| 40 |->| 30 |->NULL
    Minimum element in linked list is : 10
*/
