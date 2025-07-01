///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Descreption :   Copy the number of character  from one string to another string
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrNCpyX(char *src, char *dest, int icnt)
{
    if (src == NULL || icnt < 0)
    {
        return;
    }
    while ((*src != '\0') && (icnt != 0))
    {
        *dest = *src;
        dest++;
        src++;
        icnt--;
    }
    *dest = '\0'; // imp :Terminate the destination string
}

int main()
{
    char Arr[50] = "Marvellous Multi OS";
    char Brr[50] = {'\0'};

    StrNCpyX(Arr, Brr, 10);

    printf("Copied String : %s\n", Brr);

    return 0;
}

/*
output :

Copied String : Marvellous

*/