///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   write the string at the end of the file
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0, iRet = 0, iCount = 0;
    char Fname[100] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file that u want to open :");
    scanf("%s", Fname);

    printf("Enter what u want to write inside the file :");
    scanf(" %[^'\n']s", Buffer);

    fd = open(Fname, O_CREAT | O_WRONLY | O_APPEND);
    if (fd == -1)
    {
        printf("Unable to open the file");
        return -1;
    }
    else
    {
        printf("File is successfully open with FD %d\n", fd);

        iRet = write(fd, Buffer, strlen(Buffer));

        printf("%d bytes gets written sucessfully\n", iRet);

        close(fd);
    }
}

/*
output:

Enter the file that u want to open :Helloo.txt
Enter what u want to write inside the file :Hello Aditya Here
File is successfully open with FD 3
17 bytes gets written sucessfully

*/