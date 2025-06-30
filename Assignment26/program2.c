///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Descreption :   Return the frequency of character
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int displacement=0;
    int iCount = 0;

    if (str == NULL)
    {
        return 0;
    }

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        displacement = 32;
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        displacement = -32;
    }

    while (*str != '\0')
    {
        if (*str == ch || *str == ch + displacement)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String :");
    scanf(" %[^'\n']s", Arr);

    printf("Enter the Charater to search :");
    scanf(" %c", &cValue);

    iRet = CountChar(Arr, cValue);

    printf("Character frequency is : %d", iRet);

    return 0;
}

/*
output :

Enter the String :MarvelloUsE
Enter the Charater to search :e
Character frequency is : 2

Enter the String :Hello how are you
Enter the Charater to search :o
Character frequency is : 3

*/