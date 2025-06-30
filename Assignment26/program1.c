///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   check whether the character is present in the string or not
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

// Function to check whether a character is present in the string (case-insensitive)
BOOL ChkChar(char *str, char ch)
{
    BOOL Flag = FALSE;
    int displacement = 0;

    // If string is NULL, return FALSE
    if (str == NULL)
    {
        return Flag;
    }

    // Determine if character is uppercase or lowercase,
    // and set displacement value to match its opposite case
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        displacement = 32;        // Uppercase to lowercase
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        displacement = -32;   // Lowercase to uppercase
    }

    // Loop through the string
    while (*str != '\0')
    {
        // If current character matches directly or its opposite case
        if (*str == ch || *str == ch + displacement)
        {
            Flag = TRUE;   // Character found
            break;        // Exit the loop early
        }
        str++; // Move to next character
    }

    return Flag; // Return the result
}

int main()
{
    char Arr[20];                // String to hold user input
    char cValue = '\0';          // Character to search for
    BOOL bRet = FALSE;           // Store result from function

    // Accept string input from user
    printf("Enter the String: ");
    scanf(" %[^'\n']s", Arr);     // Reads string including spaces until newline

    // Accept character to search
    printf("Enter the Character to search: ");
    scanf(" %c", &cValue);

    // Call function to check character
    bRet = ChkChar(Arr, cValue);

    // Print result
    if (bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}

/*
output :

Enter the String :Marvellous
Enter the Charater to search :t
Character not found

Enter the String :Marvellouse
Enter the Charater to search :L
Character found

*/