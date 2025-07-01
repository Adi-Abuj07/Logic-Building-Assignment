///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   Open the file in read mode
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <fcntl.h>

int main()
{
    int fd=0;
    char fname[20]={'\0'};

    printf("Enter the name of file name that u want to open:");
    scanf("%s",fname);

    fd=open(fname,O_RDWR);
    
    if (fd==-1)
    {
        printf("Unable to create the file");
        return -1;
    }
    
    printf("File is successfully open with FD %d\n",fd);

    close(fd);
    
    return 0;
}

/*
output :

Enter the name of file name that u want to open:Demo.txt
File is successfully open with FD 3

*/