///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program4.c
//  Descreption :   checks whether 7,8,9 bit is ON or OFF
//  Author :        Aditya Abuj
//  Date :          30/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{

    UINT imask1 = 1; // 7th bit
    UINT imask2 = 1; // 8th bit
    UINT imask3 = 1; // 9th bit

    imask1 = imask1 << 6;
    imask2 = imask2 << 7;
    imask3 = imask3 << 8;

    if ((iNo & imask1) && (iNo & imask2) && (iNo & imask3))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number : ");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if (bRet != TRUE)
    {
        printf("Bit number 7,8,9 is OFF\n");
    }
    else
    {
        printf("Bit number 7,8,9 is is ON\n");
    }

    return 0;
}


/*
output:

Enter the Number : 1355531040
5th Bit and 18th Bit is OFF

Enter the Number : 135553104
5th Bit and 18th Bit is ON

*/