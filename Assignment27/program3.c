///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program3.c
//  Descreption :   Copy capital character from one string to another String
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    if (src == NULL)
    {
        return;
    }
    while (*src != '\0')
    {
        if ((*src>='A') && (*src<='Z'))
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
    char Arr[50] = "Marvellous Multi OS";
    char Brr[50] = {'\0'};

    StrCpyCap(Arr, Brr);

    printf("Copied Capital character String are : %s\n", Brr);

    return 0;
}

/*
output :

Copied String : MMOS

*/