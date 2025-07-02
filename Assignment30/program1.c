///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   checks whether 15th bit is ON or OFF
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>   

// Creating a custom boolean type using int
typedef int BOOL;

// Defining TRUE and FALSE constants
#define TRUE 1
#define FALSE 0

// Defining an unsigned integer type for simplicity
typedef unsigned int UINT;

// Function to check if 15th bit (position 14) is ON
BOOL ChkBit(UINT iNo)
{
    // Mask to check 15th bit (2^14 = 16384)
    UINT imask = 16384;
    UINT iRes = 0;

    // Perform bitwise AND between number and mask
    iRes = iNo & imask;

    // If result is not zero, 15th bit is ON
    return (iRes != 0);
}

int main()
{
    UINT iValue = 0;     // Variable to store user input
    BOOL bRet = FALSE;   // Variable to store return value of ChkBit()

    // Prompt user to enter a number
    printf("Enter the Number : ");
    scanf("%d", &iValue);   // Read number from user

    // Call function to check 15th bit
    bRet = ChkBit(iValue);

    // Display result based on return value
    if (bRet == TRUE)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}

/*
output:

Enter the Number : 81988  
15th bit is ON

Enter the Number : 65604  
15th bit is OFF

*/