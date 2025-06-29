///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program4.c
//  Descreption :   check whether string contains vowels or not
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 0
#define FALSE 1
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL Flag = FALSE;
    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            Flag = TRUE;
            break;
        }
        str++;
    }
    return Flag;
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter the String:");
    scanf("%[^'\n']s", Arr);

    bRet = ChkVowel(Arr);

    if (bRet == TRUE)
    {
        printf("Yes String contains Vowels");
    }
    else
    {
        printf("String does not contains Vowels");
    }

    return 0;
}

/*
output :

Enter the String:Aditya
Yes String contains Vowels

Enter the String:grpwhj 
String does not contains Vowels

*/