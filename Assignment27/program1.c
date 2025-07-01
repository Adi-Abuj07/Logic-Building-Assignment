///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   Copy the content of one string to another string
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    if (src == NULL)
    {
        return;
    }
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';   // imp :Terminate the destination string
}

int main()
{
    char Arr[50] = "Marvellous Multi OS";
    char Brr[50]={'\0'};

    StrCpyX(Arr, Brr);

    printf("Copied String : %s\n", Brr);

    return 0;
}

/*
output :

Copied String : Marvellous Multi OS

*/