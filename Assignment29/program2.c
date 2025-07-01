///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Descreption :   Count small characters from the file
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

int CountSmall(char Fname[])
{
    int fd = 0, iRet = 0, iCnt = 0, iSmallCount = 0; 
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
                if ((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
                {
                    iSmallCount++; 
                }
            }
            memset(Buffer, '\0', BUFFER_SIZE);
        }

        close(fd);
    }
    return iSmallCount;         
}

int main()
{
    char FileName[30];          
    int iRet = 0;               

    printf("Enter the file name: ");
    scanf("%s", FileName);      

    iRet = CountSmall(FileName);

    printf("Number of Small characters are: %d\n", iRet);

    return 0;
}

/*
output:

Enter the file name: Demo.txt
File is successfully opened with fd : 3
Number of Small characters are: 28

*/