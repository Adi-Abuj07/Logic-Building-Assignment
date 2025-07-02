///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program5.c
//  Descreption :   checks whether last bit is ON or OFF
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
    UINT iRet = 0;
    UINT imask = 1; // 32 bit //last bit

    imask = imask << 31;

    iRet = iNo & imask;

    return (iRet != 0);
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
        printf("last Bit is OFF\n");
    }
    else
    {
        printf("last Bit is ON\n");
    }

    return 0;
}

/*
output:

Enter the Number : 2147746000
last Bit is ON

Enter the Number : 1074004176
last Bit is OFF

*/