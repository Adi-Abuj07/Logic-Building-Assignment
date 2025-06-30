///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Descreption :   convert the string into Uppercase
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void struprx(char *str)
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
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String:");
    scanf("%[^'\n']s", Arr);

    struprx(Arr);

    printf("Modified string is : %s", Arr);

    return 0;
}

/*
output :

Enter the String:marvellos
Modified string is : MARVELLOS

Enter the String:infosystem
Modified string is : INFOSYSTEM

*/