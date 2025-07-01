///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   Display the file size  
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0, iRet = 0, iCount = 0;
    char Fname[100] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file that u want to open :");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open the file");
        return -1;
    }
    else
    {
        printf("File is successfully open with FD %d\n", fd);

        while ((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
        {
            iCount += iRet;
        }
        printf("File size is %d byte", iCount);
        close(fd);
    }
}

/*
output:

Enter the file that u want to open :Helloo.txt
File is successfully open with FD 3
File size is 68 byte

*/