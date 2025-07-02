///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program3.c
//  Descreption :   checks whether 7,15,21,28 bit is ON or OFF
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
    UINT imask2 = 1; // 15th bit
    UINT imask3 = 1; // 21th bit
    UINT imask4 = 1;  //28th bit

    imask1 = imask1 << 6;
    imask2 = imask2 << 14;
    imask3 = imask3 << 20;
    imask4 = imask4 << 27;

    if (((iNo & imask1) && (iNo & imask2)) && ((iNo & imask3) && (iNo & imask4)))
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
        printf("Bit number 7,15,21,28 is OFF\n");
    }
    else
    {
        printf("Bit number 7,15,21,28 is is ON\n");
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