///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program5.c
//  Descreption :   Concat to strings
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
        src++;                // we reached at last index of first index
    }
    while (*dest != '\0')
    {
        *src = *dest;        //add first string into seconde string
        src++;
        dest++;
    }
    *dest = '\0';   // imp :Terminate the destination string
}

int main()
{
    char Arr[50] = "Marvellous Infosystem ";
    char Brr[50] = "Logic Building";

    StrCpySmall(Arr, Brr);

    printf("Concat String are : %s\n", Arr);

    return 0;
}

/*
output :

Concat String are : Marvellous Infosystem Logic Building

*/