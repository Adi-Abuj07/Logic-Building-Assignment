///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program4.c
//  Descreption :   check whether it is special symbol or not
//  Author :        Aditya Abuj
//  Date :          12/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define FALSE 1
#define TRUE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    BOOL bFlag = FALSE;

    if ((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z') || (ch >= '0') && (ch <= '9') || (ch >= 0) && (ch <= 32))
    {
        bFlag = FALSE;
    }
    else
    {
        bFlag = TRUE;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }

    return 0;
}

/*
  output

 Enter the character:/
 It is special Character

 Enter the character:3
 It is not a special Character

*/