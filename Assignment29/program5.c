///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   Read the number of character from starting position take position from user
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

void DisplayN(char Fname[], int iSize)
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n", fd);

        read(fd, Buffer, iSize);
        
        printf("%s",Buffer);

        close(fd);
    }
}

int main()
{
    char FileName[30];
    int iValue;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    printf("Enter the number of bytes to read : ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}

/*
output:

Enter the file name: Demo.txt
Enter the number of bytes to read : 40
File is successfully opened with fd : 3
Code is not just syntax; it's the langua

*/