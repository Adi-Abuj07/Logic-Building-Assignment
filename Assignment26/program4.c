///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program4.c
//  Descreption :   Return the index of last occurrance of that character
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int LastChar(char *str, char ch)
{
    int displacement = 0;
    int iCount = 0;
    int iLast = -1;

    if (str == NULL)
    {
        return -1;
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
            iLast = iCount;
        }
        iCount++;
        str++;
    }
    return iLast;
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

    iRet = LastChar(Arr, cValue);

    if (iRet != -1)
    {
        printf("Last occurrence of '%c' found at index: %d\n", cValue, iRet);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", cValue);
    }

    return 0;
}

/*
output :

Enter the String :Aditya
Enter the Charater to search :a
Last occurrence of 'a' found at index: 5

Enter the String :Marvellous
Enter the Charater to search :p
Character 'p' not found in the string.

*/