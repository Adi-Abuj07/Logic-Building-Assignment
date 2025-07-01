///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   Count capital characters from the file
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>          // For input/output functions like printf, scanf
#include <stdlib.h>         // For general functions like exit
#include <fcntl.h>          // For open() function and file modes
#include <unistd.h>         // For read() and close() functions
#include <string.h>         // For memset() function

#define BUFFER_SIZE 1024    // Size of buffer to read file data in chunks

// Function to count capital letters in a file
int CountCapital(char Fname[])
{
    int fd = 0, iRet = 0, iCnt = 0, iCapCount = 0; // Variables for file, read result, loop, count
    char Buffer[BUFFER_SIZE] = {'\0'};             // Buffer to store file content temporarily

    // Open the file in read-only mode
    fd = open(Fname, O_RDONLY);
    if (fd == -1)              // If file opening fails
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n", fd);

        // Read file content until the end
        while ((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
        {
            // Loop through each character in the buffer
            for (iCnt = 0; iCnt < iRet; iCnt++)
            {
                // Check if character is a capital letter (A to Z)
                if ((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
                {
                    iCapCount++; // Increase capital letter count
                }
            }
            // Clear the buffer after processing it
            memset(Buffer, '\0', BUFFER_SIZE);
        }

        // Close the file after reading
        close(fd);
    }

    return iCapCount;           // Return total number of capital letters
}

int main()
{
    char FileName[30];          // Array to store file name input by user
    int iRet = 0;               // Variable to store result from CountCapital

    // Ask user to enter file name
    printf("Enter the file name: ");
    scanf("%s", FileName);      // Read file name

    // Call function to count capital letters
    iRet = CountCapital(FileName);

    // Display the result
    printf("Number of capital characters are: %d\n", iRet);

    return 0;
}

/*
output:

Enter the file name:Demo.txt
File is succesfully opened with fd : 3
Number of capital characters are : 15

*/