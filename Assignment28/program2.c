///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   create the file
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

    printf("Enter the name of file name that u want to create:");
    scanf("%s",fname);

    fd=creat(fname,O_RDWR);
    
    if (fd==-1)
    {
        printf("Unable to create the file");
        return -1;
    }
    
    printf("File is successfully create with FD %d\n",fd);

    close(fd);
    
    return 0;
}

/*
output :

Enter the name of file name that u want to create:Hello.txt
File is successfully create with FD 3

*/