///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program2.c
//  Descreption :   checks whether 18th bit and 5th is ON or OFF
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

    UINT imask1 = 1; // 5th bit
    UINT imask2 = 1; // 18 th bit

    imask1 = imask1 << 4;
    imask2 = imask2 << 17;

    if ((iNo & imask1) && (iNo & imask2))
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
        printf("5th Bit and 18th Bit is OFF\n");
    }
    else
    {
        printf("5th Bit and 18th Bit is ON\n");
    }

    return 0;
}

/*
output:

Enter the Number : 270416
5th Bit and 18th Bit is OFF

Enter the Number : 401488
5th Bit and 18th Bit is ON

*/