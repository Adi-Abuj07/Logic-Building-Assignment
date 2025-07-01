///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   Count white spaces from the file
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

int CountWhite(char Fname[])
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
                if (Buffer[iCnt] == ' ')
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

    printf("Enter the file name: ");
    scanf("%s", FileName);      

    iRet = CountWhite(FileName);

    printf("Number of white spaces are: %d\n", iRet);

    return 0;
}

/*
output:



*/