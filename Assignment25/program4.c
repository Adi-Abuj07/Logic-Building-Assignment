///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program4.c
//  Descreption :   Diplay only digit from the String
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void DisplayDigit(char *str)
{
    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String:");
    scanf("%[^'\n']s", Arr);

    DisplayDigit(Arr);

    return 0;
}

/*
output :

Enter the String:Marve74LLou3y3
7433

*/