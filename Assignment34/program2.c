///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Description :   Search last occurrence of a particular element in a singly linear linked list
//  Author :        Aditya Abuj
//  Date :          15/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>      // For printf, etc.
#include <stdlib.h>     // For malloc, free
#include <stdbool.h>    // For bool type (true/false)

// Structure definition for a node in the linked list
struct node
{
    int data;              // Data part of the node
    struct node *next;     // Pointer to the next node
};

// Typedefs for easy readability
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Function to insert a node at the beginning of the linked list
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    // Allocate memory for the new node
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialize the node
    newn->data = no;
    newn->next = NULL;

    // If list is empty, make new node as first
    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        // Link new node to existing list and update head
        newn->next = *first;
        *first = newn;
    }
}

// Function to search the last occurrence of a number in the linked list
int SearchFirstOcc(PNODE first, int no)
{
    PNODE temp = first;
    int iCount = 0;      // Current node position
    int iRes = -1;       // Store index of last occurrence

    // If list is empty
    if (first == NULL)
    {
        printf("Linked list is empty");
        return -1;
    }

    // Traverse the list
    while (temp != NULL)
    {
        iCount++;  // Increment position
        if (temp->data == no)
        {
            iRes = iCount;  // Update iRes with latest match
        }
        temp = temp->next;
    }

    // Return last occurrence index (or -1 if not found)
    return iRes;
}

// Function to display the linked list
void Display(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    // If list is empty
    if (first == NULL)
    {
        printf("Linked list is empty");
        return;
    }

    // Traverse the list and print each node
    while (temp != NULL)
    {
        printf("| %d |->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");  // End of list
}

// Main function
int main()
{
    PNODE head = NULL;  // Initialize the list as empty
    int iRes = 0;

    // Insert elements in the list
    InsertFirst(&head, 30);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    // Display the list
    Display(head);

    // Search last occurrence of 30
    iRes = SearchFirstOcc(head, 30);
    if (iRes == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("\nElement is found at index : %d", iRes);
    }

    return 0;
}

/*
    Output:
    | 10 |->| 20 |->| 30 |->| 40 |->| 30 |->NULL
    Element is found at index : 5

    Explanation:
    Element 30 appears at positions 3 and 5.
    So, last occurrence is at index 5.
*/
