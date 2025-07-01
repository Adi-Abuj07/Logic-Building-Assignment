///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   Count the number of occurrences of character in the file
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

int CountChar(char Fname[], char ch)
{
    int fd = 0, iRet = 0, iCnt = 0, iCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n", fd);

        while ((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
        {
            for (iCnt = 0; iCnt < iRet; iCnt++)
            {
                if (Buffer[iCnt] == ch)
                {
                    iCount++;
                }
            }
            memset(Buffer, '\0', BUFFER_SIZE);
        }
        close(fd);
    }
    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue;

    printf("Enter the file name: ");
    scanf("%s", FileName);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency of '%c' is : %d\n",cValue,iRet);

    return 0;
}

/*
output:

Enter the file name: Demo.txt
Enter the character: e
File is successfully opened with fd : 3
Frequency of 'e' is : 7

*/