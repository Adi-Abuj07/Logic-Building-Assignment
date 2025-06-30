///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program1.c
//  Descreption :   convert the string into lowercase
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void strlwrx(char *str)
{
    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
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

    strlwrx(Arr);

    printf("Modified string is : %s", Arr);

    return 0;
}

/*
output :

Enter the String:maVeLLOus 
Modified string is : mavellous

Enter the String:InFoSystem
Modified string is : infosystem

*/