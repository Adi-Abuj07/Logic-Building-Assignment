///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program3.c
//  Descreption :   Return the frequency of character
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int displacement = 0;
    int iCount = 0;

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
            break;
        }
        iCount++;
        str++;
    }
    if (*str != '\0')
    {
        return iCount;
    }
    else
    {
        return -1;
    }
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

    iRet = FirstChar(Arr, cValue);

    printf("Character location is : %d", iRet);

    return 0;
}

/*
output :

Enter the String :Hello how are you
Enter the Charater to search :a
Character location is : 10

Enter the String :Hello how are you
Enter the Charater to search :i
Character location is : -1

*/