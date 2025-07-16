///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   search first occurrence of particular element in single linear linkedlist
//  Author :        Aditya Abuj
//  Date :          15/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>      // For printf, etc.
#include <stdlib.h>     // For malloc, free
#include <stdbool.h>    // For bool type (true/false)

// Define the structure for a node in the linked list
struct node
{
    int data;              // Data part of the node
    struct node *next;     // Pointer to the next node
};

// Typedefs for convenience
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

    // If the list is empty, new node becomes the first node
    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        // Link the new node to the current first node
        newn->next = *first;
        // Update the first pointer to point to the new node
        *first = newn;
    }
}

// Function to search the first occurrence of a number in the linked list
int SearchFirstOcc(PNODE first, int no)
{
    PNODE temp = first;
    int iCount = 0;       // To count the position
    bool Flag = false;    // To track if element is found

    // If the list is empty
    if (first == NULL)
    {
        printf("Linked list is empty");
        return -1;
    }

    // Traverse the list
    while (temp != NULL)
    {
        iCount++;                    // Increase position count
        if (temp->data == no)       // If match found
        {
            Flag = true;
            break;                  // Stop searching after first match
        }
        temp = temp->next;          // Move to next node
    }

    if (Flag == true)
    {
        return iCount;              // Return position where element found
    }
    else
    {
        return -1;                  // Return -1 if not found
    }
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
    PNODE head = NULL;  // Initialize empty list
    int iRes = 0;

    // Insert elements at the beginning
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    // Display the list
    Display(head); 

    // Search for first occurrence of 30
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
    | 10 |->| 20 |->| 30 |->| 40 |->NULL

    Element is found at index : 3
*/