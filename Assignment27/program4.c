///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program4.c
//  Descreption :   Copy small character from one string to another String
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    if (src == NULL)
    {
        return;
    }
    while (*src != '\0')
    {
        if ((*src>='a') && (*src<='z'))
        {
            *dest = *src;
            dest++;
        }
       src++;
    }
    *dest = '\0'; // imp :Terminate the destination string
}

int main()
{
    char Arr[50] = "Marvellous multi OS";
    char Brr[50] = {'\0'};

    StrCpySmall(Arr, Brr);

    printf("Copied small charater String are : %s\n", Brr);

    return 0;
}

/*
output :

Copied small charater String are : arvellousmulti

*/