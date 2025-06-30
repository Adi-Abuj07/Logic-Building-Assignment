///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program3.c
//  Descreption :   toggle the string character
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void strtogglex(char *str)
{
    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String:");
    scanf("%[^'\n']s", Arr);

    strtogglex(Arr);

    printf("Modified string is : %s", Arr);

    return 0;
}

/*
output :

Enter the String:MarVelloUse
Modified string is : mARvELLOuSE

Enter the String:InfoSYstem
Modified string is : iNFOsySTEM

*/